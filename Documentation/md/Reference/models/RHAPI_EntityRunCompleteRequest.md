---
title: RHAPI_EntityRunCompleteRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_EntityRunCompleteRequest`](#structFRHAPI__EntityRunCompleteRequest) | Request to update entity mm bucket run stats with the info from a specific run. NOTE: - if &#x60;mmr_internal_exact&#x60; and &#x60;mmr_internal_delta&#x60; are not provided, the service will modify MMR using an internal algorithm. - if &#x60;mmr_vis_exact&#x60; and &#x60;mmr_vis_delta&#x60; are not provided, the service will modify MMR using an internal algorithm. - To not modify MMR at all, provide &#x60;mmr_XXX_delta&#x60; equal to &#x60;0&#x60;. Placement matches will not allow the MMR value to be lowered, only increased. For exact updates, it will take the higher of the current/update values. If delta changes, only positive changes will be applied.

## struct `FRHAPI_EntityRunCompleteRequest` <a id="structFRHAPI__EntityRunCompleteRequest"></a>

```
struct FRHAPI_EntityRunCompleteRequest
  : public FRHAPI_Model
```

Request to update entity mm bucket run stats with the info from a specific run. NOTE: - if &#x60;mmr_internal_exact&#x60; and &#x60;mmr_internal_delta&#x60; are not provided, the service will modify MMR using an internal algorithm. - if &#x60;mmr_vis_exact&#x60; and &#x60;mmr_vis_delta&#x60; are not provided, the service will modify MMR using an internal algorithm. - To not modify MMR at all, provide &#x60;mmr_XXX_delta&#x60; equal to &#x60;0&#x60;. Placement matches will not allow the MMR value to be lowered, only increased. For exact updates, it will take the higher of the current/update values. If delta changes, only positive changes will be applied.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`V_Optional`](#structFRHAPI__EntityRunCompleteRequest_1aca5b579535b1eba569134c045c761473) | 
`public bool `[`V_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1ab1b87865dc185765efdbaf777ff64d50) | true if V_Optional has been set to a value
`public bool `[`V_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a556332fdf008ad468e076f53a9fc6906) | true if V_Optional has been explicitly set to null
`public FString `[`Type1_Optional`](#structFRHAPI__EntityRunCompleteRequest_1a57a84dea449c63f2e9c0149d677f154a) | 
`public bool `[`Type1_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1a6d9170b988c2fb94cc8935a275249ccc) | true if Type1_Optional has been set to a value
`public bool `[`Type1_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a7c1e600974fc0e5cc12d7dba4ce28ecf) | true if Type1_Optional has been explicitly set to null
`public FString `[`Type2_Optional`](#structFRHAPI__EntityRunCompleteRequest_1aa15cc783f331327404a4ee7cdc27bc10) | 
`public bool `[`Type2_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1a7656039a3e4b08f12e60e41a66fdd6f6) | true if Type2_Optional has been set to a value
`public bool `[`Type2_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a115d2636dc633ae4ad85f19f59357436) | true if Type2_Optional has been explicitly set to null
`public FString `[`Type3_Optional`](#structFRHAPI__EntityRunCompleteRequest_1ad143aee4294a332c047588f0d3bda291) | 
`public bool `[`Type3_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1ac5e4c5b42954658aae6d01b8cf206af7) | true if Type3_Optional has been set to a value
`public bool `[`Type3_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a2dae5a8e4aebb7d38b3c2103e239ccda) | true if Type3_Optional has been explicitly set to null
`public FString `[`Type4_Optional`](#structFRHAPI__EntityRunCompleteRequest_1a2deb8653d93cd8ef58989dff5c9fdfcc) | 
`public bool `[`Type4_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1aa490d2d4639641ad6064bc55b1657f36) | true if Type4_Optional has been set to a value
`public bool `[`Type4_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a158d8c863e0466ed7acc34db8b24e5a4) | true if Type4_Optional has been explicitly set to null
`public ERHAPI_StageEntityType `[`EntityType`](#structFRHAPI__EntityRunCompleteRequest_1a11dc5ac16ec63c6e78f24ddfdde516c0) | 
`public bool `[`EntityType_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a242cfd516cd86c2ea25a5f6fefe52dde) | true if EntityType has been explicitly set to null
`public FString `[`EntityId`](#structFRHAPI__EntityRunCompleteRequest_1abef1b3aa6726ece5e5350bdcbe53be79) | 
`public bool `[`EntityId_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a166e0b8fb91335dfaeaba4f905affb23) | true if EntityId has been explicitly set to null
`public int32 `[`StageWins_Optional`](#structFRHAPI__EntityRunCompleteRequest_1ab2678853974b296b62160e9ec3229918) | 
`public bool `[`StageWins_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1a3d1c867b1067033725c34eaf69e27ab1) | true if StageWins_Optional has been set to a value
`public int32 `[`StageLosses_Optional`](#structFRHAPI__EntityRunCompleteRequest_1a13cfa548b00e92a07987e4fc14554924) | 
`public bool `[`StageLosses_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1af3878ddb0eae50cc4fa3d14bfaeb73ff) | true if StageLosses_Optional has been set to a value
`public int32 `[`StageIncompletes_Optional`](#structFRHAPI__EntityRunCompleteRequest_1a8a2a16210328e94538ca9a3d76d731c2) | 
`public bool `[`StageIncompletes_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1aa369c2dcdb57ba03bc9b3598e2486b2b) | true if StageIncompletes_Optional has been set to a value
`public bool `[`RunWin_Optional`](#structFRHAPI__EntityRunCompleteRequest_1a0a850c1491faf4b6e14eb372beaebc83) | 
`public bool `[`RunWin_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1a0e4f75579cbd9f080158f0bd98988b1b) | true if RunWin_Optional has been set to a value
`public bool `[`RunWin_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a409e7ce846e43cc20b9a25364404c005) | true if RunWin_Optional has been explicitly set to null
`public bool `[`RunPlacement_Optional`](#structFRHAPI__EntityRunCompleteRequest_1af183002f301c9186b4e24e687a6169a1) | 
`public bool `[`RunPlacement_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1ad6d5f84f23e42946fdb7bd0515faf5e1) | true if RunPlacement_Optional has been set to a value
`public bool `[`RunPlacement_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a00fac8fb9e89fa90062d2552a630f94a) | true if RunPlacement_Optional has been explicitly set to null
`public float `[`MmrInternalExact_Optional`](#structFRHAPI__EntityRunCompleteRequest_1a3be5684f8799cf9413dfcb7cb7f424e6) | 
`public bool `[`MmrInternalExact_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1a38939615e3940fc383975e69abb88d12) | true if MmrInternalExact_Optional has been set to a value
`public bool `[`MmrInternalExact_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a6dcab57b5e6d8edfd604dcbbdf53e938) | true if MmrInternalExact_Optional has been explicitly set to null
`public float `[`MmrInternalDelta_Optional`](#structFRHAPI__EntityRunCompleteRequest_1a8b9e702491b6da438020fa94001c3c5a) | 
`public bool `[`MmrInternalDelta_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1aa13fb8c58e0f4a49aa279afcc1987ae3) | true if MmrInternalDelta_Optional has been set to a value
`public bool `[`MmrInternalDelta_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a802c4b28ad21706a2cacc60c15d0983d) | true if MmrInternalDelta_Optional has been explicitly set to null
`public float `[`MmrVisExact_Optional`](#structFRHAPI__EntityRunCompleteRequest_1aa444d6f3062180040e2b78a681aad219) | 
`public bool `[`MmrVisExact_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1a413321f7173f3ba660336a0c8938f41a) | true if MmrVisExact_Optional has been set to a value
`public bool `[`MmrVisExact_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a7d26dd445ae2154a4deeb9499678172e) | true if MmrVisExact_Optional has been explicitly set to null
`public float `[`MmrVisDelta_Optional`](#structFRHAPI__EntityRunCompleteRequest_1a5a0c721cb63fe6ed58ddc40e257eac72) | 
`public bool `[`MmrVisDelta_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1aaa7edd7cf3927d6dd14cdccaa8f65e4a) | true if MmrVisDelta_Optional has been set to a value
`public bool `[`MmrVisDelta_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a27fdf6d4f428a52c208f7d4e48a34eda) | true if MmrVisDelta_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__EntityRunCompleteRequest_1a586c5710be6b3d5c220281ede44f1965)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__EntityRunCompleteRequest_1a321d5f6b1f4cf9da9479a7080a7c7d9b)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetV`](#structFRHAPI__EntityRunCompleteRequest_1aa16a0c2bfad88de43432b7e3c15b4306)`()` | Gets the value of V_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetV`](#structFRHAPI__EntityRunCompleteRequest_1aed732ab477467bcc0550f05135f54926)`() const` | Gets the value of V_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetV`](#structFRHAPI__EntityRunCompleteRequest_1adb97655ddeed063823691e38a6b8bc06)`(const FString & DefaultValue) const` | Gets the value of V_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetV`](#structFRHAPI__EntityRunCompleteRequest_1aa3842ff8d21995e0419ecb571af4a572)`(FString & OutValue) const` | Fills OutValue with the value of V_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetVOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a95b007d634fb306bea1a50afef8a80e5)`()` | Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetVOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a3a4a28e05be33ddd1fa83c61b1d7ddaf)`() const` | Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetV`](#structFRHAPI__EntityRunCompleteRequest_1ad803a136e35fce431d0a19a8db00bff2)`(const FString & NewValue)` | Sets the value of V_Optional and also sets V_IsSet to true.
`public inline FORCEINLINE void `[`SetV`](#structFRHAPI__EntityRunCompleteRequest_1ac0a7473b95a95ede3bd3009f5881b54b)`(FString && NewValue)` | Sets the value of V_Optional and also sets V_IsSet to true using move semantics.
`public inline void `[`ClearV`](#structFRHAPI__EntityRunCompleteRequest_1ac767b8171e0370ccfa7df5b7df75c8f9)`()` | Clears the value of V_Optional and sets V_IsSet to false.
`public inline FORCEINLINE void `[`SetVToNull`](#structFRHAPI__EntityRunCompleteRequest_1af46ac70dd6ed177d631a2d0753e874d1)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsVNull`](#structFRHAPI__EntityRunCompleteRequest_1abd3f2e0c3afaf0a63b76c47abadce9b4)`() const` | Checks whether V_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetType1`](#structFRHAPI__EntityRunCompleteRequest_1ac8f309217738d424fe5fb0d8fb3b3307)`()` | Gets the value of Type1_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType1`](#structFRHAPI__EntityRunCompleteRequest_1a130f0b399c9538028112a1af8205ed0d)`() const` | Gets the value of Type1_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType1`](#structFRHAPI__EntityRunCompleteRequest_1a647cd207958b2e584f17bab3743adfa3)`(const FString & DefaultValue) const` | Gets the value of Type1_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType1`](#structFRHAPI__EntityRunCompleteRequest_1afab6154666aa70dc0afda5db7977c2da)`(FString & OutValue) const` | Fills OutValue with the value of Type1_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetType1OrNull`](#structFRHAPI__EntityRunCompleteRequest_1aa1d644a47f3d236c08f9d7168aac810b)`()` | Returns a pointer to Type1_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetType1OrNull`](#structFRHAPI__EntityRunCompleteRequest_1abc728d82112b5750a835ab06688e9da5)`() const` | Returns a pointer to Type1_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType1`](#structFRHAPI__EntityRunCompleteRequest_1ae4e80039e88e5ec34bfd710aa91a5ae0)`(const FString & NewValue)` | Sets the value of Type1_Optional and also sets Type1_IsSet to true.
`public inline FORCEINLINE void `[`SetType1`](#structFRHAPI__EntityRunCompleteRequest_1ad6230815067da12047df99babe1c96d8)`(FString && NewValue)` | Sets the value of Type1_Optional and also sets Type1_IsSet to true using move semantics.
`public inline void `[`ClearType1`](#structFRHAPI__EntityRunCompleteRequest_1a31ebf742664cd574042f7b590b1ee69b)`()` | Clears the value of Type1_Optional and sets Type1_IsSet to false.
`public inline FORCEINLINE void `[`SetType1ToNull`](#structFRHAPI__EntityRunCompleteRequest_1a426d98b26ec670612e72657d3788af4e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsType1Null`](#structFRHAPI__EntityRunCompleteRequest_1a9495a3d3227227c3e3ed3f6875275fe8)`() const` | Checks whether Type1_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetType2`](#structFRHAPI__EntityRunCompleteRequest_1a1283869882dfef95296a040e0043609f)`()` | Gets the value of Type2_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType2`](#structFRHAPI__EntityRunCompleteRequest_1a3591f5bb8ea20fa00134db8ca103004b)`() const` | Gets the value of Type2_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType2`](#structFRHAPI__EntityRunCompleteRequest_1a0d08af9deea2de4f048317b41928894e)`(const FString & DefaultValue) const` | Gets the value of Type2_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType2`](#structFRHAPI__EntityRunCompleteRequest_1aec96cb8b6f5a3f14252fcb3f5e233955)`(FString & OutValue) const` | Fills OutValue with the value of Type2_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetType2OrNull`](#structFRHAPI__EntityRunCompleteRequest_1aed96fea7252c872f153cb95514564d4d)`()` | Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetType2OrNull`](#structFRHAPI__EntityRunCompleteRequest_1ab38bcdf01a9d589125578968bff20e87)`() const` | Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType2`](#structFRHAPI__EntityRunCompleteRequest_1a4d4307810b00e4bd48abd565a7e80a76)`(const FString & NewValue)` | Sets the value of Type2_Optional and also sets Type2_IsSet to true.
`public inline FORCEINLINE void `[`SetType2`](#structFRHAPI__EntityRunCompleteRequest_1a3b09477d6dcaede701c7eaae86e21fe8)`(FString && NewValue)` | Sets the value of Type2_Optional and also sets Type2_IsSet to true using move semantics.
`public inline void `[`ClearType2`](#structFRHAPI__EntityRunCompleteRequest_1aecd03d21507054579ee4bb17e3b9cd0f)`()` | Clears the value of Type2_Optional and sets Type2_IsSet to false.
`public inline FORCEINLINE void `[`SetType2ToNull`](#structFRHAPI__EntityRunCompleteRequest_1a35b708e9983193cb5dec96d1344ca930)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsType2Null`](#structFRHAPI__EntityRunCompleteRequest_1a257b745a133f9dcc4f879d0a2d14daca)`() const` | Checks whether Type2_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetType3`](#structFRHAPI__EntityRunCompleteRequest_1a2fb65c2db09fab5ef3ee738e8b687b4f)`()` | Gets the value of Type3_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType3`](#structFRHAPI__EntityRunCompleteRequest_1ab3dfa0f0a81526b1f7fce87f342c532f)`() const` | Gets the value of Type3_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType3`](#structFRHAPI__EntityRunCompleteRequest_1a04992f130a5232eff1d01de868251398)`(const FString & DefaultValue) const` | Gets the value of Type3_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType3`](#structFRHAPI__EntityRunCompleteRequest_1a4e4b2a3d5b759ec73807fa78495b4e3e)`(FString & OutValue) const` | Fills OutValue with the value of Type3_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetType3OrNull`](#structFRHAPI__EntityRunCompleteRequest_1aa53c45e72c26c2a7ccd7db3a53b24eaf)`()` | Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetType3OrNull`](#structFRHAPI__EntityRunCompleteRequest_1a5b1c97b824b5d072ef2df19833bf788c)`() const` | Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType3`](#structFRHAPI__EntityRunCompleteRequest_1a2a212d04e2c5bfba7d7692a41f84df69)`(const FString & NewValue)` | Sets the value of Type3_Optional and also sets Type3_IsSet to true.
`public inline FORCEINLINE void `[`SetType3`](#structFRHAPI__EntityRunCompleteRequest_1a3ea6a429539959d2c124d3f8e0274b93)`(FString && NewValue)` | Sets the value of Type3_Optional and also sets Type3_IsSet to true using move semantics.
`public inline void `[`ClearType3`](#structFRHAPI__EntityRunCompleteRequest_1aa9f5535b1da204c895596c6a0117be52)`()` | Clears the value of Type3_Optional and sets Type3_IsSet to false.
`public inline FORCEINLINE void `[`SetType3ToNull`](#structFRHAPI__EntityRunCompleteRequest_1aa05f07e115e48b455e1fd43cc8e5616a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsType3Null`](#structFRHAPI__EntityRunCompleteRequest_1ab961d548d8f5ba80aae030a0b9abc392)`() const` | Checks whether Type3_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetType4`](#structFRHAPI__EntityRunCompleteRequest_1ab768536ae6abc8c21243746acee0b5de)`()` | Gets the value of Type4_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType4`](#structFRHAPI__EntityRunCompleteRequest_1aa6458f2234e8d8f9e5fa650cf18e22c7)`() const` | Gets the value of Type4_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType4`](#structFRHAPI__EntityRunCompleteRequest_1ad94735c92e3872b8a366729de963cf98)`(const FString & DefaultValue) const` | Gets the value of Type4_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType4`](#structFRHAPI__EntityRunCompleteRequest_1a696520f6c6063d891e8c4bba5f1338d1)`(FString & OutValue) const` | Fills OutValue with the value of Type4_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetType4OrNull`](#structFRHAPI__EntityRunCompleteRequest_1a959cc9b2c99a17dc51757c5d54b6e9a1)`()` | Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetType4OrNull`](#structFRHAPI__EntityRunCompleteRequest_1a12b5c070ade98654b0bb917fa33cfff5)`() const` | Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType4`](#structFRHAPI__EntityRunCompleteRequest_1a5471417bfd45264ac334508ad9383db5)`(const FString & NewValue)` | Sets the value of Type4_Optional and also sets Type4_IsSet to true.
`public inline FORCEINLINE void `[`SetType4`](#structFRHAPI__EntityRunCompleteRequest_1a242490704dc0a4ce96b9d37529266a64)`(FString && NewValue)` | Sets the value of Type4_Optional and also sets Type4_IsSet to true using move semantics.
`public inline void `[`ClearType4`](#structFRHAPI__EntityRunCompleteRequest_1aca8406a400b7b77aadf6289d47796b66)`()` | Clears the value of Type4_Optional and sets Type4_IsSet to false.
`public inline FORCEINLINE void `[`SetType4ToNull`](#structFRHAPI__EntityRunCompleteRequest_1a34f89e465a35c88e3969b97455b2883e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsType4Null`](#structFRHAPI__EntityRunCompleteRequest_1a987bb4dd0efc29a7ffe260dc1c56e400)`() const` | Checks whether Type4_Optional is set to null.
`public inline FORCEINLINE ERHAPI_StageEntityType & `[`GetEntityType`](#structFRHAPI__EntityRunCompleteRequest_1abe2e7b52990c35c4af5abbf7abbf4252)`()` | Gets the value of EntityType.
`public inline FORCEINLINE const ERHAPI_StageEntityType & `[`GetEntityType`](#structFRHAPI__EntityRunCompleteRequest_1a8b8884f2f4c1bf10d3ed3b1ec2309bb9)`() const` | Gets the value of EntityType.
`public inline FORCEINLINE void `[`SetEntityType`](#structFRHAPI__EntityRunCompleteRequest_1a515df2ff59ca2e631532ec83301398c6)`(const ERHAPI_StageEntityType & NewValue)` | Sets the value of EntityType.
`public inline FORCEINLINE void `[`SetEntityType`](#structFRHAPI__EntityRunCompleteRequest_1a842821e480ccc32ed023b42fe5373cd4)`(ERHAPI_StageEntityType && NewValue)` | Sets the value of EntityType using move semantics.
`public inline FORCEINLINE void `[`SetEntityTypeToNull`](#structFRHAPI__EntityRunCompleteRequest_1a883914dbf20e2bb7214cc8708ad77084)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsEntityTypeNull`](#structFRHAPI__EntityRunCompleteRequest_1af3a9ccc1a64bd4c3189f8aae36a86454)`() const` | Checks whether EntityType is set to null.
`public inline FORCEINLINE FString & `[`GetEntityId`](#structFRHAPI__EntityRunCompleteRequest_1af3db710639c1ba600d0a165cf644f9ce)`()` | Gets the value of EntityId.
`public inline FORCEINLINE const FString & `[`GetEntityId`](#structFRHAPI__EntityRunCompleteRequest_1a309d1b17b42905a085716c7fe18123ae)`() const` | Gets the value of EntityId.
`public inline FORCEINLINE void `[`SetEntityId`](#structFRHAPI__EntityRunCompleteRequest_1a860f8fb20964c81d7f569107e6135ffb)`(const FString & NewValue)` | Sets the value of EntityId.
`public inline FORCEINLINE void `[`SetEntityId`](#structFRHAPI__EntityRunCompleteRequest_1aada6b3bdf8ae3b528671658f16dcae46)`(FString && NewValue)` | Sets the value of EntityId using move semantics.
`public inline FORCEINLINE void `[`SetEntityIdToNull`](#structFRHAPI__EntityRunCompleteRequest_1aba56e5d4c9f5475df94655e99fd43542)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsEntityIdNull`](#structFRHAPI__EntityRunCompleteRequest_1a91293ec096acfd0c9699c411be544c7c)`() const` | Checks whether EntityId is set to null.
`public inline FORCEINLINE int32 & `[`GetStageWins`](#structFRHAPI__EntityRunCompleteRequest_1ace20984ac8ea9fe6d4b86576e8d419b6)`()` | Gets the value of StageWins_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStageWins`](#structFRHAPI__EntityRunCompleteRequest_1aed81ba1f50bf879336241c3a6e5c3c85)`() const` | Gets the value of StageWins_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStageWins`](#structFRHAPI__EntityRunCompleteRequest_1abb6b832ca2cd253ed1902a587cf82a22)`(const int32 & DefaultValue) const` | Gets the value of StageWins_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStageWins`](#structFRHAPI__EntityRunCompleteRequest_1a602b56adb700b0b37d4b8215732111aa)`(int32 & OutValue) const` | Fills OutValue with the value of StageWins_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetStageWinsOrNull`](#structFRHAPI__EntityRunCompleteRequest_1afcb27d2c74b3d11174162762af43d418)`()` | Returns a pointer to StageWins_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetStageWinsOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a254262b1bd4c5b1fa30e52f6d6028044)`() const` | Returns a pointer to StageWins_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStageWins`](#structFRHAPI__EntityRunCompleteRequest_1a167a67555f1858c5a3b9a3387b186dce)`(const int32 & NewValue)` | Sets the value of StageWins_Optional and also sets StageWins_IsSet to true.
`public inline FORCEINLINE void `[`SetStageWins`](#structFRHAPI__EntityRunCompleteRequest_1a0b49b1625d53fab06c180193a06ef5f4)`(int32 && NewValue)` | Sets the value of StageWins_Optional and also sets StageWins_IsSet to true using move semantics.
`public inline void `[`ClearStageWins`](#structFRHAPI__EntityRunCompleteRequest_1a26979c05342f7d3151634ff8fbef40a2)`()` | Clears the value of StageWins_Optional and sets StageWins_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_StageWins`](#structFRHAPI__EntityRunCompleteRequest_1ac1cba154ea74a8e18cde8895e65db364)`()` | Returns the default value of StageWins.
`public inline FORCEINLINE int32 & `[`GetStageLosses`](#structFRHAPI__EntityRunCompleteRequest_1a1131f154582eef867c90331704cd4b1f)`()` | Gets the value of StageLosses_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStageLosses`](#structFRHAPI__EntityRunCompleteRequest_1af95d2a769dee4a66bfbd2eabe288f888)`() const` | Gets the value of StageLosses_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStageLosses`](#structFRHAPI__EntityRunCompleteRequest_1a3e74ddff51f04c1bd51d2a595980bfb0)`(const int32 & DefaultValue) const` | Gets the value of StageLosses_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStageLosses`](#structFRHAPI__EntityRunCompleteRequest_1aee44feea8bfb99eda5b57f38a7f4d7f3)`(int32 & OutValue) const` | Fills OutValue with the value of StageLosses_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetStageLossesOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a900975f168883184629e3fbd79648f91)`()` | Returns a pointer to StageLosses_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetStageLossesOrNull`](#structFRHAPI__EntityRunCompleteRequest_1ab67985f02ac35fca98396c4557210e4d)`() const` | Returns a pointer to StageLosses_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStageLosses`](#structFRHAPI__EntityRunCompleteRequest_1a1785319e992d347d0568182ddb169f5b)`(const int32 & NewValue)` | Sets the value of StageLosses_Optional and also sets StageLosses_IsSet to true.
`public inline FORCEINLINE void `[`SetStageLosses`](#structFRHAPI__EntityRunCompleteRequest_1ab47dc224f3b6e8f4382641fa6b8a9624)`(int32 && NewValue)` | Sets the value of StageLosses_Optional and also sets StageLosses_IsSet to true using move semantics.
`public inline void `[`ClearStageLosses`](#structFRHAPI__EntityRunCompleteRequest_1a161c0d0f07cf0de168c5e84cc3a3482a)`()` | Clears the value of StageLosses_Optional and sets StageLosses_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_StageLosses`](#structFRHAPI__EntityRunCompleteRequest_1abd6e01ee745463e9c8dd59ed0ec560bd)`()` | Returns the default value of StageLosses.
`public inline FORCEINLINE int32 & `[`GetStageIncompletes`](#structFRHAPI__EntityRunCompleteRequest_1a93cf31b8d99ab07fa49827963641f9af)`()` | Gets the value of StageIncompletes_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStageIncompletes`](#structFRHAPI__EntityRunCompleteRequest_1af63541e393d5b9f08acb4fa9256c5b8e)`() const` | Gets the value of StageIncompletes_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStageIncompletes`](#structFRHAPI__EntityRunCompleteRequest_1a393474a7c50b147d1bd6390c80e80f70)`(const int32 & DefaultValue) const` | Gets the value of StageIncompletes_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStageIncompletes`](#structFRHAPI__EntityRunCompleteRequest_1a897af6c79ff70a3809b404003982626c)`(int32 & OutValue) const` | Fills OutValue with the value of StageIncompletes_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetStageIncompletesOrNull`](#structFRHAPI__EntityRunCompleteRequest_1affdc332455ee200e521ce84996a47d61)`()` | Returns a pointer to StageIncompletes_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetStageIncompletesOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a2f4bb8211f5bc4787c27c41bd82d6997)`() const` | Returns a pointer to StageIncompletes_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStageIncompletes`](#structFRHAPI__EntityRunCompleteRequest_1ac9f66eb691890d1dfcc5f7d362c7bb67)`(const int32 & NewValue)` | Sets the value of StageIncompletes_Optional and also sets StageIncompletes_IsSet to true.
`public inline FORCEINLINE void `[`SetStageIncompletes`](#structFRHAPI__EntityRunCompleteRequest_1acd7f52e6ce52809bf7d6a2694e799133)`(int32 && NewValue)` | Sets the value of StageIncompletes_Optional and also sets StageIncompletes_IsSet to true using move semantics.
`public inline void `[`ClearStageIncompletes`](#structFRHAPI__EntityRunCompleteRequest_1abfbcb38337c0df5ced9c67ac52424d26)`()` | Clears the value of StageIncompletes_Optional and sets StageIncompletes_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_StageIncompletes`](#structFRHAPI__EntityRunCompleteRequest_1a6e32af16e5bd566373cc9117c16bfb59)`()` | Returns the default value of StageIncompletes.
`public inline FORCEINLINE bool & `[`GetRunWin`](#structFRHAPI__EntityRunCompleteRequest_1afd5689883e91883f764e410d93b501b4)`()` | Gets the value of RunWin_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetRunWin`](#structFRHAPI__EntityRunCompleteRequest_1a3872000e10c09d20cc95ec3fdf8998ef)`() const` | Gets the value of RunWin_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetRunWin`](#structFRHAPI__EntityRunCompleteRequest_1a4fdd9e131adf2676f960bdb5e7efeaa7)`(const bool & DefaultValue) const` | Gets the value of RunWin_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRunWin`](#structFRHAPI__EntityRunCompleteRequest_1a1aea2b939b581096283f902b4045f43c)`(bool & OutValue) const` | Fills OutValue with the value of RunWin_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetRunWinOrNull`](#structFRHAPI__EntityRunCompleteRequest_1aee7e6cd6769bd4310df5767eaa418454)`()` | Returns a pointer to RunWin_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetRunWinOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a082a509b6ab45fffc4002c44e1c15ae1)`() const` | Returns a pointer to RunWin_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRunWin`](#structFRHAPI__EntityRunCompleteRequest_1ab03654d28522c881d3fb0ff407c6a8c9)`(const bool & NewValue)` | Sets the value of RunWin_Optional and also sets RunWin_IsSet to true.
`public inline FORCEINLINE void `[`SetRunWin`](#structFRHAPI__EntityRunCompleteRequest_1a57958579f63bef12ee661183116240bc)`(bool && NewValue)` | Sets the value of RunWin_Optional and also sets RunWin_IsSet to true using move semantics.
`public inline void `[`ClearRunWin`](#structFRHAPI__EntityRunCompleteRequest_1aede51fb70f91a21ae7fc37fcf6b530cb)`()` | Clears the value of RunWin_Optional and sets RunWin_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_RunWin`](#structFRHAPI__EntityRunCompleteRequest_1abd59f3641c5f4005db3fe99fc09a649f)`()` | Returns the default value of RunWin.
`public inline FORCEINLINE void `[`SetRunWinToNull`](#structFRHAPI__EntityRunCompleteRequest_1addf54ad3246f76fb9fce0964dcdbd35a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRunWinNull`](#structFRHAPI__EntityRunCompleteRequest_1af67c9d86a6fc7b00921ef02fb434aa7f)`() const` | Checks whether RunWin_Optional is set to null.
`public inline FORCEINLINE bool & `[`GetRunPlacement`](#structFRHAPI__EntityRunCompleteRequest_1aff67a2780f0afdbf15b7b6736991dc00)`()` | Gets the value of RunPlacement_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetRunPlacement`](#structFRHAPI__EntityRunCompleteRequest_1a9979cca630af89fa8524d2f13fa63a20)`() const` | Gets the value of RunPlacement_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetRunPlacement`](#structFRHAPI__EntityRunCompleteRequest_1aafb0626fb84ff7badf91489abd29ca0a)`(const bool & DefaultValue) const` | Gets the value of RunPlacement_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRunPlacement`](#structFRHAPI__EntityRunCompleteRequest_1a829692452ae7a10f45efde2d047923ca)`(bool & OutValue) const` | Fills OutValue with the value of RunPlacement_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetRunPlacementOrNull`](#structFRHAPI__EntityRunCompleteRequest_1ac35a77ef45bc358e903020e08a56f17a)`()` | Returns a pointer to RunPlacement_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetRunPlacementOrNull`](#structFRHAPI__EntityRunCompleteRequest_1ac64a2e2c0f8dbf889ef2d8602f239ddc)`() const` | Returns a pointer to RunPlacement_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRunPlacement`](#structFRHAPI__EntityRunCompleteRequest_1ae06c7064e4b9d2ba7a4463d41f48ca38)`(const bool & NewValue)` | Sets the value of RunPlacement_Optional and also sets RunPlacement_IsSet to true.
`public inline FORCEINLINE void `[`SetRunPlacement`](#structFRHAPI__EntityRunCompleteRequest_1a08c3592132a35085bb82ee8cad510422)`(bool && NewValue)` | Sets the value of RunPlacement_Optional and also sets RunPlacement_IsSet to true using move semantics.
`public inline void `[`ClearRunPlacement`](#structFRHAPI__EntityRunCompleteRequest_1aa50aaa7667fe341b0ccecb37a02ab76a)`()` | Clears the value of RunPlacement_Optional and sets RunPlacement_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_RunPlacement`](#structFRHAPI__EntityRunCompleteRequest_1a66c001a2f379e18df0b7e3a96aa77ba1)`()` | Returns the default value of RunPlacement.
`public inline FORCEINLINE void `[`SetRunPlacementToNull`](#structFRHAPI__EntityRunCompleteRequest_1a5df43f23e3b6f9a99dc442434f20cebc)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRunPlacementNull`](#structFRHAPI__EntityRunCompleteRequest_1affb45b1a6b2de2b77b1909fad251ab9a)`() const` | Checks whether RunPlacement_Optional is set to null.
`public inline FORCEINLINE float & `[`GetMmrInternalExact`](#structFRHAPI__EntityRunCompleteRequest_1a73e52f9652c686f8f8198188bb82de71)`()` | Gets the value of MmrInternalExact_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrInternalExact`](#structFRHAPI__EntityRunCompleteRequest_1aa893d0557f8d2df0e6145978a90627a1)`() const` | Gets the value of MmrInternalExact_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrInternalExact`](#structFRHAPI__EntityRunCompleteRequest_1a1e19362409fbcdfe45c5e0481ff3a9a4)`(const float & DefaultValue) const` | Gets the value of MmrInternalExact_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMmrInternalExact`](#structFRHAPI__EntityRunCompleteRequest_1aef1bff954c0f61e1a52836a348ce7dfe)`(float & OutValue) const` | Fills OutValue with the value of MmrInternalExact_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetMmrInternalExactOrNull`](#structFRHAPI__EntityRunCompleteRequest_1aa85f56a022dbdffce86fc671216ab4e4)`()` | Returns a pointer to MmrInternalExact_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetMmrInternalExactOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a2afc363c664fb264db72906ded62b0d5)`() const` | Returns a pointer to MmrInternalExact_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMmrInternalExact`](#structFRHAPI__EntityRunCompleteRequest_1a1576f1c11bda6c2f295ba789e52277a9)`(const float & NewValue)` | Sets the value of MmrInternalExact_Optional and also sets MmrInternalExact_IsSet to true.
`public inline FORCEINLINE void `[`SetMmrInternalExact`](#structFRHAPI__EntityRunCompleteRequest_1a3b51be78cd60aacec93330b623ed1db7)`(float && NewValue)` | Sets the value of MmrInternalExact_Optional and also sets MmrInternalExact_IsSet to true using move semantics.
`public inline void `[`ClearMmrInternalExact`](#structFRHAPI__EntityRunCompleteRequest_1a5e08fbd34b69b8916031b70349d52fda)`()` | Clears the value of MmrInternalExact_Optional and sets MmrInternalExact_IsSet to false.
`public inline FORCEINLINE void `[`SetMmrInternalExactToNull`](#structFRHAPI__EntityRunCompleteRequest_1a5c8ce210a4a0bc7d9d61b33746b452f8)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMmrInternalExactNull`](#structFRHAPI__EntityRunCompleteRequest_1a36e7b2cf1115b64d048fa3b728d5a734)`() const` | Checks whether MmrInternalExact_Optional is set to null.
`public inline FORCEINLINE float & `[`GetMmrInternalDelta`](#structFRHAPI__EntityRunCompleteRequest_1a26e17965b3d3082f31d6a89bb57f588f)`()` | Gets the value of MmrInternalDelta_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrInternalDelta`](#structFRHAPI__EntityRunCompleteRequest_1adc129c38752dc8b477d8f3c83ba5e077)`() const` | Gets the value of MmrInternalDelta_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrInternalDelta`](#structFRHAPI__EntityRunCompleteRequest_1a4452662f0cc148d40ccedbb7a95c2643)`(const float & DefaultValue) const` | Gets the value of MmrInternalDelta_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMmrInternalDelta`](#structFRHAPI__EntityRunCompleteRequest_1a2759b94f2bafb4182a73bc00f198cf9c)`(float & OutValue) const` | Fills OutValue with the value of MmrInternalDelta_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetMmrInternalDeltaOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a73ab8aa35bb4c4a45d25c88d354ea86f)`()` | Returns a pointer to MmrInternalDelta_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetMmrInternalDeltaOrNull`](#structFRHAPI__EntityRunCompleteRequest_1abeca416295b068c8f3c7432370911ab8)`() const` | Returns a pointer to MmrInternalDelta_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMmrInternalDelta`](#structFRHAPI__EntityRunCompleteRequest_1a3f7ea84e0effa98ed849af7316d899bb)`(const float & NewValue)` | Sets the value of MmrInternalDelta_Optional and also sets MmrInternalDelta_IsSet to true.
`public inline FORCEINLINE void `[`SetMmrInternalDelta`](#structFRHAPI__EntityRunCompleteRequest_1aba30449ec2bf3747ee3d07ed180beb8c)`(float && NewValue)` | Sets the value of MmrInternalDelta_Optional and also sets MmrInternalDelta_IsSet to true using move semantics.
`public inline void `[`ClearMmrInternalDelta`](#structFRHAPI__EntityRunCompleteRequest_1ae90fb9b5e3b3f184fbb3d51a50ddd234)`()` | Clears the value of MmrInternalDelta_Optional and sets MmrInternalDelta_IsSet to false.
`public inline FORCEINLINE void `[`SetMmrInternalDeltaToNull`](#structFRHAPI__EntityRunCompleteRequest_1a7d51662405c05383373739f7f53404fe)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMmrInternalDeltaNull`](#structFRHAPI__EntityRunCompleteRequest_1a8e0471b90578f57961e4d2073cea1956)`() const` | Checks whether MmrInternalDelta_Optional is set to null.
`public inline FORCEINLINE float & `[`GetMmrVisExact`](#structFRHAPI__EntityRunCompleteRequest_1a7e7918eb1398e2cda3d2bd131ede1a2f)`()` | Gets the value of MmrVisExact_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrVisExact`](#structFRHAPI__EntityRunCompleteRequest_1a884e5c696cb967a49bf3dde8dc83e28f)`() const` | Gets the value of MmrVisExact_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrVisExact`](#structFRHAPI__EntityRunCompleteRequest_1a8acfbd0af2329b4d0bc0e1637eb0fc47)`(const float & DefaultValue) const` | Gets the value of MmrVisExact_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMmrVisExact`](#structFRHAPI__EntityRunCompleteRequest_1acc632aac97c092a01e4aa1afb88a2190)`(float & OutValue) const` | Fills OutValue with the value of MmrVisExact_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetMmrVisExactOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a31fa93bacd6ddd28c9f96d1bbd1689d9)`()` | Returns a pointer to MmrVisExact_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetMmrVisExactOrNull`](#structFRHAPI__EntityRunCompleteRequest_1afe756f333db65361a845d253f930e543)`() const` | Returns a pointer to MmrVisExact_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMmrVisExact`](#structFRHAPI__EntityRunCompleteRequest_1a1b7f86f469b914f1cb44fbd5ca06f1a9)`(const float & NewValue)` | Sets the value of MmrVisExact_Optional and also sets MmrVisExact_IsSet to true.
`public inline FORCEINLINE void `[`SetMmrVisExact`](#structFRHAPI__EntityRunCompleteRequest_1a9367d56adedeb0fa7ec105c066c44121)`(float && NewValue)` | Sets the value of MmrVisExact_Optional and also sets MmrVisExact_IsSet to true using move semantics.
`public inline void `[`ClearMmrVisExact`](#structFRHAPI__EntityRunCompleteRequest_1acf374ede7da48b9ce47c254efd054b79)`()` | Clears the value of MmrVisExact_Optional and sets MmrVisExact_IsSet to false.
`public inline FORCEINLINE void `[`SetMmrVisExactToNull`](#structFRHAPI__EntityRunCompleteRequest_1af567c15fbdb3fceb397a1b62f2e9fe7d)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMmrVisExactNull`](#structFRHAPI__EntityRunCompleteRequest_1a6e595dcbe719de154f130d43d2696322)`() const` | Checks whether MmrVisExact_Optional is set to null.
`public inline FORCEINLINE float & `[`GetMmrVisDelta`](#structFRHAPI__EntityRunCompleteRequest_1acaff5c9778240e2d4e557ab05b049f91)`()` | Gets the value of MmrVisDelta_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrVisDelta`](#structFRHAPI__EntityRunCompleteRequest_1a8bfd4dd4467104da44f6b616a7956e0a)`() const` | Gets the value of MmrVisDelta_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrVisDelta`](#structFRHAPI__EntityRunCompleteRequest_1ac62334d81ee9bb1ce12fd653defcadfd)`(const float & DefaultValue) const` | Gets the value of MmrVisDelta_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMmrVisDelta`](#structFRHAPI__EntityRunCompleteRequest_1a06d5ce668abefe36a40c5a5225f09579)`(float & OutValue) const` | Fills OutValue with the value of MmrVisDelta_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetMmrVisDeltaOrNull`](#structFRHAPI__EntityRunCompleteRequest_1af5ad41f07843ddba7a07fc25d3317a6c)`()` | Returns a pointer to MmrVisDelta_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetMmrVisDeltaOrNull`](#structFRHAPI__EntityRunCompleteRequest_1ad506bdef70a7d46039db4b5876f27ffe)`() const` | Returns a pointer to MmrVisDelta_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMmrVisDelta`](#structFRHAPI__EntityRunCompleteRequest_1accee5c0d5f4371216e23e3d1bc71164c)`(const float & NewValue)` | Sets the value of MmrVisDelta_Optional and also sets MmrVisDelta_IsSet to true.
`public inline FORCEINLINE void `[`SetMmrVisDelta`](#structFRHAPI__EntityRunCompleteRequest_1a0bfa4bce96afccad7a53d2e18ec8b862)`(float && NewValue)` | Sets the value of MmrVisDelta_Optional and also sets MmrVisDelta_IsSet to true using move semantics.
`public inline void `[`ClearMmrVisDelta`](#structFRHAPI__EntityRunCompleteRequest_1ae6ec56d99082819a30e46f57bd875cbd)`()` | Clears the value of MmrVisDelta_Optional and sets MmrVisDelta_IsSet to false.
`public inline FORCEINLINE void `[`SetMmrVisDeltaToNull`](#structFRHAPI__EntityRunCompleteRequest_1aa8e6ba249365e39e773afd2f2d1ada2e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMmrVisDeltaNull`](#structFRHAPI__EntityRunCompleteRequest_1a774d2165766fe1658ddbbb29f7bb9b74)`() const` | Checks whether MmrVisDelta_Optional is set to null.

### Members

#### `public FString `[`V_Optional`](#structFRHAPI__EntityRunCompleteRequest_1aca5b579535b1eba569134c045c761473) <a id="structFRHAPI__EntityRunCompleteRequest_1aca5b579535b1eba569134c045c761473"></a>

#### `public bool `[`V_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1ab1b87865dc185765efdbaf777ff64d50) <a id="structFRHAPI__EntityRunCompleteRequest_1ab1b87865dc185765efdbaf777ff64d50"></a>

true if V_Optional has been set to a value

#### `public bool `[`V_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a556332fdf008ad468e076f53a9fc6906) <a id="structFRHAPI__EntityRunCompleteRequest_1a556332fdf008ad468e076f53a9fc6906"></a>

true if V_Optional has been explicitly set to null

#### `public FString `[`Type1_Optional`](#structFRHAPI__EntityRunCompleteRequest_1a57a84dea449c63f2e9c0149d677f154a) <a id="structFRHAPI__EntityRunCompleteRequest_1a57a84dea449c63f2e9c0149d677f154a"></a>

#### `public bool `[`Type1_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1a6d9170b988c2fb94cc8935a275249ccc) <a id="structFRHAPI__EntityRunCompleteRequest_1a6d9170b988c2fb94cc8935a275249ccc"></a>

true if Type1_Optional has been set to a value

#### `public bool `[`Type1_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a7c1e600974fc0e5cc12d7dba4ce28ecf) <a id="structFRHAPI__EntityRunCompleteRequest_1a7c1e600974fc0e5cc12d7dba4ce28ecf"></a>

true if Type1_Optional has been explicitly set to null

#### `public FString `[`Type2_Optional`](#structFRHAPI__EntityRunCompleteRequest_1aa15cc783f331327404a4ee7cdc27bc10) <a id="structFRHAPI__EntityRunCompleteRequest_1aa15cc783f331327404a4ee7cdc27bc10"></a>

#### `public bool `[`Type2_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1a7656039a3e4b08f12e60e41a66fdd6f6) <a id="structFRHAPI__EntityRunCompleteRequest_1a7656039a3e4b08f12e60e41a66fdd6f6"></a>

true if Type2_Optional has been set to a value

#### `public bool `[`Type2_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a115d2636dc633ae4ad85f19f59357436) <a id="structFRHAPI__EntityRunCompleteRequest_1a115d2636dc633ae4ad85f19f59357436"></a>

true if Type2_Optional has been explicitly set to null

#### `public FString `[`Type3_Optional`](#structFRHAPI__EntityRunCompleteRequest_1ad143aee4294a332c047588f0d3bda291) <a id="structFRHAPI__EntityRunCompleteRequest_1ad143aee4294a332c047588f0d3bda291"></a>

#### `public bool `[`Type3_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1ac5e4c5b42954658aae6d01b8cf206af7) <a id="structFRHAPI__EntityRunCompleteRequest_1ac5e4c5b42954658aae6d01b8cf206af7"></a>

true if Type3_Optional has been set to a value

#### `public bool `[`Type3_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a2dae5a8e4aebb7d38b3c2103e239ccda) <a id="structFRHAPI__EntityRunCompleteRequest_1a2dae5a8e4aebb7d38b3c2103e239ccda"></a>

true if Type3_Optional has been explicitly set to null

#### `public FString `[`Type4_Optional`](#structFRHAPI__EntityRunCompleteRequest_1a2deb8653d93cd8ef58989dff5c9fdfcc) <a id="structFRHAPI__EntityRunCompleteRequest_1a2deb8653d93cd8ef58989dff5c9fdfcc"></a>

#### `public bool `[`Type4_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1aa490d2d4639641ad6064bc55b1657f36) <a id="structFRHAPI__EntityRunCompleteRequest_1aa490d2d4639641ad6064bc55b1657f36"></a>

true if Type4_Optional has been set to a value

#### `public bool `[`Type4_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a158d8c863e0466ed7acc34db8b24e5a4) <a id="structFRHAPI__EntityRunCompleteRequest_1a158d8c863e0466ed7acc34db8b24e5a4"></a>

true if Type4_Optional has been explicitly set to null

#### `public ERHAPI_StageEntityType `[`EntityType`](#structFRHAPI__EntityRunCompleteRequest_1a11dc5ac16ec63c6e78f24ddfdde516c0) <a id="structFRHAPI__EntityRunCompleteRequest_1a11dc5ac16ec63c6e78f24ddfdde516c0"></a>

#### `public bool `[`EntityType_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a242cfd516cd86c2ea25a5f6fefe52dde) <a id="structFRHAPI__EntityRunCompleteRequest_1a242cfd516cd86c2ea25a5f6fefe52dde"></a>

true if EntityType has been explicitly set to null

#### `public FString `[`EntityId`](#structFRHAPI__EntityRunCompleteRequest_1abef1b3aa6726ece5e5350bdcbe53be79) <a id="structFRHAPI__EntityRunCompleteRequest_1abef1b3aa6726ece5e5350bdcbe53be79"></a>

#### `public bool `[`EntityId_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a166e0b8fb91335dfaeaba4f905affb23) <a id="structFRHAPI__EntityRunCompleteRequest_1a166e0b8fb91335dfaeaba4f905affb23"></a>

true if EntityId has been explicitly set to null

#### `public int32 `[`StageWins_Optional`](#structFRHAPI__EntityRunCompleteRequest_1ab2678853974b296b62160e9ec3229918) <a id="structFRHAPI__EntityRunCompleteRequest_1ab2678853974b296b62160e9ec3229918"></a>

#### `public bool `[`StageWins_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1a3d1c867b1067033725c34eaf69e27ab1) <a id="structFRHAPI__EntityRunCompleteRequest_1a3d1c867b1067033725c34eaf69e27ab1"></a>

true if StageWins_Optional has been set to a value

#### `public int32 `[`StageLosses_Optional`](#structFRHAPI__EntityRunCompleteRequest_1a13cfa548b00e92a07987e4fc14554924) <a id="structFRHAPI__EntityRunCompleteRequest_1a13cfa548b00e92a07987e4fc14554924"></a>

#### `public bool `[`StageLosses_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1af3878ddb0eae50cc4fa3d14bfaeb73ff) <a id="structFRHAPI__EntityRunCompleteRequest_1af3878ddb0eae50cc4fa3d14bfaeb73ff"></a>

true if StageLosses_Optional has been set to a value

#### `public int32 `[`StageIncompletes_Optional`](#structFRHAPI__EntityRunCompleteRequest_1a8a2a16210328e94538ca9a3d76d731c2) <a id="structFRHAPI__EntityRunCompleteRequest_1a8a2a16210328e94538ca9a3d76d731c2"></a>

#### `public bool `[`StageIncompletes_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1aa369c2dcdb57ba03bc9b3598e2486b2b) <a id="structFRHAPI__EntityRunCompleteRequest_1aa369c2dcdb57ba03bc9b3598e2486b2b"></a>

true if StageIncompletes_Optional has been set to a value

#### `public bool `[`RunWin_Optional`](#structFRHAPI__EntityRunCompleteRequest_1a0a850c1491faf4b6e14eb372beaebc83) <a id="structFRHAPI__EntityRunCompleteRequest_1a0a850c1491faf4b6e14eb372beaebc83"></a>

#### `public bool `[`RunWin_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1a0e4f75579cbd9f080158f0bd98988b1b) <a id="structFRHAPI__EntityRunCompleteRequest_1a0e4f75579cbd9f080158f0bd98988b1b"></a>

true if RunWin_Optional has been set to a value

#### `public bool `[`RunWin_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a409e7ce846e43cc20b9a25364404c005) <a id="structFRHAPI__EntityRunCompleteRequest_1a409e7ce846e43cc20b9a25364404c005"></a>

true if RunWin_Optional has been explicitly set to null

#### `public bool `[`RunPlacement_Optional`](#structFRHAPI__EntityRunCompleteRequest_1af183002f301c9186b4e24e687a6169a1) <a id="structFRHAPI__EntityRunCompleteRequest_1af183002f301c9186b4e24e687a6169a1"></a>

#### `public bool `[`RunPlacement_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1ad6d5f84f23e42946fdb7bd0515faf5e1) <a id="structFRHAPI__EntityRunCompleteRequest_1ad6d5f84f23e42946fdb7bd0515faf5e1"></a>

true if RunPlacement_Optional has been set to a value

#### `public bool `[`RunPlacement_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a00fac8fb9e89fa90062d2552a630f94a) <a id="structFRHAPI__EntityRunCompleteRequest_1a00fac8fb9e89fa90062d2552a630f94a"></a>

true if RunPlacement_Optional has been explicitly set to null

#### `public float `[`MmrInternalExact_Optional`](#structFRHAPI__EntityRunCompleteRequest_1a3be5684f8799cf9413dfcb7cb7f424e6) <a id="structFRHAPI__EntityRunCompleteRequest_1a3be5684f8799cf9413dfcb7cb7f424e6"></a>

#### `public bool `[`MmrInternalExact_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1a38939615e3940fc383975e69abb88d12) <a id="structFRHAPI__EntityRunCompleteRequest_1a38939615e3940fc383975e69abb88d12"></a>

true if MmrInternalExact_Optional has been set to a value

#### `public bool `[`MmrInternalExact_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a6dcab57b5e6d8edfd604dcbbdf53e938) <a id="structFRHAPI__EntityRunCompleteRequest_1a6dcab57b5e6d8edfd604dcbbdf53e938"></a>

true if MmrInternalExact_Optional has been explicitly set to null

#### `public float `[`MmrInternalDelta_Optional`](#structFRHAPI__EntityRunCompleteRequest_1a8b9e702491b6da438020fa94001c3c5a) <a id="structFRHAPI__EntityRunCompleteRequest_1a8b9e702491b6da438020fa94001c3c5a"></a>

#### `public bool `[`MmrInternalDelta_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1aa13fb8c58e0f4a49aa279afcc1987ae3) <a id="structFRHAPI__EntityRunCompleteRequest_1aa13fb8c58e0f4a49aa279afcc1987ae3"></a>

true if MmrInternalDelta_Optional has been set to a value

#### `public bool `[`MmrInternalDelta_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a802c4b28ad21706a2cacc60c15d0983d) <a id="structFRHAPI__EntityRunCompleteRequest_1a802c4b28ad21706a2cacc60c15d0983d"></a>

true if MmrInternalDelta_Optional has been explicitly set to null

#### `public float `[`MmrVisExact_Optional`](#structFRHAPI__EntityRunCompleteRequest_1aa444d6f3062180040e2b78a681aad219) <a id="structFRHAPI__EntityRunCompleteRequest_1aa444d6f3062180040e2b78a681aad219"></a>

#### `public bool `[`MmrVisExact_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1a413321f7173f3ba660336a0c8938f41a) <a id="structFRHAPI__EntityRunCompleteRequest_1a413321f7173f3ba660336a0c8938f41a"></a>

true if MmrVisExact_Optional has been set to a value

#### `public bool `[`MmrVisExact_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a7d26dd445ae2154a4deeb9499678172e) <a id="structFRHAPI__EntityRunCompleteRequest_1a7d26dd445ae2154a4deeb9499678172e"></a>

true if MmrVisExact_Optional has been explicitly set to null

#### `public float `[`MmrVisDelta_Optional`](#structFRHAPI__EntityRunCompleteRequest_1a5a0c721cb63fe6ed58ddc40e257eac72) <a id="structFRHAPI__EntityRunCompleteRequest_1a5a0c721cb63fe6ed58ddc40e257eac72"></a>

#### `public bool `[`MmrVisDelta_IsSet`](#structFRHAPI__EntityRunCompleteRequest_1aaa7edd7cf3927d6dd14cdccaa8f65e4a) <a id="structFRHAPI__EntityRunCompleteRequest_1aaa7edd7cf3927d6dd14cdccaa8f65e4a"></a>

true if MmrVisDelta_Optional has been set to a value

#### `public bool `[`MmrVisDelta_IsNull`](#structFRHAPI__EntityRunCompleteRequest_1a27fdf6d4f428a52c208f7d4e48a34eda) <a id="structFRHAPI__EntityRunCompleteRequest_1a27fdf6d4f428a52c208f7d4e48a34eda"></a>

true if MmrVisDelta_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__EntityRunCompleteRequest_1a586c5710be6b3d5c220281ede44f1965)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a586c5710be6b3d5c220281ede44f1965"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__EntityRunCompleteRequest_1a321d5f6b1f4cf9da9479a7080a7c7d9b)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a321d5f6b1f4cf9da9479a7080a7c7d9b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetV`](#structFRHAPI__EntityRunCompleteRequest_1aa16a0c2bfad88de43432b7e3c15b4306)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1aa16a0c2bfad88de43432b7e3c15b4306"></a>

Gets the value of V_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetV`](#structFRHAPI__EntityRunCompleteRequest_1aed732ab477467bcc0550f05135f54926)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1aed732ab477467bcc0550f05135f54926"></a>

Gets the value of V_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetV`](#structFRHAPI__EntityRunCompleteRequest_1adb97655ddeed063823691e38a6b8bc06)`(const FString & DefaultValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1adb97655ddeed063823691e38a6b8bc06"></a>

Gets the value of V_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetV`](#structFRHAPI__EntityRunCompleteRequest_1aa3842ff8d21995e0419ecb571af4a572)`(FString & OutValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1aa3842ff8d21995e0419ecb571af4a572"></a>

Fills OutValue with the value of V_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetVOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a95b007d634fb306bea1a50afef8a80e5)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a95b007d634fb306bea1a50afef8a80e5"></a>

Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetVOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a3a4a28e05be33ddd1fa83c61b1d7ddaf)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a3a4a28e05be33ddd1fa83c61b1d7ddaf"></a>

Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetV`](#structFRHAPI__EntityRunCompleteRequest_1ad803a136e35fce431d0a19a8db00bff2)`(const FString & NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1ad803a136e35fce431d0a19a8db00bff2"></a>

Sets the value of V_Optional and also sets V_IsSet to true.

#### `public inline FORCEINLINE void `[`SetV`](#structFRHAPI__EntityRunCompleteRequest_1ac0a7473b95a95ede3bd3009f5881b54b)`(FString && NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1ac0a7473b95a95ede3bd3009f5881b54b"></a>

Sets the value of V_Optional and also sets V_IsSet to true using move semantics.

#### `public inline void `[`ClearV`](#structFRHAPI__EntityRunCompleteRequest_1ac767b8171e0370ccfa7df5b7df75c8f9)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1ac767b8171e0370ccfa7df5b7df75c8f9"></a>

Clears the value of V_Optional and sets V_IsSet to false.

#### `public inline FORCEINLINE void `[`SetVToNull`](#structFRHAPI__EntityRunCompleteRequest_1af46ac70dd6ed177d631a2d0753e874d1)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1af46ac70dd6ed177d631a2d0753e874d1"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsVNull`](#structFRHAPI__EntityRunCompleteRequest_1abd3f2e0c3afaf0a63b76c47abadce9b4)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1abd3f2e0c3afaf0a63b76c47abadce9b4"></a>

Checks whether V_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetType1`](#structFRHAPI__EntityRunCompleteRequest_1ac8f309217738d424fe5fb0d8fb3b3307)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1ac8f309217738d424fe5fb0d8fb3b3307"></a>

Gets the value of Type1_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType1`](#structFRHAPI__EntityRunCompleteRequest_1a130f0b399c9538028112a1af8205ed0d)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a130f0b399c9538028112a1af8205ed0d"></a>

Gets the value of Type1_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType1`](#structFRHAPI__EntityRunCompleteRequest_1a647cd207958b2e584f17bab3743adfa3)`(const FString & DefaultValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a647cd207958b2e584f17bab3743adfa3"></a>

Gets the value of Type1_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType1`](#structFRHAPI__EntityRunCompleteRequest_1afab6154666aa70dc0afda5db7977c2da)`(FString & OutValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1afab6154666aa70dc0afda5db7977c2da"></a>

Fills OutValue with the value of Type1_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetType1OrNull`](#structFRHAPI__EntityRunCompleteRequest_1aa1d644a47f3d236c08f9d7168aac810b)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1aa1d644a47f3d236c08f9d7168aac810b"></a>

Returns a pointer to Type1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetType1OrNull`](#structFRHAPI__EntityRunCompleteRequest_1abc728d82112b5750a835ab06688e9da5)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1abc728d82112b5750a835ab06688e9da5"></a>

Returns a pointer to Type1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType1`](#structFRHAPI__EntityRunCompleteRequest_1ae4e80039e88e5ec34bfd710aa91a5ae0)`(const FString & NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1ae4e80039e88e5ec34bfd710aa91a5ae0"></a>

Sets the value of Type1_Optional and also sets Type1_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType1`](#structFRHAPI__EntityRunCompleteRequest_1ad6230815067da12047df99babe1c96d8)`(FString && NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1ad6230815067da12047df99babe1c96d8"></a>

Sets the value of Type1_Optional and also sets Type1_IsSet to true using move semantics.

#### `public inline void `[`ClearType1`](#structFRHAPI__EntityRunCompleteRequest_1a31ebf742664cd574042f7b590b1ee69b)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a31ebf742664cd574042f7b590b1ee69b"></a>

Clears the value of Type1_Optional and sets Type1_IsSet to false.

#### `public inline FORCEINLINE void `[`SetType1ToNull`](#structFRHAPI__EntityRunCompleteRequest_1a426d98b26ec670612e72657d3788af4e)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a426d98b26ec670612e72657d3788af4e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsType1Null`](#structFRHAPI__EntityRunCompleteRequest_1a9495a3d3227227c3e3ed3f6875275fe8)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a9495a3d3227227c3e3ed3f6875275fe8"></a>

Checks whether Type1_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetType2`](#structFRHAPI__EntityRunCompleteRequest_1a1283869882dfef95296a040e0043609f)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a1283869882dfef95296a040e0043609f"></a>

Gets the value of Type2_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType2`](#structFRHAPI__EntityRunCompleteRequest_1a3591f5bb8ea20fa00134db8ca103004b)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a3591f5bb8ea20fa00134db8ca103004b"></a>

Gets the value of Type2_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType2`](#structFRHAPI__EntityRunCompleteRequest_1a0d08af9deea2de4f048317b41928894e)`(const FString & DefaultValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a0d08af9deea2de4f048317b41928894e"></a>

Gets the value of Type2_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType2`](#structFRHAPI__EntityRunCompleteRequest_1aec96cb8b6f5a3f14252fcb3f5e233955)`(FString & OutValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1aec96cb8b6f5a3f14252fcb3f5e233955"></a>

Fills OutValue with the value of Type2_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetType2OrNull`](#structFRHAPI__EntityRunCompleteRequest_1aed96fea7252c872f153cb95514564d4d)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1aed96fea7252c872f153cb95514564d4d"></a>

Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetType2OrNull`](#structFRHAPI__EntityRunCompleteRequest_1ab38bcdf01a9d589125578968bff20e87)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1ab38bcdf01a9d589125578968bff20e87"></a>

Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType2`](#structFRHAPI__EntityRunCompleteRequest_1a4d4307810b00e4bd48abd565a7e80a76)`(const FString & NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a4d4307810b00e4bd48abd565a7e80a76"></a>

Sets the value of Type2_Optional and also sets Type2_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType2`](#structFRHAPI__EntityRunCompleteRequest_1a3b09477d6dcaede701c7eaae86e21fe8)`(FString && NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a3b09477d6dcaede701c7eaae86e21fe8"></a>

Sets the value of Type2_Optional and also sets Type2_IsSet to true using move semantics.

#### `public inline void `[`ClearType2`](#structFRHAPI__EntityRunCompleteRequest_1aecd03d21507054579ee4bb17e3b9cd0f)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1aecd03d21507054579ee4bb17e3b9cd0f"></a>

Clears the value of Type2_Optional and sets Type2_IsSet to false.

#### `public inline FORCEINLINE void `[`SetType2ToNull`](#structFRHAPI__EntityRunCompleteRequest_1a35b708e9983193cb5dec96d1344ca930)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a35b708e9983193cb5dec96d1344ca930"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsType2Null`](#structFRHAPI__EntityRunCompleteRequest_1a257b745a133f9dcc4f879d0a2d14daca)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a257b745a133f9dcc4f879d0a2d14daca"></a>

Checks whether Type2_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetType3`](#structFRHAPI__EntityRunCompleteRequest_1a2fb65c2db09fab5ef3ee738e8b687b4f)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a2fb65c2db09fab5ef3ee738e8b687b4f"></a>

Gets the value of Type3_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType3`](#structFRHAPI__EntityRunCompleteRequest_1ab3dfa0f0a81526b1f7fce87f342c532f)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1ab3dfa0f0a81526b1f7fce87f342c532f"></a>

Gets the value of Type3_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType3`](#structFRHAPI__EntityRunCompleteRequest_1a04992f130a5232eff1d01de868251398)`(const FString & DefaultValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a04992f130a5232eff1d01de868251398"></a>

Gets the value of Type3_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType3`](#structFRHAPI__EntityRunCompleteRequest_1a4e4b2a3d5b759ec73807fa78495b4e3e)`(FString & OutValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a4e4b2a3d5b759ec73807fa78495b4e3e"></a>

Fills OutValue with the value of Type3_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetType3OrNull`](#structFRHAPI__EntityRunCompleteRequest_1aa53c45e72c26c2a7ccd7db3a53b24eaf)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1aa53c45e72c26c2a7ccd7db3a53b24eaf"></a>

Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetType3OrNull`](#structFRHAPI__EntityRunCompleteRequest_1a5b1c97b824b5d072ef2df19833bf788c)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a5b1c97b824b5d072ef2df19833bf788c"></a>

Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType3`](#structFRHAPI__EntityRunCompleteRequest_1a2a212d04e2c5bfba7d7692a41f84df69)`(const FString & NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a2a212d04e2c5bfba7d7692a41f84df69"></a>

Sets the value of Type3_Optional and also sets Type3_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType3`](#structFRHAPI__EntityRunCompleteRequest_1a3ea6a429539959d2c124d3f8e0274b93)`(FString && NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a3ea6a429539959d2c124d3f8e0274b93"></a>

Sets the value of Type3_Optional and also sets Type3_IsSet to true using move semantics.

#### `public inline void `[`ClearType3`](#structFRHAPI__EntityRunCompleteRequest_1aa9f5535b1da204c895596c6a0117be52)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1aa9f5535b1da204c895596c6a0117be52"></a>

Clears the value of Type3_Optional and sets Type3_IsSet to false.

#### `public inline FORCEINLINE void `[`SetType3ToNull`](#structFRHAPI__EntityRunCompleteRequest_1aa05f07e115e48b455e1fd43cc8e5616a)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1aa05f07e115e48b455e1fd43cc8e5616a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsType3Null`](#structFRHAPI__EntityRunCompleteRequest_1ab961d548d8f5ba80aae030a0b9abc392)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1ab961d548d8f5ba80aae030a0b9abc392"></a>

Checks whether Type3_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetType4`](#structFRHAPI__EntityRunCompleteRequest_1ab768536ae6abc8c21243746acee0b5de)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1ab768536ae6abc8c21243746acee0b5de"></a>

Gets the value of Type4_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType4`](#structFRHAPI__EntityRunCompleteRequest_1aa6458f2234e8d8f9e5fa650cf18e22c7)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1aa6458f2234e8d8f9e5fa650cf18e22c7"></a>

Gets the value of Type4_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType4`](#structFRHAPI__EntityRunCompleteRequest_1ad94735c92e3872b8a366729de963cf98)`(const FString & DefaultValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1ad94735c92e3872b8a366729de963cf98"></a>

Gets the value of Type4_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType4`](#structFRHAPI__EntityRunCompleteRequest_1a696520f6c6063d891e8c4bba5f1338d1)`(FString & OutValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a696520f6c6063d891e8c4bba5f1338d1"></a>

Fills OutValue with the value of Type4_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetType4OrNull`](#structFRHAPI__EntityRunCompleteRequest_1a959cc9b2c99a17dc51757c5d54b6e9a1)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a959cc9b2c99a17dc51757c5d54b6e9a1"></a>

Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetType4OrNull`](#structFRHAPI__EntityRunCompleteRequest_1a12b5c070ade98654b0bb917fa33cfff5)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a12b5c070ade98654b0bb917fa33cfff5"></a>

Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType4`](#structFRHAPI__EntityRunCompleteRequest_1a5471417bfd45264ac334508ad9383db5)`(const FString & NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a5471417bfd45264ac334508ad9383db5"></a>

Sets the value of Type4_Optional and also sets Type4_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType4`](#structFRHAPI__EntityRunCompleteRequest_1a242490704dc0a4ce96b9d37529266a64)`(FString && NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a242490704dc0a4ce96b9d37529266a64"></a>

Sets the value of Type4_Optional and also sets Type4_IsSet to true using move semantics.

#### `public inline void `[`ClearType4`](#structFRHAPI__EntityRunCompleteRequest_1aca8406a400b7b77aadf6289d47796b66)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1aca8406a400b7b77aadf6289d47796b66"></a>

Clears the value of Type4_Optional and sets Type4_IsSet to false.

#### `public inline FORCEINLINE void `[`SetType4ToNull`](#structFRHAPI__EntityRunCompleteRequest_1a34f89e465a35c88e3969b97455b2883e)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a34f89e465a35c88e3969b97455b2883e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsType4Null`](#structFRHAPI__EntityRunCompleteRequest_1a987bb4dd0efc29a7ffe260dc1c56e400)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a987bb4dd0efc29a7ffe260dc1c56e400"></a>

Checks whether Type4_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_StageEntityType & `[`GetEntityType`](#structFRHAPI__EntityRunCompleteRequest_1abe2e7b52990c35c4af5abbf7abbf4252)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1abe2e7b52990c35c4af5abbf7abbf4252"></a>

Gets the value of EntityType.

#### `public inline FORCEINLINE const ERHAPI_StageEntityType & `[`GetEntityType`](#structFRHAPI__EntityRunCompleteRequest_1a8b8884f2f4c1bf10d3ed3b1ec2309bb9)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a8b8884f2f4c1bf10d3ed3b1ec2309bb9"></a>

Gets the value of EntityType.

#### `public inline FORCEINLINE void `[`SetEntityType`](#structFRHAPI__EntityRunCompleteRequest_1a515df2ff59ca2e631532ec83301398c6)`(const ERHAPI_StageEntityType & NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a515df2ff59ca2e631532ec83301398c6"></a>

Sets the value of EntityType.

#### `public inline FORCEINLINE void `[`SetEntityType`](#structFRHAPI__EntityRunCompleteRequest_1a842821e480ccc32ed023b42fe5373cd4)`(ERHAPI_StageEntityType && NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a842821e480ccc32ed023b42fe5373cd4"></a>

Sets the value of EntityType using move semantics.

#### `public inline FORCEINLINE void `[`SetEntityTypeToNull`](#structFRHAPI__EntityRunCompleteRequest_1a883914dbf20e2bb7214cc8708ad77084)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a883914dbf20e2bb7214cc8708ad77084"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsEntityTypeNull`](#structFRHAPI__EntityRunCompleteRequest_1af3a9ccc1a64bd4c3189f8aae36a86454)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1af3a9ccc1a64bd4c3189f8aae36a86454"></a>

Checks whether EntityType is set to null.

#### `public inline FORCEINLINE FString & `[`GetEntityId`](#structFRHAPI__EntityRunCompleteRequest_1af3db710639c1ba600d0a165cf644f9ce)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1af3db710639c1ba600d0a165cf644f9ce"></a>

Gets the value of EntityId.

#### `public inline FORCEINLINE const FString & `[`GetEntityId`](#structFRHAPI__EntityRunCompleteRequest_1a309d1b17b42905a085716c7fe18123ae)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a309d1b17b42905a085716c7fe18123ae"></a>

Gets the value of EntityId.

#### `public inline FORCEINLINE void `[`SetEntityId`](#structFRHAPI__EntityRunCompleteRequest_1a860f8fb20964c81d7f569107e6135ffb)`(const FString & NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a860f8fb20964c81d7f569107e6135ffb"></a>

Sets the value of EntityId.

#### `public inline FORCEINLINE void `[`SetEntityId`](#structFRHAPI__EntityRunCompleteRequest_1aada6b3bdf8ae3b528671658f16dcae46)`(FString && NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1aada6b3bdf8ae3b528671658f16dcae46"></a>

Sets the value of EntityId using move semantics.

#### `public inline FORCEINLINE void `[`SetEntityIdToNull`](#structFRHAPI__EntityRunCompleteRequest_1aba56e5d4c9f5475df94655e99fd43542)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1aba56e5d4c9f5475df94655e99fd43542"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsEntityIdNull`](#structFRHAPI__EntityRunCompleteRequest_1a91293ec096acfd0c9699c411be544c7c)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a91293ec096acfd0c9699c411be544c7c"></a>

Checks whether EntityId is set to null.

#### `public inline FORCEINLINE int32 & `[`GetStageWins`](#structFRHAPI__EntityRunCompleteRequest_1ace20984ac8ea9fe6d4b86576e8d419b6)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1ace20984ac8ea9fe6d4b86576e8d419b6"></a>

Gets the value of StageWins_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStageWins`](#structFRHAPI__EntityRunCompleteRequest_1aed81ba1f50bf879336241c3a6e5c3c85)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1aed81ba1f50bf879336241c3a6e5c3c85"></a>

Gets the value of StageWins_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStageWins`](#structFRHAPI__EntityRunCompleteRequest_1abb6b832ca2cd253ed1902a587cf82a22)`(const int32 & DefaultValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1abb6b832ca2cd253ed1902a587cf82a22"></a>

Gets the value of StageWins_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStageWins`](#structFRHAPI__EntityRunCompleteRequest_1a602b56adb700b0b37d4b8215732111aa)`(int32 & OutValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a602b56adb700b0b37d4b8215732111aa"></a>

Fills OutValue with the value of StageWins_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetStageWinsOrNull`](#structFRHAPI__EntityRunCompleteRequest_1afcb27d2c74b3d11174162762af43d418)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1afcb27d2c74b3d11174162762af43d418"></a>

Returns a pointer to StageWins_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetStageWinsOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a254262b1bd4c5b1fa30e52f6d6028044)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a254262b1bd4c5b1fa30e52f6d6028044"></a>

Returns a pointer to StageWins_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStageWins`](#structFRHAPI__EntityRunCompleteRequest_1a167a67555f1858c5a3b9a3387b186dce)`(const int32 & NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a167a67555f1858c5a3b9a3387b186dce"></a>

Sets the value of StageWins_Optional and also sets StageWins_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStageWins`](#structFRHAPI__EntityRunCompleteRequest_1a0b49b1625d53fab06c180193a06ef5f4)`(int32 && NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a0b49b1625d53fab06c180193a06ef5f4"></a>

Sets the value of StageWins_Optional and also sets StageWins_IsSet to true using move semantics.

#### `public inline void `[`ClearStageWins`](#structFRHAPI__EntityRunCompleteRequest_1a26979c05342f7d3151634ff8fbef40a2)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a26979c05342f7d3151634ff8fbef40a2"></a>

Clears the value of StageWins_Optional and sets StageWins_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_StageWins`](#structFRHAPI__EntityRunCompleteRequest_1ac1cba154ea74a8e18cde8895e65db364)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1ac1cba154ea74a8e18cde8895e65db364"></a>

Returns the default value of StageWins.

#### `public inline FORCEINLINE int32 & `[`GetStageLosses`](#structFRHAPI__EntityRunCompleteRequest_1a1131f154582eef867c90331704cd4b1f)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a1131f154582eef867c90331704cd4b1f"></a>

Gets the value of StageLosses_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStageLosses`](#structFRHAPI__EntityRunCompleteRequest_1af95d2a769dee4a66bfbd2eabe288f888)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1af95d2a769dee4a66bfbd2eabe288f888"></a>

Gets the value of StageLosses_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStageLosses`](#structFRHAPI__EntityRunCompleteRequest_1a3e74ddff51f04c1bd51d2a595980bfb0)`(const int32 & DefaultValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a3e74ddff51f04c1bd51d2a595980bfb0"></a>

Gets the value of StageLosses_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStageLosses`](#structFRHAPI__EntityRunCompleteRequest_1aee44feea8bfb99eda5b57f38a7f4d7f3)`(int32 & OutValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1aee44feea8bfb99eda5b57f38a7f4d7f3"></a>

Fills OutValue with the value of StageLosses_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetStageLossesOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a900975f168883184629e3fbd79648f91)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a900975f168883184629e3fbd79648f91"></a>

Returns a pointer to StageLosses_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetStageLossesOrNull`](#structFRHAPI__EntityRunCompleteRequest_1ab67985f02ac35fca98396c4557210e4d)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1ab67985f02ac35fca98396c4557210e4d"></a>

Returns a pointer to StageLosses_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStageLosses`](#structFRHAPI__EntityRunCompleteRequest_1a1785319e992d347d0568182ddb169f5b)`(const int32 & NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a1785319e992d347d0568182ddb169f5b"></a>

Sets the value of StageLosses_Optional and also sets StageLosses_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStageLosses`](#structFRHAPI__EntityRunCompleteRequest_1ab47dc224f3b6e8f4382641fa6b8a9624)`(int32 && NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1ab47dc224f3b6e8f4382641fa6b8a9624"></a>

Sets the value of StageLosses_Optional and also sets StageLosses_IsSet to true using move semantics.

#### `public inline void `[`ClearStageLosses`](#structFRHAPI__EntityRunCompleteRequest_1a161c0d0f07cf0de168c5e84cc3a3482a)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a161c0d0f07cf0de168c5e84cc3a3482a"></a>

Clears the value of StageLosses_Optional and sets StageLosses_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_StageLosses`](#structFRHAPI__EntityRunCompleteRequest_1abd6e01ee745463e9c8dd59ed0ec560bd)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1abd6e01ee745463e9c8dd59ed0ec560bd"></a>

Returns the default value of StageLosses.

#### `public inline FORCEINLINE int32 & `[`GetStageIncompletes`](#structFRHAPI__EntityRunCompleteRequest_1a93cf31b8d99ab07fa49827963641f9af)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a93cf31b8d99ab07fa49827963641f9af"></a>

Gets the value of StageIncompletes_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStageIncompletes`](#structFRHAPI__EntityRunCompleteRequest_1af63541e393d5b9f08acb4fa9256c5b8e)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1af63541e393d5b9f08acb4fa9256c5b8e"></a>

Gets the value of StageIncompletes_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStageIncompletes`](#structFRHAPI__EntityRunCompleteRequest_1a393474a7c50b147d1bd6390c80e80f70)`(const int32 & DefaultValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a393474a7c50b147d1bd6390c80e80f70"></a>

Gets the value of StageIncompletes_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStageIncompletes`](#structFRHAPI__EntityRunCompleteRequest_1a897af6c79ff70a3809b404003982626c)`(int32 & OutValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a897af6c79ff70a3809b404003982626c"></a>

Fills OutValue with the value of StageIncompletes_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetStageIncompletesOrNull`](#structFRHAPI__EntityRunCompleteRequest_1affdc332455ee200e521ce84996a47d61)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1affdc332455ee200e521ce84996a47d61"></a>

Returns a pointer to StageIncompletes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetStageIncompletesOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a2f4bb8211f5bc4787c27c41bd82d6997)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a2f4bb8211f5bc4787c27c41bd82d6997"></a>

Returns a pointer to StageIncompletes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStageIncompletes`](#structFRHAPI__EntityRunCompleteRequest_1ac9f66eb691890d1dfcc5f7d362c7bb67)`(const int32 & NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1ac9f66eb691890d1dfcc5f7d362c7bb67"></a>

Sets the value of StageIncompletes_Optional and also sets StageIncompletes_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStageIncompletes`](#structFRHAPI__EntityRunCompleteRequest_1acd7f52e6ce52809bf7d6a2694e799133)`(int32 && NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1acd7f52e6ce52809bf7d6a2694e799133"></a>

Sets the value of StageIncompletes_Optional and also sets StageIncompletes_IsSet to true using move semantics.

#### `public inline void `[`ClearStageIncompletes`](#structFRHAPI__EntityRunCompleteRequest_1abfbcb38337c0df5ced9c67ac52424d26)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1abfbcb38337c0df5ced9c67ac52424d26"></a>

Clears the value of StageIncompletes_Optional and sets StageIncompletes_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_StageIncompletes`](#structFRHAPI__EntityRunCompleteRequest_1a6e32af16e5bd566373cc9117c16bfb59)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a6e32af16e5bd566373cc9117c16bfb59"></a>

Returns the default value of StageIncompletes.

#### `public inline FORCEINLINE bool & `[`GetRunWin`](#structFRHAPI__EntityRunCompleteRequest_1afd5689883e91883f764e410d93b501b4)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1afd5689883e91883f764e410d93b501b4"></a>

Gets the value of RunWin_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetRunWin`](#structFRHAPI__EntityRunCompleteRequest_1a3872000e10c09d20cc95ec3fdf8998ef)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a3872000e10c09d20cc95ec3fdf8998ef"></a>

Gets the value of RunWin_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetRunWin`](#structFRHAPI__EntityRunCompleteRequest_1a4fdd9e131adf2676f960bdb5e7efeaa7)`(const bool & DefaultValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a4fdd9e131adf2676f960bdb5e7efeaa7"></a>

Gets the value of RunWin_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRunWin`](#structFRHAPI__EntityRunCompleteRequest_1a1aea2b939b581096283f902b4045f43c)`(bool & OutValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a1aea2b939b581096283f902b4045f43c"></a>

Fills OutValue with the value of RunWin_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetRunWinOrNull`](#structFRHAPI__EntityRunCompleteRequest_1aee7e6cd6769bd4310df5767eaa418454)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1aee7e6cd6769bd4310df5767eaa418454"></a>

Returns a pointer to RunWin_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetRunWinOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a082a509b6ab45fffc4002c44e1c15ae1)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a082a509b6ab45fffc4002c44e1c15ae1"></a>

Returns a pointer to RunWin_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRunWin`](#structFRHAPI__EntityRunCompleteRequest_1ab03654d28522c881d3fb0ff407c6a8c9)`(const bool & NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1ab03654d28522c881d3fb0ff407c6a8c9"></a>

Sets the value of RunWin_Optional and also sets RunWin_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRunWin`](#structFRHAPI__EntityRunCompleteRequest_1a57958579f63bef12ee661183116240bc)`(bool && NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a57958579f63bef12ee661183116240bc"></a>

Sets the value of RunWin_Optional and also sets RunWin_IsSet to true using move semantics.

#### `public inline void `[`ClearRunWin`](#structFRHAPI__EntityRunCompleteRequest_1aede51fb70f91a21ae7fc37fcf6b530cb)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1aede51fb70f91a21ae7fc37fcf6b530cb"></a>

Clears the value of RunWin_Optional and sets RunWin_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_RunWin`](#structFRHAPI__EntityRunCompleteRequest_1abd59f3641c5f4005db3fe99fc09a649f)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1abd59f3641c5f4005db3fe99fc09a649f"></a>

Returns the default value of RunWin.

#### `public inline FORCEINLINE void `[`SetRunWinToNull`](#structFRHAPI__EntityRunCompleteRequest_1addf54ad3246f76fb9fce0964dcdbd35a)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1addf54ad3246f76fb9fce0964dcdbd35a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRunWinNull`](#structFRHAPI__EntityRunCompleteRequest_1af67c9d86a6fc7b00921ef02fb434aa7f)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1af67c9d86a6fc7b00921ef02fb434aa7f"></a>

Checks whether RunWin_Optional is set to null.

#### `public inline FORCEINLINE bool & `[`GetRunPlacement`](#structFRHAPI__EntityRunCompleteRequest_1aff67a2780f0afdbf15b7b6736991dc00)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1aff67a2780f0afdbf15b7b6736991dc00"></a>

Gets the value of RunPlacement_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetRunPlacement`](#structFRHAPI__EntityRunCompleteRequest_1a9979cca630af89fa8524d2f13fa63a20)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a9979cca630af89fa8524d2f13fa63a20"></a>

Gets the value of RunPlacement_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetRunPlacement`](#structFRHAPI__EntityRunCompleteRequest_1aafb0626fb84ff7badf91489abd29ca0a)`(const bool & DefaultValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1aafb0626fb84ff7badf91489abd29ca0a"></a>

Gets the value of RunPlacement_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRunPlacement`](#structFRHAPI__EntityRunCompleteRequest_1a829692452ae7a10f45efde2d047923ca)`(bool & OutValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a829692452ae7a10f45efde2d047923ca"></a>

Fills OutValue with the value of RunPlacement_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetRunPlacementOrNull`](#structFRHAPI__EntityRunCompleteRequest_1ac35a77ef45bc358e903020e08a56f17a)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1ac35a77ef45bc358e903020e08a56f17a"></a>

Returns a pointer to RunPlacement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetRunPlacementOrNull`](#structFRHAPI__EntityRunCompleteRequest_1ac64a2e2c0f8dbf889ef2d8602f239ddc)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1ac64a2e2c0f8dbf889ef2d8602f239ddc"></a>

Returns a pointer to RunPlacement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRunPlacement`](#structFRHAPI__EntityRunCompleteRequest_1ae06c7064e4b9d2ba7a4463d41f48ca38)`(const bool & NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1ae06c7064e4b9d2ba7a4463d41f48ca38"></a>

Sets the value of RunPlacement_Optional and also sets RunPlacement_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRunPlacement`](#structFRHAPI__EntityRunCompleteRequest_1a08c3592132a35085bb82ee8cad510422)`(bool && NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a08c3592132a35085bb82ee8cad510422"></a>

Sets the value of RunPlacement_Optional and also sets RunPlacement_IsSet to true using move semantics.

#### `public inline void `[`ClearRunPlacement`](#structFRHAPI__EntityRunCompleteRequest_1aa50aaa7667fe341b0ccecb37a02ab76a)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1aa50aaa7667fe341b0ccecb37a02ab76a"></a>

Clears the value of RunPlacement_Optional and sets RunPlacement_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_RunPlacement`](#structFRHAPI__EntityRunCompleteRequest_1a66c001a2f379e18df0b7e3a96aa77ba1)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a66c001a2f379e18df0b7e3a96aa77ba1"></a>

Returns the default value of RunPlacement.

#### `public inline FORCEINLINE void `[`SetRunPlacementToNull`](#structFRHAPI__EntityRunCompleteRequest_1a5df43f23e3b6f9a99dc442434f20cebc)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a5df43f23e3b6f9a99dc442434f20cebc"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRunPlacementNull`](#structFRHAPI__EntityRunCompleteRequest_1affb45b1a6b2de2b77b1909fad251ab9a)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1affb45b1a6b2de2b77b1909fad251ab9a"></a>

Checks whether RunPlacement_Optional is set to null.

#### `public inline FORCEINLINE float & `[`GetMmrInternalExact`](#structFRHAPI__EntityRunCompleteRequest_1a73e52f9652c686f8f8198188bb82de71)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a73e52f9652c686f8f8198188bb82de71"></a>

Gets the value of MmrInternalExact_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrInternalExact`](#structFRHAPI__EntityRunCompleteRequest_1aa893d0557f8d2df0e6145978a90627a1)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1aa893d0557f8d2df0e6145978a90627a1"></a>

Gets the value of MmrInternalExact_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrInternalExact`](#structFRHAPI__EntityRunCompleteRequest_1a1e19362409fbcdfe45c5e0481ff3a9a4)`(const float & DefaultValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a1e19362409fbcdfe45c5e0481ff3a9a4"></a>

Gets the value of MmrInternalExact_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMmrInternalExact`](#structFRHAPI__EntityRunCompleteRequest_1aef1bff954c0f61e1a52836a348ce7dfe)`(float & OutValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1aef1bff954c0f61e1a52836a348ce7dfe"></a>

Fills OutValue with the value of MmrInternalExact_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetMmrInternalExactOrNull`](#structFRHAPI__EntityRunCompleteRequest_1aa85f56a022dbdffce86fc671216ab4e4)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1aa85f56a022dbdffce86fc671216ab4e4"></a>

Returns a pointer to MmrInternalExact_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetMmrInternalExactOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a2afc363c664fb264db72906ded62b0d5)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a2afc363c664fb264db72906ded62b0d5"></a>

Returns a pointer to MmrInternalExact_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMmrInternalExact`](#structFRHAPI__EntityRunCompleteRequest_1a1576f1c11bda6c2f295ba789e52277a9)`(const float & NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a1576f1c11bda6c2f295ba789e52277a9"></a>

Sets the value of MmrInternalExact_Optional and also sets MmrInternalExact_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMmrInternalExact`](#structFRHAPI__EntityRunCompleteRequest_1a3b51be78cd60aacec93330b623ed1db7)`(float && NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a3b51be78cd60aacec93330b623ed1db7"></a>

Sets the value of MmrInternalExact_Optional and also sets MmrInternalExact_IsSet to true using move semantics.

#### `public inline void `[`ClearMmrInternalExact`](#structFRHAPI__EntityRunCompleteRequest_1a5e08fbd34b69b8916031b70349d52fda)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a5e08fbd34b69b8916031b70349d52fda"></a>

Clears the value of MmrInternalExact_Optional and sets MmrInternalExact_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMmrInternalExactToNull`](#structFRHAPI__EntityRunCompleteRequest_1a5c8ce210a4a0bc7d9d61b33746b452f8)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a5c8ce210a4a0bc7d9d61b33746b452f8"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMmrInternalExactNull`](#structFRHAPI__EntityRunCompleteRequest_1a36e7b2cf1115b64d048fa3b728d5a734)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a36e7b2cf1115b64d048fa3b728d5a734"></a>

Checks whether MmrInternalExact_Optional is set to null.

#### `public inline FORCEINLINE float & `[`GetMmrInternalDelta`](#structFRHAPI__EntityRunCompleteRequest_1a26e17965b3d3082f31d6a89bb57f588f)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a26e17965b3d3082f31d6a89bb57f588f"></a>

Gets the value of MmrInternalDelta_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrInternalDelta`](#structFRHAPI__EntityRunCompleteRequest_1adc129c38752dc8b477d8f3c83ba5e077)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1adc129c38752dc8b477d8f3c83ba5e077"></a>

Gets the value of MmrInternalDelta_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrInternalDelta`](#structFRHAPI__EntityRunCompleteRequest_1a4452662f0cc148d40ccedbb7a95c2643)`(const float & DefaultValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a4452662f0cc148d40ccedbb7a95c2643"></a>

Gets the value of MmrInternalDelta_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMmrInternalDelta`](#structFRHAPI__EntityRunCompleteRequest_1a2759b94f2bafb4182a73bc00f198cf9c)`(float & OutValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a2759b94f2bafb4182a73bc00f198cf9c"></a>

Fills OutValue with the value of MmrInternalDelta_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetMmrInternalDeltaOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a73ab8aa35bb4c4a45d25c88d354ea86f)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a73ab8aa35bb4c4a45d25c88d354ea86f"></a>

Returns a pointer to MmrInternalDelta_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetMmrInternalDeltaOrNull`](#structFRHAPI__EntityRunCompleteRequest_1abeca416295b068c8f3c7432370911ab8)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1abeca416295b068c8f3c7432370911ab8"></a>

Returns a pointer to MmrInternalDelta_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMmrInternalDelta`](#structFRHAPI__EntityRunCompleteRequest_1a3f7ea84e0effa98ed849af7316d899bb)`(const float & NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a3f7ea84e0effa98ed849af7316d899bb"></a>

Sets the value of MmrInternalDelta_Optional and also sets MmrInternalDelta_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMmrInternalDelta`](#structFRHAPI__EntityRunCompleteRequest_1aba30449ec2bf3747ee3d07ed180beb8c)`(float && NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1aba30449ec2bf3747ee3d07ed180beb8c"></a>

Sets the value of MmrInternalDelta_Optional and also sets MmrInternalDelta_IsSet to true using move semantics.

#### `public inline void `[`ClearMmrInternalDelta`](#structFRHAPI__EntityRunCompleteRequest_1ae90fb9b5e3b3f184fbb3d51a50ddd234)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1ae90fb9b5e3b3f184fbb3d51a50ddd234"></a>

Clears the value of MmrInternalDelta_Optional and sets MmrInternalDelta_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMmrInternalDeltaToNull`](#structFRHAPI__EntityRunCompleteRequest_1a7d51662405c05383373739f7f53404fe)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a7d51662405c05383373739f7f53404fe"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMmrInternalDeltaNull`](#structFRHAPI__EntityRunCompleteRequest_1a8e0471b90578f57961e4d2073cea1956)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a8e0471b90578f57961e4d2073cea1956"></a>

Checks whether MmrInternalDelta_Optional is set to null.

#### `public inline FORCEINLINE float & `[`GetMmrVisExact`](#structFRHAPI__EntityRunCompleteRequest_1a7e7918eb1398e2cda3d2bd131ede1a2f)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a7e7918eb1398e2cda3d2bd131ede1a2f"></a>

Gets the value of MmrVisExact_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrVisExact`](#structFRHAPI__EntityRunCompleteRequest_1a884e5c696cb967a49bf3dde8dc83e28f)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a884e5c696cb967a49bf3dde8dc83e28f"></a>

Gets the value of MmrVisExact_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrVisExact`](#structFRHAPI__EntityRunCompleteRequest_1a8acfbd0af2329b4d0bc0e1637eb0fc47)`(const float & DefaultValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a8acfbd0af2329b4d0bc0e1637eb0fc47"></a>

Gets the value of MmrVisExact_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMmrVisExact`](#structFRHAPI__EntityRunCompleteRequest_1acc632aac97c092a01e4aa1afb88a2190)`(float & OutValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1acc632aac97c092a01e4aa1afb88a2190"></a>

Fills OutValue with the value of MmrVisExact_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetMmrVisExactOrNull`](#structFRHAPI__EntityRunCompleteRequest_1a31fa93bacd6ddd28c9f96d1bbd1689d9)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1a31fa93bacd6ddd28c9f96d1bbd1689d9"></a>

Returns a pointer to MmrVisExact_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetMmrVisExactOrNull`](#structFRHAPI__EntityRunCompleteRequest_1afe756f333db65361a845d253f930e543)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1afe756f333db65361a845d253f930e543"></a>

Returns a pointer to MmrVisExact_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMmrVisExact`](#structFRHAPI__EntityRunCompleteRequest_1a1b7f86f469b914f1cb44fbd5ca06f1a9)`(const float & NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a1b7f86f469b914f1cb44fbd5ca06f1a9"></a>

Sets the value of MmrVisExact_Optional and also sets MmrVisExact_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMmrVisExact`](#structFRHAPI__EntityRunCompleteRequest_1a9367d56adedeb0fa7ec105c066c44121)`(float && NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a9367d56adedeb0fa7ec105c066c44121"></a>

Sets the value of MmrVisExact_Optional and also sets MmrVisExact_IsSet to true using move semantics.

#### `public inline void `[`ClearMmrVisExact`](#structFRHAPI__EntityRunCompleteRequest_1acf374ede7da48b9ce47c254efd054b79)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1acf374ede7da48b9ce47c254efd054b79"></a>

Clears the value of MmrVisExact_Optional and sets MmrVisExact_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMmrVisExactToNull`](#structFRHAPI__EntityRunCompleteRequest_1af567c15fbdb3fceb397a1b62f2e9fe7d)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1af567c15fbdb3fceb397a1b62f2e9fe7d"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMmrVisExactNull`](#structFRHAPI__EntityRunCompleteRequest_1a6e595dcbe719de154f130d43d2696322)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a6e595dcbe719de154f130d43d2696322"></a>

Checks whether MmrVisExact_Optional is set to null.

#### `public inline FORCEINLINE float & `[`GetMmrVisDelta`](#structFRHAPI__EntityRunCompleteRequest_1acaff5c9778240e2d4e557ab05b049f91)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1acaff5c9778240e2d4e557ab05b049f91"></a>

Gets the value of MmrVisDelta_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrVisDelta`](#structFRHAPI__EntityRunCompleteRequest_1a8bfd4dd4467104da44f6b616a7956e0a)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a8bfd4dd4467104da44f6b616a7956e0a"></a>

Gets the value of MmrVisDelta_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrVisDelta`](#structFRHAPI__EntityRunCompleteRequest_1ac62334d81ee9bb1ce12fd653defcadfd)`(const float & DefaultValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1ac62334d81ee9bb1ce12fd653defcadfd"></a>

Gets the value of MmrVisDelta_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMmrVisDelta`](#structFRHAPI__EntityRunCompleteRequest_1a06d5ce668abefe36a40c5a5225f09579)`(float & OutValue) const` <a id="structFRHAPI__EntityRunCompleteRequest_1a06d5ce668abefe36a40c5a5225f09579"></a>

Fills OutValue with the value of MmrVisDelta_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetMmrVisDeltaOrNull`](#structFRHAPI__EntityRunCompleteRequest_1af5ad41f07843ddba7a07fc25d3317a6c)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1af5ad41f07843ddba7a07fc25d3317a6c"></a>

Returns a pointer to MmrVisDelta_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetMmrVisDeltaOrNull`](#structFRHAPI__EntityRunCompleteRequest_1ad506bdef70a7d46039db4b5876f27ffe)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1ad506bdef70a7d46039db4b5876f27ffe"></a>

Returns a pointer to MmrVisDelta_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMmrVisDelta`](#structFRHAPI__EntityRunCompleteRequest_1accee5c0d5f4371216e23e3d1bc71164c)`(const float & NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1accee5c0d5f4371216e23e3d1bc71164c"></a>

Sets the value of MmrVisDelta_Optional and also sets MmrVisDelta_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMmrVisDelta`](#structFRHAPI__EntityRunCompleteRequest_1a0bfa4bce96afccad7a53d2e18ec8b862)`(float && NewValue)` <a id="structFRHAPI__EntityRunCompleteRequest_1a0bfa4bce96afccad7a53d2e18ec8b862"></a>

Sets the value of MmrVisDelta_Optional and also sets MmrVisDelta_IsSet to true using move semantics.

#### `public inline void `[`ClearMmrVisDelta`](#structFRHAPI__EntityRunCompleteRequest_1ae6ec56d99082819a30e46f57bd875cbd)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1ae6ec56d99082819a30e46f57bd875cbd"></a>

Clears the value of MmrVisDelta_Optional and sets MmrVisDelta_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMmrVisDeltaToNull`](#structFRHAPI__EntityRunCompleteRequest_1aa8e6ba249365e39e773afd2f2d1ada2e)`()` <a id="structFRHAPI__EntityRunCompleteRequest_1aa8e6ba249365e39e773afd2f2d1ada2e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMmrVisDeltaNull`](#structFRHAPI__EntityRunCompleteRequest_1a774d2165766fe1658ddbbb29f7bb9b74)`() const` <a id="structFRHAPI__EntityRunCompleteRequest_1a774d2165766fe1658ddbbb29f7bb9b74"></a>

Checks whether MmrVisDelta_Optional is set to null.

