---
title: RHAPI_MatchTimelineEvent
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchTimelineEvent`](#structFRHAPI__MatchTimelineEvent) | Event on a match timeline.

## struct `FRHAPI_MatchTimelineEvent` <a id="structFRHAPI__MatchTimelineEvent"></a>

```
struct FRHAPI_MatchTimelineEvent
  : public FRHAPI_Model
```

Event on a match timeline.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`CreatedInto_Optional`](#structFRHAPI__MatchTimelineEvent_1a611ee78de2b1ebb18d3986f72b3e2c1a) | 
`public bool `[`CreatedInto_IsSet`](#structFRHAPI__MatchTimelineEvent_1aabe5dd8bd6fcfb535b40798963d32ef1) | true if CreatedInto_Optional has been set to a value
`public bool `[`CreatedInto_IsNull`](#structFRHAPI__MatchTimelineEvent_1a3fb486530aeb5951e879225eb40d5c80) | true if CreatedInto_Optional has been explicitly set to null
`public FDateTime `[`CreatedDt_Optional`](#structFRHAPI__MatchTimelineEvent_1a25c4c3fe2a1fb116e891d1e79476971e) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`CreatedDt_IsSet`](#structFRHAPI__MatchTimelineEvent_1a376f16ef0e18815173e217939fd411f7) | true if CreatedDt_Optional has been set to a value
`public bool `[`CreatedDt_IsNull`](#structFRHAPI__MatchTimelineEvent_1a9abcf670dbfe1b1c1d8d829d906cab54) | true if CreatedDt_Optional has been explicitly set to null
`public FString `[`Type_Optional`](#structFRHAPI__MatchTimelineEvent_1a50da50fa8a3ced06fa50b2c7aa07c150) | 
`public bool `[`Type_IsSet`](#structFRHAPI__MatchTimelineEvent_1a359d4516666ca98e4df41fe9c03a51e8) | true if Type_Optional has been set to a value
`public bool `[`Type_IsNull`](#structFRHAPI__MatchTimelineEvent_1aae3fcda8183a01c129e6aa05f471ea44) | true if Type_Optional has been explicitly set to null
`public FString `[`Type2_Optional`](#structFRHAPI__MatchTimelineEvent_1a7edc97c64651db26f5e3b6ce363b517d) | 
`public bool `[`Type2_IsSet`](#structFRHAPI__MatchTimelineEvent_1a2abbb184f1c1679f601a592ef900940e) | true if Type2_Optional has been set to a value
`public bool `[`Type2_IsNull`](#structFRHAPI__MatchTimelineEvent_1a9911a24562b095a885500d7319a23b32) | true if Type2_Optional has been explicitly set to null
`public FString `[`Type3_Optional`](#structFRHAPI__MatchTimelineEvent_1a99f76a005e3b2965081ff00f98c72301) | 
`public bool `[`Type3_IsSet`](#structFRHAPI__MatchTimelineEvent_1a740368ab2e3a65bfb4347928f0b4c19c) | true if Type3_Optional has been set to a value
`public bool `[`Type3_IsNull`](#structFRHAPI__MatchTimelineEvent_1a6db4fbd0eb27202fa45075837c0e0c7c) | true if Type3_Optional has been explicitly set to null
`public FString `[`Type4_Optional`](#structFRHAPI__MatchTimelineEvent_1aa3503ec60b28924fb194a283cadff695) | 
`public bool `[`Type4_IsSet`](#structFRHAPI__MatchTimelineEvent_1a4d3dda048f237789f6fcffb901a1fb35) | true if Type4_Optional has been set to a value
`public bool `[`Type4_IsNull`](#structFRHAPI__MatchTimelineEvent_1a2dc5c490be088381e161a4b877c39291) | true if Type4_Optional has been explicitly set to null
`public float `[`LocX_Optional`](#structFRHAPI__MatchTimelineEvent_1add942cff244cefbd93485b1cf6ea2bca) | 
`public bool `[`LocX_IsSet`](#structFRHAPI__MatchTimelineEvent_1a3215f43e938255751da8afbadb58e2fa) | true if LocX_Optional has been set to a value
`public bool `[`LocX_IsNull`](#structFRHAPI__MatchTimelineEvent_1a9b5dcd6ff495fda8f0de89f51da98cd1) | true if LocX_Optional has been explicitly set to null
`public float `[`LocY_Optional`](#structFRHAPI__MatchTimelineEvent_1a144225087271f62b83b6a33068ad854f) | 
`public bool `[`LocY_IsSet`](#structFRHAPI__MatchTimelineEvent_1a7c8b301ae992c0b7aa045955f0eeb179) | true if LocY_Optional has been set to a value
`public bool `[`LocY_IsNull`](#structFRHAPI__MatchTimelineEvent_1a4eb7e82ee9f5febd89c138a1e8b11892) | true if LocY_Optional has been explicitly set to null
`public float `[`LocZ_Optional`](#structFRHAPI__MatchTimelineEvent_1a7e4158bdb926abcc6de672e29c62a393) | 
`public bool `[`LocZ_IsSet`](#structFRHAPI__MatchTimelineEvent_1af6ae10ed1d1bce9397e9416f294bf853) | true if LocZ_Optional has been set to a value
`public bool `[`LocZ_IsNull`](#structFRHAPI__MatchTimelineEvent_1a9a4a4da5a9a64f524771eb8fa5b3b619) | true if LocZ_Optional has been explicitly set to null
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__MatchTimelineEvent_1a39c9203d845ff97f10e8ddff2471b852) | 
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__MatchTimelineEvent_1ad3c5fd57eb5045b4c38646e7de60b206) | true if PlayerUuid_Optional has been set to a value
`public bool `[`PlayerUuid_IsNull`](#structFRHAPI__MatchTimelineEvent_1a44177f80b6630a749e3b91234eb05eab) | true if PlayerUuid_Optional has been explicitly set to null
`public FGuid `[`SourcePlayerUuid_Optional`](#structFRHAPI__MatchTimelineEvent_1a540b00be9d0836acc79190ce5cfe50ac) | 
`public bool `[`SourcePlayerUuid_IsSet`](#structFRHAPI__MatchTimelineEvent_1a5b714a80087ae985a6f0ad30f881651f) | true if SourcePlayerUuid_Optional has been set to a value
`public bool `[`SourcePlayerUuid_IsNull`](#structFRHAPI__MatchTimelineEvent_1a139e2e34eb8fce1d7b4d51416e889ef8) | true if SourcePlayerUuid_Optional has been explicitly set to null
`public FString `[`SourceId_Optional`](#structFRHAPI__MatchTimelineEvent_1af1385c4a0d0d3b64b471d2195d8d6d1e) | 
`public bool `[`SourceId_IsSet`](#structFRHAPI__MatchTimelineEvent_1a56b37bdd31fef7beeaa7bd6914e8aec8) | true if SourceId_Optional has been set to a value
`public bool `[`SourceId_IsNull`](#structFRHAPI__MatchTimelineEvent_1a92102ec0fca703b8447d410169d94a05) | true if SourceId_Optional has been explicitly set to null
`public FString `[`SourceId2_Optional`](#structFRHAPI__MatchTimelineEvent_1a5cb9958c706ea9dab7fa0c37517ba2fe) | 
`public bool `[`SourceId2_IsSet`](#structFRHAPI__MatchTimelineEvent_1a0f31b991eae5a9e60c8f650e5e655fa8) | true if SourceId2_Optional has been set to a value
`public bool `[`SourceId2_IsNull`](#structFRHAPI__MatchTimelineEvent_1a74190b53c3db803a419cde5894cb8098) | true if SourceId2_Optional has been explicitly set to null
`public FString `[`SourceId3_Optional`](#structFRHAPI__MatchTimelineEvent_1a64e52d37c86e51bff8752a348e1b298a) | 
`public bool `[`SourceId3_IsSet`](#structFRHAPI__MatchTimelineEvent_1a6841b65d0cdd7694947ee110f14776f8) | true if SourceId3_Optional has been set to a value
`public bool `[`SourceId3_IsNull`](#structFRHAPI__MatchTimelineEvent_1a7a12c31a98ddc120dd64a1c7203ed21f) | true if SourceId3_Optional has been explicitly set to null
`public FString `[`SourceId4_Optional`](#structFRHAPI__MatchTimelineEvent_1a6582fd505f36851d99f451aa086c3c00) | 
`public bool `[`SourceId4_IsSet`](#structFRHAPI__MatchTimelineEvent_1a0374906a2285285914ade0b7c2ab13f7) | true if SourceId4_Optional has been set to a value
`public bool `[`SourceId4_IsNull`](#structFRHAPI__MatchTimelineEvent_1a069702f316a93bad00ec8b88a98b041b) | true if SourceId4_Optional has been explicitly set to null
`public FGuid `[`TargetPlayerUuid_Optional`](#structFRHAPI__MatchTimelineEvent_1a8230ba226e77730e57020e0509074790) | 
`public bool `[`TargetPlayerUuid_IsSet`](#structFRHAPI__MatchTimelineEvent_1ab6b5d7ad3ddb3f352383055b4dfa737c) | true if TargetPlayerUuid_Optional has been set to a value
`public bool `[`TargetPlayerUuid_IsNull`](#structFRHAPI__MatchTimelineEvent_1a0d6143162e7c2489357e04745e3743cb) | true if TargetPlayerUuid_Optional has been explicitly set to null
`public FString `[`TargetId_Optional`](#structFRHAPI__MatchTimelineEvent_1af3eff7bd9095641c7a73db81c252617e) | 
`public bool `[`TargetId_IsSet`](#structFRHAPI__MatchTimelineEvent_1aa6a26862d90c5d12169c660ed585f1ed) | true if TargetId_Optional has been set to a value
`public bool `[`TargetId_IsNull`](#structFRHAPI__MatchTimelineEvent_1acb48166b2b5f0309f4485805cdd0ff54) | true if TargetId_Optional has been explicitly set to null
`public FString `[`TargetId2_Optional`](#structFRHAPI__MatchTimelineEvent_1adeba2dae0ba195754584b492bc942623) | 
`public bool `[`TargetId2_IsSet`](#structFRHAPI__MatchTimelineEvent_1a7b94702cdf6c4a2165f654796d24f61d) | true if TargetId2_Optional has been set to a value
`public bool `[`TargetId2_IsNull`](#structFRHAPI__MatchTimelineEvent_1a07c81da5a7b96fad991252bff679744a) | true if TargetId2_Optional has been explicitly set to null
`public FString `[`TargetId3_Optional`](#structFRHAPI__MatchTimelineEvent_1affa8592748a77a75618c548711133f1e) | 
`public bool `[`TargetId3_IsSet`](#structFRHAPI__MatchTimelineEvent_1a1fe6d706b6eafa32e5560b34765410c7) | true if TargetId3_Optional has been set to a value
`public bool `[`TargetId3_IsNull`](#structFRHAPI__MatchTimelineEvent_1a098b9bb2e58c9806088d316bd074ab7c) | true if TargetId3_Optional has been explicitly set to null
`public FString `[`TargetId4_Optional`](#structFRHAPI__MatchTimelineEvent_1ae7d669271b6a39671c05ada771c11247) | 
`public bool `[`TargetId4_IsSet`](#structFRHAPI__MatchTimelineEvent_1aff08ba31692130371f0c921b6b21014d) | true if TargetId4_Optional has been set to a value
`public bool `[`TargetId4_IsNull`](#structFRHAPI__MatchTimelineEvent_1a4bc976766ac2af943264f9ad8f07a9c2) | true if TargetId4_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchTimelineEvent_1a4bd7332d0029b93a73d88a063f29015a) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchTimelineEvent_1a98c585247c1c6377740d3e4f58ffe0c4) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__MatchTimelineEvent_1a4abedf28af22c2016f9b185f4c79539e) | true if CustomData_Optional has been explicitly set to null
`public int32 `[`Int1_Optional`](#structFRHAPI__MatchTimelineEvent_1a01bdb62d97a052bbac76e554ac07675b) | 
`public bool `[`Int1_IsSet`](#structFRHAPI__MatchTimelineEvent_1a2009e7cc96c19b29834d46cbc81d0a8e) | true if Int1_Optional has been set to a value
`public bool `[`Int1_IsNull`](#structFRHAPI__MatchTimelineEvent_1a39c8e259d80179faf0c3ffce3c001964) | true if Int1_Optional has been explicitly set to null
`public int32 `[`Int2_Optional`](#structFRHAPI__MatchTimelineEvent_1a8729315bdaf9d968969994d61cc9028c) | 
`public bool `[`Int2_IsSet`](#structFRHAPI__MatchTimelineEvent_1afb968310003b373e1e26ba8c5c90bd1e) | true if Int2_Optional has been set to a value
`public bool `[`Int2_IsNull`](#structFRHAPI__MatchTimelineEvent_1a2506c4d25dc3b371f559c3c4881c3835) | true if Int2_Optional has been explicitly set to null
`public int32 `[`Int3_Optional`](#structFRHAPI__MatchTimelineEvent_1a4b9decd3a5037a0ba6853c39d94905d8) | 
`public bool `[`Int3_IsSet`](#structFRHAPI__MatchTimelineEvent_1ac63872526fc70364e70ce28eae14bf87) | true if Int3_Optional has been set to a value
`public bool `[`Int3_IsNull`](#structFRHAPI__MatchTimelineEvent_1a00e4276b82650be4bf5c420781faecff) | true if Int3_Optional has been explicitly set to null
`public int32 `[`Int4_Optional`](#structFRHAPI__MatchTimelineEvent_1ad783a44fd1e203384b1d177a47b1f574) | 
`public bool `[`Int4_IsSet`](#structFRHAPI__MatchTimelineEvent_1ad8d010f64d9125414e9394fbc99c2cb9) | true if Int4_Optional has been set to a value
`public bool `[`Int4_IsNull`](#structFRHAPI__MatchTimelineEvent_1af370ae5177c4e7f3591c6e661bfaf76c) | true if Int4_Optional has been explicitly set to null
`public int32 `[`Int5_Optional`](#structFRHAPI__MatchTimelineEvent_1ae50fdacb2caf3f51f7e11823df8de7a6) | 
`public bool `[`Int5_IsSet`](#structFRHAPI__MatchTimelineEvent_1ab278688392b79481f7303f230d2c970c) | true if Int5_Optional has been set to a value
`public bool `[`Int5_IsNull`](#structFRHAPI__MatchTimelineEvent_1a7ebdb5fd19e8e96322e713bbea1e583d) | true if Int5_Optional has been explicitly set to null
`public int32 `[`Int6_Optional`](#structFRHAPI__MatchTimelineEvent_1a883bfa8021cb83548200ed5944e72283) | 
`public bool `[`Int6_IsSet`](#structFRHAPI__MatchTimelineEvent_1ac21493ef3c6cdf6c40958211133d1648) | true if Int6_Optional has been set to a value
`public bool `[`Int6_IsNull`](#structFRHAPI__MatchTimelineEvent_1a298123fada03bc8b020337696288cb7c) | true if Int6_Optional has been explicitly set to null
`public int32 `[`Int7_Optional`](#structFRHAPI__MatchTimelineEvent_1ad5efbbae0be0ac4d6e156ffe8a99febf) | 
`public bool `[`Int7_IsSet`](#structFRHAPI__MatchTimelineEvent_1ab77b470176f05c038ad0e6f3d9f6d5b7) | true if Int7_Optional has been set to a value
`public bool `[`Int7_IsNull`](#structFRHAPI__MatchTimelineEvent_1a92158cd70c4a444ece017c9bdbe64980) | true if Int7_Optional has been explicitly set to null
`public int32 `[`Int8_Optional`](#structFRHAPI__MatchTimelineEvent_1a6c33a5473aa549fd2d1972bbd7080000) | 
`public bool `[`Int8_IsSet`](#structFRHAPI__MatchTimelineEvent_1a7482e972671f7567cf0bcdd2554d2595) | true if Int8_Optional has been set to a value
`public bool `[`Int8_IsNull`](#structFRHAPI__MatchTimelineEvent_1a3ab558b9817a139a1ca1ff5bca7ab552) | true if Int8_Optional has been explicitly set to null
`public int32 `[`Int9_Optional`](#structFRHAPI__MatchTimelineEvent_1a0199468f699e78d659ffbe19898fbaa5) | 
`public bool `[`Int9_IsSet`](#structFRHAPI__MatchTimelineEvent_1a026486eb3cce3a83e0e7393cf40542cf) | true if Int9_Optional has been set to a value
`public bool `[`Int9_IsNull`](#structFRHAPI__MatchTimelineEvent_1a86d8914f022780cf9182ab05fba3a954) | true if Int9_Optional has been explicitly set to null
`public int32 `[`Int10_Optional`](#structFRHAPI__MatchTimelineEvent_1a0f0a7968e2d8367f4c677bf610f2fb42) | 
`public bool `[`Int10_IsSet`](#structFRHAPI__MatchTimelineEvent_1aa130301b8fdb36bc73827fa91eca5f94) | true if Int10_Optional has been set to a value
`public bool `[`Int10_IsNull`](#structFRHAPI__MatchTimelineEvent_1a9388e6524971f42cbf14872d9594139f) | true if Int10_Optional has been explicitly set to null
`public int32 `[`Int11_Optional`](#structFRHAPI__MatchTimelineEvent_1a390444a17ef32edb1e098639c623e870) | 
`public bool `[`Int11_IsSet`](#structFRHAPI__MatchTimelineEvent_1a74dd465349d78bf17839bd2cec99c32a) | true if Int11_Optional has been set to a value
`public bool `[`Int11_IsNull`](#structFRHAPI__MatchTimelineEvent_1adb35baa834fd157ebb9bdd63a0969bf2) | true if Int11_Optional has been explicitly set to null
`public int32 `[`Int12_Optional`](#structFRHAPI__MatchTimelineEvent_1a1f202cf6f556826081fc9236e65f58e7) | 
`public bool `[`Int12_IsSet`](#structFRHAPI__MatchTimelineEvent_1a67ae4a1372cadd6c7778b2518c045b2e) | true if Int12_Optional has been set to a value
`public bool `[`Int12_IsNull`](#structFRHAPI__MatchTimelineEvent_1aab75e261fd5d5df0981f4a7fbc5b4b3a) | true if Int12_Optional has been explicitly set to null
`public int32 `[`Int13_Optional`](#structFRHAPI__MatchTimelineEvent_1a4348faa2dfc4ea0f2154004998d24f95) | 
`public bool `[`Int13_IsSet`](#structFRHAPI__MatchTimelineEvent_1ab0b956e86d25491727d3c09dd2a32145) | true if Int13_Optional has been set to a value
`public bool `[`Int13_IsNull`](#structFRHAPI__MatchTimelineEvent_1a51ec26a0017fe93d11998bb4e3c7049a) | true if Int13_Optional has been explicitly set to null
`public int32 `[`Int14_Optional`](#structFRHAPI__MatchTimelineEvent_1aeea3811be6f85e3c973af452e128d8e8) | 
`public bool `[`Int14_IsSet`](#structFRHAPI__MatchTimelineEvent_1a38aec88bc2e0951458c060db716c5257) | true if Int14_Optional has been set to a value
`public bool `[`Int14_IsNull`](#structFRHAPI__MatchTimelineEvent_1aaf46b25ad725acf04b529d92b1da9111) | true if Int14_Optional has been explicitly set to null
`public int32 `[`Int15_Optional`](#structFRHAPI__MatchTimelineEvent_1a6a14169e5d3d778d39628de584ead157) | 
`public bool `[`Int15_IsSet`](#structFRHAPI__MatchTimelineEvent_1a60b5960a1a0ace4d16e8177efe2d2f17) | true if Int15_Optional has been set to a value
`public bool `[`Int15_IsNull`](#structFRHAPI__MatchTimelineEvent_1a1267000a67a752814a6ff2cad7b2587f) | true if Int15_Optional has been explicitly set to null
`public int32 `[`Int16_Optional`](#structFRHAPI__MatchTimelineEvent_1a0486194fe5023c06533c9ab06c8e49dc) | 
`public bool `[`Int16_IsSet`](#structFRHAPI__MatchTimelineEvent_1a15079b663355bb80883635c808d2235d) | true if Int16_Optional has been set to a value
`public bool `[`Int16_IsNull`](#structFRHAPI__MatchTimelineEvent_1a4f0ec306e79a6d19ac8fc83e9867fc9b) | true if Int16_Optional has been explicitly set to null
`public int32 `[`Int17_Optional`](#structFRHAPI__MatchTimelineEvent_1a4103fc0b22946d640797d7516bc565c3) | 
`public bool `[`Int17_IsSet`](#structFRHAPI__MatchTimelineEvent_1a1cff9876e041796ab803be1f91ee7df7) | true if Int17_Optional has been set to a value
`public bool `[`Int17_IsNull`](#structFRHAPI__MatchTimelineEvent_1a0542fbdfe6f807ee8b5b23e9089a927b) | true if Int17_Optional has been explicitly set to null
`public int32 `[`Int18_Optional`](#structFRHAPI__MatchTimelineEvent_1a1fa08ba0444b33f49e3fd30ae68118eb) | 
`public bool `[`Int18_IsSet`](#structFRHAPI__MatchTimelineEvent_1a67a10b761771efb1e49f11435145c9e0) | true if Int18_Optional has been set to a value
`public bool `[`Int18_IsNull`](#structFRHAPI__MatchTimelineEvent_1a6c5bb95dd44fa52d03502abe2c1411b9) | true if Int18_Optional has been explicitly set to null
`public int32 `[`Int19_Optional`](#structFRHAPI__MatchTimelineEvent_1a169b074351d18c09a70f701a960f442f) | 
`public bool `[`Int19_IsSet`](#structFRHAPI__MatchTimelineEvent_1acfd3e0c5eb1a8bcde67c27d0ac4aec18) | true if Int19_Optional has been set to a value
`public bool `[`Int19_IsNull`](#structFRHAPI__MatchTimelineEvent_1a84c8fd58435f8b5a6007be75c8e32cc4) | true if Int19_Optional has been explicitly set to null
`public int32 `[`Int20_Optional`](#structFRHAPI__MatchTimelineEvent_1a15036277a99e9eca642c93c3ac89a8f7) | 
`public bool `[`Int20_IsSet`](#structFRHAPI__MatchTimelineEvent_1a641cc87ee9465e8ba57aa7168ef4d0dc) | true if Int20_Optional has been set to a value
`public bool `[`Int20_IsNull`](#structFRHAPI__MatchTimelineEvent_1a3d8aaaf875b22c4e5cc0286a3e59c043) | true if Int20_Optional has been explicitly set to null
`public int32 `[`Int21_Optional`](#structFRHAPI__MatchTimelineEvent_1ae6d864422892152c75b59081ec382421) | 
`public bool `[`Int21_IsSet`](#structFRHAPI__MatchTimelineEvent_1a42ea6c0c6ef1797b4bb7c694bb6360f2) | true if Int21_Optional has been set to a value
`public bool `[`Int21_IsNull`](#structFRHAPI__MatchTimelineEvent_1af2102d4160b2734ea8ec7dd7cf9b28a4) | true if Int21_Optional has been explicitly set to null
`public int32 `[`Int22_Optional`](#structFRHAPI__MatchTimelineEvent_1ae9406235549246d2ffba70759e1909eb) | 
`public bool `[`Int22_IsSet`](#structFRHAPI__MatchTimelineEvent_1a0c09b1991281e4f4437d2d3d44383c25) | true if Int22_Optional has been set to a value
`public bool `[`Int22_IsNull`](#structFRHAPI__MatchTimelineEvent_1a377ea3be514b3e8dafd8ef3897f0104b) | true if Int22_Optional has been explicitly set to null
`public int32 `[`Int23_Optional`](#structFRHAPI__MatchTimelineEvent_1ab3e2c9850ddeb8a22b86f56e188465e5) | 
`public bool `[`Int23_IsSet`](#structFRHAPI__MatchTimelineEvent_1a0a8dcb739445942306709f26b0b3733c) | true if Int23_Optional has been set to a value
`public bool `[`Int23_IsNull`](#structFRHAPI__MatchTimelineEvent_1a7c24ef2c5ce23555c23e120c5a70efc3) | true if Int23_Optional has been explicitly set to null
`public int32 `[`Int24_Optional`](#structFRHAPI__MatchTimelineEvent_1aa76a6534e0f119645668fb1f40fa9886) | 
`public bool `[`Int24_IsSet`](#structFRHAPI__MatchTimelineEvent_1a85cf809343f321aad9eea784d829b37c) | true if Int24_Optional has been set to a value
`public bool `[`Int24_IsNull`](#structFRHAPI__MatchTimelineEvent_1af34e92fc170eb3f05e686b6e8ed8902a) | true if Int24_Optional has been explicitly set to null
`public int32 `[`Int25_Optional`](#structFRHAPI__MatchTimelineEvent_1a72eb25a84216fadb0fcfabcc72143640) | 
`public bool `[`Int25_IsSet`](#structFRHAPI__MatchTimelineEvent_1a6c5e99d4ccc19210e1285f11b3697c21) | true if Int25_Optional has been set to a value
`public bool `[`Int25_IsNull`](#structFRHAPI__MatchTimelineEvent_1a4ee6995390edc6b1c2ad790927677c0f) | true if Int25_Optional has been explicitly set to null
`public int32 `[`Int26_Optional`](#structFRHAPI__MatchTimelineEvent_1a6abf89f77afd731e904ae7bb837ae3f9) | 
`public bool `[`Int26_IsSet`](#structFRHAPI__MatchTimelineEvent_1aa49fc14c16ddeaacc27acb75f40ceff7) | true if Int26_Optional has been set to a value
`public bool `[`Int26_IsNull`](#structFRHAPI__MatchTimelineEvent_1a0a1130ea54c7cf0317d2fab0f0018f62) | true if Int26_Optional has been explicitly set to null
`public int32 `[`Int27_Optional`](#structFRHAPI__MatchTimelineEvent_1af0ab9f7c10b4e3e9a965730722bdf449) | 
`public bool `[`Int27_IsSet`](#structFRHAPI__MatchTimelineEvent_1ac8f68a29e98c64114db78c71db065e73) | true if Int27_Optional has been set to a value
`public bool `[`Int27_IsNull`](#structFRHAPI__MatchTimelineEvent_1a523267f43ca4b059eaf3d9b19ca978f0) | true if Int27_Optional has been explicitly set to null
`public int32 `[`Int28_Optional`](#structFRHAPI__MatchTimelineEvent_1a61cc1104e766d3b0e19069f638ee0878) | 
`public bool `[`Int28_IsSet`](#structFRHAPI__MatchTimelineEvent_1ae5517590f57fc1463fb742d15ab28fb2) | true if Int28_Optional has been set to a value
`public bool `[`Int28_IsNull`](#structFRHAPI__MatchTimelineEvent_1a9f21c3fb498733405a2075692341d3ed) | true if Int28_Optional has been explicitly set to null
`public int32 `[`Int29_Optional`](#structFRHAPI__MatchTimelineEvent_1aba3b3afc227dd8dc83636679d39fe1e3) | 
`public bool `[`Int29_IsSet`](#structFRHAPI__MatchTimelineEvent_1a30e12cf059e14fe3d0b1a3ffb95e2096) | true if Int29_Optional has been set to a value
`public bool `[`Int29_IsNull`](#structFRHAPI__MatchTimelineEvent_1abaab873deda8db55d436fd830eff64cf) | true if Int29_Optional has been explicitly set to null
`public int32 `[`Int30_Optional`](#structFRHAPI__MatchTimelineEvent_1a07eb1de2bab0e6642421996518f458df) | 
`public bool `[`Int30_IsSet`](#structFRHAPI__MatchTimelineEvent_1a9fa74fae9c2ce2b163d0f10af6bd41db) | true if Int30_Optional has been set to a value
`public bool `[`Int30_IsNull`](#structFRHAPI__MatchTimelineEvent_1ac5b1da6a129b415532ab5e6e915e1289) | true if Int30_Optional has been explicitly set to null
`public int32 `[`Int31_Optional`](#structFRHAPI__MatchTimelineEvent_1afafe8a963ac2fd058b1aaa91da93e30e) | 
`public bool `[`Int31_IsSet`](#structFRHAPI__MatchTimelineEvent_1a9a5f87df3309fc34d2b53bd01affd59b) | true if Int31_Optional has been set to a value
`public bool `[`Int31_IsNull`](#structFRHAPI__MatchTimelineEvent_1ac6fe9f1d71ad9f7a3ce94e32303600e2) | true if Int31_Optional has been explicitly set to null
`public int32 `[`Int32_Optional`](#structFRHAPI__MatchTimelineEvent_1a0085a8a1743988defd21f10dbfd4b48b) | 
`public bool `[`Int32_IsSet`](#structFRHAPI__MatchTimelineEvent_1a2c9a9df2d4accd7b26d383f53a45484d) | true if Int32_Optional has been set to a value
`public bool `[`Int32_IsNull`](#structFRHAPI__MatchTimelineEvent_1ac15c6a37f944ba1b58c9a6b3a41b23eb) | true if Int32_Optional has been explicitly set to null
`public FString `[`Str1_Optional`](#structFRHAPI__MatchTimelineEvent_1aedf5ea58a8fdfa23b050caa06d8fc716) | 
`public bool `[`Str1_IsSet`](#structFRHAPI__MatchTimelineEvent_1a4203fede5ef0186d6dc0d34271a0889a) | true if Str1_Optional has been set to a value
`public bool `[`Str1_IsNull`](#structFRHAPI__MatchTimelineEvent_1a588ab43651a4379805d8df9fa055ed33) | true if Str1_Optional has been explicitly set to null
`public FString `[`Str2_Optional`](#structFRHAPI__MatchTimelineEvent_1ac18bfec7d40b3df4b24f3c21a095de6e) | 
`public bool `[`Str2_IsSet`](#structFRHAPI__MatchTimelineEvent_1affd3c168be05e4eb6e06dd5923b3f40a) | true if Str2_Optional has been set to a value
`public bool `[`Str2_IsNull`](#structFRHAPI__MatchTimelineEvent_1aca348d9fc1af6b1d8dc97d5426224aa8) | true if Str2_Optional has been explicitly set to null
`public FString `[`Str3_Optional`](#structFRHAPI__MatchTimelineEvent_1a3607f18239ff85a5dafdc0ec1189567c) | 
`public bool `[`Str3_IsSet`](#structFRHAPI__MatchTimelineEvent_1a765b6dfff71073563ec1eff0f7a8ae69) | true if Str3_Optional has been set to a value
`public bool `[`Str3_IsNull`](#structFRHAPI__MatchTimelineEvent_1accf48304ee1ca44bd1260894f813d92a) | true if Str3_Optional has been explicitly set to null
`public FString `[`Str4_Optional`](#structFRHAPI__MatchTimelineEvent_1a80102a3ece41b58da9696005ffa91cb1) | 
`public bool `[`Str4_IsSet`](#structFRHAPI__MatchTimelineEvent_1ab0c5afc68d82af522c35adce2c1197d1) | true if Str4_Optional has been set to a value
`public bool `[`Str4_IsNull`](#structFRHAPI__MatchTimelineEvent_1a88b5553801e8d469b86ba0312b4862af) | true if Str4_Optional has been explicitly set to null
`public FString `[`Str5_Optional`](#structFRHAPI__MatchTimelineEvent_1a8933479db70150e39898ef4abd62505d) | 
`public bool `[`Str5_IsSet`](#structFRHAPI__MatchTimelineEvent_1a192228a8e190640206946b0d3926ce1f) | true if Str5_Optional has been set to a value
`public bool `[`Str5_IsNull`](#structFRHAPI__MatchTimelineEvent_1a37f22454be626cea254403674e6555d5) | true if Str5_Optional has been explicitly set to null
`public FString `[`Str6_Optional`](#structFRHAPI__MatchTimelineEvent_1aae8140fa2d3471fb8a0f60cc1797f750) | 
`public bool `[`Str6_IsSet`](#structFRHAPI__MatchTimelineEvent_1a7d0ef3a3cf4bd704b5faa628195eb300) | true if Str6_Optional has been set to a value
`public bool `[`Str6_IsNull`](#structFRHAPI__MatchTimelineEvent_1a59f9d719bef1144926edba23789be0b8) | true if Str6_Optional has been explicitly set to null
`public FString `[`Str7_Optional`](#structFRHAPI__MatchTimelineEvent_1ab6273a201d83cb6d78ea41d266a0dbcc) | 
`public bool `[`Str7_IsSet`](#structFRHAPI__MatchTimelineEvent_1ad660858950c761e238c8aeef7b387b06) | true if Str7_Optional has been set to a value
`public bool `[`Str7_IsNull`](#structFRHAPI__MatchTimelineEvent_1ab60f7198d2002d527871f2a5c99c05be) | true if Str7_Optional has been explicitly set to null
`public FString `[`Str8_Optional`](#structFRHAPI__MatchTimelineEvent_1a1ecebea4a04664054a356711a0377717) | 
`public bool `[`Str8_IsSet`](#structFRHAPI__MatchTimelineEvent_1a842347ce2f4ea1a00f4c309a05b84b2f) | true if Str8_Optional has been set to a value
`public bool `[`Str8_IsNull`](#structFRHAPI__MatchTimelineEvent_1a863f8fb5c7b1afe92ab3ec9842051d7d) | true if Str8_Optional has been explicitly set to null
`public FString `[`Str9_Optional`](#structFRHAPI__MatchTimelineEvent_1a1697b4dcb3928b9dfcbfc9964726dd12) | 
`public bool `[`Str9_IsSet`](#structFRHAPI__MatchTimelineEvent_1a7e9e84aed35565e9eaaf57942fab5300) | true if Str9_Optional has been set to a value
`public bool `[`Str9_IsNull`](#structFRHAPI__MatchTimelineEvent_1a1ae3b66a8e94c9aa93f68ce5fa0b7548) | true if Str9_Optional has been explicitly set to null
`public FString `[`Str10_Optional`](#structFRHAPI__MatchTimelineEvent_1ab30e1b801a8c8cc07220092980d1d734) | 
`public bool `[`Str10_IsSet`](#structFRHAPI__MatchTimelineEvent_1a394014ce5817d95bcd94d3675e3792cd) | true if Str10_Optional has been set to a value
`public bool `[`Str10_IsNull`](#structFRHAPI__MatchTimelineEvent_1a1641f3f7b94a073fa1bb476542ac22bc) | true if Str10_Optional has been explicitly set to null
`public FString `[`Str11_Optional`](#structFRHAPI__MatchTimelineEvent_1adf8bdef0a110203cf9037a82d850108b) | 
`public bool `[`Str11_IsSet`](#structFRHAPI__MatchTimelineEvent_1a48a16e95e8b9c497012b7e77e5d40699) | true if Str11_Optional has been set to a value
`public bool `[`Str11_IsNull`](#structFRHAPI__MatchTimelineEvent_1abd39aa1861a4e803683a108352ec7528) | true if Str11_Optional has been explicitly set to null
`public FString `[`Str12_Optional`](#structFRHAPI__MatchTimelineEvent_1a8dbed5124e594301dfb0ef9ce3e0f009) | 
`public bool `[`Str12_IsSet`](#structFRHAPI__MatchTimelineEvent_1a576fd347e7e1a72263e596cfde716eaf) | true if Str12_Optional has been set to a value
`public bool `[`Str12_IsNull`](#structFRHAPI__MatchTimelineEvent_1acf880552edb46a88f390e5ade4861813) | true if Str12_Optional has been explicitly set to null
`public FString `[`Str13_Optional`](#structFRHAPI__MatchTimelineEvent_1a9cf316d744514eab19f0b35a3019329d) | 
`public bool `[`Str13_IsSet`](#structFRHAPI__MatchTimelineEvent_1ad99b0b7cce7aff35cff72bddabe0d034) | true if Str13_Optional has been set to a value
`public bool `[`Str13_IsNull`](#structFRHAPI__MatchTimelineEvent_1aa0ebd5ad3f2d62baf2c1f600208e0468) | true if Str13_Optional has been explicitly set to null
`public FString `[`Str14_Optional`](#structFRHAPI__MatchTimelineEvent_1af890a1914bc3cb5681921fdcf32b3eb3) | 
`public bool `[`Str14_IsSet`](#structFRHAPI__MatchTimelineEvent_1a16e3a5ac6c237322bb93a3804d1feec6) | true if Str14_Optional has been set to a value
`public bool `[`Str14_IsNull`](#structFRHAPI__MatchTimelineEvent_1ae9c7e660e15f6225ce6f2a80e05e3b3b) | true if Str14_Optional has been explicitly set to null
`public FString `[`Str15_Optional`](#structFRHAPI__MatchTimelineEvent_1aacc7911d30d321d367ecb39de4c49de2) | 
`public bool `[`Str15_IsSet`](#structFRHAPI__MatchTimelineEvent_1a2ed6421147afc719caa8accc0b5753b3) | true if Str15_Optional has been set to a value
`public bool `[`Str15_IsNull`](#structFRHAPI__MatchTimelineEvent_1a7387aba8152ebd7c04b91baaf008bfc7) | true if Str15_Optional has been explicitly set to null
`public FString `[`Str16_Optional`](#structFRHAPI__MatchTimelineEvent_1a65eb20664166d690a4655614e14da1e6) | 
`public bool `[`Str16_IsSet`](#structFRHAPI__MatchTimelineEvent_1adfa0d5290d9ed8364cebb355843a5444) | true if Str16_Optional has been set to a value
`public bool `[`Str16_IsNull`](#structFRHAPI__MatchTimelineEvent_1a82ba4bc3d40a2de9758c86e301571ec4) | true if Str16_Optional has been explicitly set to null
`public FString `[`Str17_Optional`](#structFRHAPI__MatchTimelineEvent_1a6ba3b730f11c9b96e08d7b5aa6cec31b) | 
`public bool `[`Str17_IsSet`](#structFRHAPI__MatchTimelineEvent_1a670e6c3578355409d9b24f66f7ccd02a) | true if Str17_Optional has been set to a value
`public bool `[`Str17_IsNull`](#structFRHAPI__MatchTimelineEvent_1a539de569e2304b00bd10a188ab8c50eb) | true if Str17_Optional has been explicitly set to null
`public FString `[`Str18_Optional`](#structFRHAPI__MatchTimelineEvent_1aef76f11b2b1713e082a4229b13d96275) | 
`public bool `[`Str18_IsSet`](#structFRHAPI__MatchTimelineEvent_1a8fa415de9295e6a79e2077399b1dbdd1) | true if Str18_Optional has been set to a value
`public bool `[`Str18_IsNull`](#structFRHAPI__MatchTimelineEvent_1a8fa82384a69fbe42619852cb1b97fba8) | true if Str18_Optional has been explicitly set to null
`public FString `[`Str19_Optional`](#structFRHAPI__MatchTimelineEvent_1a2ebd7b332a32b3b5e3ded4a3c1bcd177) | 
`public bool `[`Str19_IsSet`](#structFRHAPI__MatchTimelineEvent_1af3c800412c27917282d31073ddcb9c9a) | true if Str19_Optional has been set to a value
`public bool `[`Str19_IsNull`](#structFRHAPI__MatchTimelineEvent_1ae56d9a16e8946378157be643ac2e4219) | true if Str19_Optional has been explicitly set to null
`public FString `[`Str20_Optional`](#structFRHAPI__MatchTimelineEvent_1abacfdde4618b347c8554e45bdfb64635) | 
`public bool `[`Str20_IsSet`](#structFRHAPI__MatchTimelineEvent_1ab1b9b4602482a4610c9313b4e49e3232) | true if Str20_Optional has been set to a value
`public bool `[`Str20_IsNull`](#structFRHAPI__MatchTimelineEvent_1acc592762cbba8511f2c3c180164cae8a) | true if Str20_Optional has been explicitly set to null
`public FString `[`Str21_Optional`](#structFRHAPI__MatchTimelineEvent_1a2af0d4f9af4e714e39c280cab8e2fbe4) | 
`public bool `[`Str21_IsSet`](#structFRHAPI__MatchTimelineEvent_1ab2e753681b08d2952148eefcdb3c41f3) | true if Str21_Optional has been set to a value
`public bool `[`Str21_IsNull`](#structFRHAPI__MatchTimelineEvent_1af42143c23bdcef28bb9b5b972ccf5d30) | true if Str21_Optional has been explicitly set to null
`public FString `[`Str22_Optional`](#structFRHAPI__MatchTimelineEvent_1a9330e108b2ca176e8a85900aa1b3ae4c) | 
`public bool `[`Str22_IsSet`](#structFRHAPI__MatchTimelineEvent_1a6cbd96d80d17602c954246e9797212ce) | true if Str22_Optional has been set to a value
`public bool `[`Str22_IsNull`](#structFRHAPI__MatchTimelineEvent_1ae6a361417905c3789f12447eeeabbddd) | true if Str22_Optional has been explicitly set to null
`public FString `[`Str23_Optional`](#structFRHAPI__MatchTimelineEvent_1a680096d877749e78addd8006d50f228a) | 
`public bool `[`Str23_IsSet`](#structFRHAPI__MatchTimelineEvent_1a17d05ef6f799f13db7944e3f07085958) | true if Str23_Optional has been set to a value
`public bool `[`Str23_IsNull`](#structFRHAPI__MatchTimelineEvent_1ab5306b5c647c1173395927f282721ffe) | true if Str23_Optional has been explicitly set to null
`public FString `[`Str24_Optional`](#structFRHAPI__MatchTimelineEvent_1a0e3395a23d1b294e02ebd15946c14906) | 
`public bool `[`Str24_IsSet`](#structFRHAPI__MatchTimelineEvent_1a0f66235d7796ff2abd1dd0e944c29c1c) | true if Str24_Optional has been set to a value
`public bool `[`Str24_IsNull`](#structFRHAPI__MatchTimelineEvent_1a79a2c47e127b88d68256e9279761250a) | true if Str24_Optional has been explicitly set to null
`public FString `[`Str25_Optional`](#structFRHAPI__MatchTimelineEvent_1a328d68019e75479cce72d8e3c151b8c3) | 
`public bool `[`Str25_IsSet`](#structFRHAPI__MatchTimelineEvent_1a0eaf1f6526524c8bc74f3b7befccd7b0) | true if Str25_Optional has been set to a value
`public bool `[`Str25_IsNull`](#structFRHAPI__MatchTimelineEvent_1aac5b93a872ce52b1bfbc8637a8c67df9) | true if Str25_Optional has been explicitly set to null
`public FString `[`Str26_Optional`](#structFRHAPI__MatchTimelineEvent_1a4292e3fc1d6641f33b72a320c3f41be5) | 
`public bool `[`Str26_IsSet`](#structFRHAPI__MatchTimelineEvent_1a7e837d0c5f3fe5d10574f6a0e0c79a9e) | true if Str26_Optional has been set to a value
`public bool `[`Str26_IsNull`](#structFRHAPI__MatchTimelineEvent_1adc40e5bdc03448644b361785dea3b0cf) | true if Str26_Optional has been explicitly set to null
`public FString `[`Str27_Optional`](#structFRHAPI__MatchTimelineEvent_1a5e9cc966553c3b9b7f2ebe2e322ab94f) | 
`public bool `[`Str27_IsSet`](#structFRHAPI__MatchTimelineEvent_1a7ffa69bd3a92fce20661ce728861f89a) | true if Str27_Optional has been set to a value
`public bool `[`Str27_IsNull`](#structFRHAPI__MatchTimelineEvent_1a1a160c4b26624e42657ad7332919c9e1) | true if Str27_Optional has been explicitly set to null
`public FString `[`Str28_Optional`](#structFRHAPI__MatchTimelineEvent_1acc711ae10855fb142792f2d93e5c3baf) | 
`public bool `[`Str28_IsSet`](#structFRHAPI__MatchTimelineEvent_1a8608a12a7bfcce10e3f4f0aa1f72f747) | true if Str28_Optional has been set to a value
`public bool `[`Str28_IsNull`](#structFRHAPI__MatchTimelineEvent_1a146ab23780ca382d8ae88d504a810bba) | true if Str28_Optional has been explicitly set to null
`public FString `[`Str29_Optional`](#structFRHAPI__MatchTimelineEvent_1a56fb5260ea18631576eabeecdd94f369) | 
`public bool `[`Str29_IsSet`](#structFRHAPI__MatchTimelineEvent_1a27564fef5f0cd530b1998e04d0f2b48e) | true if Str29_Optional has been set to a value
`public bool `[`Str29_IsNull`](#structFRHAPI__MatchTimelineEvent_1a6095ddc004cae88c228387638c490384) | true if Str29_Optional has been explicitly set to null
`public FString `[`Str30_Optional`](#structFRHAPI__MatchTimelineEvent_1a4305bddeb140d6060dd768cfafd9a0a0) | 
`public bool `[`Str30_IsSet`](#structFRHAPI__MatchTimelineEvent_1a4f582d80375922e3057890f5f43a6942) | true if Str30_Optional has been set to a value
`public bool `[`Str30_IsNull`](#structFRHAPI__MatchTimelineEvent_1a8647fdf53d3ef02ccc687edeb92a863e) | true if Str30_Optional has been explicitly set to null
`public FString `[`Str31_Optional`](#structFRHAPI__MatchTimelineEvent_1a0921f558e8464a5c8e1c2f1cbe19b66b) | 
`public bool `[`Str31_IsSet`](#structFRHAPI__MatchTimelineEvent_1a3c3ea74bbd37ac9b734cbfa8f54af1e8) | true if Str31_Optional has been set to a value
`public bool `[`Str31_IsNull`](#structFRHAPI__MatchTimelineEvent_1ab130ca06692b26b536926846cb9a6444) | true if Str31_Optional has been explicitly set to null
`public FString `[`Str32_Optional`](#structFRHAPI__MatchTimelineEvent_1ab06adfd474dc207e400264e93920fb82) | 
`public bool `[`Str32_IsSet`](#structFRHAPI__MatchTimelineEvent_1a4671cbe83f193432181363688c149ec3) | true if Str32_Optional has been set to a value
`public bool `[`Str32_IsNull`](#structFRHAPI__MatchTimelineEvent_1a734ebdc0c15c05d7b878c4cfc0c682e1) | true if Str32_Optional has been explicitly set to null
`public float `[`Float1_Optional`](#structFRHAPI__MatchTimelineEvent_1aeb12146de27780aae5578c541bf6908c) | 
`public bool `[`Float1_IsSet`](#structFRHAPI__MatchTimelineEvent_1abac3bda3672a53f70222ca179796e67a) | true if Float1_Optional has been set to a value
`public bool `[`Float1_IsNull`](#structFRHAPI__MatchTimelineEvent_1a22993b97098c1d1a8ee3531ee43061b6) | true if Float1_Optional has been explicitly set to null
`public float `[`Float2_Optional`](#structFRHAPI__MatchTimelineEvent_1afc15dc8fb129e2b2cb2c428874c1e525) | 
`public bool `[`Float2_IsSet`](#structFRHAPI__MatchTimelineEvent_1a68e3be0277b1947ed8a741dd91c6dfea) | true if Float2_Optional has been set to a value
`public bool `[`Float2_IsNull`](#structFRHAPI__MatchTimelineEvent_1ad29b45765dc46ccd403ddd7586d874f4) | true if Float2_Optional has been explicitly set to null
`public float `[`Float3_Optional`](#structFRHAPI__MatchTimelineEvent_1a4f3f1c2e02f45b3d20e64d31832bcb24) | 
`public bool `[`Float3_IsSet`](#structFRHAPI__MatchTimelineEvent_1a24903bfb948c93e4f037d82d74142e77) | true if Float3_Optional has been set to a value
`public bool `[`Float3_IsNull`](#structFRHAPI__MatchTimelineEvent_1a8d541fc74d023eb061a8fb8516f82050) | true if Float3_Optional has been explicitly set to null
`public float `[`Float4_Optional`](#structFRHAPI__MatchTimelineEvent_1a6594aaf1245ff0b1feefcfe37e4c373d) | 
`public bool `[`Float4_IsSet`](#structFRHAPI__MatchTimelineEvent_1a0d8f003abfce400fd4bccc57757b8b66) | true if Float4_Optional has been set to a value
`public bool `[`Float4_IsNull`](#structFRHAPI__MatchTimelineEvent_1a12c8b77495a6addb009900124c418e8b) | true if Float4_Optional has been explicitly set to null
`public float `[`Float5_Optional`](#structFRHAPI__MatchTimelineEvent_1a4df40cb8e48fce32da1d5411e604c8d6) | 
`public bool `[`Float5_IsSet`](#structFRHAPI__MatchTimelineEvent_1a36c5cfebf0211d9c9bfd84c8ec5477dc) | true if Float5_Optional has been set to a value
`public bool `[`Float5_IsNull`](#structFRHAPI__MatchTimelineEvent_1aaaeab8c59bfb42fe570e4d6788d2bae4) | true if Float5_Optional has been explicitly set to null
`public float `[`Float6_Optional`](#structFRHAPI__MatchTimelineEvent_1a0d00dacc7094d18bc9e2c1a46b80b6ad) | 
`public bool `[`Float6_IsSet`](#structFRHAPI__MatchTimelineEvent_1ae797fac2bd1dfbe1be535ab7ff1a3c15) | true if Float6_Optional has been set to a value
`public bool `[`Float6_IsNull`](#structFRHAPI__MatchTimelineEvent_1a0e62f04ae3df49350b450dbe0fd4ead8) | true if Float6_Optional has been explicitly set to null
`public float `[`Float7_Optional`](#structFRHAPI__MatchTimelineEvent_1a9d9aa27e5d33c9f717cc565c883d92b2) | 
`public bool `[`Float7_IsSet`](#structFRHAPI__MatchTimelineEvent_1a3a078025774410d360599d16368a3a82) | true if Float7_Optional has been set to a value
`public bool `[`Float7_IsNull`](#structFRHAPI__MatchTimelineEvent_1a2993317081115450d564537a40a6f323) | true if Float7_Optional has been explicitly set to null
`public float `[`Float8_Optional`](#structFRHAPI__MatchTimelineEvent_1ac7c2895c527d84230838770a308dd19d) | 
`public bool `[`Float8_IsSet`](#structFRHAPI__MatchTimelineEvent_1aee010f7d8d727c35b79cc8f162f14da1) | true if Float8_Optional has been set to a value
`public bool `[`Float8_IsNull`](#structFRHAPI__MatchTimelineEvent_1a41acadab0129598be6b39dbaaca1e5ec) | true if Float8_Optional has been explicitly set to null
`public float `[`Float9_Optional`](#structFRHAPI__MatchTimelineEvent_1a407f1b8adc4b091e11561d1ccc69b219) | 
`public bool `[`Float9_IsSet`](#structFRHAPI__MatchTimelineEvent_1a39c0fbd13fe87eb9a9c41f42d26155b9) | true if Float9_Optional has been set to a value
`public bool `[`Float9_IsNull`](#structFRHAPI__MatchTimelineEvent_1ad92cd92626aba094348998ec68920bec) | true if Float9_Optional has been explicitly set to null
`public float `[`Float10_Optional`](#structFRHAPI__MatchTimelineEvent_1a80ce46af193e122dca3e5c0c8851ad39) | 
`public bool `[`Float10_IsSet`](#structFRHAPI__MatchTimelineEvent_1ac923db2a52692e99f3e2b770b8a35988) | true if Float10_Optional has been set to a value
`public bool `[`Float10_IsNull`](#structFRHAPI__MatchTimelineEvent_1a276a6c17a41dd57967e88e04e5b357ba) | true if Float10_Optional has been explicitly set to null
`public float `[`Float11_Optional`](#structFRHAPI__MatchTimelineEvent_1a87c359aff6f32d3234e3fe4a1b704f99) | 
`public bool `[`Float11_IsSet`](#structFRHAPI__MatchTimelineEvent_1ab5303191f46eb9edec93a539cd339a54) | true if Float11_Optional has been set to a value
`public bool `[`Float11_IsNull`](#structFRHAPI__MatchTimelineEvent_1a29d4d37e03da439a23748ac2ff517105) | true if Float11_Optional has been explicitly set to null
`public float `[`Float12_Optional`](#structFRHAPI__MatchTimelineEvent_1af770291187c258e357867cb6a19af2ab) | 
`public bool `[`Float12_IsSet`](#structFRHAPI__MatchTimelineEvent_1af9fc8fe12c87680d639d914b3081cd2c) | true if Float12_Optional has been set to a value
`public bool `[`Float12_IsNull`](#structFRHAPI__MatchTimelineEvent_1a0a497d61a8eedf17e0776af71581c236) | true if Float12_Optional has been explicitly set to null
`public float `[`Float13_Optional`](#structFRHAPI__MatchTimelineEvent_1a38075c28e76caaa039b134a8a80eebd4) | 
`public bool `[`Float13_IsSet`](#structFRHAPI__MatchTimelineEvent_1a0eb74b0d64bae525a6095046c72930dd) | true if Float13_Optional has been set to a value
`public bool `[`Float13_IsNull`](#structFRHAPI__MatchTimelineEvent_1a7a6633b95626b787a8b628405d0eeb9a) | true if Float13_Optional has been explicitly set to null
`public float `[`Float14_Optional`](#structFRHAPI__MatchTimelineEvent_1a0cf73d343d3c068219f381bc8f50503c) | 
`public bool `[`Float14_IsSet`](#structFRHAPI__MatchTimelineEvent_1a1470ed6ee0e12470f3d0c70f2e7ee276) | true if Float14_Optional has been set to a value
`public bool `[`Float14_IsNull`](#structFRHAPI__MatchTimelineEvent_1a2b4c91957fc2cc9631d2868a99b37509) | true if Float14_Optional has been explicitly set to null
`public float `[`Float15_Optional`](#structFRHAPI__MatchTimelineEvent_1adff1577572c7720ab50d9ba98d2f2a70) | 
`public bool `[`Float15_IsSet`](#structFRHAPI__MatchTimelineEvent_1a22b08ce875e035eedf87c87bbc864b87) | true if Float15_Optional has been set to a value
`public bool `[`Float15_IsNull`](#structFRHAPI__MatchTimelineEvent_1a074e9691abc36558b57b6575c92bcec8) | true if Float15_Optional has been explicitly set to null
`public float `[`Float16_Optional`](#structFRHAPI__MatchTimelineEvent_1af5f320606503ba0915b46d804d218788) | 
`public bool `[`Float16_IsSet`](#structFRHAPI__MatchTimelineEvent_1a223861db5011d1cdf78ff8ea7c3ea367) | true if Float16_Optional has been set to a value
`public bool `[`Float16_IsNull`](#structFRHAPI__MatchTimelineEvent_1ad76d33d87d88cabe799508f366af6c97) | true if Float16_Optional has been explicitly set to null
`public float `[`Float17_Optional`](#structFRHAPI__MatchTimelineEvent_1a312afddbfa4966ad2885ae50826c9ffd) | 
`public bool `[`Float17_IsSet`](#structFRHAPI__MatchTimelineEvent_1abcad978a4485e808d19854211ef9cc5a) | true if Float17_Optional has been set to a value
`public bool `[`Float17_IsNull`](#structFRHAPI__MatchTimelineEvent_1af25fada749a4d1e47e293b2b1d8c3179) | true if Float17_Optional has been explicitly set to null
`public float `[`Float18_Optional`](#structFRHAPI__MatchTimelineEvent_1a17faf2a8ae2b6f36ba23c759a7619f81) | 
`public bool `[`Float18_IsSet`](#structFRHAPI__MatchTimelineEvent_1ababfb8bff665238aa5a29b6183c51485) | true if Float18_Optional has been set to a value
`public bool `[`Float18_IsNull`](#structFRHAPI__MatchTimelineEvent_1a076281ca07466ab56505810e45cd8820) | true if Float18_Optional has been explicitly set to null
`public float `[`Float19_Optional`](#structFRHAPI__MatchTimelineEvent_1accd23370e3f063567ee2269898168c2d) | 
`public bool `[`Float19_IsSet`](#structFRHAPI__MatchTimelineEvent_1a66d3551631085792ce70dfa06e7a53aa) | true if Float19_Optional has been set to a value
`public bool `[`Float19_IsNull`](#structFRHAPI__MatchTimelineEvent_1ae0b059f39a3fa703eeefa1a1d5adc178) | true if Float19_Optional has been explicitly set to null
`public float `[`Float20_Optional`](#structFRHAPI__MatchTimelineEvent_1a715c186b6f86ce574f47940e309afbec) | 
`public bool `[`Float20_IsSet`](#structFRHAPI__MatchTimelineEvent_1aa9dbe270673099cc52eb85b0c6c20965) | true if Float20_Optional has been set to a value
`public bool `[`Float20_IsNull`](#structFRHAPI__MatchTimelineEvent_1a27bd53d45d7fbbd96f7ea443a7ec9787) | true if Float20_Optional has been explicitly set to null
`public float `[`Float21_Optional`](#structFRHAPI__MatchTimelineEvent_1a5533dc8dd0764fd881e123cc0afc2190) | 
`public bool `[`Float21_IsSet`](#structFRHAPI__MatchTimelineEvent_1ae011be54144ba62aa24312be35c87e5c) | true if Float21_Optional has been set to a value
`public bool `[`Float21_IsNull`](#structFRHAPI__MatchTimelineEvent_1ad7c8f784322625cc00c1288f67a64e4b) | true if Float21_Optional has been explicitly set to null
`public float `[`Float22_Optional`](#structFRHAPI__MatchTimelineEvent_1a23254a69080d201c4b405a3974241736) | 
`public bool `[`Float22_IsSet`](#structFRHAPI__MatchTimelineEvent_1a7d9dce3c0202a038eff1eabdc6a8b91e) | true if Float22_Optional has been set to a value
`public bool `[`Float22_IsNull`](#structFRHAPI__MatchTimelineEvent_1af285ebb9755f75e423f8a67e3f6dddbf) | true if Float22_Optional has been explicitly set to null
`public float `[`Float23_Optional`](#structFRHAPI__MatchTimelineEvent_1aa05c00d207a5dc4609b6a07ff5f73b1f) | 
`public bool `[`Float23_IsSet`](#structFRHAPI__MatchTimelineEvent_1aa33df8c595467ba1f087db4e83823d35) | true if Float23_Optional has been set to a value
`public bool `[`Float23_IsNull`](#structFRHAPI__MatchTimelineEvent_1ade01beeb2cfe55563f4b55a0c96e4bcd) | true if Float23_Optional has been explicitly set to null
`public float `[`Float24_Optional`](#structFRHAPI__MatchTimelineEvent_1a0315b5e7f380a217679714294727480b) | 
`public bool `[`Float24_IsSet`](#structFRHAPI__MatchTimelineEvent_1a762fda38c1a7696f7ad68a386a0ca6b1) | true if Float24_Optional has been set to a value
`public bool `[`Float24_IsNull`](#structFRHAPI__MatchTimelineEvent_1a55c71fd6583cb424fb5864efb9fb1e8f) | true if Float24_Optional has been explicitly set to null
`public float `[`Float25_Optional`](#structFRHAPI__MatchTimelineEvent_1a0d92f49362f4cbda355b291798d54057) | 
`public bool `[`Float25_IsSet`](#structFRHAPI__MatchTimelineEvent_1af4883553a313cd2f75d827c103960a55) | true if Float25_Optional has been set to a value
`public bool `[`Float25_IsNull`](#structFRHAPI__MatchTimelineEvent_1a38392fea78dc8b053f295ce9461ddbe9) | true if Float25_Optional has been explicitly set to null
`public float `[`Float26_Optional`](#structFRHAPI__MatchTimelineEvent_1a01a9f617aa729921431606f7fd5a37ec) | 
`public bool `[`Float26_IsSet`](#structFRHAPI__MatchTimelineEvent_1abea47c5582b9389f428cbf467139a689) | true if Float26_Optional has been set to a value
`public bool `[`Float26_IsNull`](#structFRHAPI__MatchTimelineEvent_1afe6fdea48a7e9dcf64113be4d810d93f) | true if Float26_Optional has been explicitly set to null
`public float `[`Float27_Optional`](#structFRHAPI__MatchTimelineEvent_1a1eddf413b1cb96fea33b12d5accc09cb) | 
`public bool `[`Float27_IsSet`](#structFRHAPI__MatchTimelineEvent_1a11bf55045f8197a244a5ef4442f466a6) | true if Float27_Optional has been set to a value
`public bool `[`Float27_IsNull`](#structFRHAPI__MatchTimelineEvent_1ade70f75ffaa62c47cd57a9303ee741fe) | true if Float27_Optional has been explicitly set to null
`public float `[`Float28_Optional`](#structFRHAPI__MatchTimelineEvent_1a2586596bc4bb3dfa3b7403a6755ebbaa) | 
`public bool `[`Float28_IsSet`](#structFRHAPI__MatchTimelineEvent_1a4d880bb36066101c2b20938efe579d92) | true if Float28_Optional has been set to a value
`public bool `[`Float28_IsNull`](#structFRHAPI__MatchTimelineEvent_1a2ff6045b9c83b02e9f54f564edee5bb7) | true if Float28_Optional has been explicitly set to null
`public float `[`Float29_Optional`](#structFRHAPI__MatchTimelineEvent_1a5bf0c7f0ea86ca37daa39ddaf5228e59) | 
`public bool `[`Float29_IsSet`](#structFRHAPI__MatchTimelineEvent_1a92473216b95fedbb0bbb608ab30036e7) | true if Float29_Optional has been set to a value
`public bool `[`Float29_IsNull`](#structFRHAPI__MatchTimelineEvent_1ac2257be502f870fb20d0462a760aeda4) | true if Float29_Optional has been explicitly set to null
`public float `[`Float30_Optional`](#structFRHAPI__MatchTimelineEvent_1ac97af44ce92fc233d6933e6bc1b66058) | 
`public bool `[`Float30_IsSet`](#structFRHAPI__MatchTimelineEvent_1afc94be79df35fe4e44e956fd4da94d90) | true if Float30_Optional has been set to a value
`public bool `[`Float30_IsNull`](#structFRHAPI__MatchTimelineEvent_1aefc73b3e34694c854e7ce1687a049b87) | true if Float30_Optional has been explicitly set to null
`public float `[`Float31_Optional`](#structFRHAPI__MatchTimelineEvent_1a056cac1a55ae6c0f77a501a7b07ee026) | 
`public bool `[`Float31_IsSet`](#structFRHAPI__MatchTimelineEvent_1a753e4225bdc40171e5678103010079d1) | true if Float31_Optional has been set to a value
`public bool `[`Float31_IsNull`](#structFRHAPI__MatchTimelineEvent_1aefd64cc73b72bd8e5de22ecf06b84f25) | true if Float31_Optional has been explicitly set to null
`public float `[`Float32_Optional`](#structFRHAPI__MatchTimelineEvent_1a1028fdef7b0bd5d8c841897967dcae70) | 
`public bool `[`Float32_IsSet`](#structFRHAPI__MatchTimelineEvent_1ac2af8d3502ca3af32d62cf35b1da7524) | true if Float32_Optional has been set to a value
`public bool `[`Float32_IsNull`](#structFRHAPI__MatchTimelineEvent_1aee25bf2ad3a7f96947b62012d177472b) | true if Float32_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__MatchTimelineEvent_1a626b4165b789eba6a4de25dc877917bd)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchTimelineEvent_1a2574557e325d5693cb48bbf2cb7c188b)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetCreatedInto`](#structFRHAPI__MatchTimelineEvent_1a0f41da06cd6d611d4c4081d99340ba89)`()` | Gets the value of CreatedInto_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCreatedInto`](#structFRHAPI__MatchTimelineEvent_1a5439f1ff69a23d9e99a64179cfe484ae)`() const` | Gets the value of CreatedInto_Optional, regardless of it having been set.
`public inline const int32 & `[`GetCreatedInto`](#structFRHAPI__MatchTimelineEvent_1a2a575ed63928863036cc4162ffa5bbab)`(const int32 & DefaultValue) const` | Gets the value of CreatedInto_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedInto`](#structFRHAPI__MatchTimelineEvent_1ab6cfe139588b4377b1a0c386b1e4a846)`(int32 & OutValue) const` | Fills OutValue with the value of CreatedInto_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetCreatedIntoOrNull`](#structFRHAPI__MatchTimelineEvent_1aa9eedb1e80babf3db4385acd3dba5916)`()` | Returns a pointer to CreatedInto_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetCreatedIntoOrNull`](#structFRHAPI__MatchTimelineEvent_1a7aebc952f5da4f47b5071f3e514d627a)`() const` | Returns a pointer to CreatedInto_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedInto`](#structFRHAPI__MatchTimelineEvent_1a8273634edaef46f39aa818854326d193)`(const int32 & NewValue)` | Sets the value of CreatedInto_Optional and also sets CreatedInto_IsSet to true.
`public inline void `[`SetCreatedInto`](#structFRHAPI__MatchTimelineEvent_1acdd403e04365314a9353c6bd1dea27a8)`(int32 && NewValue)` | Sets the value of CreatedInto_Optional and also sets CreatedInto_IsSet to true using move semantics.
`public inline void `[`ClearCreatedInto`](#structFRHAPI__MatchTimelineEvent_1aca2f1ff2c72f6c09a52df0ccc9862fa7)`()` | Clears the value of CreatedInto_Optional and sets CreatedInto_IsSet to false.
`public inline bool `[`IsCreatedIntoSet`](#structFRHAPI__MatchTimelineEvent_1a356a11a9013c5d7bde44e59daeb4f36b)`() const` | Checks whether CreatedInto_Optional has been set.
`public inline bool `[`IsCreatedIntoDefaultValue`](#structFRHAPI__MatchTimelineEvent_1a1bb2a44fee9301a978dd20f788cd0b01)`() const` | Returns true if CreatedInto_Optional is set and matches the default value.
`public inline void `[`SetCreatedIntoToDefault`](#structFRHAPI__MatchTimelineEvent_1a11360e1648d7a370b708d44f0a2ef0df)`()` | Sets the value of CreatedInto_Optional to its default and also sets CreatedInto_IsSet to true.
`public inline void `[`SetCreatedIntoToNull`](#structFRHAPI__MatchTimelineEvent_1a3daea9bd774e43638343af5ba9034a1b)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCreatedIntoNull`](#structFRHAPI__MatchTimelineEvent_1a46271b5ce70ee6fb90f048b22e2a850e)`() const` | Checks whether CreatedInto_Optional is set to null.
`public inline FDateTime & `[`GetCreatedDt`](#structFRHAPI__MatchTimelineEvent_1a23b995f0d28a17c306b5353f3a947690)`()` | Gets the value of CreatedDt_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedDt`](#structFRHAPI__MatchTimelineEvent_1acd3c8aea1a156fa7b6ba88c0da1e59db)`() const` | Gets the value of CreatedDt_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedDt`](#structFRHAPI__MatchTimelineEvent_1af979d0d5fa19353a1f023fcfe18e0cee)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedDt_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedDt`](#structFRHAPI__MatchTimelineEvent_1ae032a336df039b59b47f17c0451e111d)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedDt_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetCreatedDtOrNull`](#structFRHAPI__MatchTimelineEvent_1ac99ffec165cf7435a5a30e350afba61f)`()` | Returns a pointer to CreatedDt_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetCreatedDtOrNull`](#structFRHAPI__MatchTimelineEvent_1a759660877412027ff173c887e312ca1c)`() const` | Returns a pointer to CreatedDt_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedDt`](#structFRHAPI__MatchTimelineEvent_1aab2fe687ccd656f3ecb045f567466f6b)`(const FDateTime & NewValue)` | Sets the value of CreatedDt_Optional and also sets CreatedDt_IsSet to true.
`public inline void `[`SetCreatedDt`](#structFRHAPI__MatchTimelineEvent_1af71971cc6c677b2a67cf50fbe5fa327a)`(FDateTime && NewValue)` | Sets the value of CreatedDt_Optional and also sets CreatedDt_IsSet to true using move semantics.
`public inline void `[`ClearCreatedDt`](#structFRHAPI__MatchTimelineEvent_1add6500bcf5937146815a505858241b24)`()` | Clears the value of CreatedDt_Optional and sets CreatedDt_IsSet to false.
`public inline bool `[`IsCreatedDtSet`](#structFRHAPI__MatchTimelineEvent_1afec6825811d6b641d2e026ec76b352aa)`() const` | Checks whether CreatedDt_Optional has been set.
`public inline void `[`SetCreatedDtToNull`](#structFRHAPI__MatchTimelineEvent_1a9fbf35c331a116562e7e862c0ce85387)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCreatedDtNull`](#structFRHAPI__MatchTimelineEvent_1ae979d673af6845bfa91dea78e20a1d1e)`() const` | Checks whether CreatedDt_Optional is set to null.
`public inline FString & `[`GetType`](#structFRHAPI__MatchTimelineEvent_1afb27cd58c4fd4713195077d177820794)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchTimelineEvent_1a6d09b53db57fc033234fef9b83f6eb61)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchTimelineEvent_1af6eafe8e65c5b2ea59bef9c410bd9c4c)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__MatchTimelineEvent_1a73120a724e599f87e1dfe11e4ebdfc0d)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchTimelineEvent_1a9803935351702f7aef128b7daaa578cb)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchTimelineEvent_1aa679cb0ca3550eb04dc63b1a6dc8675c)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__MatchTimelineEvent_1a1df07d16fcc1c4646aa03e5fa8b06bc7)`(const FString & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`SetType`](#structFRHAPI__MatchTimelineEvent_1a7da01ba6280a272b3d65ef06611251e6)`(FString && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__MatchTimelineEvent_1ad0699927de601eb12d90312d40c72bef)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline bool `[`IsTypeSet`](#structFRHAPI__MatchTimelineEvent_1ad45db0412c0e9d34efd9acd43d815095)`() const` | Checks whether Type_Optional has been set.
`public inline void `[`SetTypeToNull`](#structFRHAPI__MatchTimelineEvent_1ad136203516bfa77982abdd7ec022c900)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTypeNull`](#structFRHAPI__MatchTimelineEvent_1ab3146d1f8b6c291153a8543b53921670)`() const` | Checks whether Type_Optional is set to null.
`public inline FString & `[`GetType2`](#structFRHAPI__MatchTimelineEvent_1ac17839e63a634c2e72cee406dec56c72)`()` | Gets the value of Type2_Optional, regardless of it having been set.
`public inline const FString & `[`GetType2`](#structFRHAPI__MatchTimelineEvent_1a99491276c1450e495c07fae3c8c86fe2)`() const` | Gets the value of Type2_Optional, regardless of it having been set.
`public inline const FString & `[`GetType2`](#structFRHAPI__MatchTimelineEvent_1aa26546fbbd71e84256d8de9d901f3197)`(const FString & DefaultValue) const` | Gets the value of Type2_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType2`](#structFRHAPI__MatchTimelineEvent_1a5d48d3fc66752262988ae447372d98ca)`(FString & OutValue) const` | Fills OutValue with the value of Type2_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetType2OrNull`](#structFRHAPI__MatchTimelineEvent_1a61e3e586e943066e3df5128746818c03)`()` | Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetType2OrNull`](#structFRHAPI__MatchTimelineEvent_1a635523a34e28cdf9a9c4830b259da790)`() const` | Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType2`](#structFRHAPI__MatchTimelineEvent_1a0548da06dfae837f7a87abfec9a16b49)`(const FString & NewValue)` | Sets the value of Type2_Optional and also sets Type2_IsSet to true.
`public inline void `[`SetType2`](#structFRHAPI__MatchTimelineEvent_1a8c326c309e94e229420d325418281106)`(FString && NewValue)` | Sets the value of Type2_Optional and also sets Type2_IsSet to true using move semantics.
`public inline void `[`ClearType2`](#structFRHAPI__MatchTimelineEvent_1a69e249319219979f9f163851be7dc76a)`()` | Clears the value of Type2_Optional and sets Type2_IsSet to false.
`public inline bool `[`IsType2Set`](#structFRHAPI__MatchTimelineEvent_1af8662cdc087d8201e9fa600efbc46ff4)`() const` | Checks whether Type2_Optional has been set.
`public inline void `[`SetType2ToNull`](#structFRHAPI__MatchTimelineEvent_1a0eed7f8b0a1d04fdf9cee732e5da59ae)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsType2Null`](#structFRHAPI__MatchTimelineEvent_1ad69874668039f670e736edb7b5e9c9a8)`() const` | Checks whether Type2_Optional is set to null.
`public inline FString & `[`GetType3`](#structFRHAPI__MatchTimelineEvent_1abd464e183ac961456521076916b4e50b)`()` | Gets the value of Type3_Optional, regardless of it having been set.
`public inline const FString & `[`GetType3`](#structFRHAPI__MatchTimelineEvent_1a96b94af9ab71830099ada623b0b76dde)`() const` | Gets the value of Type3_Optional, regardless of it having been set.
`public inline const FString & `[`GetType3`](#structFRHAPI__MatchTimelineEvent_1a1db8d0fa86cb399b91c6082309fca0ac)`(const FString & DefaultValue) const` | Gets the value of Type3_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType3`](#structFRHAPI__MatchTimelineEvent_1acad0070c79d51da2135fde2fdfd56475)`(FString & OutValue) const` | Fills OutValue with the value of Type3_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetType3OrNull`](#structFRHAPI__MatchTimelineEvent_1a842bb38ae805cf43a23d73460942e796)`()` | Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetType3OrNull`](#structFRHAPI__MatchTimelineEvent_1a970a4139f6062608951cf9a8819ee671)`() const` | Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType3`](#structFRHAPI__MatchTimelineEvent_1a42292444cab07597b94942ee4967ede3)`(const FString & NewValue)` | Sets the value of Type3_Optional and also sets Type3_IsSet to true.
`public inline void `[`SetType3`](#structFRHAPI__MatchTimelineEvent_1a047bf6ba782927c925ba276b309ae618)`(FString && NewValue)` | Sets the value of Type3_Optional and also sets Type3_IsSet to true using move semantics.
`public inline void `[`ClearType3`](#structFRHAPI__MatchTimelineEvent_1a259c1d79a7d01a96ab949abc8240d15a)`()` | Clears the value of Type3_Optional and sets Type3_IsSet to false.
`public inline bool `[`IsType3Set`](#structFRHAPI__MatchTimelineEvent_1af3e310600154677023bf26eefab55a91)`() const` | Checks whether Type3_Optional has been set.
`public inline void `[`SetType3ToNull`](#structFRHAPI__MatchTimelineEvent_1a26673cf7e83bf34593f7f8da6a7c97e6)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsType3Null`](#structFRHAPI__MatchTimelineEvent_1af19627d9b23a511d9fb8d1d06191f6b8)`() const` | Checks whether Type3_Optional is set to null.
`public inline FString & `[`GetType4`](#structFRHAPI__MatchTimelineEvent_1a8460f4afece5c5632f26a3645cf8469c)`()` | Gets the value of Type4_Optional, regardless of it having been set.
`public inline const FString & `[`GetType4`](#structFRHAPI__MatchTimelineEvent_1aaa7d6bef119a8113411854a326ee7c1e)`() const` | Gets the value of Type4_Optional, regardless of it having been set.
`public inline const FString & `[`GetType4`](#structFRHAPI__MatchTimelineEvent_1a82762ab955ad0ca3aa84467f603dc8a3)`(const FString & DefaultValue) const` | Gets the value of Type4_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType4`](#structFRHAPI__MatchTimelineEvent_1a5a5ff220cb74b307d6bd6bbf3e50c831)`(FString & OutValue) const` | Fills OutValue with the value of Type4_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetType4OrNull`](#structFRHAPI__MatchTimelineEvent_1a075212d835528253331b6f8b6f530025)`()` | Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetType4OrNull`](#structFRHAPI__MatchTimelineEvent_1a3b4f4c03a1ecf78df1b48ba4c4e10d1d)`() const` | Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType4`](#structFRHAPI__MatchTimelineEvent_1a0d39eb1819a9445f445e46cf092d67b8)`(const FString & NewValue)` | Sets the value of Type4_Optional and also sets Type4_IsSet to true.
`public inline void `[`SetType4`](#structFRHAPI__MatchTimelineEvent_1a92e91ff4e525757683dda5d6a8b43f58)`(FString && NewValue)` | Sets the value of Type4_Optional and also sets Type4_IsSet to true using move semantics.
`public inline void `[`ClearType4`](#structFRHAPI__MatchTimelineEvent_1ab82236cdc24e1a1a022a0cbcf081bfc1)`()` | Clears the value of Type4_Optional and sets Type4_IsSet to false.
`public inline bool `[`IsType4Set`](#structFRHAPI__MatchTimelineEvent_1adfb86e8e462ad79314655c25c46b20c0)`() const` | Checks whether Type4_Optional has been set.
`public inline void `[`SetType4ToNull`](#structFRHAPI__MatchTimelineEvent_1a48a864a3e2acafa80804ff5648e9328e)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsType4Null`](#structFRHAPI__MatchTimelineEvent_1a30eae85ebfd3ba54950b3d22b7dd83e4)`() const` | Checks whether Type4_Optional is set to null.
`public inline float & `[`GetLocX`](#structFRHAPI__MatchTimelineEvent_1a0ab3e0153945f2a389572b00aa1caf48)`()` | Gets the value of LocX_Optional, regardless of it having been set.
`public inline const float & `[`GetLocX`](#structFRHAPI__MatchTimelineEvent_1ac6762d15586bbe25540e0f9e32236a96)`() const` | Gets the value of LocX_Optional, regardless of it having been set.
`public inline const float & `[`GetLocX`](#structFRHAPI__MatchTimelineEvent_1a7d5534e7cc8586ff18ca4c8430f18c89)`(const float & DefaultValue) const` | Gets the value of LocX_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLocX`](#structFRHAPI__MatchTimelineEvent_1a6d0a226f9e8ed7d14203adf56cd1e33a)`(float & OutValue) const` | Fills OutValue with the value of LocX_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetLocXOrNull`](#structFRHAPI__MatchTimelineEvent_1a369a1277c26911034f206bbbb6270c4e)`()` | Returns a pointer to LocX_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetLocXOrNull`](#structFRHAPI__MatchTimelineEvent_1a0c1bf422a07b18fa9007f199a8e24dcd)`() const` | Returns a pointer to LocX_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLocX`](#structFRHAPI__MatchTimelineEvent_1a5da8527f1f973a454fa10651bd8f5c7c)`(const float & NewValue)` | Sets the value of LocX_Optional and also sets LocX_IsSet to true.
`public inline void `[`SetLocX`](#structFRHAPI__MatchTimelineEvent_1a1a5f00ee0d8abdd0c6085c90dcce3654)`(float && NewValue)` | Sets the value of LocX_Optional and also sets LocX_IsSet to true using move semantics.
`public inline void `[`ClearLocX`](#structFRHAPI__MatchTimelineEvent_1aa2d5cfd4bed1ecac5ae1d56d95622415)`()` | Clears the value of LocX_Optional and sets LocX_IsSet to false.
`public inline bool `[`IsLocXSet`](#structFRHAPI__MatchTimelineEvent_1a7e2e4cd8978aef53362c302934abffca)`() const` | Checks whether LocX_Optional has been set.
`public inline void `[`SetLocXToNull`](#structFRHAPI__MatchTimelineEvent_1a2d539a9fb4f427df5ed19ccb22cf83eb)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsLocXNull`](#structFRHAPI__MatchTimelineEvent_1a0f09b51805855e26682680f40978c920)`() const` | Checks whether LocX_Optional is set to null.
`public inline float & `[`GetLocY`](#structFRHAPI__MatchTimelineEvent_1ae34c2b753fd8b982a2fc1f31ca4771c6)`()` | Gets the value of LocY_Optional, regardless of it having been set.
`public inline const float & `[`GetLocY`](#structFRHAPI__MatchTimelineEvent_1a18f7f353d1e4669bf2933739ca01ec3c)`() const` | Gets the value of LocY_Optional, regardless of it having been set.
`public inline const float & `[`GetLocY`](#structFRHAPI__MatchTimelineEvent_1acabcc1fae34e0e129bbd037844b7cc1b)`(const float & DefaultValue) const` | Gets the value of LocY_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLocY`](#structFRHAPI__MatchTimelineEvent_1a6c28181df66bb0078915916bb20579f9)`(float & OutValue) const` | Fills OutValue with the value of LocY_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetLocYOrNull`](#structFRHAPI__MatchTimelineEvent_1a9a61d45769e3c4558d19440cca72fe94)`()` | Returns a pointer to LocY_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetLocYOrNull`](#structFRHAPI__MatchTimelineEvent_1aee1a22b979d8c4071fef208c0a0f753a)`() const` | Returns a pointer to LocY_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLocY`](#structFRHAPI__MatchTimelineEvent_1accafc79cfab8c9453c2b9074e82fc9d4)`(const float & NewValue)` | Sets the value of LocY_Optional and also sets LocY_IsSet to true.
`public inline void `[`SetLocY`](#structFRHAPI__MatchTimelineEvent_1a0699d2564d2e78268009dabfa4814b77)`(float && NewValue)` | Sets the value of LocY_Optional and also sets LocY_IsSet to true using move semantics.
`public inline void `[`ClearLocY`](#structFRHAPI__MatchTimelineEvent_1acd52d7c8274991d0ecb7523ace7473f5)`()` | Clears the value of LocY_Optional and sets LocY_IsSet to false.
`public inline bool `[`IsLocYSet`](#structFRHAPI__MatchTimelineEvent_1a5509eba7dc228f4eb6e1c73c982ff290)`() const` | Checks whether LocY_Optional has been set.
`public inline void `[`SetLocYToNull`](#structFRHAPI__MatchTimelineEvent_1afc62fcb1c83aa756523201aba5650d02)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsLocYNull`](#structFRHAPI__MatchTimelineEvent_1aa5739ce05ae6e2e5c64c53e7e51fa5cf)`() const` | Checks whether LocY_Optional is set to null.
`public inline float & `[`GetLocZ`](#structFRHAPI__MatchTimelineEvent_1af5e31fd2194f854cfa2f91ce3ca723c8)`()` | Gets the value of LocZ_Optional, regardless of it having been set.
`public inline const float & `[`GetLocZ`](#structFRHAPI__MatchTimelineEvent_1ad75d258afda757e8a08f664a2ac4d9eb)`() const` | Gets the value of LocZ_Optional, regardless of it having been set.
`public inline const float & `[`GetLocZ`](#structFRHAPI__MatchTimelineEvent_1a8332fab224372c75dadd5b9d4aadcf20)`(const float & DefaultValue) const` | Gets the value of LocZ_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLocZ`](#structFRHAPI__MatchTimelineEvent_1a23eef5f0de98eaaed6a76c43223244a5)`(float & OutValue) const` | Fills OutValue with the value of LocZ_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetLocZOrNull`](#structFRHAPI__MatchTimelineEvent_1ad56a7245b9d5c7a645bbacc2f984a5ac)`()` | Returns a pointer to LocZ_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetLocZOrNull`](#structFRHAPI__MatchTimelineEvent_1a14f204d9f820d1d2db38f5a3d51cdfdd)`() const` | Returns a pointer to LocZ_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLocZ`](#structFRHAPI__MatchTimelineEvent_1aada1c0b3f7f8d8bee8ae025cfbf233ab)`(const float & NewValue)` | Sets the value of LocZ_Optional and also sets LocZ_IsSet to true.
`public inline void `[`SetLocZ`](#structFRHAPI__MatchTimelineEvent_1a5e5d6f05f4daff32f3a13a24ba347547)`(float && NewValue)` | Sets the value of LocZ_Optional and also sets LocZ_IsSet to true using move semantics.
`public inline void `[`ClearLocZ`](#structFRHAPI__MatchTimelineEvent_1a758aa7740b7e5f40ba55606c4a9fbbd1)`()` | Clears the value of LocZ_Optional and sets LocZ_IsSet to false.
`public inline bool `[`IsLocZSet`](#structFRHAPI__MatchTimelineEvent_1a7b3fa7f47e270262d530e6a2bb045fed)`() const` | Checks whether LocZ_Optional has been set.
`public inline void `[`SetLocZToNull`](#structFRHAPI__MatchTimelineEvent_1a770282814680b281ebd516dc8e5940c8)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsLocZNull`](#structFRHAPI__MatchTimelineEvent_1a934adfcfdbf7c1957c87c63b9867c55a)`() const` | Checks whether LocZ_Optional is set to null.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1aeefc73b9b6958738e78d21f34bec0ff8)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a09458e7cb483f030a88de8e3ca8e0b6b)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1ab07eea55933ee5fb28fff0cdaca2f4aa)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a3b4f578249f0ea7951d9a975498043ab)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchTimelineEvent_1a70d3a190130dfbf4da5da3cdef783194)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchTimelineEvent_1adc2311a203d55c30dc091db3b97c0b84)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a66f787da5b911988ce7cea4083465fd2)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a5c464d93f788e996590e66c9be2d0c3d)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1ab565c7e037efb50a6a7283757c7ccf19)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__MatchTimelineEvent_1aa51268c58039402d86ac2be12b2fdef9)`() const` | Checks whether PlayerUuid_Optional has been set.
`public inline void `[`SetPlayerUuidToNull`](#structFRHAPI__MatchTimelineEvent_1a7708a00946cd3b8589b9deac26819ff5)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPlayerUuidNull`](#structFRHAPI__MatchTimelineEvent_1a7c8f6ec50f5f9bf9fe0a2eea483e4536)`() const` | Checks whether PlayerUuid_Optional is set to null.
`public inline FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a9eec4254b922df50a667b6233a693595)`()` | Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__MatchTimelineEvent_1aa6b84c7bcd9642e16da62cc4a4f037a5)`() const` | Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__MatchTimelineEvent_1aa5bc979cdedcdc9eb8e2ac2e3183bd9d)`(const FGuid & DefaultValue) const` | Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSourcePlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a4a77a92fdb6015a20bca9595f44fc872)`(FGuid & OutValue) const` | Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__MatchTimelineEvent_1a938a79624747be6894a76e9e4fc9c87d)`()` | Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__MatchTimelineEvent_1ad8340259b6772713587b64541c611c23)`() const` | Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__MatchTimelineEvent_1af5de616f39f9b16c7a708e177a86ae0f)`(const FGuid & NewValue)` | Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.
`public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a2494c58bf8eb3a6b767d3cdc8cd778ef)`(FGuid && NewValue)` | Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearSourcePlayerUuid`](#structFRHAPI__MatchTimelineEvent_1affe8756a00e36d1517c15be9e353080d)`()` | Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.
`public inline bool `[`IsSourcePlayerUuidSet`](#structFRHAPI__MatchTimelineEvent_1a8bddb95b1e2452ce44f3adec4d6a35a7)`() const` | Checks whether SourcePlayerUuid_Optional has been set.
`public inline void `[`SetSourcePlayerUuidToNull`](#structFRHAPI__MatchTimelineEvent_1a8c5f5438bdd7a09bf71e27bd821e0ac4)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsSourcePlayerUuidNull`](#structFRHAPI__MatchTimelineEvent_1ac1af944f09d371d89fdf054040f86a20)`() const` | Checks whether SourcePlayerUuid_Optional is set to null.
`public inline FString & `[`GetSourceId`](#structFRHAPI__MatchTimelineEvent_1a6fe0c8342d5a937213c704a2734a6c69)`()` | Gets the value of SourceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetSourceId`](#structFRHAPI__MatchTimelineEvent_1a4d332bf46c7318b621899b6bd11277d8)`() const` | Gets the value of SourceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetSourceId`](#structFRHAPI__MatchTimelineEvent_1aa84708a5f6db47f73c5f7e42f172d671)`(const FString & DefaultValue) const` | Gets the value of SourceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSourceId`](#structFRHAPI__MatchTimelineEvent_1ac64d74e1cc99ce53f43eec30823b176e)`(FString & OutValue) const` | Fills OutValue with the value of SourceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSourceIdOrNull`](#structFRHAPI__MatchTimelineEvent_1a72791820917b462a006a3fa2b2dfbd71)`()` | Returns a pointer to SourceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSourceIdOrNull`](#structFRHAPI__MatchTimelineEvent_1ae71ba225169e72a0f0d1dc6cf04de791)`() const` | Returns a pointer to SourceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSourceId`](#structFRHAPI__MatchTimelineEvent_1af496e5aec51d25c8c268add140a34986)`(const FString & NewValue)` | Sets the value of SourceId_Optional and also sets SourceId_IsSet to true.
`public inline void `[`SetSourceId`](#structFRHAPI__MatchTimelineEvent_1a5d152578b2481bb17229fc8a9793faa3)`(FString && NewValue)` | Sets the value of SourceId_Optional and also sets SourceId_IsSet to true using move semantics.
`public inline void `[`ClearSourceId`](#structFRHAPI__MatchTimelineEvent_1a6c217fa613446ee33733e88befd8d8e2)`()` | Clears the value of SourceId_Optional and sets SourceId_IsSet to false.
`public inline bool `[`IsSourceIdSet`](#structFRHAPI__MatchTimelineEvent_1a23bcb21cc20ec88ab7687c22ec2c078d)`() const` | Checks whether SourceId_Optional has been set.
`public inline void `[`SetSourceIdToNull`](#structFRHAPI__MatchTimelineEvent_1aa4c7f0fc14037cf48e04853d21972fcc)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsSourceIdNull`](#structFRHAPI__MatchTimelineEvent_1a2c5ee18a09de243c1d45d160c017b88b)`() const` | Checks whether SourceId_Optional is set to null.
`public inline FString & `[`GetSourceId2`](#structFRHAPI__MatchTimelineEvent_1a2d71c1f547f8afa33b0dcce55d0dabd1)`()` | Gets the value of SourceId2_Optional, regardless of it having been set.
`public inline const FString & `[`GetSourceId2`](#structFRHAPI__MatchTimelineEvent_1aaf8f819daffd415a0172abb94eecbc3d)`() const` | Gets the value of SourceId2_Optional, regardless of it having been set.
`public inline const FString & `[`GetSourceId2`](#structFRHAPI__MatchTimelineEvent_1ad484e32d9986c39ba6a0a33de46d2d15)`(const FString & DefaultValue) const` | Gets the value of SourceId2_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSourceId2`](#structFRHAPI__MatchTimelineEvent_1a93b6df64fd30f36f74975b8d5c79104a)`(FString & OutValue) const` | Fills OutValue with the value of SourceId2_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSourceId2OrNull`](#structFRHAPI__MatchTimelineEvent_1aa2b970610cac60910839db16289c868d)`()` | Returns a pointer to SourceId2_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSourceId2OrNull`](#structFRHAPI__MatchTimelineEvent_1a2f4d0407793b5198bf7bdfba5b01869b)`() const` | Returns a pointer to SourceId2_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSourceId2`](#structFRHAPI__MatchTimelineEvent_1ad01a3f095ff2f459db93de79c857037c)`(const FString & NewValue)` | Sets the value of SourceId2_Optional and also sets SourceId2_IsSet to true.
`public inline void `[`SetSourceId2`](#structFRHAPI__MatchTimelineEvent_1af173f35a6639f73d6763e88ea06b6d75)`(FString && NewValue)` | Sets the value of SourceId2_Optional and also sets SourceId2_IsSet to true using move semantics.
`public inline void `[`ClearSourceId2`](#structFRHAPI__MatchTimelineEvent_1a0aeee2c744cb177d4c8f4e38879f09ff)`()` | Clears the value of SourceId2_Optional and sets SourceId2_IsSet to false.
`public inline bool `[`IsSourceId2Set`](#structFRHAPI__MatchTimelineEvent_1a92a880576b195454eb30f23e3841efa7)`() const` | Checks whether SourceId2_Optional has been set.
`public inline void `[`SetSourceId2ToNull`](#structFRHAPI__MatchTimelineEvent_1a0817d1ca3a38a9b25230ae914bb4641a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsSourceId2Null`](#structFRHAPI__MatchTimelineEvent_1a9cb1e5366235913220589a51af965f1e)`() const` | Checks whether SourceId2_Optional is set to null.
`public inline FString & `[`GetSourceId3`](#structFRHAPI__MatchTimelineEvent_1a942387fd1e79795140fd05c5a2632afb)`()` | Gets the value of SourceId3_Optional, regardless of it having been set.
`public inline const FString & `[`GetSourceId3`](#structFRHAPI__MatchTimelineEvent_1ad6620c1e4d1ea15a933a2a6aaccb2935)`() const` | Gets the value of SourceId3_Optional, regardless of it having been set.
`public inline const FString & `[`GetSourceId3`](#structFRHAPI__MatchTimelineEvent_1a33b8dcd5c10679b4de7449f638e8a551)`(const FString & DefaultValue) const` | Gets the value of SourceId3_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSourceId3`](#structFRHAPI__MatchTimelineEvent_1af6cca4fe56772e6689cc65793ad7cdf0)`(FString & OutValue) const` | Fills OutValue with the value of SourceId3_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSourceId3OrNull`](#structFRHAPI__MatchTimelineEvent_1ab61abd0f7f3dca48ad6950dfbff46e4f)`()` | Returns a pointer to SourceId3_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSourceId3OrNull`](#structFRHAPI__MatchTimelineEvent_1a2925d8f683a29a8f96315ed7ad1a4a69)`() const` | Returns a pointer to SourceId3_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSourceId3`](#structFRHAPI__MatchTimelineEvent_1a6363fc331cb88966058a0be376af938d)`(const FString & NewValue)` | Sets the value of SourceId3_Optional and also sets SourceId3_IsSet to true.
`public inline void `[`SetSourceId3`](#structFRHAPI__MatchTimelineEvent_1a7ea4f43a93fa916ba3dceb58bf607428)`(FString && NewValue)` | Sets the value of SourceId3_Optional and also sets SourceId3_IsSet to true using move semantics.
`public inline void `[`ClearSourceId3`](#structFRHAPI__MatchTimelineEvent_1ad2d8024c45fa42d9f52a3396e8dbec8f)`()` | Clears the value of SourceId3_Optional and sets SourceId3_IsSet to false.
`public inline bool `[`IsSourceId3Set`](#structFRHAPI__MatchTimelineEvent_1a0f821d8f210ccc69aa347622f78dc61c)`() const` | Checks whether SourceId3_Optional has been set.
`public inline void `[`SetSourceId3ToNull`](#structFRHAPI__MatchTimelineEvent_1aacd2aafd3a7839294c24e4ea1380d437)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsSourceId3Null`](#structFRHAPI__MatchTimelineEvent_1ab03a894e20af1bf44f10dfe14b33010e)`() const` | Checks whether SourceId3_Optional is set to null.
`public inline FString & `[`GetSourceId4`](#structFRHAPI__MatchTimelineEvent_1a637785b000cbad2d338f09e6385426f3)`()` | Gets the value of SourceId4_Optional, regardless of it having been set.
`public inline const FString & `[`GetSourceId4`](#structFRHAPI__MatchTimelineEvent_1a457ae5c04e264058978cf347ed8b7e51)`() const` | Gets the value of SourceId4_Optional, regardless of it having been set.
`public inline const FString & `[`GetSourceId4`](#structFRHAPI__MatchTimelineEvent_1ad259c2c58a1fef3939476306b4131062)`(const FString & DefaultValue) const` | Gets the value of SourceId4_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSourceId4`](#structFRHAPI__MatchTimelineEvent_1a10793919f013d5c8ad41713349b04283)`(FString & OutValue) const` | Fills OutValue with the value of SourceId4_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSourceId4OrNull`](#structFRHAPI__MatchTimelineEvent_1aef5ffc8ae1354f569c49ba02be66256f)`()` | Returns a pointer to SourceId4_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSourceId4OrNull`](#structFRHAPI__MatchTimelineEvent_1a1c477f2dbb4238c58d7b03a3e80dd285)`() const` | Returns a pointer to SourceId4_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSourceId4`](#structFRHAPI__MatchTimelineEvent_1ae54b5c90ac69c641a26af32cf7ccdf58)`(const FString & NewValue)` | Sets the value of SourceId4_Optional and also sets SourceId4_IsSet to true.
`public inline void `[`SetSourceId4`](#structFRHAPI__MatchTimelineEvent_1a8a369d41032229a4ad9873c171cbb8f0)`(FString && NewValue)` | Sets the value of SourceId4_Optional and also sets SourceId4_IsSet to true using move semantics.
`public inline void `[`ClearSourceId4`](#structFRHAPI__MatchTimelineEvent_1afc4c548ec7674c1c1cd827f592f6d4c5)`()` | Clears the value of SourceId4_Optional and sets SourceId4_IsSet to false.
`public inline bool `[`IsSourceId4Set`](#structFRHAPI__MatchTimelineEvent_1a82c3dc3c28aaa40cdb51bb72c334779b)`() const` | Checks whether SourceId4_Optional has been set.
`public inline void `[`SetSourceId4ToNull`](#structFRHAPI__MatchTimelineEvent_1a08a714aadf5b77d2c9d696d45ebf3d1f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsSourceId4Null`](#structFRHAPI__MatchTimelineEvent_1a6d63ad5b112037369dd923a80b398d5b)`() const` | Checks whether SourceId4_Optional is set to null.
`public inline FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a1ee19f9796381525a176b08bab2c9be8)`()` | Gets the value of TargetPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1ad94452e66fbeacf8ad568033b4f300f6)`() const` | Gets the value of TargetPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a224ac2b881f0b8d11287ffe3bc1d07e9)`(const FGuid & DefaultValue) const` | Gets the value of TargetPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTargetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1af555322e3fcd05ddc62ec7117ca9e513)`(FGuid & OutValue) const` | Fills OutValue with the value of TargetPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetTargetPlayerUuidOrNull`](#structFRHAPI__MatchTimelineEvent_1a79de6d7c343f430c5c3cac6738329924)`()` | Returns a pointer to TargetPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetTargetPlayerUuidOrNull`](#structFRHAPI__MatchTimelineEvent_1a4edde20f02486b47a3ad3b468bc7da0f)`() const` | Returns a pointer to TargetPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTargetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1aea78e8159cb6068f51b5fa78036cca4b)`(const FGuid & NewValue)` | Sets the value of TargetPlayerUuid_Optional and also sets TargetPlayerUuid_IsSet to true.
`public inline void `[`SetTargetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a4c32fd848073bf47f21fefef9a0810d4)`(FGuid && NewValue)` | Sets the value of TargetPlayerUuid_Optional and also sets TargetPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearTargetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a44505bb0c5e18d45aeb809d0db9d456d)`()` | Clears the value of TargetPlayerUuid_Optional and sets TargetPlayerUuid_IsSet to false.
`public inline bool `[`IsTargetPlayerUuidSet`](#structFRHAPI__MatchTimelineEvent_1af6ea0b55d3555e073ec2b7b8bc78597e)`() const` | Checks whether TargetPlayerUuid_Optional has been set.
`public inline void `[`SetTargetPlayerUuidToNull`](#structFRHAPI__MatchTimelineEvent_1a30660262e2a382351a080fe6a1f695a1)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTargetPlayerUuidNull`](#structFRHAPI__MatchTimelineEvent_1a90504bba72ca463e90b7498b2c35aeac)`() const` | Checks whether TargetPlayerUuid_Optional is set to null.
`public inline FString & `[`GetTargetId`](#structFRHAPI__MatchTimelineEvent_1a007619ff042d4e3bbafa6742a933d5e9)`()` | Gets the value of TargetId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTargetId`](#structFRHAPI__MatchTimelineEvent_1ada9b54c90ab23c7ba7287ba3d9876830)`() const` | Gets the value of TargetId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTargetId`](#structFRHAPI__MatchTimelineEvent_1a4202587b0073872391eb02201ae0115d)`(const FString & DefaultValue) const` | Gets the value of TargetId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTargetId`](#structFRHAPI__MatchTimelineEvent_1abd9397990c143398b2349882f1cea621)`(FString & OutValue) const` | Fills OutValue with the value of TargetId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTargetIdOrNull`](#structFRHAPI__MatchTimelineEvent_1af4ae9bccadff52101232b73a8657251a)`()` | Returns a pointer to TargetId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTargetIdOrNull`](#structFRHAPI__MatchTimelineEvent_1a1f2f087d0add8d618e0afe9867ce67e7)`() const` | Returns a pointer to TargetId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTargetId`](#structFRHAPI__MatchTimelineEvent_1acf3dbaec3e74c28e0cfd5e5cee671dcc)`(const FString & NewValue)` | Sets the value of TargetId_Optional and also sets TargetId_IsSet to true.
`public inline void `[`SetTargetId`](#structFRHAPI__MatchTimelineEvent_1a13937966b2a8aa1facc82c1c7f43b998)`(FString && NewValue)` | Sets the value of TargetId_Optional and also sets TargetId_IsSet to true using move semantics.
`public inline void `[`ClearTargetId`](#structFRHAPI__MatchTimelineEvent_1a6d5eec0b6e03f4358f60b0e6a187ee24)`()` | Clears the value of TargetId_Optional and sets TargetId_IsSet to false.
`public inline bool `[`IsTargetIdSet`](#structFRHAPI__MatchTimelineEvent_1a592d463c8c618d68356c285789539fb4)`() const` | Checks whether TargetId_Optional has been set.
`public inline void `[`SetTargetIdToNull`](#structFRHAPI__MatchTimelineEvent_1a0b2cffe74aa0c0d644a0f50aaaa1b795)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTargetIdNull`](#structFRHAPI__MatchTimelineEvent_1a49aebfea073e9e8511d26cf347b96aa7)`() const` | Checks whether TargetId_Optional is set to null.
`public inline FString & `[`GetTargetId2`](#structFRHAPI__MatchTimelineEvent_1abefc9f313a863a69a43f0c7c49088cfc)`()` | Gets the value of TargetId2_Optional, regardless of it having been set.
`public inline const FString & `[`GetTargetId2`](#structFRHAPI__MatchTimelineEvent_1a1c09eb9197948087b40dac609515020d)`() const` | Gets the value of TargetId2_Optional, regardless of it having been set.
`public inline const FString & `[`GetTargetId2`](#structFRHAPI__MatchTimelineEvent_1affd7f57c582ea996d0cf5908924d7d64)`(const FString & DefaultValue) const` | Gets the value of TargetId2_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTargetId2`](#structFRHAPI__MatchTimelineEvent_1a86b54e304ed598f607d1088407a2897b)`(FString & OutValue) const` | Fills OutValue with the value of TargetId2_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTargetId2OrNull`](#structFRHAPI__MatchTimelineEvent_1a14750568f1925b7ff385e9d96056a92a)`()` | Returns a pointer to TargetId2_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTargetId2OrNull`](#structFRHAPI__MatchTimelineEvent_1a0c19466e724a9388e2366413c52a199f)`() const` | Returns a pointer to TargetId2_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTargetId2`](#structFRHAPI__MatchTimelineEvent_1aff4d665f99e9c7526e8b059d70df404f)`(const FString & NewValue)` | Sets the value of TargetId2_Optional and also sets TargetId2_IsSet to true.
`public inline void `[`SetTargetId2`](#structFRHAPI__MatchTimelineEvent_1a791586447757abc866d3fb291b9aa936)`(FString && NewValue)` | Sets the value of TargetId2_Optional and also sets TargetId2_IsSet to true using move semantics.
`public inline void `[`ClearTargetId2`](#structFRHAPI__MatchTimelineEvent_1acef8285fe6d28388d3e9e35003b12bfd)`()` | Clears the value of TargetId2_Optional and sets TargetId2_IsSet to false.
`public inline bool `[`IsTargetId2Set`](#structFRHAPI__MatchTimelineEvent_1ab8004f09b73f595746d116f5cb5148fa)`() const` | Checks whether TargetId2_Optional has been set.
`public inline void `[`SetTargetId2ToNull`](#structFRHAPI__MatchTimelineEvent_1a2ab642941bd864238618e198388b5cef)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTargetId2Null`](#structFRHAPI__MatchTimelineEvent_1a46d1991efd4eb2572e1560899043c20b)`() const` | Checks whether TargetId2_Optional is set to null.
`public inline FString & `[`GetTargetId3`](#structFRHAPI__MatchTimelineEvent_1a1af376990bc0b56c762978b75ba3912e)`()` | Gets the value of TargetId3_Optional, regardless of it having been set.
`public inline const FString & `[`GetTargetId3`](#structFRHAPI__MatchTimelineEvent_1af503c889475b14e679bb610c248e5530)`() const` | Gets the value of TargetId3_Optional, regardless of it having been set.
`public inline const FString & `[`GetTargetId3`](#structFRHAPI__MatchTimelineEvent_1a339e8f8debfd5b87813bbd87f50dddda)`(const FString & DefaultValue) const` | Gets the value of TargetId3_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTargetId3`](#structFRHAPI__MatchTimelineEvent_1a55cc73912d0c4703eba9a2ad32cac967)`(FString & OutValue) const` | Fills OutValue with the value of TargetId3_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTargetId3OrNull`](#structFRHAPI__MatchTimelineEvent_1a75b97042f099231950fbf1cb8cb13e44)`()` | Returns a pointer to TargetId3_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTargetId3OrNull`](#structFRHAPI__MatchTimelineEvent_1af0202c2a1fc934e69e1e3ef9b9ccce65)`() const` | Returns a pointer to TargetId3_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTargetId3`](#structFRHAPI__MatchTimelineEvent_1aa53a6a2125700f66ae3440b69da2ef80)`(const FString & NewValue)` | Sets the value of TargetId3_Optional and also sets TargetId3_IsSet to true.
`public inline void `[`SetTargetId3`](#structFRHAPI__MatchTimelineEvent_1a6e0c9848b31b614f782f7b6c84ccdb0d)`(FString && NewValue)` | Sets the value of TargetId3_Optional and also sets TargetId3_IsSet to true using move semantics.
`public inline void `[`ClearTargetId3`](#structFRHAPI__MatchTimelineEvent_1a45f28cdb3da9b02d9039a213186217e4)`()` | Clears the value of TargetId3_Optional and sets TargetId3_IsSet to false.
`public inline bool `[`IsTargetId3Set`](#structFRHAPI__MatchTimelineEvent_1a1bd054d39b0ee14ab64d8ef3c3daa379)`() const` | Checks whether TargetId3_Optional has been set.
`public inline void `[`SetTargetId3ToNull`](#structFRHAPI__MatchTimelineEvent_1af9940a0a5b79533d609a14b52a701640)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTargetId3Null`](#structFRHAPI__MatchTimelineEvent_1a1001b44e61e7fdf36b3e220bd774eb98)`() const` | Checks whether TargetId3_Optional is set to null.
`public inline FString & `[`GetTargetId4`](#structFRHAPI__MatchTimelineEvent_1a72bf96bc2f542cc59ca019b703f54510)`()` | Gets the value of TargetId4_Optional, regardless of it having been set.
`public inline const FString & `[`GetTargetId4`](#structFRHAPI__MatchTimelineEvent_1a2033480c7e52fe851c16be294f12a719)`() const` | Gets the value of TargetId4_Optional, regardless of it having been set.
`public inline const FString & `[`GetTargetId4`](#structFRHAPI__MatchTimelineEvent_1ad67c394fcb0cc601a60fcb1f0e3804c4)`(const FString & DefaultValue) const` | Gets the value of TargetId4_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTargetId4`](#structFRHAPI__MatchTimelineEvent_1aed12f4ae9624744c8217c59e473a8a85)`(FString & OutValue) const` | Fills OutValue with the value of TargetId4_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTargetId4OrNull`](#structFRHAPI__MatchTimelineEvent_1acabd756c98c96165b7893dfc0f23907d)`()` | Returns a pointer to TargetId4_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTargetId4OrNull`](#structFRHAPI__MatchTimelineEvent_1aa472eb45d06566d16ceae7fddaf5e8d2)`() const` | Returns a pointer to TargetId4_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTargetId4`](#structFRHAPI__MatchTimelineEvent_1a2441ea68dd7883474d81bf29101ee7e8)`(const FString & NewValue)` | Sets the value of TargetId4_Optional and also sets TargetId4_IsSet to true.
`public inline void `[`SetTargetId4`](#structFRHAPI__MatchTimelineEvent_1a6604a498ac52f56eb36717d767415ed3)`(FString && NewValue)` | Sets the value of TargetId4_Optional and also sets TargetId4_IsSet to true using move semantics.
`public inline void `[`ClearTargetId4`](#structFRHAPI__MatchTimelineEvent_1a85d5fb948094a7cc8881c72d0a10cd3e)`()` | Clears the value of TargetId4_Optional and sets TargetId4_IsSet to false.
`public inline bool `[`IsTargetId4Set`](#structFRHAPI__MatchTimelineEvent_1a99b0e180a61a8f746ef666a84df2a807)`() const` | Checks whether TargetId4_Optional has been set.
`public inline void `[`SetTargetId4ToNull`](#structFRHAPI__MatchTimelineEvent_1a03edbb508d3bd7d12d814dd5fd3e0ddb)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTargetId4Null`](#structFRHAPI__MatchTimelineEvent_1a0e71af8a4cc50f3bffe7ec441b285970)`() const` | Checks whether TargetId4_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchTimelineEvent_1ad4bb0569565c3890b12424ecd02f0024)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchTimelineEvent_1a6432d6aff9e4ae7325e3926f297e1af1)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchTimelineEvent_1af6bc62f83041f7396dc8ea7e7eda9d0c)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchTimelineEvent_1a0326ef4f69a5c3af270da4f86c481a47)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchTimelineEvent_1a02ded057063a877d1cae14c9c9a95079)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchTimelineEvent_1a5a96ab4dc6bda4b2981346662023a06c)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchTimelineEvent_1aaa0c5aea57c89437362e1732c41e7061)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchTimelineEvent_1ad57a22be922f7e2ef32a341e4bc9466f)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchTimelineEvent_1ae448b9ae5f762f06302051620d016fe5)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchTimelineEvent_1a36dd0f559a6ca5149ce514664894c7e3)`() const` | Checks whether CustomData_Optional has been set.
`public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchTimelineEvent_1aedb3dcab4d76e25ca0b7a2a298cec643)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchTimelineEvent_1a0ece037e9481fa2a6e28031822781eca)`() const` | Checks whether CustomData_Optional is set to null.
`public inline int32 & `[`GetInt1`](#structFRHAPI__MatchTimelineEvent_1aeadb952188651f485c5d4ac5df31abb2)`()` | Gets the value of Int1_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt1`](#structFRHAPI__MatchTimelineEvent_1a66ab3886cab4641d8a42e9c0f7eb5b8a)`() const` | Gets the value of Int1_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt1`](#structFRHAPI__MatchTimelineEvent_1ae107d1090373a9e1b5b6d0002c984ce1)`(const int32 & DefaultValue) const` | Gets the value of Int1_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt1`](#structFRHAPI__MatchTimelineEvent_1a3b2e166a25f56a020540b25e4ff6cf87)`(int32 & OutValue) const` | Fills OutValue with the value of Int1_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt1OrNull`](#structFRHAPI__MatchTimelineEvent_1ace9ea926d48b0abc4aacd9b9a45c2fe8)`()` | Returns a pointer to Int1_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt1OrNull`](#structFRHAPI__MatchTimelineEvent_1a9a90dda79c5b433915821ad87f1b68dc)`() const` | Returns a pointer to Int1_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt1`](#structFRHAPI__MatchTimelineEvent_1a483889d7938c6c8f03bde16f149b1c0a)`(const int32 & NewValue)` | Sets the value of Int1_Optional and also sets Int1_IsSet to true.
`public inline void `[`SetInt1`](#structFRHAPI__MatchTimelineEvent_1a3c66c7837f70e938cbb5296c25959c64)`(int32 && NewValue)` | Sets the value of Int1_Optional and also sets Int1_IsSet to true using move semantics.
`public inline void `[`ClearInt1`](#structFRHAPI__MatchTimelineEvent_1ada7c1f3abc86d1ce4bf67e27a36ee049)`()` | Clears the value of Int1_Optional and sets Int1_IsSet to false.
`public inline bool `[`IsInt1Set`](#structFRHAPI__MatchTimelineEvent_1a05a1de6eb0c60a0c6eb2df89193e86b1)`() const` | Checks whether Int1_Optional has been set.
`public inline bool `[`IsInt1DefaultValue`](#structFRHAPI__MatchTimelineEvent_1ac61e23285c6a23a67a56ccb7b70a0432)`() const` | Returns true if Int1_Optional is set and matches the default value.
`public inline void `[`SetInt1ToDefault`](#structFRHAPI__MatchTimelineEvent_1a7340c987e1ae64773e1cd252b7b7ab63)`()` | Sets the value of Int1_Optional to its default and also sets Int1_IsSet to true.
`public inline void `[`SetInt1ToNull`](#structFRHAPI__MatchTimelineEvent_1a044425270f7d5515c751a57ec2e7fdea)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt1Null`](#structFRHAPI__MatchTimelineEvent_1a5a616158606f7592f0085ddfdc42de95)`() const` | Checks whether Int1_Optional is set to null.
`public inline int32 & `[`GetInt2`](#structFRHAPI__MatchTimelineEvent_1a516442d83dfd0aa7981d916ba7211e7d)`()` | Gets the value of Int2_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt2`](#structFRHAPI__MatchTimelineEvent_1a6489eafd31d1b2f58cafb99e0548dc30)`() const` | Gets the value of Int2_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt2`](#structFRHAPI__MatchTimelineEvent_1a864bdde4f56c3e338ba82682857a02b1)`(const int32 & DefaultValue) const` | Gets the value of Int2_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt2`](#structFRHAPI__MatchTimelineEvent_1a3e309bb1f29527a954973a3bb453cc49)`(int32 & OutValue) const` | Fills OutValue with the value of Int2_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt2OrNull`](#structFRHAPI__MatchTimelineEvent_1a5db714d896e76f79fb97a4e2de00dbcb)`()` | Returns a pointer to Int2_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt2OrNull`](#structFRHAPI__MatchTimelineEvent_1a7c67a668c5972f53423371878fa1f9ba)`() const` | Returns a pointer to Int2_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt2`](#structFRHAPI__MatchTimelineEvent_1a66caf46aad906b8ccf14ac8506f86976)`(const int32 & NewValue)` | Sets the value of Int2_Optional and also sets Int2_IsSet to true.
`public inline void `[`SetInt2`](#structFRHAPI__MatchTimelineEvent_1ace3eeb90beb0a7ae573cc57d9845e2c4)`(int32 && NewValue)` | Sets the value of Int2_Optional and also sets Int2_IsSet to true using move semantics.
`public inline void `[`ClearInt2`](#structFRHAPI__MatchTimelineEvent_1a99e9d819cbfd627c7c5cbe7644c54fa8)`()` | Clears the value of Int2_Optional and sets Int2_IsSet to false.
`public inline bool `[`IsInt2Set`](#structFRHAPI__MatchTimelineEvent_1a60f919cb3efbf2eaaaeab0b84b1368a7)`() const` | Checks whether Int2_Optional has been set.
`public inline bool `[`IsInt2DefaultValue`](#structFRHAPI__MatchTimelineEvent_1acd589abe5a6bc3f66779483249592548)`() const` | Returns true if Int2_Optional is set and matches the default value.
`public inline void `[`SetInt2ToDefault`](#structFRHAPI__MatchTimelineEvent_1a6ddcb2851f396dd4a8592fbb978a7302)`()` | Sets the value of Int2_Optional to its default and also sets Int2_IsSet to true.
`public inline void `[`SetInt2ToNull`](#structFRHAPI__MatchTimelineEvent_1a2183ee57b37bb3edd9463d0bde130488)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt2Null`](#structFRHAPI__MatchTimelineEvent_1ab148d42ba16cf11c7a5d78b73d7ce469)`() const` | Checks whether Int2_Optional is set to null.
`public inline int32 & `[`GetInt3`](#structFRHAPI__MatchTimelineEvent_1a8d6d8fd537e5a94d495e6e83f84108ec)`()` | Gets the value of Int3_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt3`](#structFRHAPI__MatchTimelineEvent_1ac25e98dc0cc74d9ae6ce66d0d3d5cd01)`() const` | Gets the value of Int3_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt3`](#structFRHAPI__MatchTimelineEvent_1a446355484054d99d497e5f14b5e975bc)`(const int32 & DefaultValue) const` | Gets the value of Int3_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt3`](#structFRHAPI__MatchTimelineEvent_1a4665e2e1f0c2dc0f4a5dfe8f2d224b4d)`(int32 & OutValue) const` | Fills OutValue with the value of Int3_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt3OrNull`](#structFRHAPI__MatchTimelineEvent_1a80e7f8ed089bfebe144922fddf824942)`()` | Returns a pointer to Int3_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt3OrNull`](#structFRHAPI__MatchTimelineEvent_1a30dedd54213ffd2311749f5d4903d31e)`() const` | Returns a pointer to Int3_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt3`](#structFRHAPI__MatchTimelineEvent_1a163eff20c29c664e117eb5e881c89bb3)`(const int32 & NewValue)` | Sets the value of Int3_Optional and also sets Int3_IsSet to true.
`public inline void `[`SetInt3`](#structFRHAPI__MatchTimelineEvent_1a862d077eb23dfae4fa5f10ecee904a72)`(int32 && NewValue)` | Sets the value of Int3_Optional and also sets Int3_IsSet to true using move semantics.
`public inline void `[`ClearInt3`](#structFRHAPI__MatchTimelineEvent_1a3d26a7e04f14fa40a3de6bc1c41aad96)`()` | Clears the value of Int3_Optional and sets Int3_IsSet to false.
`public inline bool `[`IsInt3Set`](#structFRHAPI__MatchTimelineEvent_1a297001357ec42f05872efe4cba36bace)`() const` | Checks whether Int3_Optional has been set.
`public inline bool `[`IsInt3DefaultValue`](#structFRHAPI__MatchTimelineEvent_1afe15ed0735d59a41704822b64df6387e)`() const` | Returns true if Int3_Optional is set and matches the default value.
`public inline void `[`SetInt3ToDefault`](#structFRHAPI__MatchTimelineEvent_1af9f1da668d442341c8613b9499b99839)`()` | Sets the value of Int3_Optional to its default and also sets Int3_IsSet to true.
`public inline void `[`SetInt3ToNull`](#structFRHAPI__MatchTimelineEvent_1a9edba849ad084d91d5f74c4f1505a376)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt3Null`](#structFRHAPI__MatchTimelineEvent_1a66ee75ab417f11902d5e2970f70a1ea8)`() const` | Checks whether Int3_Optional is set to null.
`public inline int32 & `[`GetInt4`](#structFRHAPI__MatchTimelineEvent_1a7ddbc09df0b7fea1906d6e411b5f967d)`()` | Gets the value of Int4_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt4`](#structFRHAPI__MatchTimelineEvent_1a877871e4b593859b7b259ce775b36cf2)`() const` | Gets the value of Int4_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt4`](#structFRHAPI__MatchTimelineEvent_1a18e7466a67b968e5cbecb0c73ece356f)`(const int32 & DefaultValue) const` | Gets the value of Int4_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt4`](#structFRHAPI__MatchTimelineEvent_1aff26abad2457dd320d5056082170315c)`(int32 & OutValue) const` | Fills OutValue with the value of Int4_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt4OrNull`](#structFRHAPI__MatchTimelineEvent_1a991d63ab4690b38294b40b584fdb6ace)`()` | Returns a pointer to Int4_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt4OrNull`](#structFRHAPI__MatchTimelineEvent_1a057d5f508e7cf3f5e0526491047e9d66)`() const` | Returns a pointer to Int4_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt4`](#structFRHAPI__MatchTimelineEvent_1a0e6e8d9f64240e77084df96038997ddc)`(const int32 & NewValue)` | Sets the value of Int4_Optional and also sets Int4_IsSet to true.
`public inline void `[`SetInt4`](#structFRHAPI__MatchTimelineEvent_1abfec0466725be2e68295b54e14b7f775)`(int32 && NewValue)` | Sets the value of Int4_Optional and also sets Int4_IsSet to true using move semantics.
`public inline void `[`ClearInt4`](#structFRHAPI__MatchTimelineEvent_1ab06d2f36183d8c117d7654fddc34f23d)`()` | Clears the value of Int4_Optional and sets Int4_IsSet to false.
`public inline bool `[`IsInt4Set`](#structFRHAPI__MatchTimelineEvent_1a49369da3bed20c0ffeb64442ebcd1019)`() const` | Checks whether Int4_Optional has been set.
`public inline bool `[`IsInt4DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a72be44b7e7e2083a4a5c07e00e3ebedb)`() const` | Returns true if Int4_Optional is set and matches the default value.
`public inline void `[`SetInt4ToDefault`](#structFRHAPI__MatchTimelineEvent_1a48715b8894a91cdbef1e56acf0fe2090)`()` | Sets the value of Int4_Optional to its default and also sets Int4_IsSet to true.
`public inline void `[`SetInt4ToNull`](#structFRHAPI__MatchTimelineEvent_1a5a98ae31e5a65fa4150ef65dde912d10)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt4Null`](#structFRHAPI__MatchTimelineEvent_1aa871a0ebd540daf17881a3a55e08c86d)`() const` | Checks whether Int4_Optional is set to null.
`public inline int32 & `[`GetInt5`](#structFRHAPI__MatchTimelineEvent_1a9d2e32b7bce591dea2fce6d10afbe005)`()` | Gets the value of Int5_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt5`](#structFRHAPI__MatchTimelineEvent_1a939f1980aaceb35fb83c045d761fc375)`() const` | Gets the value of Int5_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt5`](#structFRHAPI__MatchTimelineEvent_1a1b9721482a8e91c676303280dde46861)`(const int32 & DefaultValue) const` | Gets the value of Int5_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt5`](#structFRHAPI__MatchTimelineEvent_1a81a03568c4498bcb3abcaf85d09b6caf)`(int32 & OutValue) const` | Fills OutValue with the value of Int5_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt5OrNull`](#structFRHAPI__MatchTimelineEvent_1a798f920be7b589e75e99a55788f45fcd)`()` | Returns a pointer to Int5_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt5OrNull`](#structFRHAPI__MatchTimelineEvent_1a0913ee60cac3056940cc0806d6187fdb)`() const` | Returns a pointer to Int5_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt5`](#structFRHAPI__MatchTimelineEvent_1a8bdbe802753c8d26833fa55153993b0e)`(const int32 & NewValue)` | Sets the value of Int5_Optional and also sets Int5_IsSet to true.
`public inline void `[`SetInt5`](#structFRHAPI__MatchTimelineEvent_1a87f0f166a2e342a88c8e79dda4c23ef4)`(int32 && NewValue)` | Sets the value of Int5_Optional and also sets Int5_IsSet to true using move semantics.
`public inline void `[`ClearInt5`](#structFRHAPI__MatchTimelineEvent_1a3589dab957e07c67cfefb79d6595a580)`()` | Clears the value of Int5_Optional and sets Int5_IsSet to false.
`public inline bool `[`IsInt5Set`](#structFRHAPI__MatchTimelineEvent_1a1ee484acbc7141c844be445524572ff0)`() const` | Checks whether Int5_Optional has been set.
`public inline bool `[`IsInt5DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a8cc358253157fa8f51c9aa60e143e140)`() const` | Returns true if Int5_Optional is set and matches the default value.
`public inline void `[`SetInt5ToDefault`](#structFRHAPI__MatchTimelineEvent_1aa0cf1b060863a2558bf265deac3cf382)`()` | Sets the value of Int5_Optional to its default and also sets Int5_IsSet to true.
`public inline void `[`SetInt5ToNull`](#structFRHAPI__MatchTimelineEvent_1abe78bbafc6e10ffb75ed2b43247b5e3f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt5Null`](#structFRHAPI__MatchTimelineEvent_1aa6bc5ef306d5d7065a37327032751ec9)`() const` | Checks whether Int5_Optional is set to null.
`public inline int32 & `[`GetInt6`](#structFRHAPI__MatchTimelineEvent_1a9986beecc83b309a432364ddb605739d)`()` | Gets the value of Int6_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt6`](#structFRHAPI__MatchTimelineEvent_1a6e7839f26c0dda620a9b71bee3111617)`() const` | Gets the value of Int6_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt6`](#structFRHAPI__MatchTimelineEvent_1a11893f631c8da0bbe8688cf9b0a0fafe)`(const int32 & DefaultValue) const` | Gets the value of Int6_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt6`](#structFRHAPI__MatchTimelineEvent_1ad1894099949ef48379d760aff54f8816)`(int32 & OutValue) const` | Fills OutValue with the value of Int6_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt6OrNull`](#structFRHAPI__MatchTimelineEvent_1a5705c7b0f187385ff6847b5478bb1a6e)`()` | Returns a pointer to Int6_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt6OrNull`](#structFRHAPI__MatchTimelineEvent_1a0fd876955541be389f69d20c13b79165)`() const` | Returns a pointer to Int6_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt6`](#structFRHAPI__MatchTimelineEvent_1af0ce78926903480eedddc86f20871adc)`(const int32 & NewValue)` | Sets the value of Int6_Optional and also sets Int6_IsSet to true.
`public inline void `[`SetInt6`](#structFRHAPI__MatchTimelineEvent_1a3f6ef4d93c4c5bf34672fe2b1a447d17)`(int32 && NewValue)` | Sets the value of Int6_Optional and also sets Int6_IsSet to true using move semantics.
`public inline void `[`ClearInt6`](#structFRHAPI__MatchTimelineEvent_1aef64a533f9aab3dc91825d0f61bdbf9b)`()` | Clears the value of Int6_Optional and sets Int6_IsSet to false.
`public inline bool `[`IsInt6Set`](#structFRHAPI__MatchTimelineEvent_1a862b2028e34a61f7ac658eeaa28e0863)`() const` | Checks whether Int6_Optional has been set.
`public inline bool `[`IsInt6DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a7bb15e35dc730694f77cbc57c0a7e1a5)`() const` | Returns true if Int6_Optional is set and matches the default value.
`public inline void `[`SetInt6ToDefault`](#structFRHAPI__MatchTimelineEvent_1ae7602d983317fc367e02fcaa666fadfa)`()` | Sets the value of Int6_Optional to its default and also sets Int6_IsSet to true.
`public inline void `[`SetInt6ToNull`](#structFRHAPI__MatchTimelineEvent_1a4f18c1df4924c7d9c25b8c636dacae41)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt6Null`](#structFRHAPI__MatchTimelineEvent_1a03803d439b2103b3d89a9ba807806290)`() const` | Checks whether Int6_Optional is set to null.
`public inline int32 & `[`GetInt7`](#structFRHAPI__MatchTimelineEvent_1a49efa031cb498e45f0947e3c80780e5e)`()` | Gets the value of Int7_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt7`](#structFRHAPI__MatchTimelineEvent_1a25314a9d9556b983891c0707519a2da6)`() const` | Gets the value of Int7_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt7`](#structFRHAPI__MatchTimelineEvent_1ab16d2527125bf733af5320b0eb2c1ed4)`(const int32 & DefaultValue) const` | Gets the value of Int7_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt7`](#structFRHAPI__MatchTimelineEvent_1a896b1cdf5c7f0b0eb121247ee7f2029e)`(int32 & OutValue) const` | Fills OutValue with the value of Int7_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt7OrNull`](#structFRHAPI__MatchTimelineEvent_1abc4c9d0f4ed6c70f0e00b9705a649d93)`()` | Returns a pointer to Int7_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt7OrNull`](#structFRHAPI__MatchTimelineEvent_1a42a0cc927bef7b12eb7e57e5be238c81)`() const` | Returns a pointer to Int7_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt7`](#structFRHAPI__MatchTimelineEvent_1ae96bb670f96d7f2cad9869d8aa93c1ae)`(const int32 & NewValue)` | Sets the value of Int7_Optional and also sets Int7_IsSet to true.
`public inline void `[`SetInt7`](#structFRHAPI__MatchTimelineEvent_1ad6e948aa126e331397a6dc2c1df88792)`(int32 && NewValue)` | Sets the value of Int7_Optional and also sets Int7_IsSet to true using move semantics.
`public inline void `[`ClearInt7`](#structFRHAPI__MatchTimelineEvent_1af6f9dcf4af7ce77152e4d8a40fd750e4)`()` | Clears the value of Int7_Optional and sets Int7_IsSet to false.
`public inline bool `[`IsInt7Set`](#structFRHAPI__MatchTimelineEvent_1a571eb2039082297baeb91be80a00be08)`() const` | Checks whether Int7_Optional has been set.
`public inline bool `[`IsInt7DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a9b5b77677331bf9d3912645c349fc552)`() const` | Returns true if Int7_Optional is set and matches the default value.
`public inline void `[`SetInt7ToDefault`](#structFRHAPI__MatchTimelineEvent_1af44053a9972c12a2dc3b452a1626ff7a)`()` | Sets the value of Int7_Optional to its default and also sets Int7_IsSet to true.
`public inline void `[`SetInt7ToNull`](#structFRHAPI__MatchTimelineEvent_1added6ce351e9a5e8b5debc5b8eb28f61)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt7Null`](#structFRHAPI__MatchTimelineEvent_1a5c2090edd4ef2986503b1d0bf8e8ad73)`() const` | Checks whether Int7_Optional is set to null.
`public inline int32 & `[`GetInt8`](#structFRHAPI__MatchTimelineEvent_1a4efec2ed0d8e9658cbeefe2887139f94)`()` | Gets the value of Int8_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt8`](#structFRHAPI__MatchTimelineEvent_1a54cf5816365edd0e5b67192536b57209)`() const` | Gets the value of Int8_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt8`](#structFRHAPI__MatchTimelineEvent_1a24477667860f43acf5b1a7c5ab2099fa)`(const int32 & DefaultValue) const` | Gets the value of Int8_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt8`](#structFRHAPI__MatchTimelineEvent_1a052b419f11414d879bffe081f66e388b)`(int32 & OutValue) const` | Fills OutValue with the value of Int8_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt8OrNull`](#structFRHAPI__MatchTimelineEvent_1a9fc9437478886ef08df8485427bbd042)`()` | Returns a pointer to Int8_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt8OrNull`](#structFRHAPI__MatchTimelineEvent_1adcb81a487b6d45ea4c8c83e0bdcfa7e9)`() const` | Returns a pointer to Int8_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt8`](#structFRHAPI__MatchTimelineEvent_1ac389519b68e387351b9f12c1eccb19b3)`(const int32 & NewValue)` | Sets the value of Int8_Optional and also sets Int8_IsSet to true.
`public inline void `[`SetInt8`](#structFRHAPI__MatchTimelineEvent_1a45fb2e5c1b6a222976784f804f241a01)`(int32 && NewValue)` | Sets the value of Int8_Optional and also sets Int8_IsSet to true using move semantics.
`public inline void `[`ClearInt8`](#structFRHAPI__MatchTimelineEvent_1a9b5fb5a3d9f2a6a6651f6c481814724c)`()` | Clears the value of Int8_Optional and sets Int8_IsSet to false.
`public inline bool `[`IsInt8Set`](#structFRHAPI__MatchTimelineEvent_1a5cc1abf432ce2b7e99faca8f5d69e05f)`() const` | Checks whether Int8_Optional has been set.
`public inline bool `[`IsInt8DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a1d2cf215aded9eab5b9d46c3e9c4310d)`() const` | Returns true if Int8_Optional is set and matches the default value.
`public inline void `[`SetInt8ToDefault`](#structFRHAPI__MatchTimelineEvent_1aa81f5709794ac67b4177c9db3fe837b0)`()` | Sets the value of Int8_Optional to its default and also sets Int8_IsSet to true.
`public inline void `[`SetInt8ToNull`](#structFRHAPI__MatchTimelineEvent_1aa30b62c7e189ccdf53f6d503a8ec3bba)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt8Null`](#structFRHAPI__MatchTimelineEvent_1aeccd21807af210d8be1173ebcd78bbdb)`() const` | Checks whether Int8_Optional is set to null.
`public inline int32 & `[`GetInt9`](#structFRHAPI__MatchTimelineEvent_1af789cba104499423e69911b54cec2bef)`()` | Gets the value of Int9_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt9`](#structFRHAPI__MatchTimelineEvent_1ab3acd01c870b18bee617ff33650eae73)`() const` | Gets the value of Int9_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt9`](#structFRHAPI__MatchTimelineEvent_1a72b80af6e4cf1b105af2c761141f5529)`(const int32 & DefaultValue) const` | Gets the value of Int9_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt9`](#structFRHAPI__MatchTimelineEvent_1a54af575b3f11bf2a6232bede0e67c747)`(int32 & OutValue) const` | Fills OutValue with the value of Int9_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt9OrNull`](#structFRHAPI__MatchTimelineEvent_1a64d07656e6da19526f98103574472491)`()` | Returns a pointer to Int9_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt9OrNull`](#structFRHAPI__MatchTimelineEvent_1a1b3873bb90293253691e351fac19fe7f)`() const` | Returns a pointer to Int9_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt9`](#structFRHAPI__MatchTimelineEvent_1abd6e326b5b76e8c3facb53698f693952)`(const int32 & NewValue)` | Sets the value of Int9_Optional and also sets Int9_IsSet to true.
`public inline void `[`SetInt9`](#structFRHAPI__MatchTimelineEvent_1adcf35e2b7176d1995ceb03ee1f828510)`(int32 && NewValue)` | Sets the value of Int9_Optional and also sets Int9_IsSet to true using move semantics.
`public inline void `[`ClearInt9`](#structFRHAPI__MatchTimelineEvent_1ab23b016932797a2343a47055e00e8e52)`()` | Clears the value of Int9_Optional and sets Int9_IsSet to false.
`public inline bool `[`IsInt9Set`](#structFRHAPI__MatchTimelineEvent_1a9d6b72f44c3dbabe1974462ddaa2bd11)`() const` | Checks whether Int9_Optional has been set.
`public inline bool `[`IsInt9DefaultValue`](#structFRHAPI__MatchTimelineEvent_1ac3af0cb61d105e8aef6b85c44fdd8af9)`() const` | Returns true if Int9_Optional is set and matches the default value.
`public inline void `[`SetInt9ToDefault`](#structFRHAPI__MatchTimelineEvent_1ade2ea28994252a8d41763c480637ddcd)`()` | Sets the value of Int9_Optional to its default and also sets Int9_IsSet to true.
`public inline void `[`SetInt9ToNull`](#structFRHAPI__MatchTimelineEvent_1a6d669a38a6f31a2b5e0e482309fb60cc)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt9Null`](#structFRHAPI__MatchTimelineEvent_1a08fecab443e1cdfe23d78ddd0b6becdf)`() const` | Checks whether Int9_Optional is set to null.
`public inline int32 & `[`GetInt10`](#structFRHAPI__MatchTimelineEvent_1ab2e54b2525b380c47fdee74c107e5f17)`()` | Gets the value of Int10_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt10`](#structFRHAPI__MatchTimelineEvent_1a1377718688c6fd59e10144bda6d1a51d)`() const` | Gets the value of Int10_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt10`](#structFRHAPI__MatchTimelineEvent_1adf8c5ff6fd00f29667a284e09f2c70f7)`(const int32 & DefaultValue) const` | Gets the value of Int10_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt10`](#structFRHAPI__MatchTimelineEvent_1a569f800cf6633ee58c8d516d85456333)`(int32 & OutValue) const` | Fills OutValue with the value of Int10_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt10OrNull`](#structFRHAPI__MatchTimelineEvent_1a91714b76253e1c3b1cdb779673f5c1a1)`()` | Returns a pointer to Int10_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt10OrNull`](#structFRHAPI__MatchTimelineEvent_1adf63910374f0253c68d8953021ff9001)`() const` | Returns a pointer to Int10_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt10`](#structFRHAPI__MatchTimelineEvent_1a02b616465d17bddc6849a1cc8b449b4f)`(const int32 & NewValue)` | Sets the value of Int10_Optional and also sets Int10_IsSet to true.
`public inline void `[`SetInt10`](#structFRHAPI__MatchTimelineEvent_1a6d987ead9945d9d06c4e8097219f6ba5)`(int32 && NewValue)` | Sets the value of Int10_Optional and also sets Int10_IsSet to true using move semantics.
`public inline void `[`ClearInt10`](#structFRHAPI__MatchTimelineEvent_1af45e752cfef3389a824c49bcc8e5ba96)`()` | Clears the value of Int10_Optional and sets Int10_IsSet to false.
`public inline bool `[`IsInt10Set`](#structFRHAPI__MatchTimelineEvent_1aedffe12aa0ffa336edb214f716b5f2e0)`() const` | Checks whether Int10_Optional has been set.
`public inline bool `[`IsInt10DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a7e62f36f8b1c6290fc27b86f2252fc2f)`() const` | Returns true if Int10_Optional is set and matches the default value.
`public inline void `[`SetInt10ToDefault`](#structFRHAPI__MatchTimelineEvent_1a15efa3a1bfe07a96dadaee8461d21ba8)`()` | Sets the value of Int10_Optional to its default and also sets Int10_IsSet to true.
`public inline void `[`SetInt10ToNull`](#structFRHAPI__MatchTimelineEvent_1af7ceac3174475d38d084f8e1601dfcbf)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt10Null`](#structFRHAPI__MatchTimelineEvent_1a747fa4c3697ed9176522386351166926)`() const` | Checks whether Int10_Optional is set to null.
`public inline int32 & `[`GetInt11`](#structFRHAPI__MatchTimelineEvent_1a6ec12f918b457e095da1b81e4a8ad086)`()` | Gets the value of Int11_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt11`](#structFRHAPI__MatchTimelineEvent_1a30530d9bdace512196ba572336916e14)`() const` | Gets the value of Int11_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt11`](#structFRHAPI__MatchTimelineEvent_1a8f462ffa1b4290c1e0cda6f55f83644e)`(const int32 & DefaultValue) const` | Gets the value of Int11_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt11`](#structFRHAPI__MatchTimelineEvent_1a970f82e955d498ae01ffcaba73447013)`(int32 & OutValue) const` | Fills OutValue with the value of Int11_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt11OrNull`](#structFRHAPI__MatchTimelineEvent_1ab8ada775c320cf20fd72909836f614af)`()` | Returns a pointer to Int11_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt11OrNull`](#structFRHAPI__MatchTimelineEvent_1aaeb399af2c3068e7328af01c5b3e467d)`() const` | Returns a pointer to Int11_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt11`](#structFRHAPI__MatchTimelineEvent_1a3cf0eab34825db1f7177bec01976995a)`(const int32 & NewValue)` | Sets the value of Int11_Optional and also sets Int11_IsSet to true.
`public inline void `[`SetInt11`](#structFRHAPI__MatchTimelineEvent_1a99a58bf1e02d6f6913b769c3a1a47e5d)`(int32 && NewValue)` | Sets the value of Int11_Optional and also sets Int11_IsSet to true using move semantics.
`public inline void `[`ClearInt11`](#structFRHAPI__MatchTimelineEvent_1a76a9827fa7e9b9aafbb8c4266a1bf037)`()` | Clears the value of Int11_Optional and sets Int11_IsSet to false.
`public inline bool `[`IsInt11Set`](#structFRHAPI__MatchTimelineEvent_1a74c2acff8a8d1d949a3ee7141fc932df)`() const` | Checks whether Int11_Optional has been set.
`public inline bool `[`IsInt11DefaultValue`](#structFRHAPI__MatchTimelineEvent_1aa39f5983447ee07be5ec870905ef66b8)`() const` | Returns true if Int11_Optional is set and matches the default value.
`public inline void `[`SetInt11ToDefault`](#structFRHAPI__MatchTimelineEvent_1a5e918c61740a6c87f8abe3437f921d70)`()` | Sets the value of Int11_Optional to its default and also sets Int11_IsSet to true.
`public inline void `[`SetInt11ToNull`](#structFRHAPI__MatchTimelineEvent_1af97d0e9b025b92a32388bdf3db657f71)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt11Null`](#structFRHAPI__MatchTimelineEvent_1a341a5d7060c0d9de0365bebd58d750c6)`() const` | Checks whether Int11_Optional is set to null.
`public inline int32 & `[`GetInt12`](#structFRHAPI__MatchTimelineEvent_1a41e280023f3efb8e9dc77f70813f081f)`()` | Gets the value of Int12_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt12`](#structFRHAPI__MatchTimelineEvent_1ac425fd72d0ff2d89b472b6a831f0c18f)`() const` | Gets the value of Int12_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt12`](#structFRHAPI__MatchTimelineEvent_1ab3049eb21631d92b8c7f1485059413a5)`(const int32 & DefaultValue) const` | Gets the value of Int12_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt12`](#structFRHAPI__MatchTimelineEvent_1a7360230c2b8602c1cb01f5f44172a6ba)`(int32 & OutValue) const` | Fills OutValue with the value of Int12_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt12OrNull`](#structFRHAPI__MatchTimelineEvent_1aac58230200470dec2c104a3414aa6afb)`()` | Returns a pointer to Int12_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt12OrNull`](#structFRHAPI__MatchTimelineEvent_1a78f3dc2523fee577275e318e84487e12)`() const` | Returns a pointer to Int12_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt12`](#structFRHAPI__MatchTimelineEvent_1a33a71d7f140da73662892280ee1cb706)`(const int32 & NewValue)` | Sets the value of Int12_Optional and also sets Int12_IsSet to true.
`public inline void `[`SetInt12`](#structFRHAPI__MatchTimelineEvent_1ac6925dd34af081826c6166a061dc9ebf)`(int32 && NewValue)` | Sets the value of Int12_Optional and also sets Int12_IsSet to true using move semantics.
`public inline void `[`ClearInt12`](#structFRHAPI__MatchTimelineEvent_1af992dffe417493254d7c5b518928d05c)`()` | Clears the value of Int12_Optional and sets Int12_IsSet to false.
`public inline bool `[`IsInt12Set`](#structFRHAPI__MatchTimelineEvent_1a4d56c6bfa9b08d91b9f7a9b2b7796900)`() const` | Checks whether Int12_Optional has been set.
`public inline bool `[`IsInt12DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a10c94348ce0d96060266dad3c80fb440)`() const` | Returns true if Int12_Optional is set and matches the default value.
`public inline void `[`SetInt12ToDefault`](#structFRHAPI__MatchTimelineEvent_1a36ac6797c006ada99c4aa80625f06f0e)`()` | Sets the value of Int12_Optional to its default and also sets Int12_IsSet to true.
`public inline void `[`SetInt12ToNull`](#structFRHAPI__MatchTimelineEvent_1ab304890dfcc85739600092f79eb82a52)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt12Null`](#structFRHAPI__MatchTimelineEvent_1a1f94e16b83f12ac29791cca3adc02caf)`() const` | Checks whether Int12_Optional is set to null.
`public inline int32 & `[`GetInt13`](#structFRHAPI__MatchTimelineEvent_1ad40269c67b5a6517f626ab02aadded3d)`()` | Gets the value of Int13_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt13`](#structFRHAPI__MatchTimelineEvent_1a0f8ced3d1daa07c0ea037c6af249d4c2)`() const` | Gets the value of Int13_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt13`](#structFRHAPI__MatchTimelineEvent_1af77f5b6a5387cd34ca790c036870c4dc)`(const int32 & DefaultValue) const` | Gets the value of Int13_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt13`](#structFRHAPI__MatchTimelineEvent_1af8edea976a65c889cf15a743125f97ce)`(int32 & OutValue) const` | Fills OutValue with the value of Int13_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt13OrNull`](#structFRHAPI__MatchTimelineEvent_1a7f0ee8060c79bbc13c8fa693ebf359b5)`()` | Returns a pointer to Int13_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt13OrNull`](#structFRHAPI__MatchTimelineEvent_1a2a9293842d619596d1dcef9be216fd24)`() const` | Returns a pointer to Int13_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt13`](#structFRHAPI__MatchTimelineEvent_1afb7088d41378b1bb5bb0761234da139f)`(const int32 & NewValue)` | Sets the value of Int13_Optional and also sets Int13_IsSet to true.
`public inline void `[`SetInt13`](#structFRHAPI__MatchTimelineEvent_1a396898d5f58d42988d1194fd0e6ef585)`(int32 && NewValue)` | Sets the value of Int13_Optional and also sets Int13_IsSet to true using move semantics.
`public inline void `[`ClearInt13`](#structFRHAPI__MatchTimelineEvent_1a6a4568363d69384f53fea667d36f425a)`()` | Clears the value of Int13_Optional and sets Int13_IsSet to false.
`public inline bool `[`IsInt13Set`](#structFRHAPI__MatchTimelineEvent_1a7fbc214899d510934ee583938a864d6a)`() const` | Checks whether Int13_Optional has been set.
`public inline bool `[`IsInt13DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a7edb3cf96b263312b97a2ff26afc4a7f)`() const` | Returns true if Int13_Optional is set and matches the default value.
`public inline void `[`SetInt13ToDefault`](#structFRHAPI__MatchTimelineEvent_1a56dc37c69976052ecdd9d6ea57c7b035)`()` | Sets the value of Int13_Optional to its default and also sets Int13_IsSet to true.
`public inline void `[`SetInt13ToNull`](#structFRHAPI__MatchTimelineEvent_1a68888dd359a6fe7575f43aeb45d46ecf)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt13Null`](#structFRHAPI__MatchTimelineEvent_1a8db422083d10887210fa271b0624091e)`() const` | Checks whether Int13_Optional is set to null.
`public inline int32 & `[`GetInt14`](#structFRHAPI__MatchTimelineEvent_1a03f2fba83f6e1dec29a9cce723a2bf3f)`()` | Gets the value of Int14_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt14`](#structFRHAPI__MatchTimelineEvent_1a9a75770099a758775e5ec86ddff50aef)`() const` | Gets the value of Int14_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt14`](#structFRHAPI__MatchTimelineEvent_1a84497b7fee4d9287ceb9801318fb3526)`(const int32 & DefaultValue) const` | Gets the value of Int14_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt14`](#structFRHAPI__MatchTimelineEvent_1aedd5f5bd575ddca2055fd95d3021c6c4)`(int32 & OutValue) const` | Fills OutValue with the value of Int14_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt14OrNull`](#structFRHAPI__MatchTimelineEvent_1a0736764534c07a02633c1c72d9193908)`()` | Returns a pointer to Int14_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt14OrNull`](#structFRHAPI__MatchTimelineEvent_1ac7b0cc645ffdf3c83084a4067b2d5270)`() const` | Returns a pointer to Int14_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt14`](#structFRHAPI__MatchTimelineEvent_1a097da1755dace4eddfb009acca19c14a)`(const int32 & NewValue)` | Sets the value of Int14_Optional and also sets Int14_IsSet to true.
`public inline void `[`SetInt14`](#structFRHAPI__MatchTimelineEvent_1a6439da2ae392621f254b628b72f54053)`(int32 && NewValue)` | Sets the value of Int14_Optional and also sets Int14_IsSet to true using move semantics.
`public inline void `[`ClearInt14`](#structFRHAPI__MatchTimelineEvent_1af0d5514a7c74d727d998ddd9e81fd555)`()` | Clears the value of Int14_Optional and sets Int14_IsSet to false.
`public inline bool `[`IsInt14Set`](#structFRHAPI__MatchTimelineEvent_1a58cbe06e906c31fe4930ca0012d22ae2)`() const` | Checks whether Int14_Optional has been set.
`public inline bool `[`IsInt14DefaultValue`](#structFRHAPI__MatchTimelineEvent_1af1581855ab25621f87c7e101531b3292)`() const` | Returns true if Int14_Optional is set and matches the default value.
`public inline void `[`SetInt14ToDefault`](#structFRHAPI__MatchTimelineEvent_1a251fce812ea0527552efa8d56a990403)`()` | Sets the value of Int14_Optional to its default and also sets Int14_IsSet to true.
`public inline void `[`SetInt14ToNull`](#structFRHAPI__MatchTimelineEvent_1a01f6b585eaaafad4dd8f3089a74cd0a9)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt14Null`](#structFRHAPI__MatchTimelineEvent_1a8e3b010ebd7de540f41a453dbd547d4e)`() const` | Checks whether Int14_Optional is set to null.
`public inline int32 & `[`GetInt15`](#structFRHAPI__MatchTimelineEvent_1ad0f1f6d32d00bfc1fa37b8d17ef2d9c3)`()` | Gets the value of Int15_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt15`](#structFRHAPI__MatchTimelineEvent_1a954b34abeb4fccfb94e728ca8e7fabd3)`() const` | Gets the value of Int15_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt15`](#structFRHAPI__MatchTimelineEvent_1ab4a063dd44a0894b559947e6050f4cb3)`(const int32 & DefaultValue) const` | Gets the value of Int15_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt15`](#structFRHAPI__MatchTimelineEvent_1a3bb4f840006f026e66b5d0dd89b91afb)`(int32 & OutValue) const` | Fills OutValue with the value of Int15_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt15OrNull`](#structFRHAPI__MatchTimelineEvent_1a6dc147b1bfca6278395bd6ed7d83cf1e)`()` | Returns a pointer to Int15_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt15OrNull`](#structFRHAPI__MatchTimelineEvent_1a14063a9c8810716182ee8cecbb84cc66)`() const` | Returns a pointer to Int15_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt15`](#structFRHAPI__MatchTimelineEvent_1a154c20eec2c99662bd1715012da77102)`(const int32 & NewValue)` | Sets the value of Int15_Optional and also sets Int15_IsSet to true.
`public inline void `[`SetInt15`](#structFRHAPI__MatchTimelineEvent_1afdada12c726dc9c9c60ec51fdcd5a9c3)`(int32 && NewValue)` | Sets the value of Int15_Optional and also sets Int15_IsSet to true using move semantics.
`public inline void `[`ClearInt15`](#structFRHAPI__MatchTimelineEvent_1a22ecb8062ca39378dd0130a29f08ad13)`()` | Clears the value of Int15_Optional and sets Int15_IsSet to false.
`public inline bool `[`IsInt15Set`](#structFRHAPI__MatchTimelineEvent_1aa4cf9c12c76d1876444b53669bf5b0af)`() const` | Checks whether Int15_Optional has been set.
`public inline bool `[`IsInt15DefaultValue`](#structFRHAPI__MatchTimelineEvent_1abad0115d3f79679f4a70e61c7d5e179b)`() const` | Returns true if Int15_Optional is set and matches the default value.
`public inline void `[`SetInt15ToDefault`](#structFRHAPI__MatchTimelineEvent_1a914722b5b2b535368b52e7dd8238fd8e)`()` | Sets the value of Int15_Optional to its default and also sets Int15_IsSet to true.
`public inline void `[`SetInt15ToNull`](#structFRHAPI__MatchTimelineEvent_1ab2319a308a7956b61e1ed8f72140f242)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt15Null`](#structFRHAPI__MatchTimelineEvent_1a8e6d42c36a7e7993d3a03ffe1b9faa9d)`() const` | Checks whether Int15_Optional is set to null.
`public inline int32 & `[`GetInt16`](#structFRHAPI__MatchTimelineEvent_1a5f752ecb7e0b8081efdce0190624d0c3)`()` | Gets the value of Int16_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt16`](#structFRHAPI__MatchTimelineEvent_1a8ed7d7353e0caf01b65b89e30bc49850)`() const` | Gets the value of Int16_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt16`](#structFRHAPI__MatchTimelineEvent_1a29309925037042bd28cadf0d7c5d28ab)`(const int32 & DefaultValue) const` | Gets the value of Int16_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt16`](#structFRHAPI__MatchTimelineEvent_1a9e6287ae4cc9d8085e67de7f75f4021a)`(int32 & OutValue) const` | Fills OutValue with the value of Int16_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt16OrNull`](#structFRHAPI__MatchTimelineEvent_1a1007154c72530ab62883b3962979aaa5)`()` | Returns a pointer to Int16_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt16OrNull`](#structFRHAPI__MatchTimelineEvent_1a75364ab6fed9c1a2547add5cf40365b4)`() const` | Returns a pointer to Int16_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt16`](#structFRHAPI__MatchTimelineEvent_1a433210623310809e64b1c84a47614be1)`(const int32 & NewValue)` | Sets the value of Int16_Optional and also sets Int16_IsSet to true.
`public inline void `[`SetInt16`](#structFRHAPI__MatchTimelineEvent_1a84dcc68ae5c248739b3e6dacfb936184)`(int32 && NewValue)` | Sets the value of Int16_Optional and also sets Int16_IsSet to true using move semantics.
`public inline void `[`ClearInt16`](#structFRHAPI__MatchTimelineEvent_1a9cbdcb15ecb8fe18c3346e871ef92e61)`()` | Clears the value of Int16_Optional and sets Int16_IsSet to false.
`public inline bool `[`IsInt16Set`](#structFRHAPI__MatchTimelineEvent_1a4ce28f64d357dadc66d160966bb48e20)`() const` | Checks whether Int16_Optional has been set.
`public inline bool `[`IsInt16DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a1b6ff62f9d669838cdd5837e6cf0d036)`() const` | Returns true if Int16_Optional is set and matches the default value.
`public inline void `[`SetInt16ToDefault`](#structFRHAPI__MatchTimelineEvent_1a5cd21331cb8486db132cde99203de4c4)`()` | Sets the value of Int16_Optional to its default and also sets Int16_IsSet to true.
`public inline void `[`SetInt16ToNull`](#structFRHAPI__MatchTimelineEvent_1a42fde10fb360f34b025467b3fa1ce749)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt16Null`](#structFRHAPI__MatchTimelineEvent_1a2290a6e943102ce4293ddf8b12539d15)`() const` | Checks whether Int16_Optional is set to null.
`public inline int32 & `[`GetInt17`](#structFRHAPI__MatchTimelineEvent_1a77679646d845fc0d8df76943d9aa8e63)`()` | Gets the value of Int17_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt17`](#structFRHAPI__MatchTimelineEvent_1a8ca00f6daa4f9f527bc5724278863251)`() const` | Gets the value of Int17_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt17`](#structFRHAPI__MatchTimelineEvent_1adcb1392dbdd34e66ede561117be91458)`(const int32 & DefaultValue) const` | Gets the value of Int17_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt17`](#structFRHAPI__MatchTimelineEvent_1a2445fa2231da078a874dcaa397fa7439)`(int32 & OutValue) const` | Fills OutValue with the value of Int17_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt17OrNull`](#structFRHAPI__MatchTimelineEvent_1aaa0a2964f9572e8994aa106f35defd80)`()` | Returns a pointer to Int17_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt17OrNull`](#structFRHAPI__MatchTimelineEvent_1af52a370e09df8f89a824b6caa112ebd7)`() const` | Returns a pointer to Int17_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt17`](#structFRHAPI__MatchTimelineEvent_1a4f62c2da6f77d8933513e56f87bd45f5)`(const int32 & NewValue)` | Sets the value of Int17_Optional and also sets Int17_IsSet to true.
`public inline void `[`SetInt17`](#structFRHAPI__MatchTimelineEvent_1ac7f169319a406065e62add4e0a5d19c8)`(int32 && NewValue)` | Sets the value of Int17_Optional and also sets Int17_IsSet to true using move semantics.
`public inline void `[`ClearInt17`](#structFRHAPI__MatchTimelineEvent_1a9080f59d9329edc3bba9343a3463a23a)`()` | Clears the value of Int17_Optional and sets Int17_IsSet to false.
`public inline bool `[`IsInt17Set`](#structFRHAPI__MatchTimelineEvent_1a302c834827725a1730916992c3aeb3d6)`() const` | Checks whether Int17_Optional has been set.
`public inline bool `[`IsInt17DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a09cf5ae718b8bb5edb864cf56ebf42d3)`() const` | Returns true if Int17_Optional is set and matches the default value.
`public inline void `[`SetInt17ToDefault`](#structFRHAPI__MatchTimelineEvent_1aea26a865164fcde809b732cbf47fd899)`()` | Sets the value of Int17_Optional to its default and also sets Int17_IsSet to true.
`public inline void `[`SetInt17ToNull`](#structFRHAPI__MatchTimelineEvent_1a0dffadfc4cc588e1d033388c76e81ee3)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt17Null`](#structFRHAPI__MatchTimelineEvent_1a0b18da9093699fed3855ff0e08111c0f)`() const` | Checks whether Int17_Optional is set to null.
`public inline int32 & `[`GetInt18`](#structFRHAPI__MatchTimelineEvent_1a2230767873f4c9533e175f895704f17f)`()` | Gets the value of Int18_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt18`](#structFRHAPI__MatchTimelineEvent_1ab67a3ab5134e5dbc6fa4d80499e431f1)`() const` | Gets the value of Int18_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt18`](#structFRHAPI__MatchTimelineEvent_1a6192e158e78b9f3b79d7706c7ec81f28)`(const int32 & DefaultValue) const` | Gets the value of Int18_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt18`](#structFRHAPI__MatchTimelineEvent_1aed8a84e6c0ad532a8de81cc0d0e30d1e)`(int32 & OutValue) const` | Fills OutValue with the value of Int18_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt18OrNull`](#structFRHAPI__MatchTimelineEvent_1a3f121a97daa419368fc4c39338eb0e98)`()` | Returns a pointer to Int18_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt18OrNull`](#structFRHAPI__MatchTimelineEvent_1a0e6d12a900eef36e162359a96f2b1a3a)`() const` | Returns a pointer to Int18_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt18`](#structFRHAPI__MatchTimelineEvent_1add402597f1a875b9c2201b79718ef18e)`(const int32 & NewValue)` | Sets the value of Int18_Optional and also sets Int18_IsSet to true.
`public inline void `[`SetInt18`](#structFRHAPI__MatchTimelineEvent_1ab664a147b4898f9303978d7a8576a5cc)`(int32 && NewValue)` | Sets the value of Int18_Optional and also sets Int18_IsSet to true using move semantics.
`public inline void `[`ClearInt18`](#structFRHAPI__MatchTimelineEvent_1aaac8f901e40ed23cca924a8175dd1de0)`()` | Clears the value of Int18_Optional and sets Int18_IsSet to false.
`public inline bool `[`IsInt18Set`](#structFRHAPI__MatchTimelineEvent_1ac46ad348a7b3198b15fac038d75f6356)`() const` | Checks whether Int18_Optional has been set.
`public inline bool `[`IsInt18DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a57f57aefd4ac030614f9d234efc98ce9)`() const` | Returns true if Int18_Optional is set and matches the default value.
`public inline void `[`SetInt18ToDefault`](#structFRHAPI__MatchTimelineEvent_1a29547a9b3dd5aee108f742571d361ff9)`()` | Sets the value of Int18_Optional to its default and also sets Int18_IsSet to true.
`public inline void `[`SetInt18ToNull`](#structFRHAPI__MatchTimelineEvent_1aec710ad86edacedeedabf29587216534)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt18Null`](#structFRHAPI__MatchTimelineEvent_1ae06729dbd1c2d0e3780b6b86d8e7c49b)`() const` | Checks whether Int18_Optional is set to null.
`public inline int32 & `[`GetInt19`](#structFRHAPI__MatchTimelineEvent_1a1250960318a14082cae3cbdec28b6a31)`()` | Gets the value of Int19_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt19`](#structFRHAPI__MatchTimelineEvent_1a074f824b2891f9854e69429e08d8398d)`() const` | Gets the value of Int19_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt19`](#structFRHAPI__MatchTimelineEvent_1aaf466fc4ffaeb5de4f837b57e978878b)`(const int32 & DefaultValue) const` | Gets the value of Int19_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt19`](#structFRHAPI__MatchTimelineEvent_1ae7f32d5fbe465546ccfcb2934923415c)`(int32 & OutValue) const` | Fills OutValue with the value of Int19_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt19OrNull`](#structFRHAPI__MatchTimelineEvent_1a07c82991e8908ae4550cce63ce52d323)`()` | Returns a pointer to Int19_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt19OrNull`](#structFRHAPI__MatchTimelineEvent_1a4ce04b4e10b5885813a87c5ab9b44a0e)`() const` | Returns a pointer to Int19_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt19`](#structFRHAPI__MatchTimelineEvent_1a7572b1e1bf75d0546656fd6a57c23dbb)`(const int32 & NewValue)` | Sets the value of Int19_Optional and also sets Int19_IsSet to true.
`public inline void `[`SetInt19`](#structFRHAPI__MatchTimelineEvent_1aeabc164c90f2a81262da3905c3d9317d)`(int32 && NewValue)` | Sets the value of Int19_Optional and also sets Int19_IsSet to true using move semantics.
`public inline void `[`ClearInt19`](#structFRHAPI__MatchTimelineEvent_1aba2486d1f4532b3a9a9438a6993a9c28)`()` | Clears the value of Int19_Optional and sets Int19_IsSet to false.
`public inline bool `[`IsInt19Set`](#structFRHAPI__MatchTimelineEvent_1af62e62eead38813575c934d9122980dc)`() const` | Checks whether Int19_Optional has been set.
`public inline bool `[`IsInt19DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a5d5c5a723da5916feb5361f5f7624041)`() const` | Returns true if Int19_Optional is set and matches the default value.
`public inline void `[`SetInt19ToDefault`](#structFRHAPI__MatchTimelineEvent_1a73b155a22f84a7907aa21c674ee7982b)`()` | Sets the value of Int19_Optional to its default and also sets Int19_IsSet to true.
`public inline void `[`SetInt19ToNull`](#structFRHAPI__MatchTimelineEvent_1a087ddd93a1a2e1217bc50f2ac9e856ff)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt19Null`](#structFRHAPI__MatchTimelineEvent_1a845777726176ef753111e071595d9d18)`() const` | Checks whether Int19_Optional is set to null.
`public inline int32 & `[`GetInt20`](#structFRHAPI__MatchTimelineEvent_1a5be2e6aa22c1fdf7d64e6cc0075ad505)`()` | Gets the value of Int20_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt20`](#structFRHAPI__MatchTimelineEvent_1a70d5f599e3112af2a216d9b56ff4963a)`() const` | Gets the value of Int20_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt20`](#structFRHAPI__MatchTimelineEvent_1a9beff173e94200b150dfef1bc3e87af7)`(const int32 & DefaultValue) const` | Gets the value of Int20_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt20`](#structFRHAPI__MatchTimelineEvent_1a781ddb6818567c1b3cc18b8452a07df9)`(int32 & OutValue) const` | Fills OutValue with the value of Int20_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt20OrNull`](#structFRHAPI__MatchTimelineEvent_1abef78f9a3318e6970324e984c6cd5666)`()` | Returns a pointer to Int20_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt20OrNull`](#structFRHAPI__MatchTimelineEvent_1af5fed96d54b83327cec95a6bda37ccea)`() const` | Returns a pointer to Int20_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt20`](#structFRHAPI__MatchTimelineEvent_1a89d0abd3f8b38c8411972705883c7935)`(const int32 & NewValue)` | Sets the value of Int20_Optional and also sets Int20_IsSet to true.
`public inline void `[`SetInt20`](#structFRHAPI__MatchTimelineEvent_1ad41487baa15e065737dcd2a8ff0939b5)`(int32 && NewValue)` | Sets the value of Int20_Optional and also sets Int20_IsSet to true using move semantics.
`public inline void `[`ClearInt20`](#structFRHAPI__MatchTimelineEvent_1a710ab0a20056a8be7816a9dea6ae57b9)`()` | Clears the value of Int20_Optional and sets Int20_IsSet to false.
`public inline bool `[`IsInt20Set`](#structFRHAPI__MatchTimelineEvent_1ae40da0e2d89656db9fae541f3a10af4f)`() const` | Checks whether Int20_Optional has been set.
`public inline bool `[`IsInt20DefaultValue`](#structFRHAPI__MatchTimelineEvent_1abecb0470769988827dd0cce7c68b7c23)`() const` | Returns true if Int20_Optional is set and matches the default value.
`public inline void `[`SetInt20ToDefault`](#structFRHAPI__MatchTimelineEvent_1a631cb4249471d793f9fbeab8e3bc069d)`()` | Sets the value of Int20_Optional to its default and also sets Int20_IsSet to true.
`public inline void `[`SetInt20ToNull`](#structFRHAPI__MatchTimelineEvent_1ab6ed5455f40ca26ebc3efbb858bd5b8a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt20Null`](#structFRHAPI__MatchTimelineEvent_1aadc00cdf4f2005e4f813615705f8bf77)`() const` | Checks whether Int20_Optional is set to null.
`public inline int32 & `[`GetInt21`](#structFRHAPI__MatchTimelineEvent_1a74ca5d454d61caecba21a61b811eabc0)`()` | Gets the value of Int21_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt21`](#structFRHAPI__MatchTimelineEvent_1ad273787fa2a7bd8498d8dafeefbd665f)`() const` | Gets the value of Int21_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt21`](#structFRHAPI__MatchTimelineEvent_1a6d89e2d7024a970cf84db7ead775716e)`(const int32 & DefaultValue) const` | Gets the value of Int21_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt21`](#structFRHAPI__MatchTimelineEvent_1a7068dbd3706076a15cbfe6d52fbaaf89)`(int32 & OutValue) const` | Fills OutValue with the value of Int21_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt21OrNull`](#structFRHAPI__MatchTimelineEvent_1af7832433892adc4d3dc5ea7cba58af2d)`()` | Returns a pointer to Int21_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt21OrNull`](#structFRHAPI__MatchTimelineEvent_1a94c031742c3863cc3b66980f364df866)`() const` | Returns a pointer to Int21_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt21`](#structFRHAPI__MatchTimelineEvent_1a5e0d52e7360a1a3f6921997a5a16fcd7)`(const int32 & NewValue)` | Sets the value of Int21_Optional and also sets Int21_IsSet to true.
`public inline void `[`SetInt21`](#structFRHAPI__MatchTimelineEvent_1a954019a117f50ab4177e544fa5af5214)`(int32 && NewValue)` | Sets the value of Int21_Optional and also sets Int21_IsSet to true using move semantics.
`public inline void `[`ClearInt21`](#structFRHAPI__MatchTimelineEvent_1a7cefff0eaf50ba512b33da6236dc4aca)`()` | Clears the value of Int21_Optional and sets Int21_IsSet to false.
`public inline bool `[`IsInt21Set`](#structFRHAPI__MatchTimelineEvent_1aef0fb5f4e9eab42758c0aa56f9bfecb2)`() const` | Checks whether Int21_Optional has been set.
`public inline bool `[`IsInt21DefaultValue`](#structFRHAPI__MatchTimelineEvent_1aa9fb41a7457a287d9cff48dfa4118ae7)`() const` | Returns true if Int21_Optional is set and matches the default value.
`public inline void `[`SetInt21ToDefault`](#structFRHAPI__MatchTimelineEvent_1a2504e25ed79147ef74b41dc44c641a25)`()` | Sets the value of Int21_Optional to its default and also sets Int21_IsSet to true.
`public inline void `[`SetInt21ToNull`](#structFRHAPI__MatchTimelineEvent_1a99bfe8544f634a583ff9a1fdd7351a45)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt21Null`](#structFRHAPI__MatchTimelineEvent_1ab5752df403f5e69e7f96ae7493e2f340)`() const` | Checks whether Int21_Optional is set to null.
`public inline int32 & `[`GetInt22`](#structFRHAPI__MatchTimelineEvent_1a98b4724ad3d9ea7777b3620f6eae9cbd)`()` | Gets the value of Int22_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt22`](#structFRHAPI__MatchTimelineEvent_1a993fa097ca49262eb1b5396e7929f7b0)`() const` | Gets the value of Int22_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt22`](#structFRHAPI__MatchTimelineEvent_1a9e492e189e8658d3d5c16157ef7c060a)`(const int32 & DefaultValue) const` | Gets the value of Int22_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt22`](#structFRHAPI__MatchTimelineEvent_1afc989d34c2162883dd9d601e31bc540a)`(int32 & OutValue) const` | Fills OutValue with the value of Int22_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt22OrNull`](#structFRHAPI__MatchTimelineEvent_1a0a0598367054ea8e8cf47103440a745f)`()` | Returns a pointer to Int22_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt22OrNull`](#structFRHAPI__MatchTimelineEvent_1ae63956765eb4b83e5dbd1afbb614c56c)`() const` | Returns a pointer to Int22_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt22`](#structFRHAPI__MatchTimelineEvent_1a48b99e31d9254ba943176a290e62bfba)`(const int32 & NewValue)` | Sets the value of Int22_Optional and also sets Int22_IsSet to true.
`public inline void `[`SetInt22`](#structFRHAPI__MatchTimelineEvent_1a92a9bf738793c61498d13c5d7f3a7593)`(int32 && NewValue)` | Sets the value of Int22_Optional and also sets Int22_IsSet to true using move semantics.
`public inline void `[`ClearInt22`](#structFRHAPI__MatchTimelineEvent_1a22a5954c424301e004cdbdbc905e06a5)`()` | Clears the value of Int22_Optional and sets Int22_IsSet to false.
`public inline bool `[`IsInt22Set`](#structFRHAPI__MatchTimelineEvent_1abfcfaaac640d90bf02984b8d2251a8a5)`() const` | Checks whether Int22_Optional has been set.
`public inline bool `[`IsInt22DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a714f07818da7d17d93d82ccf249429b0)`() const` | Returns true if Int22_Optional is set and matches the default value.
`public inline void `[`SetInt22ToDefault`](#structFRHAPI__MatchTimelineEvent_1ae361d42da49ff655f338dbc8fc20dc47)`()` | Sets the value of Int22_Optional to its default and also sets Int22_IsSet to true.
`public inline void `[`SetInt22ToNull`](#structFRHAPI__MatchTimelineEvent_1a8c50eda8d250b5a29604d2e56863d701)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt22Null`](#structFRHAPI__MatchTimelineEvent_1aae84818a23d5ccd839b9ffe3b9e05c31)`() const` | Checks whether Int22_Optional is set to null.
`public inline int32 & `[`GetInt23`](#structFRHAPI__MatchTimelineEvent_1a5ad97ddbd354abb69eadf065abeeb6a1)`()` | Gets the value of Int23_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt23`](#structFRHAPI__MatchTimelineEvent_1a9a9f9c8ddf69144caba8ea6bcff538dd)`() const` | Gets the value of Int23_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt23`](#structFRHAPI__MatchTimelineEvent_1a2df9139640b1399b45fdf546fe2a443c)`(const int32 & DefaultValue) const` | Gets the value of Int23_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt23`](#structFRHAPI__MatchTimelineEvent_1a0500f021da45aa794733247210b3ac02)`(int32 & OutValue) const` | Fills OutValue with the value of Int23_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt23OrNull`](#structFRHAPI__MatchTimelineEvent_1af5928f380da21cac80bf1d9da65d2197)`()` | Returns a pointer to Int23_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt23OrNull`](#structFRHAPI__MatchTimelineEvent_1a1e010c547031e38eb8a44a14b6999456)`() const` | Returns a pointer to Int23_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt23`](#structFRHAPI__MatchTimelineEvent_1a90af9511596dde68942cb409dc8fc306)`(const int32 & NewValue)` | Sets the value of Int23_Optional and also sets Int23_IsSet to true.
`public inline void `[`SetInt23`](#structFRHAPI__MatchTimelineEvent_1a4412d25b1c203f4bec0669f3033a13a3)`(int32 && NewValue)` | Sets the value of Int23_Optional and also sets Int23_IsSet to true using move semantics.
`public inline void `[`ClearInt23`](#structFRHAPI__MatchTimelineEvent_1ae5e02ae6e5ddac85082d50e5d5f157a9)`()` | Clears the value of Int23_Optional and sets Int23_IsSet to false.
`public inline bool `[`IsInt23Set`](#structFRHAPI__MatchTimelineEvent_1a73fa22470ea064d6f0a80f8875128746)`() const` | Checks whether Int23_Optional has been set.
`public inline bool `[`IsInt23DefaultValue`](#structFRHAPI__MatchTimelineEvent_1aceb96e654df6836953a7be1ee28bbd2c)`() const` | Returns true if Int23_Optional is set and matches the default value.
`public inline void `[`SetInt23ToDefault`](#structFRHAPI__MatchTimelineEvent_1ae28f2f52672b90941602168dcd590a9b)`()` | Sets the value of Int23_Optional to its default and also sets Int23_IsSet to true.
`public inline void `[`SetInt23ToNull`](#structFRHAPI__MatchTimelineEvent_1a78d64071639b9eccd0fea3a00987d5b8)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt23Null`](#structFRHAPI__MatchTimelineEvent_1aa2f7f576d73e8e7de3cfaf11569e1bae)`() const` | Checks whether Int23_Optional is set to null.
`public inline int32 & `[`GetInt24`](#structFRHAPI__MatchTimelineEvent_1ad8c312140b3e5df419fbfc1c6ea61813)`()` | Gets the value of Int24_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt24`](#structFRHAPI__MatchTimelineEvent_1aee6f9a9800dbdce4022f8b69ed54f22f)`() const` | Gets the value of Int24_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt24`](#structFRHAPI__MatchTimelineEvent_1a58f22c07ab667ad34d3f43ffa1b3f4af)`(const int32 & DefaultValue) const` | Gets the value of Int24_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt24`](#structFRHAPI__MatchTimelineEvent_1ae0f8f087dff24f718307f1a57948d5c6)`(int32 & OutValue) const` | Fills OutValue with the value of Int24_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt24OrNull`](#structFRHAPI__MatchTimelineEvent_1ad2ba81c0c09e15e0156b880ec09ea269)`()` | Returns a pointer to Int24_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt24OrNull`](#structFRHAPI__MatchTimelineEvent_1aa384246b9c9a97323d9da120897c3f3a)`() const` | Returns a pointer to Int24_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt24`](#structFRHAPI__MatchTimelineEvent_1a6600571c6202aa7306af8e54b9e7545c)`(const int32 & NewValue)` | Sets the value of Int24_Optional and also sets Int24_IsSet to true.
`public inline void `[`SetInt24`](#structFRHAPI__MatchTimelineEvent_1a014fb84ae4811fd815578f56ec4e96af)`(int32 && NewValue)` | Sets the value of Int24_Optional and also sets Int24_IsSet to true using move semantics.
`public inline void `[`ClearInt24`](#structFRHAPI__MatchTimelineEvent_1aef479d440983d4ef2a8c8c2822599e0b)`()` | Clears the value of Int24_Optional and sets Int24_IsSet to false.
`public inline bool `[`IsInt24Set`](#structFRHAPI__MatchTimelineEvent_1a6587c4c54a8dd2280f0ef8891e6f96b9)`() const` | Checks whether Int24_Optional has been set.
`public inline bool `[`IsInt24DefaultValue`](#structFRHAPI__MatchTimelineEvent_1ad01bf92a116f6202b03310bf2d7b5939)`() const` | Returns true if Int24_Optional is set and matches the default value.
`public inline void `[`SetInt24ToDefault`](#structFRHAPI__MatchTimelineEvent_1a1aa152758057b25a919359987ed896c7)`()` | Sets the value of Int24_Optional to its default and also sets Int24_IsSet to true.
`public inline void `[`SetInt24ToNull`](#structFRHAPI__MatchTimelineEvent_1a0c0659d9b353a86ce95f2e0086168219)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt24Null`](#structFRHAPI__MatchTimelineEvent_1a83b47d22bd3956fce96d156c41a61e7f)`() const` | Checks whether Int24_Optional is set to null.
`public inline int32 & `[`GetInt25`](#structFRHAPI__MatchTimelineEvent_1a39e80b03b2097d28f15d69ddf21ad9ad)`()` | Gets the value of Int25_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt25`](#structFRHAPI__MatchTimelineEvent_1ac832492b8a25e32db655df4319971617)`() const` | Gets the value of Int25_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt25`](#structFRHAPI__MatchTimelineEvent_1ae5baa2b04a58d3649375a7333a1b0d24)`(const int32 & DefaultValue) const` | Gets the value of Int25_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt25`](#structFRHAPI__MatchTimelineEvent_1a449de70ec17a1a1f5905cd1320195971)`(int32 & OutValue) const` | Fills OutValue with the value of Int25_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt25OrNull`](#structFRHAPI__MatchTimelineEvent_1ad68f3a622a374b8a3488b7047522e3ff)`()` | Returns a pointer to Int25_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt25OrNull`](#structFRHAPI__MatchTimelineEvent_1a6e34ab5121b911012afb65616d915001)`() const` | Returns a pointer to Int25_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt25`](#structFRHAPI__MatchTimelineEvent_1aaeb4b73cefeaa5baaeb3359a9076dcaf)`(const int32 & NewValue)` | Sets the value of Int25_Optional and also sets Int25_IsSet to true.
`public inline void `[`SetInt25`](#structFRHAPI__MatchTimelineEvent_1a7f1d8daa366bce9b23ea4e970aa9b4e5)`(int32 && NewValue)` | Sets the value of Int25_Optional and also sets Int25_IsSet to true using move semantics.
`public inline void `[`ClearInt25`](#structFRHAPI__MatchTimelineEvent_1ab9a7e5588c1839ccc6196dd98bfdd110)`()` | Clears the value of Int25_Optional and sets Int25_IsSet to false.
`public inline bool `[`IsInt25Set`](#structFRHAPI__MatchTimelineEvent_1a04a74999b8771268ef5f4f1749a72f86)`() const` | Checks whether Int25_Optional has been set.
`public inline bool `[`IsInt25DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a1865870efb33160bee072d3ca6690070)`() const` | Returns true if Int25_Optional is set and matches the default value.
`public inline void `[`SetInt25ToDefault`](#structFRHAPI__MatchTimelineEvent_1a963cbb1e992aef8a9df328bb4b0a5cce)`()` | Sets the value of Int25_Optional to its default and also sets Int25_IsSet to true.
`public inline void `[`SetInt25ToNull`](#structFRHAPI__MatchTimelineEvent_1acb993db1c71f51d0a519300c386643a4)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt25Null`](#structFRHAPI__MatchTimelineEvent_1a748699fa2d416589a93c326ef4cabacd)`() const` | Checks whether Int25_Optional is set to null.
`public inline int32 & `[`GetInt26`](#structFRHAPI__MatchTimelineEvent_1a26e5956c908945e0ee1efa6df1a8887c)`()` | Gets the value of Int26_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt26`](#structFRHAPI__MatchTimelineEvent_1a066b8867e7e265468f9732d786d3b60c)`() const` | Gets the value of Int26_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt26`](#structFRHAPI__MatchTimelineEvent_1adb46afba996a4e9ad9f84b2ed7c2b472)`(const int32 & DefaultValue) const` | Gets the value of Int26_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt26`](#structFRHAPI__MatchTimelineEvent_1a3c042856440a0161ab5e6d91060cebc4)`(int32 & OutValue) const` | Fills OutValue with the value of Int26_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt26OrNull`](#structFRHAPI__MatchTimelineEvent_1a77ca28c918854658b78f197d55689222)`()` | Returns a pointer to Int26_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt26OrNull`](#structFRHAPI__MatchTimelineEvent_1a247641700a42f9d628a1b1998985ecf2)`() const` | Returns a pointer to Int26_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt26`](#structFRHAPI__MatchTimelineEvent_1a4aba827817fc5e1e7277f0734587c105)`(const int32 & NewValue)` | Sets the value of Int26_Optional and also sets Int26_IsSet to true.
`public inline void `[`SetInt26`](#structFRHAPI__MatchTimelineEvent_1a1fc260c930f90c5d06c4b4af63d6175c)`(int32 && NewValue)` | Sets the value of Int26_Optional and also sets Int26_IsSet to true using move semantics.
`public inline void `[`ClearInt26`](#structFRHAPI__MatchTimelineEvent_1ad7120f71af9f2ea7b6f407179884f87d)`()` | Clears the value of Int26_Optional and sets Int26_IsSet to false.
`public inline bool `[`IsInt26Set`](#structFRHAPI__MatchTimelineEvent_1a608df9af56eb473f13f2d8c163ee0175)`() const` | Checks whether Int26_Optional has been set.
`public inline bool `[`IsInt26DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a6e44bc760a3fd782fdeb14a85c887484)`() const` | Returns true if Int26_Optional is set and matches the default value.
`public inline void `[`SetInt26ToDefault`](#structFRHAPI__MatchTimelineEvent_1a8987e5898fb2b9e97f902ab247c7bd42)`()` | Sets the value of Int26_Optional to its default and also sets Int26_IsSet to true.
`public inline void `[`SetInt26ToNull`](#structFRHAPI__MatchTimelineEvent_1acbfc3eae91dd7efe3ff684bda77a95ec)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt26Null`](#structFRHAPI__MatchTimelineEvent_1a1e4c809547870d5d8ad691458849a853)`() const` | Checks whether Int26_Optional is set to null.
`public inline int32 & `[`GetInt27`](#structFRHAPI__MatchTimelineEvent_1a13cd5195c924fc0d4dd95f95ef4c2017)`()` | Gets the value of Int27_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt27`](#structFRHAPI__MatchTimelineEvent_1a2a2e262a516a887ddeeba023e696c9fd)`() const` | Gets the value of Int27_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt27`](#structFRHAPI__MatchTimelineEvent_1a649da8366873608696cde84ff7b010ae)`(const int32 & DefaultValue) const` | Gets the value of Int27_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt27`](#structFRHAPI__MatchTimelineEvent_1af2c49043541262c2bf72597242c9485e)`(int32 & OutValue) const` | Fills OutValue with the value of Int27_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt27OrNull`](#structFRHAPI__MatchTimelineEvent_1ae486e91ee4bf784c2f5b33bb114d1026)`()` | Returns a pointer to Int27_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt27OrNull`](#structFRHAPI__MatchTimelineEvent_1a702a41b11e7667bbc3411876f292516c)`() const` | Returns a pointer to Int27_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt27`](#structFRHAPI__MatchTimelineEvent_1ab701419819339a467898c2349ad3b074)`(const int32 & NewValue)` | Sets the value of Int27_Optional and also sets Int27_IsSet to true.
`public inline void `[`SetInt27`](#structFRHAPI__MatchTimelineEvent_1a9b5d99f011ea940245158a0caf1cd63f)`(int32 && NewValue)` | Sets the value of Int27_Optional and also sets Int27_IsSet to true using move semantics.
`public inline void `[`ClearInt27`](#structFRHAPI__MatchTimelineEvent_1af3b59cdba5438945815a15230f8de9e1)`()` | Clears the value of Int27_Optional and sets Int27_IsSet to false.
`public inline bool `[`IsInt27Set`](#structFRHAPI__MatchTimelineEvent_1a74c3edbf0a59689d049f31ffd7f56bfd)`() const` | Checks whether Int27_Optional has been set.
`public inline bool `[`IsInt27DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a33dcf754c75f02284fd1b865e09a40e3)`() const` | Returns true if Int27_Optional is set and matches the default value.
`public inline void `[`SetInt27ToDefault`](#structFRHAPI__MatchTimelineEvent_1a0d3881cf5e5289fd51394958e3dbb430)`()` | Sets the value of Int27_Optional to its default and also sets Int27_IsSet to true.
`public inline void `[`SetInt27ToNull`](#structFRHAPI__MatchTimelineEvent_1a6a812818cd88e669fe68e8181bbc3e35)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt27Null`](#structFRHAPI__MatchTimelineEvent_1a94922cf0495b13a45c808d233050536b)`() const` | Checks whether Int27_Optional is set to null.
`public inline int32 & `[`GetInt28`](#structFRHAPI__MatchTimelineEvent_1a18b69a5dbc3953bd08cf9ed1377160fc)`()` | Gets the value of Int28_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt28`](#structFRHAPI__MatchTimelineEvent_1a4377fc414a0a47917defa7dcfc14979a)`() const` | Gets the value of Int28_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt28`](#structFRHAPI__MatchTimelineEvent_1a421528abb43e127f5fd75d54ada046ed)`(const int32 & DefaultValue) const` | Gets the value of Int28_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt28`](#structFRHAPI__MatchTimelineEvent_1aa13cf77ef809f8ad86529d59c9681821)`(int32 & OutValue) const` | Fills OutValue with the value of Int28_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt28OrNull`](#structFRHAPI__MatchTimelineEvent_1a5491eede5b89f4586316613f9c08bcd2)`()` | Returns a pointer to Int28_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt28OrNull`](#structFRHAPI__MatchTimelineEvent_1a44a0553c469bcd3ec3d671c12524a6d6)`() const` | Returns a pointer to Int28_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt28`](#structFRHAPI__MatchTimelineEvent_1a507627f124e7cbc1510d3aff7d1fe411)`(const int32 & NewValue)` | Sets the value of Int28_Optional and also sets Int28_IsSet to true.
`public inline void `[`SetInt28`](#structFRHAPI__MatchTimelineEvent_1a1cecdeb41422e43c9baf6a22ea0f6096)`(int32 && NewValue)` | Sets the value of Int28_Optional and also sets Int28_IsSet to true using move semantics.
`public inline void `[`ClearInt28`](#structFRHAPI__MatchTimelineEvent_1ac75b378a9ceee64de93e51aa9bb6bc92)`()` | Clears the value of Int28_Optional and sets Int28_IsSet to false.
`public inline bool `[`IsInt28Set`](#structFRHAPI__MatchTimelineEvent_1a2ae100e9fd33b4e351cb100048a6c127)`() const` | Checks whether Int28_Optional has been set.
`public inline bool `[`IsInt28DefaultValue`](#structFRHAPI__MatchTimelineEvent_1aacb53f8400ad99977df7e10d322ff2d2)`() const` | Returns true if Int28_Optional is set and matches the default value.
`public inline void `[`SetInt28ToDefault`](#structFRHAPI__MatchTimelineEvent_1a79169a5a2c4367cc4f713c7d8be19710)`()` | Sets the value of Int28_Optional to its default and also sets Int28_IsSet to true.
`public inline void `[`SetInt28ToNull`](#structFRHAPI__MatchTimelineEvent_1af6b169da5d1e5fd87f41367783febcc5)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt28Null`](#structFRHAPI__MatchTimelineEvent_1a7eac02a8ae1cc9b796eea58bbf71587a)`() const` | Checks whether Int28_Optional is set to null.
`public inline int32 & `[`GetInt29`](#structFRHAPI__MatchTimelineEvent_1a3d01337c0bf11e8d70a8a42e06b269e4)`()` | Gets the value of Int29_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt29`](#structFRHAPI__MatchTimelineEvent_1a04695b763b86be80cebbb541ac6345cd)`() const` | Gets the value of Int29_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt29`](#structFRHAPI__MatchTimelineEvent_1a1b6398aa5831a86c79309f22b362a938)`(const int32 & DefaultValue) const` | Gets the value of Int29_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt29`](#structFRHAPI__MatchTimelineEvent_1abf790095286b7598aae981a748fdb62e)`(int32 & OutValue) const` | Fills OutValue with the value of Int29_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt29OrNull`](#structFRHAPI__MatchTimelineEvent_1a3d60770db7a7125787bc178c8004d419)`()` | Returns a pointer to Int29_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt29OrNull`](#structFRHAPI__MatchTimelineEvent_1a04b07e77791aff19ea6eb348707e56d3)`() const` | Returns a pointer to Int29_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt29`](#structFRHAPI__MatchTimelineEvent_1a48a0f9c93b787d9309dde7792f30a0f1)`(const int32 & NewValue)` | Sets the value of Int29_Optional and also sets Int29_IsSet to true.
`public inline void `[`SetInt29`](#structFRHAPI__MatchTimelineEvent_1a1bfc484ea0545bbef76adf80a9908d11)`(int32 && NewValue)` | Sets the value of Int29_Optional and also sets Int29_IsSet to true using move semantics.
`public inline void `[`ClearInt29`](#structFRHAPI__MatchTimelineEvent_1afc47555cd8caf68d2ea9d25cb2443d61)`()` | Clears the value of Int29_Optional and sets Int29_IsSet to false.
`public inline bool `[`IsInt29Set`](#structFRHAPI__MatchTimelineEvent_1a2650e411870921ba5e8fded9fca9a3c8)`() const` | Checks whether Int29_Optional has been set.
`public inline bool `[`IsInt29DefaultValue`](#structFRHAPI__MatchTimelineEvent_1ac19b68a254a244d3101fc5609a173633)`() const` | Returns true if Int29_Optional is set and matches the default value.
`public inline void `[`SetInt29ToDefault`](#structFRHAPI__MatchTimelineEvent_1af14a63c2a1fdc284c52b4ee606ef08a0)`()` | Sets the value of Int29_Optional to its default and also sets Int29_IsSet to true.
`public inline void `[`SetInt29ToNull`](#structFRHAPI__MatchTimelineEvent_1af7fba0ffafea5ca47f6581f00136000d)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt29Null`](#structFRHAPI__MatchTimelineEvent_1a5b675638513290e68e1c1dec2b4672dd)`() const` | Checks whether Int29_Optional is set to null.
`public inline int32 & `[`GetInt30`](#structFRHAPI__MatchTimelineEvent_1a792af0f8ff759f58267725604b79aaf1)`()` | Gets the value of Int30_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt30`](#structFRHAPI__MatchTimelineEvent_1a523dfafdd80cba0497fed69bd002a697)`() const` | Gets the value of Int30_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt30`](#structFRHAPI__MatchTimelineEvent_1a7f9359eeeb44536824489c230eca5238)`(const int32 & DefaultValue) const` | Gets the value of Int30_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt30`](#structFRHAPI__MatchTimelineEvent_1a897ce033e7e97dbc79235e3b0b4c7ac6)`(int32 & OutValue) const` | Fills OutValue with the value of Int30_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt30OrNull`](#structFRHAPI__MatchTimelineEvent_1a377fd23824937dd31e24829a5805b665)`()` | Returns a pointer to Int30_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt30OrNull`](#structFRHAPI__MatchTimelineEvent_1a7fedefc83be603e7322a938502ce5b1a)`() const` | Returns a pointer to Int30_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt30`](#structFRHAPI__MatchTimelineEvent_1afe3c9852ac26a4db339d04599e74caae)`(const int32 & NewValue)` | Sets the value of Int30_Optional and also sets Int30_IsSet to true.
`public inline void `[`SetInt30`](#structFRHAPI__MatchTimelineEvent_1a801a01207c7281663b93b1f1020853a3)`(int32 && NewValue)` | Sets the value of Int30_Optional and also sets Int30_IsSet to true using move semantics.
`public inline void `[`ClearInt30`](#structFRHAPI__MatchTimelineEvent_1a641d7601890868a6c374075b85d78425)`()` | Clears the value of Int30_Optional and sets Int30_IsSet to false.
`public inline bool `[`IsInt30Set`](#structFRHAPI__MatchTimelineEvent_1ab1dafad8baf2410a620d67aef3686841)`() const` | Checks whether Int30_Optional has been set.
`public inline bool `[`IsInt30DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a51d170f0188f47fbad2f89604938f0b5)`() const` | Returns true if Int30_Optional is set and matches the default value.
`public inline void `[`SetInt30ToDefault`](#structFRHAPI__MatchTimelineEvent_1a60f6f9127a36c54d0ffb81ea79076031)`()` | Sets the value of Int30_Optional to its default and also sets Int30_IsSet to true.
`public inline void `[`SetInt30ToNull`](#structFRHAPI__MatchTimelineEvent_1a3465677fd5150c72fb10061d377c5f51)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt30Null`](#structFRHAPI__MatchTimelineEvent_1aea067df0cb06b5ad4c5828e632d06fd0)`() const` | Checks whether Int30_Optional is set to null.
`public inline int32 & `[`GetInt31`](#structFRHAPI__MatchTimelineEvent_1a150ae8deb60ac22b00c3d6551cf87576)`()` | Gets the value of Int31_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt31`](#structFRHAPI__MatchTimelineEvent_1ab8b4e13e1b9959f790cce82b69c9c2ce)`() const` | Gets the value of Int31_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt31`](#structFRHAPI__MatchTimelineEvent_1a3ed5d807aa0ccaaa0aa1060a8fb28877)`(const int32 & DefaultValue) const` | Gets the value of Int31_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt31`](#structFRHAPI__MatchTimelineEvent_1a039ee7edec99ec84696f65144caa8b90)`(int32 & OutValue) const` | Fills OutValue with the value of Int31_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt31OrNull`](#structFRHAPI__MatchTimelineEvent_1adbfbcc399c1e616799fec38ce8dbbc03)`()` | Returns a pointer to Int31_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt31OrNull`](#structFRHAPI__MatchTimelineEvent_1afec0150bb78a663759c6732c1f6cfd27)`() const` | Returns a pointer to Int31_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt31`](#structFRHAPI__MatchTimelineEvent_1a89113d81ec3915e3590252038d107033)`(const int32 & NewValue)` | Sets the value of Int31_Optional and also sets Int31_IsSet to true.
`public inline void `[`SetInt31`](#structFRHAPI__MatchTimelineEvent_1a0e29ba9408cebb2a9805c28e0eb6970f)`(int32 && NewValue)` | Sets the value of Int31_Optional and also sets Int31_IsSet to true using move semantics.
`public inline void `[`ClearInt31`](#structFRHAPI__MatchTimelineEvent_1acedb5e2db29d021c843ec651c811423c)`()` | Clears the value of Int31_Optional and sets Int31_IsSet to false.
`public inline bool `[`IsInt31Set`](#structFRHAPI__MatchTimelineEvent_1a00796f17ebaa51f9ed3575200f5faec0)`() const` | Checks whether Int31_Optional has been set.
`public inline bool `[`IsInt31DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a140dade7226bb125a47206b8c80a7c96)`() const` | Returns true if Int31_Optional is set and matches the default value.
`public inline void `[`SetInt31ToDefault`](#structFRHAPI__MatchTimelineEvent_1a581e96ec5f88a8367be153dce4da1cf2)`()` | Sets the value of Int31_Optional to its default and also sets Int31_IsSet to true.
`public inline void `[`SetInt31ToNull`](#structFRHAPI__MatchTimelineEvent_1a6c60dc6ae65e20b8b582744b2bbee8c6)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt31Null`](#structFRHAPI__MatchTimelineEvent_1a5ce4dbb2fc36456448d36621765f3e83)`() const` | Checks whether Int31_Optional is set to null.
`public inline int32 & `[`GetInt32`](#structFRHAPI__MatchTimelineEvent_1a2a33b5c760aa7cf120d5b5192389cbb5)`()` | Gets the value of Int32_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt32`](#structFRHAPI__MatchTimelineEvent_1a87c2045ff178d37e55164baad8e79c31)`() const` | Gets the value of Int32_Optional, regardless of it having been set.
`public inline const int32 & `[`GetInt32`](#structFRHAPI__MatchTimelineEvent_1a38b9901b5629fcdcd4ae83bab4175e11)`(const int32 & DefaultValue) const` | Gets the value of Int32_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInt32`](#structFRHAPI__MatchTimelineEvent_1ad8b44844906b6db3ac5c6a73b2b0bae7)`(int32 & OutValue) const` | Fills OutValue with the value of Int32_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetInt32OrNull`](#structFRHAPI__MatchTimelineEvent_1a0dfa80ca80d00ffb05b149549262bfd2)`()` | Returns a pointer to Int32_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetInt32OrNull`](#structFRHAPI__MatchTimelineEvent_1a701d9836e29a577f0da8a2151c21471f)`() const` | Returns a pointer to Int32_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInt32`](#structFRHAPI__MatchTimelineEvent_1a3a718bd7e52d9a370cfb1c54c6596599)`(const int32 & NewValue)` | Sets the value of Int32_Optional and also sets Int32_IsSet to true.
`public inline void `[`SetInt32`](#structFRHAPI__MatchTimelineEvent_1ad91c2569175763825cfeb52181356e1d)`(int32 && NewValue)` | Sets the value of Int32_Optional and also sets Int32_IsSet to true using move semantics.
`public inline void `[`ClearInt32`](#structFRHAPI__MatchTimelineEvent_1aaf18bda4b1b63b835e083f1c473b2281)`()` | Clears the value of Int32_Optional and sets Int32_IsSet to false.
`public inline bool `[`IsInt32Set`](#structFRHAPI__MatchTimelineEvent_1acf98019c72f7d12d42c94a50bd910e1d)`() const` | Checks whether Int32_Optional has been set.
`public inline bool `[`IsInt32DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a896d71b29e1f11a9a33efbce3dc04e37)`() const` | Returns true if Int32_Optional is set and matches the default value.
`public inline void `[`SetInt32ToDefault`](#structFRHAPI__MatchTimelineEvent_1af682f5f1256accb7604524cf89200cff)`()` | Sets the value of Int32_Optional to its default and also sets Int32_IsSet to true.
`public inline void `[`SetInt32ToNull`](#structFRHAPI__MatchTimelineEvent_1aa226ba0215ce6026d28f47ebfb84dba2)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInt32Null`](#structFRHAPI__MatchTimelineEvent_1a0aa310c1a7f8d32bf1b8e2322a35d853)`() const` | Checks whether Int32_Optional is set to null.
`public inline FString & `[`GetStr1`](#structFRHAPI__MatchTimelineEvent_1ae9d20e7733191dc0e66b99bab64b1319)`()` | Gets the value of Str1_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr1`](#structFRHAPI__MatchTimelineEvent_1ace14d865d53204345bbef6e369c43cad)`() const` | Gets the value of Str1_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr1`](#structFRHAPI__MatchTimelineEvent_1a48bf82fc7aad98965cd2e2ddc634b1b3)`(const FString & DefaultValue) const` | Gets the value of Str1_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr1`](#structFRHAPI__MatchTimelineEvent_1a698b212ba584e58e0b3247a0e1da8b97)`(FString & OutValue) const` | Fills OutValue with the value of Str1_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr1OrNull`](#structFRHAPI__MatchTimelineEvent_1a0fb69a7746261e664e45ac75d2b2d6c2)`()` | Returns a pointer to Str1_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr1OrNull`](#structFRHAPI__MatchTimelineEvent_1a9812d21d272b67d69330dccedac4b046)`() const` | Returns a pointer to Str1_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr1`](#structFRHAPI__MatchTimelineEvent_1a43537d5af8d1e3601655d04477e789ed)`(const FString & NewValue)` | Sets the value of Str1_Optional and also sets Str1_IsSet to true.
`public inline void `[`SetStr1`](#structFRHAPI__MatchTimelineEvent_1a0351364c4bba6547c7bcf04a168305df)`(FString && NewValue)` | Sets the value of Str1_Optional and also sets Str1_IsSet to true using move semantics.
`public inline void `[`ClearStr1`](#structFRHAPI__MatchTimelineEvent_1a09c81b0bde457231d855281dcfeb0b85)`()` | Clears the value of Str1_Optional and sets Str1_IsSet to false.
`public inline bool `[`IsStr1Set`](#structFRHAPI__MatchTimelineEvent_1a8fd2aedf1df109da3c942ebf880067df)`() const` | Checks whether Str1_Optional has been set.
`public inline void `[`SetStr1ToNull`](#structFRHAPI__MatchTimelineEvent_1a21d813e45a4698acad1b1c840816f903)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr1Null`](#structFRHAPI__MatchTimelineEvent_1aa5d7f4bfd6a4196c7c74405becbfe5a3)`() const` | Checks whether Str1_Optional is set to null.
`public inline FString & `[`GetStr2`](#structFRHAPI__MatchTimelineEvent_1a7b714563f3569920d37f6213014a6149)`()` | Gets the value of Str2_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr2`](#structFRHAPI__MatchTimelineEvent_1ae611aa42990f53799de8bb58529268a6)`() const` | Gets the value of Str2_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr2`](#structFRHAPI__MatchTimelineEvent_1afa3dbc211502577a24a4a86cc283327f)`(const FString & DefaultValue) const` | Gets the value of Str2_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr2`](#structFRHAPI__MatchTimelineEvent_1a979f13beb6d2da1a544e1f811c2eaa04)`(FString & OutValue) const` | Fills OutValue with the value of Str2_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr2OrNull`](#structFRHAPI__MatchTimelineEvent_1a89a8fd8a5b7994a003aee721d63a7900)`()` | Returns a pointer to Str2_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr2OrNull`](#structFRHAPI__MatchTimelineEvent_1aa689dbf477571cb408ea7d087f314318)`() const` | Returns a pointer to Str2_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr2`](#structFRHAPI__MatchTimelineEvent_1aed54f08ffba9b6d44c2664bb7a9c4860)`(const FString & NewValue)` | Sets the value of Str2_Optional and also sets Str2_IsSet to true.
`public inline void `[`SetStr2`](#structFRHAPI__MatchTimelineEvent_1a97e218fad0bbbf43de10adf978a49fa1)`(FString && NewValue)` | Sets the value of Str2_Optional and also sets Str2_IsSet to true using move semantics.
`public inline void `[`ClearStr2`](#structFRHAPI__MatchTimelineEvent_1a00836d3f8366129b25613d21c8fcdbd6)`()` | Clears the value of Str2_Optional and sets Str2_IsSet to false.
`public inline bool `[`IsStr2Set`](#structFRHAPI__MatchTimelineEvent_1a7c879386615b22b550033eaa11701def)`() const` | Checks whether Str2_Optional has been set.
`public inline void `[`SetStr2ToNull`](#structFRHAPI__MatchTimelineEvent_1a104160e05b0571588c7be85149e2c4ca)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr2Null`](#structFRHAPI__MatchTimelineEvent_1a992aac455bc09d46d600ab43fb4ecf41)`() const` | Checks whether Str2_Optional is set to null.
`public inline FString & `[`GetStr3`](#structFRHAPI__MatchTimelineEvent_1a0ccbbf18667bb1e738a542bc8a108b77)`()` | Gets the value of Str3_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr3`](#structFRHAPI__MatchTimelineEvent_1a2164d19b4b0151720b9f7acf5de83bac)`() const` | Gets the value of Str3_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr3`](#structFRHAPI__MatchTimelineEvent_1a3687c79fc7eddafe0c999b4d0ba8e6d0)`(const FString & DefaultValue) const` | Gets the value of Str3_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr3`](#structFRHAPI__MatchTimelineEvent_1a2bf72e58ec9fc9951daf454afe9e63d9)`(FString & OutValue) const` | Fills OutValue with the value of Str3_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr3OrNull`](#structFRHAPI__MatchTimelineEvent_1a6bd053aae5cb646044cbe6a71a2a1348)`()` | Returns a pointer to Str3_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr3OrNull`](#structFRHAPI__MatchTimelineEvent_1a013ff45572765b7fd444348fd28fa9a2)`() const` | Returns a pointer to Str3_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr3`](#structFRHAPI__MatchTimelineEvent_1aa094193528d39751efabd5f4887d27f1)`(const FString & NewValue)` | Sets the value of Str3_Optional and also sets Str3_IsSet to true.
`public inline void `[`SetStr3`](#structFRHAPI__MatchTimelineEvent_1ae3b10861f82986daeb127785827459ad)`(FString && NewValue)` | Sets the value of Str3_Optional and also sets Str3_IsSet to true using move semantics.
`public inline void `[`ClearStr3`](#structFRHAPI__MatchTimelineEvent_1aafef902572aa8bfb13433d4c7efadcbc)`()` | Clears the value of Str3_Optional and sets Str3_IsSet to false.
`public inline bool `[`IsStr3Set`](#structFRHAPI__MatchTimelineEvent_1ab021dce0e7771e07260b44cabdeddf58)`() const` | Checks whether Str3_Optional has been set.
`public inline void `[`SetStr3ToNull`](#structFRHAPI__MatchTimelineEvent_1a29afccb717e5acd9de198fde8f3536a1)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr3Null`](#structFRHAPI__MatchTimelineEvent_1aa38fb1f6a1da847e714a069c1e74e5da)`() const` | Checks whether Str3_Optional is set to null.
`public inline FString & `[`GetStr4`](#structFRHAPI__MatchTimelineEvent_1ad49f8b1ea9cfe4fcbdb89ba7ce3e7545)`()` | Gets the value of Str4_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr4`](#structFRHAPI__MatchTimelineEvent_1af5b81e96b66d7d3e835410ac4f310e9e)`() const` | Gets the value of Str4_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr4`](#structFRHAPI__MatchTimelineEvent_1ac174328fa66a50c6f6bcdade66683335)`(const FString & DefaultValue) const` | Gets the value of Str4_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr4`](#structFRHAPI__MatchTimelineEvent_1a693bb5475ddbdf8b1575b41197fb1d0e)`(FString & OutValue) const` | Fills OutValue with the value of Str4_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr4OrNull`](#structFRHAPI__MatchTimelineEvent_1acb1c4a672e54f26d6076771bffed0cfe)`()` | Returns a pointer to Str4_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr4OrNull`](#structFRHAPI__MatchTimelineEvent_1a1eeda44367511a39fffa6ea51f2cbc71)`() const` | Returns a pointer to Str4_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr4`](#structFRHAPI__MatchTimelineEvent_1adcba6ca9c045489dd02c690fc12e7c25)`(const FString & NewValue)` | Sets the value of Str4_Optional and also sets Str4_IsSet to true.
`public inline void `[`SetStr4`](#structFRHAPI__MatchTimelineEvent_1af8636b04c16891d464151d00e4cf140f)`(FString && NewValue)` | Sets the value of Str4_Optional and also sets Str4_IsSet to true using move semantics.
`public inline void `[`ClearStr4`](#structFRHAPI__MatchTimelineEvent_1a7a36ea36a5c36a501b1c79fe1be92808)`()` | Clears the value of Str4_Optional and sets Str4_IsSet to false.
`public inline bool `[`IsStr4Set`](#structFRHAPI__MatchTimelineEvent_1ac4b1822d3117f297454b89308de895da)`() const` | Checks whether Str4_Optional has been set.
`public inline void `[`SetStr4ToNull`](#structFRHAPI__MatchTimelineEvent_1a33baa4edd1c100bdeaa58f9a228b4410)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr4Null`](#structFRHAPI__MatchTimelineEvent_1aad9ab100a768dfdc366f7b18a5b5c063)`() const` | Checks whether Str4_Optional is set to null.
`public inline FString & `[`GetStr5`](#structFRHAPI__MatchTimelineEvent_1a4d8866ef1a9ddc08f4694ad419ec7562)`()` | Gets the value of Str5_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr5`](#structFRHAPI__MatchTimelineEvent_1a333566c725d736d4f03e7d4c338cb745)`() const` | Gets the value of Str5_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr5`](#structFRHAPI__MatchTimelineEvent_1a645946d42cf945b68c3650d94248b6ad)`(const FString & DefaultValue) const` | Gets the value of Str5_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr5`](#structFRHAPI__MatchTimelineEvent_1a8a157162e860781d850766064d1d28c4)`(FString & OutValue) const` | Fills OutValue with the value of Str5_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr5OrNull`](#structFRHAPI__MatchTimelineEvent_1a286b18d79a08e2dee87c1052329ee59a)`()` | Returns a pointer to Str5_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr5OrNull`](#structFRHAPI__MatchTimelineEvent_1a4263fc449d7d2b18b84d945796e69b51)`() const` | Returns a pointer to Str5_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr5`](#structFRHAPI__MatchTimelineEvent_1a4ec361f8f52747a97ea6f203bb3fbb69)`(const FString & NewValue)` | Sets the value of Str5_Optional and also sets Str5_IsSet to true.
`public inline void `[`SetStr5`](#structFRHAPI__MatchTimelineEvent_1a3d88cc5c736a5190e0748b12d164d72e)`(FString && NewValue)` | Sets the value of Str5_Optional and also sets Str5_IsSet to true using move semantics.
`public inline void `[`ClearStr5`](#structFRHAPI__MatchTimelineEvent_1afb9ca287aba57ba7c947980c83e787ea)`()` | Clears the value of Str5_Optional and sets Str5_IsSet to false.
`public inline bool `[`IsStr5Set`](#structFRHAPI__MatchTimelineEvent_1a0697d4c307b6fd7c56c65a05db318d69)`() const` | Checks whether Str5_Optional has been set.
`public inline void `[`SetStr5ToNull`](#structFRHAPI__MatchTimelineEvent_1a296128535d4503331e7d39c97dd65a5e)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr5Null`](#structFRHAPI__MatchTimelineEvent_1a8cb67d4f6a4ecef50cb25fdad8c2b91f)`() const` | Checks whether Str5_Optional is set to null.
`public inline FString & `[`GetStr6`](#structFRHAPI__MatchTimelineEvent_1a7a5586bf32e01c20770814215559c105)`()` | Gets the value of Str6_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr6`](#structFRHAPI__MatchTimelineEvent_1a017abf46f1e59e9b51bc646b501c8367)`() const` | Gets the value of Str6_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr6`](#structFRHAPI__MatchTimelineEvent_1a17f15baf5428b97b58ed57bd969dec18)`(const FString & DefaultValue) const` | Gets the value of Str6_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr6`](#structFRHAPI__MatchTimelineEvent_1a1ccf40a6ba85845d474c3b1a1d7548ed)`(FString & OutValue) const` | Fills OutValue with the value of Str6_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr6OrNull`](#structFRHAPI__MatchTimelineEvent_1a3e794973475da207812c7da85e1ca15e)`()` | Returns a pointer to Str6_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr6OrNull`](#structFRHAPI__MatchTimelineEvent_1abbc578eb9706e4b68d2385141461d95a)`() const` | Returns a pointer to Str6_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr6`](#structFRHAPI__MatchTimelineEvent_1a38bd8c0e242dbb797cafdc6ea5daede1)`(const FString & NewValue)` | Sets the value of Str6_Optional and also sets Str6_IsSet to true.
`public inline void `[`SetStr6`](#structFRHAPI__MatchTimelineEvent_1a3355e212d871413a5ca5844cfd75f0cf)`(FString && NewValue)` | Sets the value of Str6_Optional and also sets Str6_IsSet to true using move semantics.
`public inline void `[`ClearStr6`](#structFRHAPI__MatchTimelineEvent_1ad597d65ebbb093bbc6c133b422a19706)`()` | Clears the value of Str6_Optional and sets Str6_IsSet to false.
`public inline bool `[`IsStr6Set`](#structFRHAPI__MatchTimelineEvent_1a8f60ffb55f9ebde860f6900da94f3bde)`() const` | Checks whether Str6_Optional has been set.
`public inline void `[`SetStr6ToNull`](#structFRHAPI__MatchTimelineEvent_1aa3ccea6a963b22081993b44cc8c4de5e)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr6Null`](#structFRHAPI__MatchTimelineEvent_1a4713eacb8ab8c9fb080bbd05964c5ae4)`() const` | Checks whether Str6_Optional is set to null.
`public inline FString & `[`GetStr7`](#structFRHAPI__MatchTimelineEvent_1ad499da956e1535cd261d87de29ee5917)`()` | Gets the value of Str7_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr7`](#structFRHAPI__MatchTimelineEvent_1ae790c24302a1eef6262b9f4256774c11)`() const` | Gets the value of Str7_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr7`](#structFRHAPI__MatchTimelineEvent_1a4a23b8ed026d8dcd31cf0c246b12a7ab)`(const FString & DefaultValue) const` | Gets the value of Str7_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr7`](#structFRHAPI__MatchTimelineEvent_1a046a3f4357d9bd9076cf587ec4ca87d2)`(FString & OutValue) const` | Fills OutValue with the value of Str7_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr7OrNull`](#structFRHAPI__MatchTimelineEvent_1a95c410cefc92bc89855f80e6b05c33f0)`()` | Returns a pointer to Str7_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr7OrNull`](#structFRHAPI__MatchTimelineEvent_1ac2c41b7e70cd59257a4ae0038b02dc5e)`() const` | Returns a pointer to Str7_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr7`](#structFRHAPI__MatchTimelineEvent_1a5c16c6f9f83147074adab84f1df8da69)`(const FString & NewValue)` | Sets the value of Str7_Optional and also sets Str7_IsSet to true.
`public inline void `[`SetStr7`](#structFRHAPI__MatchTimelineEvent_1ac25710f4c50af47548c44a3d0f110e08)`(FString && NewValue)` | Sets the value of Str7_Optional and also sets Str7_IsSet to true using move semantics.
`public inline void `[`ClearStr7`](#structFRHAPI__MatchTimelineEvent_1afd2086460e4c5fbee304ba290bceef95)`()` | Clears the value of Str7_Optional and sets Str7_IsSet to false.
`public inline bool `[`IsStr7Set`](#structFRHAPI__MatchTimelineEvent_1aaedfa9fe069fe953b15f71dcf536ac5c)`() const` | Checks whether Str7_Optional has been set.
`public inline void `[`SetStr7ToNull`](#structFRHAPI__MatchTimelineEvent_1ad4f82d6e8d99ce6f3fe3e25eaf5a245f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr7Null`](#structFRHAPI__MatchTimelineEvent_1abfac99433aceb741a8840c62bedd704f)`() const` | Checks whether Str7_Optional is set to null.
`public inline FString & `[`GetStr8`](#structFRHAPI__MatchTimelineEvent_1ac623d489847a5e35fb8eb7dc989511c7)`()` | Gets the value of Str8_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr8`](#structFRHAPI__MatchTimelineEvent_1aa7a868ea8333a7beb0fe69b9b3867fab)`() const` | Gets the value of Str8_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr8`](#structFRHAPI__MatchTimelineEvent_1a502e7db58cdc4866248874b0a243bc52)`(const FString & DefaultValue) const` | Gets the value of Str8_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr8`](#structFRHAPI__MatchTimelineEvent_1aa07533f01119e6d4fd28d4b591dda23c)`(FString & OutValue) const` | Fills OutValue with the value of Str8_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr8OrNull`](#structFRHAPI__MatchTimelineEvent_1a2cf9a20e42bcc74247e5111fb2e86a23)`()` | Returns a pointer to Str8_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr8OrNull`](#structFRHAPI__MatchTimelineEvent_1a5b4e61339f30e7f2358b93dfe1476421)`() const` | Returns a pointer to Str8_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr8`](#structFRHAPI__MatchTimelineEvent_1a07145c801c70826ea82f3591b0560f6d)`(const FString & NewValue)` | Sets the value of Str8_Optional and also sets Str8_IsSet to true.
`public inline void `[`SetStr8`](#structFRHAPI__MatchTimelineEvent_1a1f6c2bc3a67bd7960fc0fd4c3872fdf8)`(FString && NewValue)` | Sets the value of Str8_Optional and also sets Str8_IsSet to true using move semantics.
`public inline void `[`ClearStr8`](#structFRHAPI__MatchTimelineEvent_1a7e1b076a06636bd0b00c42f88ff01d33)`()` | Clears the value of Str8_Optional and sets Str8_IsSet to false.
`public inline bool `[`IsStr8Set`](#structFRHAPI__MatchTimelineEvent_1a530876224fc27f8edb2c8a0d78c8b4de)`() const` | Checks whether Str8_Optional has been set.
`public inline void `[`SetStr8ToNull`](#structFRHAPI__MatchTimelineEvent_1a6233abe7553346320a33923576dfe072)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr8Null`](#structFRHAPI__MatchTimelineEvent_1a4f8a074cf187ac3459052173d55153e2)`() const` | Checks whether Str8_Optional is set to null.
`public inline FString & `[`GetStr9`](#structFRHAPI__MatchTimelineEvent_1a39546994d4c2189fdf6b1b5ada6059b5)`()` | Gets the value of Str9_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr9`](#structFRHAPI__MatchTimelineEvent_1a95fbf67ccbc586fa0f3e034e0bce82b1)`() const` | Gets the value of Str9_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr9`](#structFRHAPI__MatchTimelineEvent_1a70df2c023f1607a253ef19b86833326f)`(const FString & DefaultValue) const` | Gets the value of Str9_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr9`](#structFRHAPI__MatchTimelineEvent_1a6c5d168bc20f731b1b2792b369e72c27)`(FString & OutValue) const` | Fills OutValue with the value of Str9_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr9OrNull`](#structFRHAPI__MatchTimelineEvent_1a5ba0a3e8bbc6cb174a21b268fb6d0411)`()` | Returns a pointer to Str9_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr9OrNull`](#structFRHAPI__MatchTimelineEvent_1a18d9a659a989429b9a0e9a3102c816ec)`() const` | Returns a pointer to Str9_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr9`](#structFRHAPI__MatchTimelineEvent_1a6c4a908bc378119c49afd1d63d067c23)`(const FString & NewValue)` | Sets the value of Str9_Optional and also sets Str9_IsSet to true.
`public inline void `[`SetStr9`](#structFRHAPI__MatchTimelineEvent_1acd56184527b23b4c72286e6258c44763)`(FString && NewValue)` | Sets the value of Str9_Optional and also sets Str9_IsSet to true using move semantics.
`public inline void `[`ClearStr9`](#structFRHAPI__MatchTimelineEvent_1a07a2f565b78245b1a0d00073ab5b1173)`()` | Clears the value of Str9_Optional and sets Str9_IsSet to false.
`public inline bool `[`IsStr9Set`](#structFRHAPI__MatchTimelineEvent_1acfb82cb5575401bbe3247421f6d795cc)`() const` | Checks whether Str9_Optional has been set.
`public inline void `[`SetStr9ToNull`](#structFRHAPI__MatchTimelineEvent_1ab391f44e791611098fe22f4d0ace22c6)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr9Null`](#structFRHAPI__MatchTimelineEvent_1abd6d8c6e5c59e3e7167699d00ccb7592)`() const` | Checks whether Str9_Optional is set to null.
`public inline FString & `[`GetStr10`](#structFRHAPI__MatchTimelineEvent_1a5226db625dc5625214b433afe364fc07)`()` | Gets the value of Str10_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr10`](#structFRHAPI__MatchTimelineEvent_1a86f7ad33291235f7a01e6d7a5fc23f19)`() const` | Gets the value of Str10_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr10`](#structFRHAPI__MatchTimelineEvent_1a9c57a916f131187c042d4a7995f07eaa)`(const FString & DefaultValue) const` | Gets the value of Str10_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr10`](#structFRHAPI__MatchTimelineEvent_1a60304d41f4e0b8146daed76f89022d6b)`(FString & OutValue) const` | Fills OutValue with the value of Str10_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr10OrNull`](#structFRHAPI__MatchTimelineEvent_1a807949bf002dfa3e467d721a52b5b949)`()` | Returns a pointer to Str10_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr10OrNull`](#structFRHAPI__MatchTimelineEvent_1ac8473c54d362564899ab55ab9eff277e)`() const` | Returns a pointer to Str10_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr10`](#structFRHAPI__MatchTimelineEvent_1a2d37cc4f33869e1523c46f6743ec13ee)`(const FString & NewValue)` | Sets the value of Str10_Optional and also sets Str10_IsSet to true.
`public inline void `[`SetStr10`](#structFRHAPI__MatchTimelineEvent_1a7f0e4af4a84337b8404f7bd922e276d2)`(FString && NewValue)` | Sets the value of Str10_Optional and also sets Str10_IsSet to true using move semantics.
`public inline void `[`ClearStr10`](#structFRHAPI__MatchTimelineEvent_1a13e8edac4c1ea3f1c3be28b5c9cb5203)`()` | Clears the value of Str10_Optional and sets Str10_IsSet to false.
`public inline bool `[`IsStr10Set`](#structFRHAPI__MatchTimelineEvent_1a3cbf32b018f3e76ed00c9dfec331e86e)`() const` | Checks whether Str10_Optional has been set.
`public inline void `[`SetStr10ToNull`](#structFRHAPI__MatchTimelineEvent_1a35098ced5dce2bbde34d0c457ef72e85)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr10Null`](#structFRHAPI__MatchTimelineEvent_1aaa3033d50c04ac20b6d38d5ffa387c04)`() const` | Checks whether Str10_Optional is set to null.
`public inline FString & `[`GetStr11`](#structFRHAPI__MatchTimelineEvent_1a8352b4206194f07291d54ae51388c569)`()` | Gets the value of Str11_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr11`](#structFRHAPI__MatchTimelineEvent_1aec18afd8d2d9e6ec80002014294cc006)`() const` | Gets the value of Str11_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr11`](#structFRHAPI__MatchTimelineEvent_1a515827291a7c71e47b1eaf8072cc9143)`(const FString & DefaultValue) const` | Gets the value of Str11_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr11`](#structFRHAPI__MatchTimelineEvent_1a5ddf70f4b42deaae511bc8436eccf6b1)`(FString & OutValue) const` | Fills OutValue with the value of Str11_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr11OrNull`](#structFRHAPI__MatchTimelineEvent_1a4e3ee6c598ef386c3a405c3e68c51d6a)`()` | Returns a pointer to Str11_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr11OrNull`](#structFRHAPI__MatchTimelineEvent_1a044f3c5e2f582ae9ccb0f08740df088a)`() const` | Returns a pointer to Str11_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr11`](#structFRHAPI__MatchTimelineEvent_1abb8ebfc7617bde7547bd57f6fefd58e1)`(const FString & NewValue)` | Sets the value of Str11_Optional and also sets Str11_IsSet to true.
`public inline void `[`SetStr11`](#structFRHAPI__MatchTimelineEvent_1a11a8b4633479538ee0559d33f03f1712)`(FString && NewValue)` | Sets the value of Str11_Optional and also sets Str11_IsSet to true using move semantics.
`public inline void `[`ClearStr11`](#structFRHAPI__MatchTimelineEvent_1aa66bf444af4a95ab62487a3cb6d82632)`()` | Clears the value of Str11_Optional and sets Str11_IsSet to false.
`public inline bool `[`IsStr11Set`](#structFRHAPI__MatchTimelineEvent_1a964c4a3586b0862a92e9ac3ff9e45ae8)`() const` | Checks whether Str11_Optional has been set.
`public inline void `[`SetStr11ToNull`](#structFRHAPI__MatchTimelineEvent_1ae798f477814404fa6bec8f4743cab7cf)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr11Null`](#structFRHAPI__MatchTimelineEvent_1a192a0b00644ce68fe0bc00820882aa89)`() const` | Checks whether Str11_Optional is set to null.
`public inline FString & `[`GetStr12`](#structFRHAPI__MatchTimelineEvent_1a802bd621129018721de7adc122b15d85)`()` | Gets the value of Str12_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr12`](#structFRHAPI__MatchTimelineEvent_1ab13ba49211b0166e6792e4d2d470884e)`() const` | Gets the value of Str12_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr12`](#structFRHAPI__MatchTimelineEvent_1a498d949d1e2eac4d82a74573fa54d42b)`(const FString & DefaultValue) const` | Gets the value of Str12_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr12`](#structFRHAPI__MatchTimelineEvent_1a31cd39eaacfa81c6da0eaeecc6c9eda5)`(FString & OutValue) const` | Fills OutValue with the value of Str12_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr12OrNull`](#structFRHAPI__MatchTimelineEvent_1a255260f0b486b2776ae3e8dea93eccf1)`()` | Returns a pointer to Str12_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr12OrNull`](#structFRHAPI__MatchTimelineEvent_1a63df7c5c673a0ce1d0488aa06f77c7e6)`() const` | Returns a pointer to Str12_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr12`](#structFRHAPI__MatchTimelineEvent_1a6a15f8b57c1e1e2f7920bd6530e94fcc)`(const FString & NewValue)` | Sets the value of Str12_Optional and also sets Str12_IsSet to true.
`public inline void `[`SetStr12`](#structFRHAPI__MatchTimelineEvent_1aa8830d3ddeb97e4fda1b5b65c7d33a73)`(FString && NewValue)` | Sets the value of Str12_Optional and also sets Str12_IsSet to true using move semantics.
`public inline void `[`ClearStr12`](#structFRHAPI__MatchTimelineEvent_1af5fa6efdbe5321262b48849411b1b69e)`()` | Clears the value of Str12_Optional and sets Str12_IsSet to false.
`public inline bool `[`IsStr12Set`](#structFRHAPI__MatchTimelineEvent_1a1d9173d84cc77a2cb29bc24b5e46fe28)`() const` | Checks whether Str12_Optional has been set.
`public inline void `[`SetStr12ToNull`](#structFRHAPI__MatchTimelineEvent_1a22130534150cac9d8e97b92ac5ef6da8)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr12Null`](#structFRHAPI__MatchTimelineEvent_1a0221b126911ef54b989e4d71b40b964d)`() const` | Checks whether Str12_Optional is set to null.
`public inline FString & `[`GetStr13`](#structFRHAPI__MatchTimelineEvent_1a7a0a325754d5d84bc0ba6a51fdbd1f5a)`()` | Gets the value of Str13_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr13`](#structFRHAPI__MatchTimelineEvent_1a98bbc935263ed83e76705c6b8e59b119)`() const` | Gets the value of Str13_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr13`](#structFRHAPI__MatchTimelineEvent_1a472bd270ff6a8849a353f569d54ab01a)`(const FString & DefaultValue) const` | Gets the value of Str13_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr13`](#structFRHAPI__MatchTimelineEvent_1a0dfdcef9fc6224fd65acce3586382b9a)`(FString & OutValue) const` | Fills OutValue with the value of Str13_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr13OrNull`](#structFRHAPI__MatchTimelineEvent_1a6f581028edd00d5f009e1dfe0e45d5a2)`()` | Returns a pointer to Str13_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr13OrNull`](#structFRHAPI__MatchTimelineEvent_1afb9cb4198c5c187c38e0a44e3ecd8061)`() const` | Returns a pointer to Str13_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr13`](#structFRHAPI__MatchTimelineEvent_1a02973f19e697115531bc69bb7c81645b)`(const FString & NewValue)` | Sets the value of Str13_Optional and also sets Str13_IsSet to true.
`public inline void `[`SetStr13`](#structFRHAPI__MatchTimelineEvent_1abc7a4724f4176e4d401adc6e4e3b996c)`(FString && NewValue)` | Sets the value of Str13_Optional and also sets Str13_IsSet to true using move semantics.
`public inline void `[`ClearStr13`](#structFRHAPI__MatchTimelineEvent_1a32479d532752859d86053525693418d8)`()` | Clears the value of Str13_Optional and sets Str13_IsSet to false.
`public inline bool `[`IsStr13Set`](#structFRHAPI__MatchTimelineEvent_1ae1083d2b69564a044e5b8dffd759818c)`() const` | Checks whether Str13_Optional has been set.
`public inline void `[`SetStr13ToNull`](#structFRHAPI__MatchTimelineEvent_1af3a335a75e44b26752f79c25b544b132)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr13Null`](#structFRHAPI__MatchTimelineEvent_1a0ccd3e36dd53dff5e847d385dd2ef5ec)`() const` | Checks whether Str13_Optional is set to null.
`public inline FString & `[`GetStr14`](#structFRHAPI__MatchTimelineEvent_1aca6f8077cadef93710c646279a488dd5)`()` | Gets the value of Str14_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr14`](#structFRHAPI__MatchTimelineEvent_1adc6139d5f075f1867140459d61b07e65)`() const` | Gets the value of Str14_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr14`](#structFRHAPI__MatchTimelineEvent_1a05dfb8a11633e459eec125ab2ee4df0f)`(const FString & DefaultValue) const` | Gets the value of Str14_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr14`](#structFRHAPI__MatchTimelineEvent_1aac1e95061d6cb381711d577f3aa2f9f5)`(FString & OutValue) const` | Fills OutValue with the value of Str14_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr14OrNull`](#structFRHAPI__MatchTimelineEvent_1aeb58775ad1dbfb2b4b07a11455cc205e)`()` | Returns a pointer to Str14_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr14OrNull`](#structFRHAPI__MatchTimelineEvent_1a3ecda3d984f052a01802fe1f513fe052)`() const` | Returns a pointer to Str14_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr14`](#structFRHAPI__MatchTimelineEvent_1aea27bc967813b4d6be9c0f513bf5d2ba)`(const FString & NewValue)` | Sets the value of Str14_Optional and also sets Str14_IsSet to true.
`public inline void `[`SetStr14`](#structFRHAPI__MatchTimelineEvent_1a17fc0f1e11188f08fc6cf760aee723ae)`(FString && NewValue)` | Sets the value of Str14_Optional and also sets Str14_IsSet to true using move semantics.
`public inline void `[`ClearStr14`](#structFRHAPI__MatchTimelineEvent_1a6131b3f6b9b0430e7084de5aeb8d6540)`()` | Clears the value of Str14_Optional and sets Str14_IsSet to false.
`public inline bool `[`IsStr14Set`](#structFRHAPI__MatchTimelineEvent_1a66c23bd6321d804b6e601065aea2c715)`() const` | Checks whether Str14_Optional has been set.
`public inline void `[`SetStr14ToNull`](#structFRHAPI__MatchTimelineEvent_1ae8b87d4be14930b3341f0d5830cb37ad)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr14Null`](#structFRHAPI__MatchTimelineEvent_1a4a4c3fb6b6834ef82066cfe7f354d6bf)`() const` | Checks whether Str14_Optional is set to null.
`public inline FString & `[`GetStr15`](#structFRHAPI__MatchTimelineEvent_1a0b716b125694096599bce0f6375e1c9e)`()` | Gets the value of Str15_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr15`](#structFRHAPI__MatchTimelineEvent_1ada543c695e4ab7bb9461fb9f961cff72)`() const` | Gets the value of Str15_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr15`](#structFRHAPI__MatchTimelineEvent_1af2291bccd0cd11cd51e89209ec6f1d93)`(const FString & DefaultValue) const` | Gets the value of Str15_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr15`](#structFRHAPI__MatchTimelineEvent_1a1b0224111739678fa496ea72c96ea4d6)`(FString & OutValue) const` | Fills OutValue with the value of Str15_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr15OrNull`](#structFRHAPI__MatchTimelineEvent_1a31a4f0fda75c8608eb6236729fae009b)`()` | Returns a pointer to Str15_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr15OrNull`](#structFRHAPI__MatchTimelineEvent_1ad4bfb2379521c3165ec83cd02206e7be)`() const` | Returns a pointer to Str15_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr15`](#structFRHAPI__MatchTimelineEvent_1a5605daddf1037fe2c5f4425de537518c)`(const FString & NewValue)` | Sets the value of Str15_Optional and also sets Str15_IsSet to true.
`public inline void `[`SetStr15`](#structFRHAPI__MatchTimelineEvent_1a53dd49a1fc207ebc4339345191fa4382)`(FString && NewValue)` | Sets the value of Str15_Optional and also sets Str15_IsSet to true using move semantics.
`public inline void `[`ClearStr15`](#structFRHAPI__MatchTimelineEvent_1a0e7ba518c0b4aba97605a68c0b6b18a1)`()` | Clears the value of Str15_Optional and sets Str15_IsSet to false.
`public inline bool `[`IsStr15Set`](#structFRHAPI__MatchTimelineEvent_1a1f6b62ef9e5b26522dee77aecaf8ed09)`() const` | Checks whether Str15_Optional has been set.
`public inline void `[`SetStr15ToNull`](#structFRHAPI__MatchTimelineEvent_1a168bdc5baf5c19d457b24f01a1fbf73a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr15Null`](#structFRHAPI__MatchTimelineEvent_1a6c6a5e1e40e92b80d5bfc1723e08bce4)`() const` | Checks whether Str15_Optional is set to null.
`public inline FString & `[`GetStr16`](#structFRHAPI__MatchTimelineEvent_1a1e3d09bad8fe89afabc00830d967e673)`()` | Gets the value of Str16_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr16`](#structFRHAPI__MatchTimelineEvent_1a2ee35f56a514b642f7d5d2707695c689)`() const` | Gets the value of Str16_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr16`](#structFRHAPI__MatchTimelineEvent_1a81862466f83ddba9a8e3b39c10778548)`(const FString & DefaultValue) const` | Gets the value of Str16_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr16`](#structFRHAPI__MatchTimelineEvent_1a45fd4e66d6798bbb7e02cf5a5e327529)`(FString & OutValue) const` | Fills OutValue with the value of Str16_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr16OrNull`](#structFRHAPI__MatchTimelineEvent_1a92dee44efbb0d4c5ef2167b1050e9cee)`()` | Returns a pointer to Str16_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr16OrNull`](#structFRHAPI__MatchTimelineEvent_1a5a5d2f33cfb4108f751dc62859598629)`() const` | Returns a pointer to Str16_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr16`](#structFRHAPI__MatchTimelineEvent_1a66ed56fee62de91dd4f4f1ea38190c9d)`(const FString & NewValue)` | Sets the value of Str16_Optional and also sets Str16_IsSet to true.
`public inline void `[`SetStr16`](#structFRHAPI__MatchTimelineEvent_1a5452f69e668d8a4ad5c2b516c2457cfa)`(FString && NewValue)` | Sets the value of Str16_Optional and also sets Str16_IsSet to true using move semantics.
`public inline void `[`ClearStr16`](#structFRHAPI__MatchTimelineEvent_1a37f7c89d23da95ebe493548bf6da4c83)`()` | Clears the value of Str16_Optional and sets Str16_IsSet to false.
`public inline bool `[`IsStr16Set`](#structFRHAPI__MatchTimelineEvent_1a2fe871dcff9ee73116fd3c4e6f4f3248)`() const` | Checks whether Str16_Optional has been set.
`public inline void `[`SetStr16ToNull`](#structFRHAPI__MatchTimelineEvent_1a149e24fa3238edd53402c5f7e551457c)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr16Null`](#structFRHAPI__MatchTimelineEvent_1aec572ba260138a87d94016eaee1a2e07)`() const` | Checks whether Str16_Optional is set to null.
`public inline FString & `[`GetStr17`](#structFRHAPI__MatchTimelineEvent_1a6dd869f9713e19e475bb2427b2bd0215)`()` | Gets the value of Str17_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr17`](#structFRHAPI__MatchTimelineEvent_1a429f22df4e0b2669a12d7eaea4728bed)`() const` | Gets the value of Str17_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr17`](#structFRHAPI__MatchTimelineEvent_1afff0690c19fc9e075a31d16dc87b6b24)`(const FString & DefaultValue) const` | Gets the value of Str17_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr17`](#structFRHAPI__MatchTimelineEvent_1a5787036e486ea9c935c69c93f9ff87fb)`(FString & OutValue) const` | Fills OutValue with the value of Str17_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr17OrNull`](#structFRHAPI__MatchTimelineEvent_1a8a7efaa9420c3afa0b138d59c19bfc1e)`()` | Returns a pointer to Str17_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr17OrNull`](#structFRHAPI__MatchTimelineEvent_1a44bfa36d544851cab0b26eb9050aad55)`() const` | Returns a pointer to Str17_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr17`](#structFRHAPI__MatchTimelineEvent_1ad8cbc71637e3f8cf757565ad631d03e9)`(const FString & NewValue)` | Sets the value of Str17_Optional and also sets Str17_IsSet to true.
`public inline void `[`SetStr17`](#structFRHAPI__MatchTimelineEvent_1a0ccb11a2550304fa8615633d9454528a)`(FString && NewValue)` | Sets the value of Str17_Optional and also sets Str17_IsSet to true using move semantics.
`public inline void `[`ClearStr17`](#structFRHAPI__MatchTimelineEvent_1ad7936f35e5a6da65e806c2224941718c)`()` | Clears the value of Str17_Optional and sets Str17_IsSet to false.
`public inline bool `[`IsStr17Set`](#structFRHAPI__MatchTimelineEvent_1a060db493d596f19aaa639cdfd0a8f25c)`() const` | Checks whether Str17_Optional has been set.
`public inline void `[`SetStr17ToNull`](#structFRHAPI__MatchTimelineEvent_1a691772b6ad974165a739e907cfefa571)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr17Null`](#structFRHAPI__MatchTimelineEvent_1ae5c67bfa67994eedcda29c81f1c37714)`() const` | Checks whether Str17_Optional is set to null.
`public inline FString & `[`GetStr18`](#structFRHAPI__MatchTimelineEvent_1a463e65b2fc597df7ef06286372efb52d)`()` | Gets the value of Str18_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr18`](#structFRHAPI__MatchTimelineEvent_1a66b6ff5a217cb72711a3d357f7bf4331)`() const` | Gets the value of Str18_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr18`](#structFRHAPI__MatchTimelineEvent_1af96c9e71dfb983dbbf8d22fbff6cc6db)`(const FString & DefaultValue) const` | Gets the value of Str18_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr18`](#structFRHAPI__MatchTimelineEvent_1aacffbb614db068256eb6b5b82b061370)`(FString & OutValue) const` | Fills OutValue with the value of Str18_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr18OrNull`](#structFRHAPI__MatchTimelineEvent_1a940d2d8c28d77852f033d94b6c4d7775)`()` | Returns a pointer to Str18_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr18OrNull`](#structFRHAPI__MatchTimelineEvent_1a00f53dec5c32cc9e8374c502ab6e51c3)`() const` | Returns a pointer to Str18_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr18`](#structFRHAPI__MatchTimelineEvent_1a0347591b6e33ffc2a7771d70429d7b02)`(const FString & NewValue)` | Sets the value of Str18_Optional and also sets Str18_IsSet to true.
`public inline void `[`SetStr18`](#structFRHAPI__MatchTimelineEvent_1a87b8750e677e71b7a3966d3cfec75c74)`(FString && NewValue)` | Sets the value of Str18_Optional and also sets Str18_IsSet to true using move semantics.
`public inline void `[`ClearStr18`](#structFRHAPI__MatchTimelineEvent_1a3565799dfccc694fb74a4472d1e36b77)`()` | Clears the value of Str18_Optional and sets Str18_IsSet to false.
`public inline bool `[`IsStr18Set`](#structFRHAPI__MatchTimelineEvent_1a3962459a8bd8cfd6faad454c413984cf)`() const` | Checks whether Str18_Optional has been set.
`public inline void `[`SetStr18ToNull`](#structFRHAPI__MatchTimelineEvent_1a6c26e30a664ba1b2bd0d4a110bf6991c)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr18Null`](#structFRHAPI__MatchTimelineEvent_1a26421a5f871a8bf254b05541f8a82b08)`() const` | Checks whether Str18_Optional is set to null.
`public inline FString & `[`GetStr19`](#structFRHAPI__MatchTimelineEvent_1abb4ebb54999b18942157c3c09ed4717c)`()` | Gets the value of Str19_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr19`](#structFRHAPI__MatchTimelineEvent_1a0ce834056f1fc92f77065dab9ba4b4cc)`() const` | Gets the value of Str19_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr19`](#structFRHAPI__MatchTimelineEvent_1adef38c08afd852edbcb76fdeeb11865e)`(const FString & DefaultValue) const` | Gets the value of Str19_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr19`](#structFRHAPI__MatchTimelineEvent_1a73d01a1bc450aca386614084087d1e56)`(FString & OutValue) const` | Fills OutValue with the value of Str19_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr19OrNull`](#structFRHAPI__MatchTimelineEvent_1a5fce8615d230cbacb9ed4fa5d6d6fedc)`()` | Returns a pointer to Str19_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr19OrNull`](#structFRHAPI__MatchTimelineEvent_1a97c9bf36ba9b26517d4d921c8cf2033b)`() const` | Returns a pointer to Str19_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr19`](#structFRHAPI__MatchTimelineEvent_1a32dbe2d9902a795b4c974bce228a3ead)`(const FString & NewValue)` | Sets the value of Str19_Optional and also sets Str19_IsSet to true.
`public inline void `[`SetStr19`](#structFRHAPI__MatchTimelineEvent_1ad2ac9e7fa9110ef06efe7d7e6271e6a9)`(FString && NewValue)` | Sets the value of Str19_Optional and also sets Str19_IsSet to true using move semantics.
`public inline void `[`ClearStr19`](#structFRHAPI__MatchTimelineEvent_1ae1fef348210bcdbcbcad66c011bd49ce)`()` | Clears the value of Str19_Optional and sets Str19_IsSet to false.
`public inline bool `[`IsStr19Set`](#structFRHAPI__MatchTimelineEvent_1ad9d5f310ff1b81af79d2ead19310e461)`() const` | Checks whether Str19_Optional has been set.
`public inline void `[`SetStr19ToNull`](#structFRHAPI__MatchTimelineEvent_1a3df0edda2b20b12a98c588156018d628)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr19Null`](#structFRHAPI__MatchTimelineEvent_1a2bec892061f5615203301b7be5faca2c)`() const` | Checks whether Str19_Optional is set to null.
`public inline FString & `[`GetStr20`](#structFRHAPI__MatchTimelineEvent_1a14dd8536eb519264d91b190d392644aa)`()` | Gets the value of Str20_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr20`](#structFRHAPI__MatchTimelineEvent_1a7fa62bcbb0864c757fdc02f248fecebd)`() const` | Gets the value of Str20_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr20`](#structFRHAPI__MatchTimelineEvent_1a922e095a19a476559b6cd85d5c5e8f47)`(const FString & DefaultValue) const` | Gets the value of Str20_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr20`](#structFRHAPI__MatchTimelineEvent_1a38bb0e89d5d4c66e6d261c80184aeb9b)`(FString & OutValue) const` | Fills OutValue with the value of Str20_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr20OrNull`](#structFRHAPI__MatchTimelineEvent_1af1686f47824ea99bc43d7291ae6901cc)`()` | Returns a pointer to Str20_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr20OrNull`](#structFRHAPI__MatchTimelineEvent_1a9ca6333ca3592213f4fbdd2e4c2371ae)`() const` | Returns a pointer to Str20_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr20`](#structFRHAPI__MatchTimelineEvent_1a06c5fc5e5834c99adfa049f700857798)`(const FString & NewValue)` | Sets the value of Str20_Optional and also sets Str20_IsSet to true.
`public inline void `[`SetStr20`](#structFRHAPI__MatchTimelineEvent_1ae6adef1efd4c67f98d8650d25608e4c1)`(FString && NewValue)` | Sets the value of Str20_Optional and also sets Str20_IsSet to true using move semantics.
`public inline void `[`ClearStr20`](#structFRHAPI__MatchTimelineEvent_1a6e03afee1137fc5ca1864532c27f8e2d)`()` | Clears the value of Str20_Optional and sets Str20_IsSet to false.
`public inline bool `[`IsStr20Set`](#structFRHAPI__MatchTimelineEvent_1a8aa2a81f80423e1a5cef9f9699af428b)`() const` | Checks whether Str20_Optional has been set.
`public inline void `[`SetStr20ToNull`](#structFRHAPI__MatchTimelineEvent_1a211b95dd5dc566128da5e283dfe014b6)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr20Null`](#structFRHAPI__MatchTimelineEvent_1a86095ca7682d78691498ddfd12731d97)`() const` | Checks whether Str20_Optional is set to null.
`public inline FString & `[`GetStr21`](#structFRHAPI__MatchTimelineEvent_1a9d5b697eb256ec244b5503e966bdf302)`()` | Gets the value of Str21_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr21`](#structFRHAPI__MatchTimelineEvent_1a5d665d660601c7f820bcf36c2c08bfef)`() const` | Gets the value of Str21_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr21`](#structFRHAPI__MatchTimelineEvent_1a0a33d0bbc8b131a8cc7c3d5b55286c8d)`(const FString & DefaultValue) const` | Gets the value of Str21_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr21`](#structFRHAPI__MatchTimelineEvent_1aeb4d102217caedeb5dda869897a5be87)`(FString & OutValue) const` | Fills OutValue with the value of Str21_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr21OrNull`](#structFRHAPI__MatchTimelineEvent_1acbf6941cb54b12bfbcd7a2cd61cf0ee5)`()` | Returns a pointer to Str21_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr21OrNull`](#structFRHAPI__MatchTimelineEvent_1a5ddc799d499813d9294fa164927c758b)`() const` | Returns a pointer to Str21_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr21`](#structFRHAPI__MatchTimelineEvent_1abb885e854bf5cb77e6e1e3eca50d03de)`(const FString & NewValue)` | Sets the value of Str21_Optional and also sets Str21_IsSet to true.
`public inline void `[`SetStr21`](#structFRHAPI__MatchTimelineEvent_1ad4f916ff5c98d3fefb8e37f4db557a7e)`(FString && NewValue)` | Sets the value of Str21_Optional and also sets Str21_IsSet to true using move semantics.
`public inline void `[`ClearStr21`](#structFRHAPI__MatchTimelineEvent_1a484d3d05ac76746b31e4f278a8b7bb95)`()` | Clears the value of Str21_Optional and sets Str21_IsSet to false.
`public inline bool `[`IsStr21Set`](#structFRHAPI__MatchTimelineEvent_1acdf09517515a9cd2f624fdd471cd78a2)`() const` | Checks whether Str21_Optional has been set.
`public inline void `[`SetStr21ToNull`](#structFRHAPI__MatchTimelineEvent_1a2cfe653ccdab3786fff32cc80d742bd7)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr21Null`](#structFRHAPI__MatchTimelineEvent_1a8e54c4d304dbd28182eb71be414f8ec3)`() const` | Checks whether Str21_Optional is set to null.
`public inline FString & `[`GetStr22`](#structFRHAPI__MatchTimelineEvent_1a23ed0889ffae718940473e41441d0ebb)`()` | Gets the value of Str22_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr22`](#structFRHAPI__MatchTimelineEvent_1ad5623a101d25c41a22a1570a13d5f6bb)`() const` | Gets the value of Str22_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr22`](#structFRHAPI__MatchTimelineEvent_1ae39635c87aaad7f847c86bf388c399fc)`(const FString & DefaultValue) const` | Gets the value of Str22_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr22`](#structFRHAPI__MatchTimelineEvent_1a99de34620ae444a9d85fcae5a8f87c1b)`(FString & OutValue) const` | Fills OutValue with the value of Str22_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr22OrNull`](#structFRHAPI__MatchTimelineEvent_1af75524bcd8dbfb493476400f7c805b7a)`()` | Returns a pointer to Str22_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr22OrNull`](#structFRHAPI__MatchTimelineEvent_1a8821202b3e7650e8e1b0447397939f94)`() const` | Returns a pointer to Str22_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr22`](#structFRHAPI__MatchTimelineEvent_1af3725767041c93259c3bab06ceea0b95)`(const FString & NewValue)` | Sets the value of Str22_Optional and also sets Str22_IsSet to true.
`public inline void `[`SetStr22`](#structFRHAPI__MatchTimelineEvent_1af891647e7e4b621198bfb2eed0bb12e5)`(FString && NewValue)` | Sets the value of Str22_Optional and also sets Str22_IsSet to true using move semantics.
`public inline void `[`ClearStr22`](#structFRHAPI__MatchTimelineEvent_1ad8e59033b97c170d1a63bd216c21870d)`()` | Clears the value of Str22_Optional and sets Str22_IsSet to false.
`public inline bool `[`IsStr22Set`](#structFRHAPI__MatchTimelineEvent_1a4cbdaaac548ebd64175a3a598e24de4d)`() const` | Checks whether Str22_Optional has been set.
`public inline void `[`SetStr22ToNull`](#structFRHAPI__MatchTimelineEvent_1a48198ff11bdfc0b419c8d3d51b480c5d)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr22Null`](#structFRHAPI__MatchTimelineEvent_1aeadc62457502b4b46ca086fbbaeaa346)`() const` | Checks whether Str22_Optional is set to null.
`public inline FString & `[`GetStr23`](#structFRHAPI__MatchTimelineEvent_1ab961a5ca672d53cde6c46d6d4ae9bc74)`()` | Gets the value of Str23_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr23`](#structFRHAPI__MatchTimelineEvent_1ad55c355760ec5397a0ddfcb0a635b856)`() const` | Gets the value of Str23_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr23`](#structFRHAPI__MatchTimelineEvent_1a93c6ea651bdc88df7a7792af9d9c71fd)`(const FString & DefaultValue) const` | Gets the value of Str23_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr23`](#structFRHAPI__MatchTimelineEvent_1a53e91560bfd4a8ea4c690b866363ebb2)`(FString & OutValue) const` | Fills OutValue with the value of Str23_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr23OrNull`](#structFRHAPI__MatchTimelineEvent_1a29336acbb5811ea0f8ff7c8975c70b60)`()` | Returns a pointer to Str23_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr23OrNull`](#structFRHAPI__MatchTimelineEvent_1abfff9f41304ace1bbc14bacb0718d512)`() const` | Returns a pointer to Str23_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr23`](#structFRHAPI__MatchTimelineEvent_1abbdddf6c46e55501a53a1ae4f28ded5d)`(const FString & NewValue)` | Sets the value of Str23_Optional and also sets Str23_IsSet to true.
`public inline void `[`SetStr23`](#structFRHAPI__MatchTimelineEvent_1af992d881e636b85a297214b7f0647c73)`(FString && NewValue)` | Sets the value of Str23_Optional and also sets Str23_IsSet to true using move semantics.
`public inline void `[`ClearStr23`](#structFRHAPI__MatchTimelineEvent_1af86fd93c4e7341fb68290e090c0fe28b)`()` | Clears the value of Str23_Optional and sets Str23_IsSet to false.
`public inline bool `[`IsStr23Set`](#structFRHAPI__MatchTimelineEvent_1acb284e8d29426177bf514b1f1f194bd1)`() const` | Checks whether Str23_Optional has been set.
`public inline void `[`SetStr23ToNull`](#structFRHAPI__MatchTimelineEvent_1a824d6023b183f851db63ebf9769ad0d1)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr23Null`](#structFRHAPI__MatchTimelineEvent_1a973403679026c743c7fd2a12d326d092)`() const` | Checks whether Str23_Optional is set to null.
`public inline FString & `[`GetStr24`](#structFRHAPI__MatchTimelineEvent_1a7433a7cc6e1ee804c7c0596e05b509d6)`()` | Gets the value of Str24_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr24`](#structFRHAPI__MatchTimelineEvent_1a3207fc6bd06b43c047a1fdb811c82b98)`() const` | Gets the value of Str24_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr24`](#structFRHAPI__MatchTimelineEvent_1aacb0f4c6cbd8a8738329589012144ddd)`(const FString & DefaultValue) const` | Gets the value of Str24_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr24`](#structFRHAPI__MatchTimelineEvent_1ab1f136442dfc3538a2664d8efdcbc486)`(FString & OutValue) const` | Fills OutValue with the value of Str24_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr24OrNull`](#structFRHAPI__MatchTimelineEvent_1a715daf7fd9aac7215a3bd55510a2036f)`()` | Returns a pointer to Str24_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr24OrNull`](#structFRHAPI__MatchTimelineEvent_1abc5125111653ec8950904ad9948e9c88)`() const` | Returns a pointer to Str24_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr24`](#structFRHAPI__MatchTimelineEvent_1af975344dfe9748223073e507e77c8896)`(const FString & NewValue)` | Sets the value of Str24_Optional and also sets Str24_IsSet to true.
`public inline void `[`SetStr24`](#structFRHAPI__MatchTimelineEvent_1aee205ee6100c8a40fda3dd99f8b6db03)`(FString && NewValue)` | Sets the value of Str24_Optional and also sets Str24_IsSet to true using move semantics.
`public inline void `[`ClearStr24`](#structFRHAPI__MatchTimelineEvent_1af670bcb1e9bddca26d42da1e13925564)`()` | Clears the value of Str24_Optional and sets Str24_IsSet to false.
`public inline bool `[`IsStr24Set`](#structFRHAPI__MatchTimelineEvent_1aa39ffc8526b15e0ed5fd3185fc6868b8)`() const` | Checks whether Str24_Optional has been set.
`public inline void `[`SetStr24ToNull`](#structFRHAPI__MatchTimelineEvent_1a6116ba409476eaafe0016387481f8f70)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr24Null`](#structFRHAPI__MatchTimelineEvent_1a424f1ec874aa33e319f47c591354816c)`() const` | Checks whether Str24_Optional is set to null.
`public inline FString & `[`GetStr25`](#structFRHAPI__MatchTimelineEvent_1ab75d658870d07100e9247983a296b0da)`()` | Gets the value of Str25_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr25`](#structFRHAPI__MatchTimelineEvent_1ac3d8b3e42ac5a5082ffed6295e7074ef)`() const` | Gets the value of Str25_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr25`](#structFRHAPI__MatchTimelineEvent_1ac13806cc24bba60e250ba3599e3eebb4)`(const FString & DefaultValue) const` | Gets the value of Str25_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr25`](#structFRHAPI__MatchTimelineEvent_1afd7b92ea43401cc88b5c154d256f4020)`(FString & OutValue) const` | Fills OutValue with the value of Str25_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr25OrNull`](#structFRHAPI__MatchTimelineEvent_1a00bbde90d57a0e426f0aad249fe14e21)`()` | Returns a pointer to Str25_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr25OrNull`](#structFRHAPI__MatchTimelineEvent_1a0c297558d57ba511678242d09264396a)`() const` | Returns a pointer to Str25_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr25`](#structFRHAPI__MatchTimelineEvent_1a345a35ae266c443bc4cde04f2fd57213)`(const FString & NewValue)` | Sets the value of Str25_Optional and also sets Str25_IsSet to true.
`public inline void `[`SetStr25`](#structFRHAPI__MatchTimelineEvent_1a5914d6a12772ba124e6a9f0a3763e99c)`(FString && NewValue)` | Sets the value of Str25_Optional and also sets Str25_IsSet to true using move semantics.
`public inline void `[`ClearStr25`](#structFRHAPI__MatchTimelineEvent_1aff25ec2e0c86617e1b26ffbde286f9df)`()` | Clears the value of Str25_Optional and sets Str25_IsSet to false.
`public inline bool `[`IsStr25Set`](#structFRHAPI__MatchTimelineEvent_1a31b8b2e2e6f5a0957b13cfe811181c12)`() const` | Checks whether Str25_Optional has been set.
`public inline void `[`SetStr25ToNull`](#structFRHAPI__MatchTimelineEvent_1aa32c9b388e5778ce427ee386b74aee71)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr25Null`](#structFRHAPI__MatchTimelineEvent_1a201885e54ede0740b65d41e1df529037)`() const` | Checks whether Str25_Optional is set to null.
`public inline FString & `[`GetStr26`](#structFRHAPI__MatchTimelineEvent_1abfee084b4357c58c69c112b3f3413412)`()` | Gets the value of Str26_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr26`](#structFRHAPI__MatchTimelineEvent_1a944d5cfd106ca9673e5e1d7b58c4b531)`() const` | Gets the value of Str26_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr26`](#structFRHAPI__MatchTimelineEvent_1a86819fba4cf7af86347a205f18f8a451)`(const FString & DefaultValue) const` | Gets the value of Str26_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr26`](#structFRHAPI__MatchTimelineEvent_1a37f2954366af1c7724ac1555482456d2)`(FString & OutValue) const` | Fills OutValue with the value of Str26_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr26OrNull`](#structFRHAPI__MatchTimelineEvent_1a55ee1b3c807a66c780b4879d654fdd28)`()` | Returns a pointer to Str26_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr26OrNull`](#structFRHAPI__MatchTimelineEvent_1abde01eb451acb1679014df01826191f0)`() const` | Returns a pointer to Str26_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr26`](#structFRHAPI__MatchTimelineEvent_1a196ff246bb048854564a10320f0d4c3e)`(const FString & NewValue)` | Sets the value of Str26_Optional and also sets Str26_IsSet to true.
`public inline void `[`SetStr26`](#structFRHAPI__MatchTimelineEvent_1a429150866c1a81f26503422802ebe19a)`(FString && NewValue)` | Sets the value of Str26_Optional and also sets Str26_IsSet to true using move semantics.
`public inline void `[`ClearStr26`](#structFRHAPI__MatchTimelineEvent_1ae385a78154d27aa25b8786519e5c25ad)`()` | Clears the value of Str26_Optional and sets Str26_IsSet to false.
`public inline bool `[`IsStr26Set`](#structFRHAPI__MatchTimelineEvent_1a51a015a00b0c7b216bf50f9853749764)`() const` | Checks whether Str26_Optional has been set.
`public inline void `[`SetStr26ToNull`](#structFRHAPI__MatchTimelineEvent_1a60ce28b31dace46f6e86d0b1fe92cbf3)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr26Null`](#structFRHAPI__MatchTimelineEvent_1a7f351e8ac022241079f51847a01d7a94)`() const` | Checks whether Str26_Optional is set to null.
`public inline FString & `[`GetStr27`](#structFRHAPI__MatchTimelineEvent_1a59c23069e6afc6e78be3ca598716680d)`()` | Gets the value of Str27_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr27`](#structFRHAPI__MatchTimelineEvent_1ac8a36d3c7c7d6930b8c462d7e8619281)`() const` | Gets the value of Str27_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr27`](#structFRHAPI__MatchTimelineEvent_1ab031adeb27d7676fbe68452ed10a660b)`(const FString & DefaultValue) const` | Gets the value of Str27_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr27`](#structFRHAPI__MatchTimelineEvent_1afd6e53e02459d67448a2972981481333)`(FString & OutValue) const` | Fills OutValue with the value of Str27_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr27OrNull`](#structFRHAPI__MatchTimelineEvent_1a65ea608e7f33519ddc0540a2bc6b8af1)`()` | Returns a pointer to Str27_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr27OrNull`](#structFRHAPI__MatchTimelineEvent_1adc36ddc84cc04cefb7211670bd5dbfc9)`() const` | Returns a pointer to Str27_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr27`](#structFRHAPI__MatchTimelineEvent_1a35d7ea99fcc005993cd329d8fd58c1c6)`(const FString & NewValue)` | Sets the value of Str27_Optional and also sets Str27_IsSet to true.
`public inline void `[`SetStr27`](#structFRHAPI__MatchTimelineEvent_1a2b456aa64c26678dfadc1d4f56131a5e)`(FString && NewValue)` | Sets the value of Str27_Optional and also sets Str27_IsSet to true using move semantics.
`public inline void `[`ClearStr27`](#structFRHAPI__MatchTimelineEvent_1aef396765d14943c10bd67593a11850a7)`()` | Clears the value of Str27_Optional and sets Str27_IsSet to false.
`public inline bool `[`IsStr27Set`](#structFRHAPI__MatchTimelineEvent_1acfec131a5f37758dc2f32b1be8d3a8a9)`() const` | Checks whether Str27_Optional has been set.
`public inline void `[`SetStr27ToNull`](#structFRHAPI__MatchTimelineEvent_1ae4366145811e6606b4c553c6d5803e1b)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr27Null`](#structFRHAPI__MatchTimelineEvent_1abb599b82817667cab73390656f2f9a83)`() const` | Checks whether Str27_Optional is set to null.
`public inline FString & `[`GetStr28`](#structFRHAPI__MatchTimelineEvent_1ac1c74c4d2aa6b7f8e68bc3f563d70595)`()` | Gets the value of Str28_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr28`](#structFRHAPI__MatchTimelineEvent_1a4a9e495c0fd6479db61baed05c0f0bd9)`() const` | Gets the value of Str28_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr28`](#structFRHAPI__MatchTimelineEvent_1a316ef2638f63cf17c0ef529da63eb11b)`(const FString & DefaultValue) const` | Gets the value of Str28_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr28`](#structFRHAPI__MatchTimelineEvent_1a8805a5ddee9cb1f4b90ede7f234f0ed0)`(FString & OutValue) const` | Fills OutValue with the value of Str28_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr28OrNull`](#structFRHAPI__MatchTimelineEvent_1a1f6d70c6b4a15b21f9bab80715b87145)`()` | Returns a pointer to Str28_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr28OrNull`](#structFRHAPI__MatchTimelineEvent_1a1097dda6ce85635a884f9df90e40be3e)`() const` | Returns a pointer to Str28_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr28`](#structFRHAPI__MatchTimelineEvent_1afdb4a3fc3378f48ac899537dacb48308)`(const FString & NewValue)` | Sets the value of Str28_Optional and also sets Str28_IsSet to true.
`public inline void `[`SetStr28`](#structFRHAPI__MatchTimelineEvent_1ac0324d5f8112b7ac9822b3a7ec3963aa)`(FString && NewValue)` | Sets the value of Str28_Optional and also sets Str28_IsSet to true using move semantics.
`public inline void `[`ClearStr28`](#structFRHAPI__MatchTimelineEvent_1acd03a6a4069a3e67d9ed9b20a9bb8a65)`()` | Clears the value of Str28_Optional and sets Str28_IsSet to false.
`public inline bool `[`IsStr28Set`](#structFRHAPI__MatchTimelineEvent_1ae3eb1f07e8d3ac33bcbf2f90dac8fd8d)`() const` | Checks whether Str28_Optional has been set.
`public inline void `[`SetStr28ToNull`](#structFRHAPI__MatchTimelineEvent_1a73ed9fe78871f857f731ef06b18ecf96)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr28Null`](#structFRHAPI__MatchTimelineEvent_1a750257795a47b11812873afd6c4e35e3)`() const` | Checks whether Str28_Optional is set to null.
`public inline FString & `[`GetStr29`](#structFRHAPI__MatchTimelineEvent_1a00bd7ebfbab2e054518b8b2b5a8cd917)`()` | Gets the value of Str29_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr29`](#structFRHAPI__MatchTimelineEvent_1a58663d0c615b9b8da34fa33e9edf7855)`() const` | Gets the value of Str29_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr29`](#structFRHAPI__MatchTimelineEvent_1a1f18d62602a93ae38ca8b5453dbfbdee)`(const FString & DefaultValue) const` | Gets the value of Str29_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr29`](#structFRHAPI__MatchTimelineEvent_1a5692f7a007c103f08788fae07ba02315)`(FString & OutValue) const` | Fills OutValue with the value of Str29_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr29OrNull`](#structFRHAPI__MatchTimelineEvent_1a547db5e9f760fdbc68f660c1d2fb5769)`()` | Returns a pointer to Str29_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr29OrNull`](#structFRHAPI__MatchTimelineEvent_1a54cf76240b7b2b76fa565a3e642c1ab1)`() const` | Returns a pointer to Str29_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr29`](#structFRHAPI__MatchTimelineEvent_1ac8ee7f9d3b69104221c56648ff415e09)`(const FString & NewValue)` | Sets the value of Str29_Optional and also sets Str29_IsSet to true.
`public inline void `[`SetStr29`](#structFRHAPI__MatchTimelineEvent_1a4907e641d6055fe88ba4e78eae72ea67)`(FString && NewValue)` | Sets the value of Str29_Optional and also sets Str29_IsSet to true using move semantics.
`public inline void `[`ClearStr29`](#structFRHAPI__MatchTimelineEvent_1a50acdd104be533855f994750f006c41e)`()` | Clears the value of Str29_Optional and sets Str29_IsSet to false.
`public inline bool `[`IsStr29Set`](#structFRHAPI__MatchTimelineEvent_1a4b7668f29db120d046e7c368a36392ef)`() const` | Checks whether Str29_Optional has been set.
`public inline void `[`SetStr29ToNull`](#structFRHAPI__MatchTimelineEvent_1a132c40edba4b1c4bda88e9eaebc3b6a5)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr29Null`](#structFRHAPI__MatchTimelineEvent_1a670283d1f4bc01347f6ae7dec81d90f7)`() const` | Checks whether Str29_Optional is set to null.
`public inline FString & `[`GetStr30`](#structFRHAPI__MatchTimelineEvent_1aba201a0f17ff6b4c22c0d22d0fbf2f7d)`()` | Gets the value of Str30_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr30`](#structFRHAPI__MatchTimelineEvent_1a629b8101b028d93daf0e4492ae79298b)`() const` | Gets the value of Str30_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr30`](#structFRHAPI__MatchTimelineEvent_1a22c340362574d50a8605b8f5fbcfcc79)`(const FString & DefaultValue) const` | Gets the value of Str30_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr30`](#structFRHAPI__MatchTimelineEvent_1a35c81249661aab9626b5373e78113aa2)`(FString & OutValue) const` | Fills OutValue with the value of Str30_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr30OrNull`](#structFRHAPI__MatchTimelineEvent_1a918d0a1750b6a4894c2c2acfad18cd8c)`()` | Returns a pointer to Str30_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr30OrNull`](#structFRHAPI__MatchTimelineEvent_1a82b4368231fdcf5dca44005a55949faa)`() const` | Returns a pointer to Str30_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr30`](#structFRHAPI__MatchTimelineEvent_1a6c752543abc17da2413918c3e9574d57)`(const FString & NewValue)` | Sets the value of Str30_Optional and also sets Str30_IsSet to true.
`public inline void `[`SetStr30`](#structFRHAPI__MatchTimelineEvent_1ada7c84ee50951f2974b04f916512e1cb)`(FString && NewValue)` | Sets the value of Str30_Optional and also sets Str30_IsSet to true using move semantics.
`public inline void `[`ClearStr30`](#structFRHAPI__MatchTimelineEvent_1a34c1c119d948f5d4dab3e0f083c0884d)`()` | Clears the value of Str30_Optional and sets Str30_IsSet to false.
`public inline bool `[`IsStr30Set`](#structFRHAPI__MatchTimelineEvent_1a4bca7458502f6453beb6d1646f9a4252)`() const` | Checks whether Str30_Optional has been set.
`public inline void `[`SetStr30ToNull`](#structFRHAPI__MatchTimelineEvent_1a2c4ff61a8de400092ac5fa7d61824d5f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr30Null`](#structFRHAPI__MatchTimelineEvent_1ad785c76850a3f4a85ca67a37e97a0df7)`() const` | Checks whether Str30_Optional is set to null.
`public inline FString & `[`GetStr31`](#structFRHAPI__MatchTimelineEvent_1a9c3a16960a6b9a4f906169386ab3fcd5)`()` | Gets the value of Str31_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr31`](#structFRHAPI__MatchTimelineEvent_1a42502e434de264f2fb347507d2a5e854)`() const` | Gets the value of Str31_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr31`](#structFRHAPI__MatchTimelineEvent_1a1906acf809486e07ebc38665421e9781)`(const FString & DefaultValue) const` | Gets the value of Str31_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr31`](#structFRHAPI__MatchTimelineEvent_1a80b817b02c34b22cdc7f64cd3a7ea192)`(FString & OutValue) const` | Fills OutValue with the value of Str31_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr31OrNull`](#structFRHAPI__MatchTimelineEvent_1a356cdb26c3399f49eb767a95975c000a)`()` | Returns a pointer to Str31_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr31OrNull`](#structFRHAPI__MatchTimelineEvent_1ac27cb0d3973db5aede7fe7bfcd7af558)`() const` | Returns a pointer to Str31_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr31`](#structFRHAPI__MatchTimelineEvent_1ae156341649d5a72ca9101829907ccb4a)`(const FString & NewValue)` | Sets the value of Str31_Optional and also sets Str31_IsSet to true.
`public inline void `[`SetStr31`](#structFRHAPI__MatchTimelineEvent_1aed0c35bdbb81a3bd2f1b0fa0f08982f4)`(FString && NewValue)` | Sets the value of Str31_Optional and also sets Str31_IsSet to true using move semantics.
`public inline void `[`ClearStr31`](#structFRHAPI__MatchTimelineEvent_1a7011fc0db6d53b47769c255596310804)`()` | Clears the value of Str31_Optional and sets Str31_IsSet to false.
`public inline bool `[`IsStr31Set`](#structFRHAPI__MatchTimelineEvent_1a46f7424ce286af735f1e710781625216)`() const` | Checks whether Str31_Optional has been set.
`public inline void `[`SetStr31ToNull`](#structFRHAPI__MatchTimelineEvent_1a0fa8f4859536d03f169ac2e56d9e00ba)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr31Null`](#structFRHAPI__MatchTimelineEvent_1a7487a77e51f5f1705ede17bdb10ad2c4)`() const` | Checks whether Str31_Optional is set to null.
`public inline FString & `[`GetStr32`](#structFRHAPI__MatchTimelineEvent_1a396c7050a91c0140f7f6c1122c02a241)`()` | Gets the value of Str32_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr32`](#structFRHAPI__MatchTimelineEvent_1a9f54cacabb582d3386733a3862abb2a3)`() const` | Gets the value of Str32_Optional, regardless of it having been set.
`public inline const FString & `[`GetStr32`](#structFRHAPI__MatchTimelineEvent_1aa421770da5b094c13bc40fb3613076f7)`(const FString & DefaultValue) const` | Gets the value of Str32_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStr32`](#structFRHAPI__MatchTimelineEvent_1a26dd745071d7f16fe363f4dcedb37844)`(FString & OutValue) const` | Fills OutValue with the value of Str32_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStr32OrNull`](#structFRHAPI__MatchTimelineEvent_1a42834f3849cbdfd5178e4729fd83f724)`()` | Returns a pointer to Str32_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStr32OrNull`](#structFRHAPI__MatchTimelineEvent_1a333671550a4a52c967cbffbfe635c7da)`() const` | Returns a pointer to Str32_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStr32`](#structFRHAPI__MatchTimelineEvent_1a37334ccb100a3e0d173ba6f4d258cb30)`(const FString & NewValue)` | Sets the value of Str32_Optional and also sets Str32_IsSet to true.
`public inline void `[`SetStr32`](#structFRHAPI__MatchTimelineEvent_1ad02db9098baecf7d85294d736a1c7498)`(FString && NewValue)` | Sets the value of Str32_Optional and also sets Str32_IsSet to true using move semantics.
`public inline void `[`ClearStr32`](#structFRHAPI__MatchTimelineEvent_1a1d068d372bef6b19cf364ae0511d5c7e)`()` | Clears the value of Str32_Optional and sets Str32_IsSet to false.
`public inline bool `[`IsStr32Set`](#structFRHAPI__MatchTimelineEvent_1ab70ef9f75e139eac79f1ee85271d168b)`() const` | Checks whether Str32_Optional has been set.
`public inline void `[`SetStr32ToNull`](#structFRHAPI__MatchTimelineEvent_1a675c5919bfc75d75f95d9168385d76ee)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStr32Null`](#structFRHAPI__MatchTimelineEvent_1acd3199c83042528afe67d1945e557e2e)`() const` | Checks whether Str32_Optional is set to null.
`public inline float & `[`GetFloat1`](#structFRHAPI__MatchTimelineEvent_1a77c889336b6a2bb94a8c68b644cee741)`()` | Gets the value of Float1_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat1`](#structFRHAPI__MatchTimelineEvent_1a8b20046d5067df42eb26c59154a5b016)`() const` | Gets the value of Float1_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat1`](#structFRHAPI__MatchTimelineEvent_1a89eaa34705b5f548334e79add67f1d27)`(const float & DefaultValue) const` | Gets the value of Float1_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat1`](#structFRHAPI__MatchTimelineEvent_1a785d71129949a86ef2f608b67f2d0e98)`(float & OutValue) const` | Fills OutValue with the value of Float1_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat1OrNull`](#structFRHAPI__MatchTimelineEvent_1ab22b79017fa0cb57739c249dc8377420)`()` | Returns a pointer to Float1_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat1OrNull`](#structFRHAPI__MatchTimelineEvent_1ade40bc64620499b025c63726d09c0b45)`() const` | Returns a pointer to Float1_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat1`](#structFRHAPI__MatchTimelineEvent_1ae3de197054acb6744c7910ab98c6880a)`(const float & NewValue)` | Sets the value of Float1_Optional and also sets Float1_IsSet to true.
`public inline void `[`SetFloat1`](#structFRHAPI__MatchTimelineEvent_1aef0872f454638faece5527d3c6d92280)`(float && NewValue)` | Sets the value of Float1_Optional and also sets Float1_IsSet to true using move semantics.
`public inline void `[`ClearFloat1`](#structFRHAPI__MatchTimelineEvent_1ac101610d7a4b1a6074c447910de22d49)`()` | Clears the value of Float1_Optional and sets Float1_IsSet to false.
`public inline bool `[`IsFloat1Set`](#structFRHAPI__MatchTimelineEvent_1abb2ef181e28a889bdd9b6f801a795702)`() const` | Checks whether Float1_Optional has been set.
`public inline void `[`SetFloat1ToNull`](#structFRHAPI__MatchTimelineEvent_1a7930201c4ecb3b945fe0ea4fcb51ee7e)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat1Null`](#structFRHAPI__MatchTimelineEvent_1a68c969cc450891910063a52c975b2655)`() const` | Checks whether Float1_Optional is set to null.
`public inline float & `[`GetFloat2`](#structFRHAPI__MatchTimelineEvent_1a38f5f6a10e86ca6d47a386511fb0a124)`()` | Gets the value of Float2_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat2`](#structFRHAPI__MatchTimelineEvent_1ab87bd1a87fae06a81a8e47ce868d0071)`() const` | Gets the value of Float2_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat2`](#structFRHAPI__MatchTimelineEvent_1a87ed78d83c3b64e7bf64c4b2aa538336)`(const float & DefaultValue) const` | Gets the value of Float2_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat2`](#structFRHAPI__MatchTimelineEvent_1a2be694374415536c49b32528e43ec1c8)`(float & OutValue) const` | Fills OutValue with the value of Float2_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat2OrNull`](#structFRHAPI__MatchTimelineEvent_1a55b3ee394cd573b387976097ea459c69)`()` | Returns a pointer to Float2_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat2OrNull`](#structFRHAPI__MatchTimelineEvent_1a6c1b4fcb23af4610641cf6382c4c9ea4)`() const` | Returns a pointer to Float2_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat2`](#structFRHAPI__MatchTimelineEvent_1a810c765b46231241b842a900dfc4855e)`(const float & NewValue)` | Sets the value of Float2_Optional and also sets Float2_IsSet to true.
`public inline void `[`SetFloat2`](#structFRHAPI__MatchTimelineEvent_1a4d3b2f7828ec455cb921789a2341e361)`(float && NewValue)` | Sets the value of Float2_Optional and also sets Float2_IsSet to true using move semantics.
`public inline void `[`ClearFloat2`](#structFRHAPI__MatchTimelineEvent_1a98a0686352b16fa51e6d336007cac608)`()` | Clears the value of Float2_Optional and sets Float2_IsSet to false.
`public inline bool `[`IsFloat2Set`](#structFRHAPI__MatchTimelineEvent_1a2ab363861bd37d52252ef6cb0ac753e0)`() const` | Checks whether Float2_Optional has been set.
`public inline void `[`SetFloat2ToNull`](#structFRHAPI__MatchTimelineEvent_1a22d7c0fbdfb7481fde0393b6675dd83b)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat2Null`](#structFRHAPI__MatchTimelineEvent_1a6f2bf8f30641aaf33a7fe69d9b3ee4b3)`() const` | Checks whether Float2_Optional is set to null.
`public inline float & `[`GetFloat3`](#structFRHAPI__MatchTimelineEvent_1ab0af4517b6d2095128c0347f3edeb78e)`()` | Gets the value of Float3_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat3`](#structFRHAPI__MatchTimelineEvent_1aaf69cfb09ba7e417884d0a29e42056ac)`() const` | Gets the value of Float3_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat3`](#structFRHAPI__MatchTimelineEvent_1aaee1f154b3a7edd6ab475aeae8f0d32e)`(const float & DefaultValue) const` | Gets the value of Float3_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat3`](#structFRHAPI__MatchTimelineEvent_1ac6f84b8788f6a51d48c37ac029f76bfe)`(float & OutValue) const` | Fills OutValue with the value of Float3_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat3OrNull`](#structFRHAPI__MatchTimelineEvent_1a71b738affed2859cf596c223d612c1b8)`()` | Returns a pointer to Float3_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat3OrNull`](#structFRHAPI__MatchTimelineEvent_1adb9033ad8a073728ad73933a5c1b188a)`() const` | Returns a pointer to Float3_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat3`](#structFRHAPI__MatchTimelineEvent_1ab7b20c4b788ac06e174a88547fef88e7)`(const float & NewValue)` | Sets the value of Float3_Optional and also sets Float3_IsSet to true.
`public inline void `[`SetFloat3`](#structFRHAPI__MatchTimelineEvent_1adf7c0e0a1f2f6bd34f3ce197602b4a84)`(float && NewValue)` | Sets the value of Float3_Optional and also sets Float3_IsSet to true using move semantics.
`public inline void `[`ClearFloat3`](#structFRHAPI__MatchTimelineEvent_1a013bea762f301c310584c5c80b6c16ea)`()` | Clears the value of Float3_Optional and sets Float3_IsSet to false.
`public inline bool `[`IsFloat3Set`](#structFRHAPI__MatchTimelineEvent_1ad40d6416aa1277b46e74d8599f56d244)`() const` | Checks whether Float3_Optional has been set.
`public inline void `[`SetFloat3ToNull`](#structFRHAPI__MatchTimelineEvent_1a2e486db5ea959cd4f76f1143c6943222)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat3Null`](#structFRHAPI__MatchTimelineEvent_1a528a9b80f282389e5449bd6c985d234a)`() const` | Checks whether Float3_Optional is set to null.
`public inline float & `[`GetFloat4`](#structFRHAPI__MatchTimelineEvent_1a64de1ae63e0d09d58681f0ea5fb3b127)`()` | Gets the value of Float4_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat4`](#structFRHAPI__MatchTimelineEvent_1a456bd392dbf30861517576eb1ddaf84d)`() const` | Gets the value of Float4_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat4`](#structFRHAPI__MatchTimelineEvent_1aae0b8f79d53b074df9696e0845081b6d)`(const float & DefaultValue) const` | Gets the value of Float4_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat4`](#structFRHAPI__MatchTimelineEvent_1a92c0bdaeaaef0da8ceaad8f87eb0af61)`(float & OutValue) const` | Fills OutValue with the value of Float4_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat4OrNull`](#structFRHAPI__MatchTimelineEvent_1a4afae4afc8133e617357dbbc43a00ebc)`()` | Returns a pointer to Float4_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat4OrNull`](#structFRHAPI__MatchTimelineEvent_1aa983b73690016241e298f841d1acecab)`() const` | Returns a pointer to Float4_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat4`](#structFRHAPI__MatchTimelineEvent_1a41f9e47e6bd976e38d06c4f9beb2bc12)`(const float & NewValue)` | Sets the value of Float4_Optional and also sets Float4_IsSet to true.
`public inline void `[`SetFloat4`](#structFRHAPI__MatchTimelineEvent_1ae8a68e6cb68602a1b8f563d4fc1db039)`(float && NewValue)` | Sets the value of Float4_Optional and also sets Float4_IsSet to true using move semantics.
`public inline void `[`ClearFloat4`](#structFRHAPI__MatchTimelineEvent_1a1d9db31ed9170fef1243f754b6ec35f6)`()` | Clears the value of Float4_Optional and sets Float4_IsSet to false.
`public inline bool `[`IsFloat4Set`](#structFRHAPI__MatchTimelineEvent_1ab90f0846ec2d337be813effc11e8c1e0)`() const` | Checks whether Float4_Optional has been set.
`public inline void `[`SetFloat4ToNull`](#structFRHAPI__MatchTimelineEvent_1a4f47b01395d000f96f48fbce70845954)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat4Null`](#structFRHAPI__MatchTimelineEvent_1a9108381c97a3a597719738fc4c59dee7)`() const` | Checks whether Float4_Optional is set to null.
`public inline float & `[`GetFloat5`](#structFRHAPI__MatchTimelineEvent_1a2f95fa314691de2a0f19b66bdf4fa5eb)`()` | Gets the value of Float5_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat5`](#structFRHAPI__MatchTimelineEvent_1a36adca893533a84a40c5c61ff7eb914c)`() const` | Gets the value of Float5_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat5`](#structFRHAPI__MatchTimelineEvent_1a7089bbb5827b56a9f3c7b641a2818e7d)`(const float & DefaultValue) const` | Gets the value of Float5_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat5`](#structFRHAPI__MatchTimelineEvent_1aa5374356313eb219ab5c5d2046eb88e9)`(float & OutValue) const` | Fills OutValue with the value of Float5_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat5OrNull`](#structFRHAPI__MatchTimelineEvent_1a7065e27290b43cdb58fd98269883462b)`()` | Returns a pointer to Float5_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat5OrNull`](#structFRHAPI__MatchTimelineEvent_1a52d49c998fe3739735e3e60a7deb8481)`() const` | Returns a pointer to Float5_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat5`](#structFRHAPI__MatchTimelineEvent_1a3e98b4eb5b5f3b161d9162601aa2ebf7)`(const float & NewValue)` | Sets the value of Float5_Optional and also sets Float5_IsSet to true.
`public inline void `[`SetFloat5`](#structFRHAPI__MatchTimelineEvent_1a75c189205f26e307a2f7a2106b9312c6)`(float && NewValue)` | Sets the value of Float5_Optional and also sets Float5_IsSet to true using move semantics.
`public inline void `[`ClearFloat5`](#structFRHAPI__MatchTimelineEvent_1a9975356a3d03fb8f89c8e9c80a0b5c77)`()` | Clears the value of Float5_Optional and sets Float5_IsSet to false.
`public inline bool `[`IsFloat5Set`](#structFRHAPI__MatchTimelineEvent_1ab53774076ef6fa936b18b1fd59a69aa9)`() const` | Checks whether Float5_Optional has been set.
`public inline void `[`SetFloat5ToNull`](#structFRHAPI__MatchTimelineEvent_1a200f27954c9576ae1ea6636def403f0d)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat5Null`](#structFRHAPI__MatchTimelineEvent_1a3b5b448f8b54ac7bd3eece3e5fc0ac46)`() const` | Checks whether Float5_Optional is set to null.
`public inline float & `[`GetFloat6`](#structFRHAPI__MatchTimelineEvent_1acd33b082538126ea7f8e6ee8760a9087)`()` | Gets the value of Float6_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat6`](#structFRHAPI__MatchTimelineEvent_1a63047423f417d1c1010e05c7d951a59f)`() const` | Gets the value of Float6_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat6`](#structFRHAPI__MatchTimelineEvent_1a2a5307c47d4c4b0df9a176f23fbda03b)`(const float & DefaultValue) const` | Gets the value of Float6_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat6`](#structFRHAPI__MatchTimelineEvent_1a579b15a36a69d774666b579ebf4fb5ed)`(float & OutValue) const` | Fills OutValue with the value of Float6_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat6OrNull`](#structFRHAPI__MatchTimelineEvent_1aff29c1dd7e87fdd57b3ccc4dbfc54819)`()` | Returns a pointer to Float6_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat6OrNull`](#structFRHAPI__MatchTimelineEvent_1a39bf70551d159f6c7ec7f6c1ca031aeb)`() const` | Returns a pointer to Float6_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat6`](#structFRHAPI__MatchTimelineEvent_1a3d08f852a0c57182fb3095a92d972cfb)`(const float & NewValue)` | Sets the value of Float6_Optional and also sets Float6_IsSet to true.
`public inline void `[`SetFloat6`](#structFRHAPI__MatchTimelineEvent_1a11cd0ef6e77f07fef1f5ed26743ab41d)`(float && NewValue)` | Sets the value of Float6_Optional and also sets Float6_IsSet to true using move semantics.
`public inline void `[`ClearFloat6`](#structFRHAPI__MatchTimelineEvent_1a8c604d35ed635fce4c8c53047c63aa21)`()` | Clears the value of Float6_Optional and sets Float6_IsSet to false.
`public inline bool `[`IsFloat6Set`](#structFRHAPI__MatchTimelineEvent_1a5d4f59a9a666319fb678647c9e28ed77)`() const` | Checks whether Float6_Optional has been set.
`public inline void `[`SetFloat6ToNull`](#structFRHAPI__MatchTimelineEvent_1a98129100e82096ce94109b19cbe39991)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat6Null`](#structFRHAPI__MatchTimelineEvent_1a0194bbbc93743cd015ab7e738753b769)`() const` | Checks whether Float6_Optional is set to null.
`public inline float & `[`GetFloat7`](#structFRHAPI__MatchTimelineEvent_1ae34fb4ba650b2029605fc8829a52f0ba)`()` | Gets the value of Float7_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat7`](#structFRHAPI__MatchTimelineEvent_1a2845520849579f936c3aedb180e7d803)`() const` | Gets the value of Float7_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat7`](#structFRHAPI__MatchTimelineEvent_1a772c0dce2d7d290535409d7975fcb1c6)`(const float & DefaultValue) const` | Gets the value of Float7_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat7`](#structFRHAPI__MatchTimelineEvent_1ab47549a9776a1f3deec0240a11f6c92f)`(float & OutValue) const` | Fills OutValue with the value of Float7_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat7OrNull`](#structFRHAPI__MatchTimelineEvent_1af7612fc187ce04e303cfbb8b61f2889b)`()` | Returns a pointer to Float7_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat7OrNull`](#structFRHAPI__MatchTimelineEvent_1af8f930049011efd0885704568c3b3e4d)`() const` | Returns a pointer to Float7_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat7`](#structFRHAPI__MatchTimelineEvent_1ae7c4bb7772c1b0a5852f7d30e2c3d4f8)`(const float & NewValue)` | Sets the value of Float7_Optional and also sets Float7_IsSet to true.
`public inline void `[`SetFloat7`](#structFRHAPI__MatchTimelineEvent_1acd336dec5f34b6412a10d346b8ef26dc)`(float && NewValue)` | Sets the value of Float7_Optional and also sets Float7_IsSet to true using move semantics.
`public inline void `[`ClearFloat7`](#structFRHAPI__MatchTimelineEvent_1a743881324e50c26ff8aab8f04b3477b6)`()` | Clears the value of Float7_Optional and sets Float7_IsSet to false.
`public inline bool `[`IsFloat7Set`](#structFRHAPI__MatchTimelineEvent_1a63afb4225b77f9de209753c4c19ad234)`() const` | Checks whether Float7_Optional has been set.
`public inline void `[`SetFloat7ToNull`](#structFRHAPI__MatchTimelineEvent_1aabe6628b3d8eec52e658cc71615e708c)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat7Null`](#structFRHAPI__MatchTimelineEvent_1a6d547e71cd22046a0487e4de65bd6275)`() const` | Checks whether Float7_Optional is set to null.
`public inline float & `[`GetFloat8`](#structFRHAPI__MatchTimelineEvent_1a5b6a73929ed0f1ea7c0830e30464fb1d)`()` | Gets the value of Float8_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat8`](#structFRHAPI__MatchTimelineEvent_1a188a34a7cd263148b4ad1d1dec11c072)`() const` | Gets the value of Float8_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat8`](#structFRHAPI__MatchTimelineEvent_1ad71ca4181b7dead45ec89bf29148cd6b)`(const float & DefaultValue) const` | Gets the value of Float8_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat8`](#structFRHAPI__MatchTimelineEvent_1aeaad1efa4a70e021f1ae26e7bf6673d8)`(float & OutValue) const` | Fills OutValue with the value of Float8_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat8OrNull`](#structFRHAPI__MatchTimelineEvent_1a308bf11fced06e0fa5072e1a20ac10ef)`()` | Returns a pointer to Float8_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat8OrNull`](#structFRHAPI__MatchTimelineEvent_1a9cfca16001cabab819e0a9afbc59489c)`() const` | Returns a pointer to Float8_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat8`](#structFRHAPI__MatchTimelineEvent_1af51061711abc42cd9b4ffd3c707fa35c)`(const float & NewValue)` | Sets the value of Float8_Optional and also sets Float8_IsSet to true.
`public inline void `[`SetFloat8`](#structFRHAPI__MatchTimelineEvent_1abe66d3ada04535eadbd7d609ffe6006e)`(float && NewValue)` | Sets the value of Float8_Optional and also sets Float8_IsSet to true using move semantics.
`public inline void `[`ClearFloat8`](#structFRHAPI__MatchTimelineEvent_1a0fd42b782bfaf1ddfc63c182a5238018)`()` | Clears the value of Float8_Optional and sets Float8_IsSet to false.
`public inline bool `[`IsFloat8Set`](#structFRHAPI__MatchTimelineEvent_1ae23c76a4a183c6005abc53a315b20df5)`() const` | Checks whether Float8_Optional has been set.
`public inline void `[`SetFloat8ToNull`](#structFRHAPI__MatchTimelineEvent_1aba8b372fb86ad0e635945e33f79fa783)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat8Null`](#structFRHAPI__MatchTimelineEvent_1abd8a0ba99bf4d0f0a5a129035535bef6)`() const` | Checks whether Float8_Optional is set to null.
`public inline float & `[`GetFloat9`](#structFRHAPI__MatchTimelineEvent_1a3dbef3452c3525754443f6a1a2cc7c56)`()` | Gets the value of Float9_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat9`](#structFRHAPI__MatchTimelineEvent_1a02eddc90996ee6ecc9079368602a14e5)`() const` | Gets the value of Float9_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat9`](#structFRHAPI__MatchTimelineEvent_1a88ecbed3d41d52c284fe82ce46513c60)`(const float & DefaultValue) const` | Gets the value of Float9_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat9`](#structFRHAPI__MatchTimelineEvent_1add982a28f2553af778bd30a6469ed284)`(float & OutValue) const` | Fills OutValue with the value of Float9_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat9OrNull`](#structFRHAPI__MatchTimelineEvent_1a4972dfcb71c37f2c685a89d1deabd692)`()` | Returns a pointer to Float9_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat9OrNull`](#structFRHAPI__MatchTimelineEvent_1a8aad6b4a55b04cbd4f4ff6c4e797ad38)`() const` | Returns a pointer to Float9_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat9`](#structFRHAPI__MatchTimelineEvent_1a7904008c0ec91919439dc4ae23f636f7)`(const float & NewValue)` | Sets the value of Float9_Optional and also sets Float9_IsSet to true.
`public inline void `[`SetFloat9`](#structFRHAPI__MatchTimelineEvent_1a9c18f27604378a1b607d4130aadb3bba)`(float && NewValue)` | Sets the value of Float9_Optional and also sets Float9_IsSet to true using move semantics.
`public inline void `[`ClearFloat9`](#structFRHAPI__MatchTimelineEvent_1a5b4e28468df39f2c99d20dd77f93e337)`()` | Clears the value of Float9_Optional and sets Float9_IsSet to false.
`public inline bool `[`IsFloat9Set`](#structFRHAPI__MatchTimelineEvent_1aa11e7d2d7d1c063b09d5a4674843a2dd)`() const` | Checks whether Float9_Optional has been set.
`public inline void `[`SetFloat9ToNull`](#structFRHAPI__MatchTimelineEvent_1a8734d409cdb9889e1c0aa5e1a93b67da)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat9Null`](#structFRHAPI__MatchTimelineEvent_1a6a02475919e5465f366511809df2900a)`() const` | Checks whether Float9_Optional is set to null.
`public inline float & `[`GetFloat10`](#structFRHAPI__MatchTimelineEvent_1afc8b494feab5b3ce35fc93ad2240b520)`()` | Gets the value of Float10_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat10`](#structFRHAPI__MatchTimelineEvent_1a207d5be6df106dd47138c27b96e17aa3)`() const` | Gets the value of Float10_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat10`](#structFRHAPI__MatchTimelineEvent_1ae03b5d0cd8c77b3f27b9d910471e0bcd)`(const float & DefaultValue) const` | Gets the value of Float10_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat10`](#structFRHAPI__MatchTimelineEvent_1a58a305ea39072fcd87c2c61845c46455)`(float & OutValue) const` | Fills OutValue with the value of Float10_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat10OrNull`](#structFRHAPI__MatchTimelineEvent_1af8eef09e86ae4bccca0ea24250d519c7)`()` | Returns a pointer to Float10_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat10OrNull`](#structFRHAPI__MatchTimelineEvent_1ade62a88f00f1e2b3f2cdcb1849f626bf)`() const` | Returns a pointer to Float10_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat10`](#structFRHAPI__MatchTimelineEvent_1a85ced979e5e97da9240458b9b18abff9)`(const float & NewValue)` | Sets the value of Float10_Optional and also sets Float10_IsSet to true.
`public inline void `[`SetFloat10`](#structFRHAPI__MatchTimelineEvent_1a7db87f6faf6d5070789061bf59fb3826)`(float && NewValue)` | Sets the value of Float10_Optional and also sets Float10_IsSet to true using move semantics.
`public inline void `[`ClearFloat10`](#structFRHAPI__MatchTimelineEvent_1af98159cd2beb33007c561461aab72a68)`()` | Clears the value of Float10_Optional and sets Float10_IsSet to false.
`public inline bool `[`IsFloat10Set`](#structFRHAPI__MatchTimelineEvent_1a2c4123ca03ba5df25857b1c2db492cae)`() const` | Checks whether Float10_Optional has been set.
`public inline void `[`SetFloat10ToNull`](#structFRHAPI__MatchTimelineEvent_1af891a21dc416ca80a4a6c90796727a32)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat10Null`](#structFRHAPI__MatchTimelineEvent_1af00d70e813fb1d4fa7f5ce57d09f57b9)`() const` | Checks whether Float10_Optional is set to null.
`public inline float & `[`GetFloat11`](#structFRHAPI__MatchTimelineEvent_1a710df4bc4223999bb250d3aa8d50455d)`()` | Gets the value of Float11_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat11`](#structFRHAPI__MatchTimelineEvent_1a72b3acecff2f76e65446155add26d09c)`() const` | Gets the value of Float11_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat11`](#structFRHAPI__MatchTimelineEvent_1aec5fe6db9862eba4f77dc596f4e54fba)`(const float & DefaultValue) const` | Gets the value of Float11_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat11`](#structFRHAPI__MatchTimelineEvent_1aaf20054d98037b728ba20636c295a90e)`(float & OutValue) const` | Fills OutValue with the value of Float11_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat11OrNull`](#structFRHAPI__MatchTimelineEvent_1aac9d690aecc919fa792dafd6702c6b61)`()` | Returns a pointer to Float11_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat11OrNull`](#structFRHAPI__MatchTimelineEvent_1adef3ae6aaa87a0b2ad388475bf9e0fee)`() const` | Returns a pointer to Float11_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat11`](#structFRHAPI__MatchTimelineEvent_1a8decabe4afc19a2b8332ca33769607b6)`(const float & NewValue)` | Sets the value of Float11_Optional and also sets Float11_IsSet to true.
`public inline void `[`SetFloat11`](#structFRHAPI__MatchTimelineEvent_1aee64b9371d8978d9a05113d7d08952b2)`(float && NewValue)` | Sets the value of Float11_Optional and also sets Float11_IsSet to true using move semantics.
`public inline void `[`ClearFloat11`](#structFRHAPI__MatchTimelineEvent_1a15cc952f3426889c841839d9baf54cdd)`()` | Clears the value of Float11_Optional and sets Float11_IsSet to false.
`public inline bool `[`IsFloat11Set`](#structFRHAPI__MatchTimelineEvent_1a0d8e6b4bc0ff7ad4c77be57f42bdc93d)`() const` | Checks whether Float11_Optional has been set.
`public inline void `[`SetFloat11ToNull`](#structFRHAPI__MatchTimelineEvent_1a0e19f2aac379f8c6e7e5451fbe8793a3)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat11Null`](#structFRHAPI__MatchTimelineEvent_1acd6012f8d60860c4bc9cddb68ffdf3c6)`() const` | Checks whether Float11_Optional is set to null.
`public inline float & `[`GetFloat12`](#structFRHAPI__MatchTimelineEvent_1a4fb6e117b57e4a31f1b4f40e72e7d1f8)`()` | Gets the value of Float12_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat12`](#structFRHAPI__MatchTimelineEvent_1a33a23edf66d6650eed8521cc4879cb92)`() const` | Gets the value of Float12_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat12`](#structFRHAPI__MatchTimelineEvent_1a0449307e41f422bc55ce5788e2a344ab)`(const float & DefaultValue) const` | Gets the value of Float12_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat12`](#structFRHAPI__MatchTimelineEvent_1a75704a29acfb87f9d5559abb833b5cf3)`(float & OutValue) const` | Fills OutValue with the value of Float12_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat12OrNull`](#structFRHAPI__MatchTimelineEvent_1a81c18078674814a0d581536458f05702)`()` | Returns a pointer to Float12_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat12OrNull`](#structFRHAPI__MatchTimelineEvent_1a1f9d81adfd0899251364b5aefc00d1cf)`() const` | Returns a pointer to Float12_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat12`](#structFRHAPI__MatchTimelineEvent_1a5d4cb49937a5bbba94e657fcc02f25db)`(const float & NewValue)` | Sets the value of Float12_Optional and also sets Float12_IsSet to true.
`public inline void `[`SetFloat12`](#structFRHAPI__MatchTimelineEvent_1ac37d0c84db4fbed77fc85ac951565ac5)`(float && NewValue)` | Sets the value of Float12_Optional and also sets Float12_IsSet to true using move semantics.
`public inline void `[`ClearFloat12`](#structFRHAPI__MatchTimelineEvent_1aa1adb5d3b68c26e67588fd730b58c125)`()` | Clears the value of Float12_Optional and sets Float12_IsSet to false.
`public inline bool `[`IsFloat12Set`](#structFRHAPI__MatchTimelineEvent_1a250a8ea267799d72e35b61fffa099ee3)`() const` | Checks whether Float12_Optional has been set.
`public inline void `[`SetFloat12ToNull`](#structFRHAPI__MatchTimelineEvent_1abb4328860e4f028b7dff6b4b2fea51ae)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat12Null`](#structFRHAPI__MatchTimelineEvent_1acd5dfaead49620dae268ecd5444fc909)`() const` | Checks whether Float12_Optional is set to null.
`public inline float & `[`GetFloat13`](#structFRHAPI__MatchTimelineEvent_1a3252266e9eada26d365c1dac1d042922)`()` | Gets the value of Float13_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat13`](#structFRHAPI__MatchTimelineEvent_1a5f1203c6eb6f6a9e4fbfe0bf39e38ef5)`() const` | Gets the value of Float13_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat13`](#structFRHAPI__MatchTimelineEvent_1a0b86a89120109b5f3112f14a895d0b67)`(const float & DefaultValue) const` | Gets the value of Float13_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat13`](#structFRHAPI__MatchTimelineEvent_1a44fc3c43e62b0153ed1bcd28c2582316)`(float & OutValue) const` | Fills OutValue with the value of Float13_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat13OrNull`](#structFRHAPI__MatchTimelineEvent_1a7b388893a2662ff0e4039f845caa0fb6)`()` | Returns a pointer to Float13_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat13OrNull`](#structFRHAPI__MatchTimelineEvent_1acb268cee194ee935aa201a05a8c06ca0)`() const` | Returns a pointer to Float13_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat13`](#structFRHAPI__MatchTimelineEvent_1a34e2cc51fe1b688644b4d921d1ab1269)`(const float & NewValue)` | Sets the value of Float13_Optional and also sets Float13_IsSet to true.
`public inline void `[`SetFloat13`](#structFRHAPI__MatchTimelineEvent_1a15ba6d854b9e120cef29c103da571bff)`(float && NewValue)` | Sets the value of Float13_Optional and also sets Float13_IsSet to true using move semantics.
`public inline void `[`ClearFloat13`](#structFRHAPI__MatchTimelineEvent_1aacc26f151fa867b5639ef4e765351ff3)`()` | Clears the value of Float13_Optional and sets Float13_IsSet to false.
`public inline bool `[`IsFloat13Set`](#structFRHAPI__MatchTimelineEvent_1a76c5099446906b93f3f2fc537ef33c75)`() const` | Checks whether Float13_Optional has been set.
`public inline void `[`SetFloat13ToNull`](#structFRHAPI__MatchTimelineEvent_1acdf4c328877570b050255d1447fe5769)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat13Null`](#structFRHAPI__MatchTimelineEvent_1add9642d1084e646a20ff6523f5284cf3)`() const` | Checks whether Float13_Optional is set to null.
`public inline float & `[`GetFloat14`](#structFRHAPI__MatchTimelineEvent_1a61c91c55d2280efb1208ae3155f14ed1)`()` | Gets the value of Float14_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat14`](#structFRHAPI__MatchTimelineEvent_1aec7c801878d12b42520bd9cdcdece33c)`() const` | Gets the value of Float14_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat14`](#structFRHAPI__MatchTimelineEvent_1a961a2942c08e6daed1a941126a2cf01c)`(const float & DefaultValue) const` | Gets the value of Float14_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat14`](#structFRHAPI__MatchTimelineEvent_1a1f79deb668270af8ac45e26694491d02)`(float & OutValue) const` | Fills OutValue with the value of Float14_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat14OrNull`](#structFRHAPI__MatchTimelineEvent_1a127a5021a81d440f0f32c2902b3f3830)`()` | Returns a pointer to Float14_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat14OrNull`](#structFRHAPI__MatchTimelineEvent_1ac909ab0eeaf29fcb4d067bc6e0e64fae)`() const` | Returns a pointer to Float14_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat14`](#structFRHAPI__MatchTimelineEvent_1a459a92cf39033f532712b0932a1e55e8)`(const float & NewValue)` | Sets the value of Float14_Optional and also sets Float14_IsSet to true.
`public inline void `[`SetFloat14`](#structFRHAPI__MatchTimelineEvent_1ac16a5701145e09d5af8b0ed76be183ed)`(float && NewValue)` | Sets the value of Float14_Optional and also sets Float14_IsSet to true using move semantics.
`public inline void `[`ClearFloat14`](#structFRHAPI__MatchTimelineEvent_1a4d1cbebb1dedf001a8f5cdbcb80a7e1a)`()` | Clears the value of Float14_Optional and sets Float14_IsSet to false.
`public inline bool `[`IsFloat14Set`](#structFRHAPI__MatchTimelineEvent_1a2a6673b57d1c4e461bfc8ce2c02d28d9)`() const` | Checks whether Float14_Optional has been set.
`public inline void `[`SetFloat14ToNull`](#structFRHAPI__MatchTimelineEvent_1ac8aa01db90dc2ec5745306855247f2c9)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat14Null`](#structFRHAPI__MatchTimelineEvent_1a8025f14196161df21e7588d33f633a9a)`() const` | Checks whether Float14_Optional is set to null.
`public inline float & `[`GetFloat15`](#structFRHAPI__MatchTimelineEvent_1a817e801d4e3b32c9f75b71bee02abbd7)`()` | Gets the value of Float15_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat15`](#structFRHAPI__MatchTimelineEvent_1a2e34ed219337d0feab6db928fa181317)`() const` | Gets the value of Float15_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat15`](#structFRHAPI__MatchTimelineEvent_1af06f82d2bf69c4327882b0f0e3a16d22)`(const float & DefaultValue) const` | Gets the value of Float15_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat15`](#structFRHAPI__MatchTimelineEvent_1a86e1516ab019582a9677261a8bb1e256)`(float & OutValue) const` | Fills OutValue with the value of Float15_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat15OrNull`](#structFRHAPI__MatchTimelineEvent_1a9bf73f1b54450340802bc2d7ebc5396f)`()` | Returns a pointer to Float15_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat15OrNull`](#structFRHAPI__MatchTimelineEvent_1acc188217e9b1347af22603cbc015b68a)`() const` | Returns a pointer to Float15_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat15`](#structFRHAPI__MatchTimelineEvent_1ae4883005f3d0519d168df7dbbee4d60d)`(const float & NewValue)` | Sets the value of Float15_Optional and also sets Float15_IsSet to true.
`public inline void `[`SetFloat15`](#structFRHAPI__MatchTimelineEvent_1aa08eca875eab60abecc6b71ccb777de9)`(float && NewValue)` | Sets the value of Float15_Optional and also sets Float15_IsSet to true using move semantics.
`public inline void `[`ClearFloat15`](#structFRHAPI__MatchTimelineEvent_1a95cbd961ed5844874543c765c28f409f)`()` | Clears the value of Float15_Optional and sets Float15_IsSet to false.
`public inline bool `[`IsFloat15Set`](#structFRHAPI__MatchTimelineEvent_1a9fa82b6e9762409321e3d5a401a99820)`() const` | Checks whether Float15_Optional has been set.
`public inline void `[`SetFloat15ToNull`](#structFRHAPI__MatchTimelineEvent_1a5bdcad6315df90f37b01ce2b5ac07d28)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat15Null`](#structFRHAPI__MatchTimelineEvent_1ab5e9049fe1c59245e31022c104c19e09)`() const` | Checks whether Float15_Optional is set to null.
`public inline float & `[`GetFloat16`](#structFRHAPI__MatchTimelineEvent_1a4383b40ee587cad0bab4ea03518aae66)`()` | Gets the value of Float16_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat16`](#structFRHAPI__MatchTimelineEvent_1af3e8a74e5927c441595a6d43a743fccb)`() const` | Gets the value of Float16_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat16`](#structFRHAPI__MatchTimelineEvent_1a063169752c7b1995236a330acf159a5b)`(const float & DefaultValue) const` | Gets the value of Float16_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat16`](#structFRHAPI__MatchTimelineEvent_1a867b47d224ba1d13314ee21ea6402016)`(float & OutValue) const` | Fills OutValue with the value of Float16_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat16OrNull`](#structFRHAPI__MatchTimelineEvent_1a612bb827a3d87f04fc72ddc2c738e5c1)`()` | Returns a pointer to Float16_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat16OrNull`](#structFRHAPI__MatchTimelineEvent_1a74c99764a3d913d7926cb884576968d5)`() const` | Returns a pointer to Float16_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat16`](#structFRHAPI__MatchTimelineEvent_1a71b4cd20f2dfed2c1c21d99296a98b7e)`(const float & NewValue)` | Sets the value of Float16_Optional and also sets Float16_IsSet to true.
`public inline void `[`SetFloat16`](#structFRHAPI__MatchTimelineEvent_1ae5a2bbd88c229b60579251e5a56363b1)`(float && NewValue)` | Sets the value of Float16_Optional and also sets Float16_IsSet to true using move semantics.
`public inline void `[`ClearFloat16`](#structFRHAPI__MatchTimelineEvent_1ae2822ad89d397688758c3ac05d28755a)`()` | Clears the value of Float16_Optional and sets Float16_IsSet to false.
`public inline bool `[`IsFloat16Set`](#structFRHAPI__MatchTimelineEvent_1a579149c0ea183c1dc669bcbb312dae4c)`() const` | Checks whether Float16_Optional has been set.
`public inline void `[`SetFloat16ToNull`](#structFRHAPI__MatchTimelineEvent_1a73a5f953bc3564ccc0b313a7f11a97ed)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat16Null`](#structFRHAPI__MatchTimelineEvent_1aad8dcdfd9e90c0aeb6782029830accd8)`() const` | Checks whether Float16_Optional is set to null.
`public inline float & `[`GetFloat17`](#structFRHAPI__MatchTimelineEvent_1a2d75948a8424d3570c164b87b5a7b70c)`()` | Gets the value of Float17_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat17`](#structFRHAPI__MatchTimelineEvent_1a4e263b3301d9a91eee1029581c4f2f61)`() const` | Gets the value of Float17_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat17`](#structFRHAPI__MatchTimelineEvent_1ac41a2692d9858bee09a8b6a456b881db)`(const float & DefaultValue) const` | Gets the value of Float17_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat17`](#structFRHAPI__MatchTimelineEvent_1aabec71c02574cd50fb879201b86a2245)`(float & OutValue) const` | Fills OutValue with the value of Float17_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat17OrNull`](#structFRHAPI__MatchTimelineEvent_1a8b40f212137d24c949fd1480a39aa8ea)`()` | Returns a pointer to Float17_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat17OrNull`](#structFRHAPI__MatchTimelineEvent_1aad94caeda3d2eaf7554a33867ebbc55d)`() const` | Returns a pointer to Float17_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat17`](#structFRHAPI__MatchTimelineEvent_1a8e11c4456d410c40c5722dd2c4797adc)`(const float & NewValue)` | Sets the value of Float17_Optional and also sets Float17_IsSet to true.
`public inline void `[`SetFloat17`](#structFRHAPI__MatchTimelineEvent_1aa5a9d4974558ffb906d133aa8341396f)`(float && NewValue)` | Sets the value of Float17_Optional and also sets Float17_IsSet to true using move semantics.
`public inline void `[`ClearFloat17`](#structFRHAPI__MatchTimelineEvent_1a3afcea167068f4db78f363be41ed3501)`()` | Clears the value of Float17_Optional and sets Float17_IsSet to false.
`public inline bool `[`IsFloat17Set`](#structFRHAPI__MatchTimelineEvent_1ac0050ebfb99885d36f1d3f8541ffd717)`() const` | Checks whether Float17_Optional has been set.
`public inline void `[`SetFloat17ToNull`](#structFRHAPI__MatchTimelineEvent_1ab1737559904a1a339998fdfca55fb225)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat17Null`](#structFRHAPI__MatchTimelineEvent_1ade5fc33641d85dcce4707b539feae1cf)`() const` | Checks whether Float17_Optional is set to null.
`public inline float & `[`GetFloat18`](#structFRHAPI__MatchTimelineEvent_1a0471703fc3967c91c80901e4c68885a0)`()` | Gets the value of Float18_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat18`](#structFRHAPI__MatchTimelineEvent_1a8a78352c44e19e356e178585dcb3952a)`() const` | Gets the value of Float18_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat18`](#structFRHAPI__MatchTimelineEvent_1ae398b98e36786d6c8dd29d91fb151173)`(const float & DefaultValue) const` | Gets the value of Float18_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat18`](#structFRHAPI__MatchTimelineEvent_1a81544a4c027aff603c7cc7ad9f21b182)`(float & OutValue) const` | Fills OutValue with the value of Float18_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat18OrNull`](#structFRHAPI__MatchTimelineEvent_1a4b8bbfd08730cbbe20791b308c8e1733)`()` | Returns a pointer to Float18_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat18OrNull`](#structFRHAPI__MatchTimelineEvent_1a29272680ce16f252c494dbefa46bac40)`() const` | Returns a pointer to Float18_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat18`](#structFRHAPI__MatchTimelineEvent_1a841ca042e8b3f3351a9b6998fcdb7c79)`(const float & NewValue)` | Sets the value of Float18_Optional and also sets Float18_IsSet to true.
`public inline void `[`SetFloat18`](#structFRHAPI__MatchTimelineEvent_1affbff30baa996b8685300a59ccf1dfb4)`(float && NewValue)` | Sets the value of Float18_Optional and also sets Float18_IsSet to true using move semantics.
`public inline void `[`ClearFloat18`](#structFRHAPI__MatchTimelineEvent_1a13668e4ed92e971aefe9bac4f7f472f2)`()` | Clears the value of Float18_Optional and sets Float18_IsSet to false.
`public inline bool `[`IsFloat18Set`](#structFRHAPI__MatchTimelineEvent_1a9fc1630274c2b67b4e47d500419eb2da)`() const` | Checks whether Float18_Optional has been set.
`public inline void `[`SetFloat18ToNull`](#structFRHAPI__MatchTimelineEvent_1a740ef1b517fa083a3907ce56f0ac1442)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat18Null`](#structFRHAPI__MatchTimelineEvent_1af41d22189d2caaf88a450f85551d285c)`() const` | Checks whether Float18_Optional is set to null.
`public inline float & `[`GetFloat19`](#structFRHAPI__MatchTimelineEvent_1ab9980a8133f16ba93631d5d0b9d43719)`()` | Gets the value of Float19_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat19`](#structFRHAPI__MatchTimelineEvent_1ab3b4407572a6d6f3fc7087d5c78cdb61)`() const` | Gets the value of Float19_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat19`](#structFRHAPI__MatchTimelineEvent_1a794a954ee79f7777b367440c1b8c77a0)`(const float & DefaultValue) const` | Gets the value of Float19_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat19`](#structFRHAPI__MatchTimelineEvent_1ac69d1fac4468fe91f7d20613e75cbfe0)`(float & OutValue) const` | Fills OutValue with the value of Float19_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat19OrNull`](#structFRHAPI__MatchTimelineEvent_1a8d553cb0a11fd75b19a98ce8d42d60a0)`()` | Returns a pointer to Float19_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat19OrNull`](#structFRHAPI__MatchTimelineEvent_1ac4b47d450f28d04f44469f21e6ea9c06)`() const` | Returns a pointer to Float19_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat19`](#structFRHAPI__MatchTimelineEvent_1aad1b05b75ec32127d7a6ccc55f2d9809)`(const float & NewValue)` | Sets the value of Float19_Optional and also sets Float19_IsSet to true.
`public inline void `[`SetFloat19`](#structFRHAPI__MatchTimelineEvent_1ad70e3774951fd132f0753ab24006aae5)`(float && NewValue)` | Sets the value of Float19_Optional and also sets Float19_IsSet to true using move semantics.
`public inline void `[`ClearFloat19`](#structFRHAPI__MatchTimelineEvent_1ac4cefa49a48eb25140cb4b9bde94b684)`()` | Clears the value of Float19_Optional and sets Float19_IsSet to false.
`public inline bool `[`IsFloat19Set`](#structFRHAPI__MatchTimelineEvent_1a56ba57b2b033641192933547ae445435)`() const` | Checks whether Float19_Optional has been set.
`public inline void `[`SetFloat19ToNull`](#structFRHAPI__MatchTimelineEvent_1a338a090355f96b84f15bf80d9df81441)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat19Null`](#structFRHAPI__MatchTimelineEvent_1a3895a1e11da9bcd3383dff5c10aaf5be)`() const` | Checks whether Float19_Optional is set to null.
`public inline float & `[`GetFloat20`](#structFRHAPI__MatchTimelineEvent_1aae2b66b841244f27f1b990811130ba9f)`()` | Gets the value of Float20_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat20`](#structFRHAPI__MatchTimelineEvent_1a991cccf1e2bb8c5897c6b3e7eccb2af4)`() const` | Gets the value of Float20_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat20`](#structFRHAPI__MatchTimelineEvent_1a1a6322718ae5e1d36bb5d5fb163a9678)`(const float & DefaultValue) const` | Gets the value of Float20_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat20`](#structFRHAPI__MatchTimelineEvent_1a347f6b8c56d4dbeb7a367978c27c5ebd)`(float & OutValue) const` | Fills OutValue with the value of Float20_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat20OrNull`](#structFRHAPI__MatchTimelineEvent_1a1fc840e7c470fbbb47d4c815992e0011)`()` | Returns a pointer to Float20_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat20OrNull`](#structFRHAPI__MatchTimelineEvent_1a76b9d85da6d8a34cba64e30a5eca01ba)`() const` | Returns a pointer to Float20_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat20`](#structFRHAPI__MatchTimelineEvent_1aad51b930dd4bb9db41edadb0aa038d83)`(const float & NewValue)` | Sets the value of Float20_Optional and also sets Float20_IsSet to true.
`public inline void `[`SetFloat20`](#structFRHAPI__MatchTimelineEvent_1a61ffaf398308d48f37720dbc4c3e8c51)`(float && NewValue)` | Sets the value of Float20_Optional and also sets Float20_IsSet to true using move semantics.
`public inline void `[`ClearFloat20`](#structFRHAPI__MatchTimelineEvent_1abd7db75886ebb78555c2c4f7d8a2084b)`()` | Clears the value of Float20_Optional and sets Float20_IsSet to false.
`public inline bool `[`IsFloat20Set`](#structFRHAPI__MatchTimelineEvent_1a4824a3cae9b4d80ac773b9774c74ccc7)`() const` | Checks whether Float20_Optional has been set.
`public inline void `[`SetFloat20ToNull`](#structFRHAPI__MatchTimelineEvent_1a1a6aa7a503cac5561435b6d1a063b78e)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat20Null`](#structFRHAPI__MatchTimelineEvent_1a1b65bf76300d884273131ab68425ce0b)`() const` | Checks whether Float20_Optional is set to null.
`public inline float & `[`GetFloat21`](#structFRHAPI__MatchTimelineEvent_1a2e6451d298383402d81dd6428a001409)`()` | Gets the value of Float21_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat21`](#structFRHAPI__MatchTimelineEvent_1a8ede594d0e1e8be0f22915ba23b089ca)`() const` | Gets the value of Float21_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat21`](#structFRHAPI__MatchTimelineEvent_1adae55712d525e8a613d3e674a6c6fb2a)`(const float & DefaultValue) const` | Gets the value of Float21_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat21`](#structFRHAPI__MatchTimelineEvent_1af47bb936556681a8d9ec3f87b4b78e8f)`(float & OutValue) const` | Fills OutValue with the value of Float21_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat21OrNull`](#structFRHAPI__MatchTimelineEvent_1a2ee5047039a854f16c7fda47863ecd58)`()` | Returns a pointer to Float21_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat21OrNull`](#structFRHAPI__MatchTimelineEvent_1a1f130d29ce1f81270237a834144eec11)`() const` | Returns a pointer to Float21_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat21`](#structFRHAPI__MatchTimelineEvent_1afde7f1dc062631436f94450fe1e1cb6b)`(const float & NewValue)` | Sets the value of Float21_Optional and also sets Float21_IsSet to true.
`public inline void `[`SetFloat21`](#structFRHAPI__MatchTimelineEvent_1a657fe7e87e4d87cbda8b4db24c841424)`(float && NewValue)` | Sets the value of Float21_Optional and also sets Float21_IsSet to true using move semantics.
`public inline void `[`ClearFloat21`](#structFRHAPI__MatchTimelineEvent_1a25279aa95d5c53a7d6015d9a67c73890)`()` | Clears the value of Float21_Optional and sets Float21_IsSet to false.
`public inline bool `[`IsFloat21Set`](#structFRHAPI__MatchTimelineEvent_1a633f7f904f9a0189897232b5dc8762c6)`() const` | Checks whether Float21_Optional has been set.
`public inline void `[`SetFloat21ToNull`](#structFRHAPI__MatchTimelineEvent_1aab28cd1c52d5b2921f728bc80ad38095)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat21Null`](#structFRHAPI__MatchTimelineEvent_1a87ba7df88cb2b01ec326c2ce2c3d55d0)`() const` | Checks whether Float21_Optional is set to null.
`public inline float & `[`GetFloat22`](#structFRHAPI__MatchTimelineEvent_1ab6593994bed9323816ef93f0a576b932)`()` | Gets the value of Float22_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat22`](#structFRHAPI__MatchTimelineEvent_1af9bf06c4906faeb5d8a3995cfde50dc2)`() const` | Gets the value of Float22_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat22`](#structFRHAPI__MatchTimelineEvent_1a8effb252168f8274515fb8dd204b12ac)`(const float & DefaultValue) const` | Gets the value of Float22_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat22`](#structFRHAPI__MatchTimelineEvent_1a396d5e5f4dff0e5609382933d9cd069e)`(float & OutValue) const` | Fills OutValue with the value of Float22_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat22OrNull`](#structFRHAPI__MatchTimelineEvent_1a11d2e2de752b5c6a7a571a9572fc09b3)`()` | Returns a pointer to Float22_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat22OrNull`](#structFRHAPI__MatchTimelineEvent_1a92139adeb87068d19c72cb6a3dd6a09d)`() const` | Returns a pointer to Float22_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat22`](#structFRHAPI__MatchTimelineEvent_1af61a2c5048244a54043852f9ce79855b)`(const float & NewValue)` | Sets the value of Float22_Optional and also sets Float22_IsSet to true.
`public inline void `[`SetFloat22`](#structFRHAPI__MatchTimelineEvent_1ac9945c697b2800af5816872037565999)`(float && NewValue)` | Sets the value of Float22_Optional and also sets Float22_IsSet to true using move semantics.
`public inline void `[`ClearFloat22`](#structFRHAPI__MatchTimelineEvent_1a4ab567b768919cdecc0438c98a536818)`()` | Clears the value of Float22_Optional and sets Float22_IsSet to false.
`public inline bool `[`IsFloat22Set`](#structFRHAPI__MatchTimelineEvent_1af5c2dd018c7ca1596beeee6659c2d10f)`() const` | Checks whether Float22_Optional has been set.
`public inline void `[`SetFloat22ToNull`](#structFRHAPI__MatchTimelineEvent_1a40e558387ce784b0ab4e0428ffcc102a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat22Null`](#structFRHAPI__MatchTimelineEvent_1a8607539302135b93e0e88209bdc4d545)`() const` | Checks whether Float22_Optional is set to null.
`public inline float & `[`GetFloat23`](#structFRHAPI__MatchTimelineEvent_1a4c2841b2bc868d9c4660a49492875205)`()` | Gets the value of Float23_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat23`](#structFRHAPI__MatchTimelineEvent_1a7c7e9c93ba234e8047db30ccba225d20)`() const` | Gets the value of Float23_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat23`](#structFRHAPI__MatchTimelineEvent_1a5b1c56c15ac5b1e9f87796b697164dd9)`(const float & DefaultValue) const` | Gets the value of Float23_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat23`](#structFRHAPI__MatchTimelineEvent_1a817803006891068f010bc3effa7a50bf)`(float & OutValue) const` | Fills OutValue with the value of Float23_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat23OrNull`](#structFRHAPI__MatchTimelineEvent_1afb4ba801d325440d51c0100f01f3260f)`()` | Returns a pointer to Float23_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat23OrNull`](#structFRHAPI__MatchTimelineEvent_1ab75aee0fd1d5cace1765e16a018a05f8)`() const` | Returns a pointer to Float23_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat23`](#structFRHAPI__MatchTimelineEvent_1a26aab86e2f21a23553552d49f7fdb479)`(const float & NewValue)` | Sets the value of Float23_Optional and also sets Float23_IsSet to true.
`public inline void `[`SetFloat23`](#structFRHAPI__MatchTimelineEvent_1aaa23959ef89d5fa76ff0629a4678fbad)`(float && NewValue)` | Sets the value of Float23_Optional and also sets Float23_IsSet to true using move semantics.
`public inline void `[`ClearFloat23`](#structFRHAPI__MatchTimelineEvent_1addca41364844317f29bbf7876b41f41d)`()` | Clears the value of Float23_Optional and sets Float23_IsSet to false.
`public inline bool `[`IsFloat23Set`](#structFRHAPI__MatchTimelineEvent_1a001968e5b2774452c4531bffab84eff8)`() const` | Checks whether Float23_Optional has been set.
`public inline void `[`SetFloat23ToNull`](#structFRHAPI__MatchTimelineEvent_1a41f09092f6ef2f98c3c239db46bcc73f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat23Null`](#structFRHAPI__MatchTimelineEvent_1a9bf30ad4ee76e65ad4b941fc3d0dcd04)`() const` | Checks whether Float23_Optional is set to null.
`public inline float & `[`GetFloat24`](#structFRHAPI__MatchTimelineEvent_1adb9f9776c4e4de3fe5b8bb1a2876fafc)`()` | Gets the value of Float24_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat24`](#structFRHAPI__MatchTimelineEvent_1a56b22ae984a573880aa7394e6335e6ef)`() const` | Gets the value of Float24_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat24`](#structFRHAPI__MatchTimelineEvent_1a3959231255f69370a3c6385c476d236e)`(const float & DefaultValue) const` | Gets the value of Float24_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat24`](#structFRHAPI__MatchTimelineEvent_1a34fc1f7acc23b0dd3c94939e56e0ecba)`(float & OutValue) const` | Fills OutValue with the value of Float24_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat24OrNull`](#structFRHAPI__MatchTimelineEvent_1a7f46c80822df265d5980e50528620298)`()` | Returns a pointer to Float24_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat24OrNull`](#structFRHAPI__MatchTimelineEvent_1a7db03428d124886f19f7a48dd7868280)`() const` | Returns a pointer to Float24_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat24`](#structFRHAPI__MatchTimelineEvent_1a8ea35612c9106c0f4d35684bb9312e3e)`(const float & NewValue)` | Sets the value of Float24_Optional and also sets Float24_IsSet to true.
`public inline void `[`SetFloat24`](#structFRHAPI__MatchTimelineEvent_1a523ebd4e1aa52d1bbb0a3c775cb1b334)`(float && NewValue)` | Sets the value of Float24_Optional and also sets Float24_IsSet to true using move semantics.
`public inline void `[`ClearFloat24`](#structFRHAPI__MatchTimelineEvent_1acfbd6596c1c76a9e0b14caa47d1c4042)`()` | Clears the value of Float24_Optional and sets Float24_IsSet to false.
`public inline bool `[`IsFloat24Set`](#structFRHAPI__MatchTimelineEvent_1ab5d24e62d146894147d54e76942cf43d)`() const` | Checks whether Float24_Optional has been set.
`public inline void `[`SetFloat24ToNull`](#structFRHAPI__MatchTimelineEvent_1abf95c49191cc448320c673e8408ea542)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat24Null`](#structFRHAPI__MatchTimelineEvent_1a6fd19d0998791cacbfdc326a6d5d0172)`() const` | Checks whether Float24_Optional is set to null.
`public inline float & `[`GetFloat25`](#structFRHAPI__MatchTimelineEvent_1a1e570f3396f4e7081d7038493f6d6b6e)`()` | Gets the value of Float25_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat25`](#structFRHAPI__MatchTimelineEvent_1a36a883b7069adf970707703939460aa4)`() const` | Gets the value of Float25_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat25`](#structFRHAPI__MatchTimelineEvent_1a368a9484f352e3a79813b87fc9c0233a)`(const float & DefaultValue) const` | Gets the value of Float25_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat25`](#structFRHAPI__MatchTimelineEvent_1affc785efe4d9b4014f2a987d00333ab9)`(float & OutValue) const` | Fills OutValue with the value of Float25_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat25OrNull`](#structFRHAPI__MatchTimelineEvent_1ae7197de2b894596afdc9ca717b42e1cd)`()` | Returns a pointer to Float25_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat25OrNull`](#structFRHAPI__MatchTimelineEvent_1a73ed1e36b8bbafa51da7e1abbc8a5fac)`() const` | Returns a pointer to Float25_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat25`](#structFRHAPI__MatchTimelineEvent_1a7ffa66942624fc7e5fab8c592938f4f3)`(const float & NewValue)` | Sets the value of Float25_Optional and also sets Float25_IsSet to true.
`public inline void `[`SetFloat25`](#structFRHAPI__MatchTimelineEvent_1aed9a44d09fda7a7c7a30288f2ffc5023)`(float && NewValue)` | Sets the value of Float25_Optional and also sets Float25_IsSet to true using move semantics.
`public inline void `[`ClearFloat25`](#structFRHAPI__MatchTimelineEvent_1ad0ef559b64a49ecf49e4e38053a9f3b9)`()` | Clears the value of Float25_Optional and sets Float25_IsSet to false.
`public inline bool `[`IsFloat25Set`](#structFRHAPI__MatchTimelineEvent_1aec0d4c840b85e0b80405ce8d4528bac8)`() const` | Checks whether Float25_Optional has been set.
`public inline void `[`SetFloat25ToNull`](#structFRHAPI__MatchTimelineEvent_1a80e8f3ec239804fdd1e3e034cecdbd19)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat25Null`](#structFRHAPI__MatchTimelineEvent_1a8d34eccc767e76bd583e0dae91c8689a)`() const` | Checks whether Float25_Optional is set to null.
`public inline float & `[`GetFloat26`](#structFRHAPI__MatchTimelineEvent_1a718af30269b354d6bb5ef8ad4ee0a369)`()` | Gets the value of Float26_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat26`](#structFRHAPI__MatchTimelineEvent_1aa244ef916b552c955f9f3b0b4dc41441)`() const` | Gets the value of Float26_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat26`](#structFRHAPI__MatchTimelineEvent_1a91373b737460ecf4e7062231b3ae9614)`(const float & DefaultValue) const` | Gets the value of Float26_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat26`](#structFRHAPI__MatchTimelineEvent_1ad879e3f5abc843b2185acdfb24e84d7f)`(float & OutValue) const` | Fills OutValue with the value of Float26_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat26OrNull`](#structFRHAPI__MatchTimelineEvent_1a63ab0690787085ada874d7188f57bc74)`()` | Returns a pointer to Float26_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat26OrNull`](#structFRHAPI__MatchTimelineEvent_1a1cbbdb757980822527b2b093318fb18d)`() const` | Returns a pointer to Float26_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat26`](#structFRHAPI__MatchTimelineEvent_1a6f0510312915b8ec26f815fe4da9972a)`(const float & NewValue)` | Sets the value of Float26_Optional and also sets Float26_IsSet to true.
`public inline void `[`SetFloat26`](#structFRHAPI__MatchTimelineEvent_1ac528e23856609d66516332eef2cefdd9)`(float && NewValue)` | Sets the value of Float26_Optional and also sets Float26_IsSet to true using move semantics.
`public inline void `[`ClearFloat26`](#structFRHAPI__MatchTimelineEvent_1a1dc23f3fc8c3809b10b863ee46012606)`()` | Clears the value of Float26_Optional and sets Float26_IsSet to false.
`public inline bool `[`IsFloat26Set`](#structFRHAPI__MatchTimelineEvent_1a4edcf2118e3dc2a104f0179ffc7c67a3)`() const` | Checks whether Float26_Optional has been set.
`public inline void `[`SetFloat26ToNull`](#structFRHAPI__MatchTimelineEvent_1a4b40645421f74eb72f88a4eb5566291b)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat26Null`](#structFRHAPI__MatchTimelineEvent_1ab029e23cbdac71f3c48b1abd586e6c19)`() const` | Checks whether Float26_Optional is set to null.
`public inline float & `[`GetFloat27`](#structFRHAPI__MatchTimelineEvent_1a4913752bcfd4426918cc28ad5d3d99d9)`()` | Gets the value of Float27_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat27`](#structFRHAPI__MatchTimelineEvent_1a259eafe910ae197300722b57ab8a72cf)`() const` | Gets the value of Float27_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat27`](#structFRHAPI__MatchTimelineEvent_1ab721771e86d1a919d328194b2e463af6)`(const float & DefaultValue) const` | Gets the value of Float27_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat27`](#structFRHAPI__MatchTimelineEvent_1a38d2b6dad516b48c8a71eba9d46f8907)`(float & OutValue) const` | Fills OutValue with the value of Float27_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat27OrNull`](#structFRHAPI__MatchTimelineEvent_1a1601d2d5db1e4671568a6cef38e71487)`()` | Returns a pointer to Float27_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat27OrNull`](#structFRHAPI__MatchTimelineEvent_1adaa3d752fc88c0de3fb25496f4f4f9e7)`() const` | Returns a pointer to Float27_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat27`](#structFRHAPI__MatchTimelineEvent_1a6da54a4599c56ab77dac28a51ff40601)`(const float & NewValue)` | Sets the value of Float27_Optional and also sets Float27_IsSet to true.
`public inline void `[`SetFloat27`](#structFRHAPI__MatchTimelineEvent_1ab44ac88ee2f909c297f37887d2479103)`(float && NewValue)` | Sets the value of Float27_Optional and also sets Float27_IsSet to true using move semantics.
`public inline void `[`ClearFloat27`](#structFRHAPI__MatchTimelineEvent_1aef407076a594db9a4bf5147ed55c87f6)`()` | Clears the value of Float27_Optional and sets Float27_IsSet to false.
`public inline bool `[`IsFloat27Set`](#structFRHAPI__MatchTimelineEvent_1a4be2a23653b7eaa449079309482db812)`() const` | Checks whether Float27_Optional has been set.
`public inline void `[`SetFloat27ToNull`](#structFRHAPI__MatchTimelineEvent_1a087a46abcaf996dcb871c2ad0d9f703f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat27Null`](#structFRHAPI__MatchTimelineEvent_1adb9b4cfbd582cbf40cc44d2677c46c31)`() const` | Checks whether Float27_Optional is set to null.
`public inline float & `[`GetFloat28`](#structFRHAPI__MatchTimelineEvent_1a12f5389c71249e33a5df122392a0ca7d)`()` | Gets the value of Float28_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat28`](#structFRHAPI__MatchTimelineEvent_1a9fd9beebb6f958d66af4f6ece242efbf)`() const` | Gets the value of Float28_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat28`](#structFRHAPI__MatchTimelineEvent_1a80b4e0b073c89ac575a870443f0f64c4)`(const float & DefaultValue) const` | Gets the value of Float28_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat28`](#structFRHAPI__MatchTimelineEvent_1abc9aca9ea1330ad1172a2c48f4de25b6)`(float & OutValue) const` | Fills OutValue with the value of Float28_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat28OrNull`](#structFRHAPI__MatchTimelineEvent_1a165233ff43d7bba5200458f10d8988a4)`()` | Returns a pointer to Float28_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat28OrNull`](#structFRHAPI__MatchTimelineEvent_1aca7193795c372a0a25f24d7413ccbe75)`() const` | Returns a pointer to Float28_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat28`](#structFRHAPI__MatchTimelineEvent_1a6e990dd48a64258744e7e6efdfb6140a)`(const float & NewValue)` | Sets the value of Float28_Optional and also sets Float28_IsSet to true.
`public inline void `[`SetFloat28`](#structFRHAPI__MatchTimelineEvent_1a85379d37eada31695b6d6d5bd3f69565)`(float && NewValue)` | Sets the value of Float28_Optional and also sets Float28_IsSet to true using move semantics.
`public inline void `[`ClearFloat28`](#structFRHAPI__MatchTimelineEvent_1af470f8108241acbc4d94a54fb679b63f)`()` | Clears the value of Float28_Optional and sets Float28_IsSet to false.
`public inline bool `[`IsFloat28Set`](#structFRHAPI__MatchTimelineEvent_1a0a88a8db8f3124dbe65d090bca1799d7)`() const` | Checks whether Float28_Optional has been set.
`public inline void `[`SetFloat28ToNull`](#structFRHAPI__MatchTimelineEvent_1ae76415777fddf8cd1aec5a6429c24b31)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat28Null`](#structFRHAPI__MatchTimelineEvent_1a719a6dac8629ca4d4511347dbb457028)`() const` | Checks whether Float28_Optional is set to null.
`public inline float & `[`GetFloat29`](#structFRHAPI__MatchTimelineEvent_1a98e0167ab37eb47bc7222be47760e135)`()` | Gets the value of Float29_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat29`](#structFRHAPI__MatchTimelineEvent_1a4be8eddcc9a057257aacc230e4d6ea3f)`() const` | Gets the value of Float29_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat29`](#structFRHAPI__MatchTimelineEvent_1a98d10c1ae6519a84cf79fcbee4e91483)`(const float & DefaultValue) const` | Gets the value of Float29_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat29`](#structFRHAPI__MatchTimelineEvent_1a54dbd021031d5e3157f71fc1e832a21e)`(float & OutValue) const` | Fills OutValue with the value of Float29_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat29OrNull`](#structFRHAPI__MatchTimelineEvent_1a303509acf04a2647cdba8291e71d92bb)`()` | Returns a pointer to Float29_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat29OrNull`](#structFRHAPI__MatchTimelineEvent_1a816cc2801bf1654ad28b68dcd30dc16b)`() const` | Returns a pointer to Float29_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat29`](#structFRHAPI__MatchTimelineEvent_1a7bbeff6c6de3cad73254b386c3d19e42)`(const float & NewValue)` | Sets the value of Float29_Optional and also sets Float29_IsSet to true.
`public inline void `[`SetFloat29`](#structFRHAPI__MatchTimelineEvent_1a487070f98dead2179161776bc394715d)`(float && NewValue)` | Sets the value of Float29_Optional and also sets Float29_IsSet to true using move semantics.
`public inline void `[`ClearFloat29`](#structFRHAPI__MatchTimelineEvent_1a99ae5a405a44e2cd1efc5b216a47133e)`()` | Clears the value of Float29_Optional and sets Float29_IsSet to false.
`public inline bool `[`IsFloat29Set`](#structFRHAPI__MatchTimelineEvent_1a59af41ea580edb183fccc1f06e65c4a3)`() const` | Checks whether Float29_Optional has been set.
`public inline void `[`SetFloat29ToNull`](#structFRHAPI__MatchTimelineEvent_1a549d746bfb88ca0cce627d1b99944eea)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat29Null`](#structFRHAPI__MatchTimelineEvent_1a93f22f1c469f2ec29273e81c4dbbfeb7)`() const` | Checks whether Float29_Optional is set to null.
`public inline float & `[`GetFloat30`](#structFRHAPI__MatchTimelineEvent_1af2219347e76d7b053b1123b360dff211)`()` | Gets the value of Float30_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat30`](#structFRHAPI__MatchTimelineEvent_1a7c5777a33f6f20165b6bcfeed2087136)`() const` | Gets the value of Float30_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat30`](#structFRHAPI__MatchTimelineEvent_1a81fbd11c5a094fffb6dc13cd62d67fbb)`(const float & DefaultValue) const` | Gets the value of Float30_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat30`](#structFRHAPI__MatchTimelineEvent_1a07b35492ceee5b01721af1a794061976)`(float & OutValue) const` | Fills OutValue with the value of Float30_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat30OrNull`](#structFRHAPI__MatchTimelineEvent_1a74981728bb50e55058e041cbf886f93a)`()` | Returns a pointer to Float30_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat30OrNull`](#structFRHAPI__MatchTimelineEvent_1a0da2b259dffc97f4901b8c1ad336193c)`() const` | Returns a pointer to Float30_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat30`](#structFRHAPI__MatchTimelineEvent_1a4e6f42ad136d5a9f2d5e2bdefaca368d)`(const float & NewValue)` | Sets the value of Float30_Optional and also sets Float30_IsSet to true.
`public inline void `[`SetFloat30`](#structFRHAPI__MatchTimelineEvent_1a59228c1df847c4a6bc937add914b5531)`(float && NewValue)` | Sets the value of Float30_Optional and also sets Float30_IsSet to true using move semantics.
`public inline void `[`ClearFloat30`](#structFRHAPI__MatchTimelineEvent_1a65a9b4b9a9d5f7367e4514f80acf034d)`()` | Clears the value of Float30_Optional and sets Float30_IsSet to false.
`public inline bool `[`IsFloat30Set`](#structFRHAPI__MatchTimelineEvent_1af7466ed540377d858e95b606f4d82aca)`() const` | Checks whether Float30_Optional has been set.
`public inline void `[`SetFloat30ToNull`](#structFRHAPI__MatchTimelineEvent_1a885f3a6157e7c1935ef01bbda8a2db54)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat30Null`](#structFRHAPI__MatchTimelineEvent_1a883810611bc664cff251f72778923362)`() const` | Checks whether Float30_Optional is set to null.
`public inline float & `[`GetFloat31`](#structFRHAPI__MatchTimelineEvent_1a936db28560cef7f2ffcfadc81c728d66)`()` | Gets the value of Float31_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat31`](#structFRHAPI__MatchTimelineEvent_1ac71145e7f775cf1ff88fb00792eb085f)`() const` | Gets the value of Float31_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat31`](#structFRHAPI__MatchTimelineEvent_1a9062144b23289afac2b735c96ca67d66)`(const float & DefaultValue) const` | Gets the value of Float31_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat31`](#structFRHAPI__MatchTimelineEvent_1a56391cb9ebb3fdec5d644e485297697c)`(float & OutValue) const` | Fills OutValue with the value of Float31_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat31OrNull`](#structFRHAPI__MatchTimelineEvent_1ad32647c884dae832587b21b8b8bb2a13)`()` | Returns a pointer to Float31_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat31OrNull`](#structFRHAPI__MatchTimelineEvent_1ad1ba1e2b854dc8625a197c23b11f740e)`() const` | Returns a pointer to Float31_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat31`](#structFRHAPI__MatchTimelineEvent_1a96867ff0912edc8121651723ebe23ca1)`(const float & NewValue)` | Sets the value of Float31_Optional and also sets Float31_IsSet to true.
`public inline void `[`SetFloat31`](#structFRHAPI__MatchTimelineEvent_1a4da7dfe961bef04ff171e2672093f598)`(float && NewValue)` | Sets the value of Float31_Optional and also sets Float31_IsSet to true using move semantics.
`public inline void `[`ClearFloat31`](#structFRHAPI__MatchTimelineEvent_1adc7d52028f3d22df1a0879a7cb17cf6d)`()` | Clears the value of Float31_Optional and sets Float31_IsSet to false.
`public inline bool `[`IsFloat31Set`](#structFRHAPI__MatchTimelineEvent_1ae43daea505603da2a2e76dc74672af3c)`() const` | Checks whether Float31_Optional has been set.
`public inline void `[`SetFloat31ToNull`](#structFRHAPI__MatchTimelineEvent_1a0c0872fde65df80a846100e74a903440)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat31Null`](#structFRHAPI__MatchTimelineEvent_1a048091031b60838eabe2c3aa90edb260)`() const` | Checks whether Float31_Optional is set to null.
`public inline float & `[`GetFloat32`](#structFRHAPI__MatchTimelineEvent_1a6817fd1e617bb4d141ca0b6d432d4091)`()` | Gets the value of Float32_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat32`](#structFRHAPI__MatchTimelineEvent_1ae8d42a0494c410a5f1b1b2b21a9d6e17)`() const` | Gets the value of Float32_Optional, regardless of it having been set.
`public inline const float & `[`GetFloat32`](#structFRHAPI__MatchTimelineEvent_1a598c1f2a3ef792e0166e125e0185c9fb)`(const float & DefaultValue) const` | Gets the value of Float32_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFloat32`](#structFRHAPI__MatchTimelineEvent_1a9740888356a9c9b042bc106dbd2131b3)`(float & OutValue) const` | Fills OutValue with the value of Float32_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetFloat32OrNull`](#structFRHAPI__MatchTimelineEvent_1aa36def4c27124f57810937fd01db172e)`()` | Returns a pointer to Float32_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetFloat32OrNull`](#structFRHAPI__MatchTimelineEvent_1a5bf4e3aa79e7bbfb15328199bd9a7e2f)`() const` | Returns a pointer to Float32_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFloat32`](#structFRHAPI__MatchTimelineEvent_1a00eae461865f7620ed9ac9f0202e2dff)`(const float & NewValue)` | Sets the value of Float32_Optional and also sets Float32_IsSet to true.
`public inline void `[`SetFloat32`](#structFRHAPI__MatchTimelineEvent_1a59689f6eb625bccae946a23387b4e093)`(float && NewValue)` | Sets the value of Float32_Optional and also sets Float32_IsSet to true using move semantics.
`public inline void `[`ClearFloat32`](#structFRHAPI__MatchTimelineEvent_1a3cf53593ce4a8de18b9e21cfe5d32495)`()` | Clears the value of Float32_Optional and sets Float32_IsSet to false.
`public inline bool `[`IsFloat32Set`](#structFRHAPI__MatchTimelineEvent_1a5d4b0b3ce5c9ea7c339d82b43b41f8f2)`() const` | Checks whether Float32_Optional has been set.
`public inline void `[`SetFloat32ToNull`](#structFRHAPI__MatchTimelineEvent_1a41a98adca3cc78b910260723c185671e)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFloat32Null`](#structFRHAPI__MatchTimelineEvent_1aed1c40ac7824c8b22c885c9c40af414c)`() const` | Checks whether Float32_Optional is set to null.

### Members

#### `public int32 `[`CreatedInto_Optional`](#structFRHAPI__MatchTimelineEvent_1a611ee78de2b1ebb18d3986f72b3e2c1a) <a id="structFRHAPI__MatchTimelineEvent_1a611ee78de2b1ebb18d3986f72b3e2c1a"></a>

#### `public bool `[`CreatedInto_IsSet`](#structFRHAPI__MatchTimelineEvent_1aabe5dd8bd6fcfb535b40798963d32ef1) <a id="structFRHAPI__MatchTimelineEvent_1aabe5dd8bd6fcfb535b40798963d32ef1"></a>

true if CreatedInto_Optional has been set to a value

#### `public bool `[`CreatedInto_IsNull`](#structFRHAPI__MatchTimelineEvent_1a3fb486530aeb5951e879225eb40d5c80) <a id="structFRHAPI__MatchTimelineEvent_1a3fb486530aeb5951e879225eb40d5c80"></a>

true if CreatedInto_Optional has been explicitly set to null

#### `public FDateTime `[`CreatedDt_Optional`](#structFRHAPI__MatchTimelineEvent_1a25c4c3fe2a1fb116e891d1e79476971e) <a id="structFRHAPI__MatchTimelineEvent_1a25c4c3fe2a1fb116e891d1e79476971e"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`CreatedDt_IsSet`](#structFRHAPI__MatchTimelineEvent_1a376f16ef0e18815173e217939fd411f7) <a id="structFRHAPI__MatchTimelineEvent_1a376f16ef0e18815173e217939fd411f7"></a>

true if CreatedDt_Optional has been set to a value

#### `public bool `[`CreatedDt_IsNull`](#structFRHAPI__MatchTimelineEvent_1a9abcf670dbfe1b1c1d8d829d906cab54) <a id="structFRHAPI__MatchTimelineEvent_1a9abcf670dbfe1b1c1d8d829d906cab54"></a>

true if CreatedDt_Optional has been explicitly set to null

#### `public FString `[`Type_Optional`](#structFRHAPI__MatchTimelineEvent_1a50da50fa8a3ced06fa50b2c7aa07c150) <a id="structFRHAPI__MatchTimelineEvent_1a50da50fa8a3ced06fa50b2c7aa07c150"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__MatchTimelineEvent_1a359d4516666ca98e4df41fe9c03a51e8) <a id="structFRHAPI__MatchTimelineEvent_1a359d4516666ca98e4df41fe9c03a51e8"></a>

true if Type_Optional has been set to a value

#### `public bool `[`Type_IsNull`](#structFRHAPI__MatchTimelineEvent_1aae3fcda8183a01c129e6aa05f471ea44) <a id="structFRHAPI__MatchTimelineEvent_1aae3fcda8183a01c129e6aa05f471ea44"></a>

true if Type_Optional has been explicitly set to null

#### `public FString `[`Type2_Optional`](#structFRHAPI__MatchTimelineEvent_1a7edc97c64651db26f5e3b6ce363b517d) <a id="structFRHAPI__MatchTimelineEvent_1a7edc97c64651db26f5e3b6ce363b517d"></a>

#### `public bool `[`Type2_IsSet`](#structFRHAPI__MatchTimelineEvent_1a2abbb184f1c1679f601a592ef900940e) <a id="structFRHAPI__MatchTimelineEvent_1a2abbb184f1c1679f601a592ef900940e"></a>

true if Type2_Optional has been set to a value

#### `public bool `[`Type2_IsNull`](#structFRHAPI__MatchTimelineEvent_1a9911a24562b095a885500d7319a23b32) <a id="structFRHAPI__MatchTimelineEvent_1a9911a24562b095a885500d7319a23b32"></a>

true if Type2_Optional has been explicitly set to null

#### `public FString `[`Type3_Optional`](#structFRHAPI__MatchTimelineEvent_1a99f76a005e3b2965081ff00f98c72301) <a id="structFRHAPI__MatchTimelineEvent_1a99f76a005e3b2965081ff00f98c72301"></a>

#### `public bool `[`Type3_IsSet`](#structFRHAPI__MatchTimelineEvent_1a740368ab2e3a65bfb4347928f0b4c19c) <a id="structFRHAPI__MatchTimelineEvent_1a740368ab2e3a65bfb4347928f0b4c19c"></a>

true if Type3_Optional has been set to a value

#### `public bool `[`Type3_IsNull`](#structFRHAPI__MatchTimelineEvent_1a6db4fbd0eb27202fa45075837c0e0c7c) <a id="structFRHAPI__MatchTimelineEvent_1a6db4fbd0eb27202fa45075837c0e0c7c"></a>

true if Type3_Optional has been explicitly set to null

#### `public FString `[`Type4_Optional`](#structFRHAPI__MatchTimelineEvent_1aa3503ec60b28924fb194a283cadff695) <a id="structFRHAPI__MatchTimelineEvent_1aa3503ec60b28924fb194a283cadff695"></a>

#### `public bool `[`Type4_IsSet`](#structFRHAPI__MatchTimelineEvent_1a4d3dda048f237789f6fcffb901a1fb35) <a id="structFRHAPI__MatchTimelineEvent_1a4d3dda048f237789f6fcffb901a1fb35"></a>

true if Type4_Optional has been set to a value

#### `public bool `[`Type4_IsNull`](#structFRHAPI__MatchTimelineEvent_1a2dc5c490be088381e161a4b877c39291) <a id="structFRHAPI__MatchTimelineEvent_1a2dc5c490be088381e161a4b877c39291"></a>

true if Type4_Optional has been explicitly set to null

#### `public float `[`LocX_Optional`](#structFRHAPI__MatchTimelineEvent_1add942cff244cefbd93485b1cf6ea2bca) <a id="structFRHAPI__MatchTimelineEvent_1add942cff244cefbd93485b1cf6ea2bca"></a>

#### `public bool `[`LocX_IsSet`](#structFRHAPI__MatchTimelineEvent_1a3215f43e938255751da8afbadb58e2fa) <a id="structFRHAPI__MatchTimelineEvent_1a3215f43e938255751da8afbadb58e2fa"></a>

true if LocX_Optional has been set to a value

#### `public bool `[`LocX_IsNull`](#structFRHAPI__MatchTimelineEvent_1a9b5dcd6ff495fda8f0de89f51da98cd1) <a id="structFRHAPI__MatchTimelineEvent_1a9b5dcd6ff495fda8f0de89f51da98cd1"></a>

true if LocX_Optional has been explicitly set to null

#### `public float `[`LocY_Optional`](#structFRHAPI__MatchTimelineEvent_1a144225087271f62b83b6a33068ad854f) <a id="structFRHAPI__MatchTimelineEvent_1a144225087271f62b83b6a33068ad854f"></a>

#### `public bool `[`LocY_IsSet`](#structFRHAPI__MatchTimelineEvent_1a7c8b301ae992c0b7aa045955f0eeb179) <a id="structFRHAPI__MatchTimelineEvent_1a7c8b301ae992c0b7aa045955f0eeb179"></a>

true if LocY_Optional has been set to a value

#### `public bool `[`LocY_IsNull`](#structFRHAPI__MatchTimelineEvent_1a4eb7e82ee9f5febd89c138a1e8b11892) <a id="structFRHAPI__MatchTimelineEvent_1a4eb7e82ee9f5febd89c138a1e8b11892"></a>

true if LocY_Optional has been explicitly set to null

#### `public float `[`LocZ_Optional`](#structFRHAPI__MatchTimelineEvent_1a7e4158bdb926abcc6de672e29c62a393) <a id="structFRHAPI__MatchTimelineEvent_1a7e4158bdb926abcc6de672e29c62a393"></a>

#### `public bool `[`LocZ_IsSet`](#structFRHAPI__MatchTimelineEvent_1af6ae10ed1d1bce9397e9416f294bf853) <a id="structFRHAPI__MatchTimelineEvent_1af6ae10ed1d1bce9397e9416f294bf853"></a>

true if LocZ_Optional has been set to a value

#### `public bool `[`LocZ_IsNull`](#structFRHAPI__MatchTimelineEvent_1a9a4a4da5a9a64f524771eb8fa5b3b619) <a id="structFRHAPI__MatchTimelineEvent_1a9a4a4da5a9a64f524771eb8fa5b3b619"></a>

true if LocZ_Optional has been explicitly set to null

#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__MatchTimelineEvent_1a39c9203d845ff97f10e8ddff2471b852) <a id="structFRHAPI__MatchTimelineEvent_1a39c9203d845ff97f10e8ddff2471b852"></a>

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__MatchTimelineEvent_1ad3c5fd57eb5045b4c38646e7de60b206) <a id="structFRHAPI__MatchTimelineEvent_1ad3c5fd57eb5045b4c38646e7de60b206"></a>

true if PlayerUuid_Optional has been set to a value

#### `public bool `[`PlayerUuid_IsNull`](#structFRHAPI__MatchTimelineEvent_1a44177f80b6630a749e3b91234eb05eab) <a id="structFRHAPI__MatchTimelineEvent_1a44177f80b6630a749e3b91234eb05eab"></a>

true if PlayerUuid_Optional has been explicitly set to null

#### `public FGuid `[`SourcePlayerUuid_Optional`](#structFRHAPI__MatchTimelineEvent_1a540b00be9d0836acc79190ce5cfe50ac) <a id="structFRHAPI__MatchTimelineEvent_1a540b00be9d0836acc79190ce5cfe50ac"></a>

#### `public bool `[`SourcePlayerUuid_IsSet`](#structFRHAPI__MatchTimelineEvent_1a5b714a80087ae985a6f0ad30f881651f) <a id="structFRHAPI__MatchTimelineEvent_1a5b714a80087ae985a6f0ad30f881651f"></a>

true if SourcePlayerUuid_Optional has been set to a value

#### `public bool `[`SourcePlayerUuid_IsNull`](#structFRHAPI__MatchTimelineEvent_1a139e2e34eb8fce1d7b4d51416e889ef8) <a id="structFRHAPI__MatchTimelineEvent_1a139e2e34eb8fce1d7b4d51416e889ef8"></a>

true if SourcePlayerUuid_Optional has been explicitly set to null

#### `public FString `[`SourceId_Optional`](#structFRHAPI__MatchTimelineEvent_1af1385c4a0d0d3b64b471d2195d8d6d1e) <a id="structFRHAPI__MatchTimelineEvent_1af1385c4a0d0d3b64b471d2195d8d6d1e"></a>

#### `public bool `[`SourceId_IsSet`](#structFRHAPI__MatchTimelineEvent_1a56b37bdd31fef7beeaa7bd6914e8aec8) <a id="structFRHAPI__MatchTimelineEvent_1a56b37bdd31fef7beeaa7bd6914e8aec8"></a>

true if SourceId_Optional has been set to a value

#### `public bool `[`SourceId_IsNull`](#structFRHAPI__MatchTimelineEvent_1a92102ec0fca703b8447d410169d94a05) <a id="structFRHAPI__MatchTimelineEvent_1a92102ec0fca703b8447d410169d94a05"></a>

true if SourceId_Optional has been explicitly set to null

#### `public FString `[`SourceId2_Optional`](#structFRHAPI__MatchTimelineEvent_1a5cb9958c706ea9dab7fa0c37517ba2fe) <a id="structFRHAPI__MatchTimelineEvent_1a5cb9958c706ea9dab7fa0c37517ba2fe"></a>

#### `public bool `[`SourceId2_IsSet`](#structFRHAPI__MatchTimelineEvent_1a0f31b991eae5a9e60c8f650e5e655fa8) <a id="structFRHAPI__MatchTimelineEvent_1a0f31b991eae5a9e60c8f650e5e655fa8"></a>

true if SourceId2_Optional has been set to a value

#### `public bool `[`SourceId2_IsNull`](#structFRHAPI__MatchTimelineEvent_1a74190b53c3db803a419cde5894cb8098) <a id="structFRHAPI__MatchTimelineEvent_1a74190b53c3db803a419cde5894cb8098"></a>

true if SourceId2_Optional has been explicitly set to null

#### `public FString `[`SourceId3_Optional`](#structFRHAPI__MatchTimelineEvent_1a64e52d37c86e51bff8752a348e1b298a) <a id="structFRHAPI__MatchTimelineEvent_1a64e52d37c86e51bff8752a348e1b298a"></a>

#### `public bool `[`SourceId3_IsSet`](#structFRHAPI__MatchTimelineEvent_1a6841b65d0cdd7694947ee110f14776f8) <a id="structFRHAPI__MatchTimelineEvent_1a6841b65d0cdd7694947ee110f14776f8"></a>

true if SourceId3_Optional has been set to a value

#### `public bool `[`SourceId3_IsNull`](#structFRHAPI__MatchTimelineEvent_1a7a12c31a98ddc120dd64a1c7203ed21f) <a id="structFRHAPI__MatchTimelineEvent_1a7a12c31a98ddc120dd64a1c7203ed21f"></a>

true if SourceId3_Optional has been explicitly set to null

#### `public FString `[`SourceId4_Optional`](#structFRHAPI__MatchTimelineEvent_1a6582fd505f36851d99f451aa086c3c00) <a id="structFRHAPI__MatchTimelineEvent_1a6582fd505f36851d99f451aa086c3c00"></a>

#### `public bool `[`SourceId4_IsSet`](#structFRHAPI__MatchTimelineEvent_1a0374906a2285285914ade0b7c2ab13f7) <a id="structFRHAPI__MatchTimelineEvent_1a0374906a2285285914ade0b7c2ab13f7"></a>

true if SourceId4_Optional has been set to a value

#### `public bool `[`SourceId4_IsNull`](#structFRHAPI__MatchTimelineEvent_1a069702f316a93bad00ec8b88a98b041b) <a id="structFRHAPI__MatchTimelineEvent_1a069702f316a93bad00ec8b88a98b041b"></a>

true if SourceId4_Optional has been explicitly set to null

#### `public FGuid `[`TargetPlayerUuid_Optional`](#structFRHAPI__MatchTimelineEvent_1a8230ba226e77730e57020e0509074790) <a id="structFRHAPI__MatchTimelineEvent_1a8230ba226e77730e57020e0509074790"></a>

#### `public bool `[`TargetPlayerUuid_IsSet`](#structFRHAPI__MatchTimelineEvent_1ab6b5d7ad3ddb3f352383055b4dfa737c) <a id="structFRHAPI__MatchTimelineEvent_1ab6b5d7ad3ddb3f352383055b4dfa737c"></a>

true if TargetPlayerUuid_Optional has been set to a value

#### `public bool `[`TargetPlayerUuid_IsNull`](#structFRHAPI__MatchTimelineEvent_1a0d6143162e7c2489357e04745e3743cb) <a id="structFRHAPI__MatchTimelineEvent_1a0d6143162e7c2489357e04745e3743cb"></a>

true if TargetPlayerUuid_Optional has been explicitly set to null

#### `public FString `[`TargetId_Optional`](#structFRHAPI__MatchTimelineEvent_1af3eff7bd9095641c7a73db81c252617e) <a id="structFRHAPI__MatchTimelineEvent_1af3eff7bd9095641c7a73db81c252617e"></a>

#### `public bool `[`TargetId_IsSet`](#structFRHAPI__MatchTimelineEvent_1aa6a26862d90c5d12169c660ed585f1ed) <a id="structFRHAPI__MatchTimelineEvent_1aa6a26862d90c5d12169c660ed585f1ed"></a>

true if TargetId_Optional has been set to a value

#### `public bool `[`TargetId_IsNull`](#structFRHAPI__MatchTimelineEvent_1acb48166b2b5f0309f4485805cdd0ff54) <a id="structFRHAPI__MatchTimelineEvent_1acb48166b2b5f0309f4485805cdd0ff54"></a>

true if TargetId_Optional has been explicitly set to null

#### `public FString `[`TargetId2_Optional`](#structFRHAPI__MatchTimelineEvent_1adeba2dae0ba195754584b492bc942623) <a id="structFRHAPI__MatchTimelineEvent_1adeba2dae0ba195754584b492bc942623"></a>

#### `public bool `[`TargetId2_IsSet`](#structFRHAPI__MatchTimelineEvent_1a7b94702cdf6c4a2165f654796d24f61d) <a id="structFRHAPI__MatchTimelineEvent_1a7b94702cdf6c4a2165f654796d24f61d"></a>

true if TargetId2_Optional has been set to a value

#### `public bool `[`TargetId2_IsNull`](#structFRHAPI__MatchTimelineEvent_1a07c81da5a7b96fad991252bff679744a) <a id="structFRHAPI__MatchTimelineEvent_1a07c81da5a7b96fad991252bff679744a"></a>

true if TargetId2_Optional has been explicitly set to null

#### `public FString `[`TargetId3_Optional`](#structFRHAPI__MatchTimelineEvent_1affa8592748a77a75618c548711133f1e) <a id="structFRHAPI__MatchTimelineEvent_1affa8592748a77a75618c548711133f1e"></a>

#### `public bool `[`TargetId3_IsSet`](#structFRHAPI__MatchTimelineEvent_1a1fe6d706b6eafa32e5560b34765410c7) <a id="structFRHAPI__MatchTimelineEvent_1a1fe6d706b6eafa32e5560b34765410c7"></a>

true if TargetId3_Optional has been set to a value

#### `public bool `[`TargetId3_IsNull`](#structFRHAPI__MatchTimelineEvent_1a098b9bb2e58c9806088d316bd074ab7c) <a id="structFRHAPI__MatchTimelineEvent_1a098b9bb2e58c9806088d316bd074ab7c"></a>

true if TargetId3_Optional has been explicitly set to null

#### `public FString `[`TargetId4_Optional`](#structFRHAPI__MatchTimelineEvent_1ae7d669271b6a39671c05ada771c11247) <a id="structFRHAPI__MatchTimelineEvent_1ae7d669271b6a39671c05ada771c11247"></a>

#### `public bool `[`TargetId4_IsSet`](#structFRHAPI__MatchTimelineEvent_1aff08ba31692130371f0c921b6b21014d) <a id="structFRHAPI__MatchTimelineEvent_1aff08ba31692130371f0c921b6b21014d"></a>

true if TargetId4_Optional has been set to a value

#### `public bool `[`TargetId4_IsNull`](#structFRHAPI__MatchTimelineEvent_1a4bc976766ac2af943264f9ad8f07a9c2) <a id="structFRHAPI__MatchTimelineEvent_1a4bc976766ac2af943264f9ad8f07a9c2"></a>

true if TargetId4_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchTimelineEvent_1a4bd7332d0029b93a73d88a063f29015a) <a id="structFRHAPI__MatchTimelineEvent_1a4bd7332d0029b93a73d88a063f29015a"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchTimelineEvent_1a98c585247c1c6377740d3e4f58ffe0c4) <a id="structFRHAPI__MatchTimelineEvent_1a98c585247c1c6377740d3e4f58ffe0c4"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__MatchTimelineEvent_1a4abedf28af22c2016f9b185f4c79539e) <a id="structFRHAPI__MatchTimelineEvent_1a4abedf28af22c2016f9b185f4c79539e"></a>

true if CustomData_Optional has been explicitly set to null

#### `public int32 `[`Int1_Optional`](#structFRHAPI__MatchTimelineEvent_1a01bdb62d97a052bbac76e554ac07675b) <a id="structFRHAPI__MatchTimelineEvent_1a01bdb62d97a052bbac76e554ac07675b"></a>

#### `public bool `[`Int1_IsSet`](#structFRHAPI__MatchTimelineEvent_1a2009e7cc96c19b29834d46cbc81d0a8e) <a id="structFRHAPI__MatchTimelineEvent_1a2009e7cc96c19b29834d46cbc81d0a8e"></a>

true if Int1_Optional has been set to a value

#### `public bool `[`Int1_IsNull`](#structFRHAPI__MatchTimelineEvent_1a39c8e259d80179faf0c3ffce3c001964) <a id="structFRHAPI__MatchTimelineEvent_1a39c8e259d80179faf0c3ffce3c001964"></a>

true if Int1_Optional has been explicitly set to null

#### `public int32 `[`Int2_Optional`](#structFRHAPI__MatchTimelineEvent_1a8729315bdaf9d968969994d61cc9028c) <a id="structFRHAPI__MatchTimelineEvent_1a8729315bdaf9d968969994d61cc9028c"></a>

#### `public bool `[`Int2_IsSet`](#structFRHAPI__MatchTimelineEvent_1afb968310003b373e1e26ba8c5c90bd1e) <a id="structFRHAPI__MatchTimelineEvent_1afb968310003b373e1e26ba8c5c90bd1e"></a>

true if Int2_Optional has been set to a value

#### `public bool `[`Int2_IsNull`](#structFRHAPI__MatchTimelineEvent_1a2506c4d25dc3b371f559c3c4881c3835) <a id="structFRHAPI__MatchTimelineEvent_1a2506c4d25dc3b371f559c3c4881c3835"></a>

true if Int2_Optional has been explicitly set to null

#### `public int32 `[`Int3_Optional`](#structFRHAPI__MatchTimelineEvent_1a4b9decd3a5037a0ba6853c39d94905d8) <a id="structFRHAPI__MatchTimelineEvent_1a4b9decd3a5037a0ba6853c39d94905d8"></a>

#### `public bool `[`Int3_IsSet`](#structFRHAPI__MatchTimelineEvent_1ac63872526fc70364e70ce28eae14bf87) <a id="structFRHAPI__MatchTimelineEvent_1ac63872526fc70364e70ce28eae14bf87"></a>

true if Int3_Optional has been set to a value

#### `public bool `[`Int3_IsNull`](#structFRHAPI__MatchTimelineEvent_1a00e4276b82650be4bf5c420781faecff) <a id="structFRHAPI__MatchTimelineEvent_1a00e4276b82650be4bf5c420781faecff"></a>

true if Int3_Optional has been explicitly set to null

#### `public int32 `[`Int4_Optional`](#structFRHAPI__MatchTimelineEvent_1ad783a44fd1e203384b1d177a47b1f574) <a id="structFRHAPI__MatchTimelineEvent_1ad783a44fd1e203384b1d177a47b1f574"></a>

#### `public bool `[`Int4_IsSet`](#structFRHAPI__MatchTimelineEvent_1ad8d010f64d9125414e9394fbc99c2cb9) <a id="structFRHAPI__MatchTimelineEvent_1ad8d010f64d9125414e9394fbc99c2cb9"></a>

true if Int4_Optional has been set to a value

#### `public bool `[`Int4_IsNull`](#structFRHAPI__MatchTimelineEvent_1af370ae5177c4e7f3591c6e661bfaf76c) <a id="structFRHAPI__MatchTimelineEvent_1af370ae5177c4e7f3591c6e661bfaf76c"></a>

true if Int4_Optional has been explicitly set to null

#### `public int32 `[`Int5_Optional`](#structFRHAPI__MatchTimelineEvent_1ae50fdacb2caf3f51f7e11823df8de7a6) <a id="structFRHAPI__MatchTimelineEvent_1ae50fdacb2caf3f51f7e11823df8de7a6"></a>

#### `public bool `[`Int5_IsSet`](#structFRHAPI__MatchTimelineEvent_1ab278688392b79481f7303f230d2c970c) <a id="structFRHAPI__MatchTimelineEvent_1ab278688392b79481f7303f230d2c970c"></a>

true if Int5_Optional has been set to a value

#### `public bool `[`Int5_IsNull`](#structFRHAPI__MatchTimelineEvent_1a7ebdb5fd19e8e96322e713bbea1e583d) <a id="structFRHAPI__MatchTimelineEvent_1a7ebdb5fd19e8e96322e713bbea1e583d"></a>

true if Int5_Optional has been explicitly set to null

#### `public int32 `[`Int6_Optional`](#structFRHAPI__MatchTimelineEvent_1a883bfa8021cb83548200ed5944e72283) <a id="structFRHAPI__MatchTimelineEvent_1a883bfa8021cb83548200ed5944e72283"></a>

#### `public bool `[`Int6_IsSet`](#structFRHAPI__MatchTimelineEvent_1ac21493ef3c6cdf6c40958211133d1648) <a id="structFRHAPI__MatchTimelineEvent_1ac21493ef3c6cdf6c40958211133d1648"></a>

true if Int6_Optional has been set to a value

#### `public bool `[`Int6_IsNull`](#structFRHAPI__MatchTimelineEvent_1a298123fada03bc8b020337696288cb7c) <a id="structFRHAPI__MatchTimelineEvent_1a298123fada03bc8b020337696288cb7c"></a>

true if Int6_Optional has been explicitly set to null

#### `public int32 `[`Int7_Optional`](#structFRHAPI__MatchTimelineEvent_1ad5efbbae0be0ac4d6e156ffe8a99febf) <a id="structFRHAPI__MatchTimelineEvent_1ad5efbbae0be0ac4d6e156ffe8a99febf"></a>

#### `public bool `[`Int7_IsSet`](#structFRHAPI__MatchTimelineEvent_1ab77b470176f05c038ad0e6f3d9f6d5b7) <a id="structFRHAPI__MatchTimelineEvent_1ab77b470176f05c038ad0e6f3d9f6d5b7"></a>

true if Int7_Optional has been set to a value

#### `public bool `[`Int7_IsNull`](#structFRHAPI__MatchTimelineEvent_1a92158cd70c4a444ece017c9bdbe64980) <a id="structFRHAPI__MatchTimelineEvent_1a92158cd70c4a444ece017c9bdbe64980"></a>

true if Int7_Optional has been explicitly set to null

#### `public int32 `[`Int8_Optional`](#structFRHAPI__MatchTimelineEvent_1a6c33a5473aa549fd2d1972bbd7080000) <a id="structFRHAPI__MatchTimelineEvent_1a6c33a5473aa549fd2d1972bbd7080000"></a>

#### `public bool `[`Int8_IsSet`](#structFRHAPI__MatchTimelineEvent_1a7482e972671f7567cf0bcdd2554d2595) <a id="structFRHAPI__MatchTimelineEvent_1a7482e972671f7567cf0bcdd2554d2595"></a>

true if Int8_Optional has been set to a value

#### `public bool `[`Int8_IsNull`](#structFRHAPI__MatchTimelineEvent_1a3ab558b9817a139a1ca1ff5bca7ab552) <a id="structFRHAPI__MatchTimelineEvent_1a3ab558b9817a139a1ca1ff5bca7ab552"></a>

true if Int8_Optional has been explicitly set to null

#### `public int32 `[`Int9_Optional`](#structFRHAPI__MatchTimelineEvent_1a0199468f699e78d659ffbe19898fbaa5) <a id="structFRHAPI__MatchTimelineEvent_1a0199468f699e78d659ffbe19898fbaa5"></a>

#### `public bool `[`Int9_IsSet`](#structFRHAPI__MatchTimelineEvent_1a026486eb3cce3a83e0e7393cf40542cf) <a id="structFRHAPI__MatchTimelineEvent_1a026486eb3cce3a83e0e7393cf40542cf"></a>

true if Int9_Optional has been set to a value

#### `public bool `[`Int9_IsNull`](#structFRHAPI__MatchTimelineEvent_1a86d8914f022780cf9182ab05fba3a954) <a id="structFRHAPI__MatchTimelineEvent_1a86d8914f022780cf9182ab05fba3a954"></a>

true if Int9_Optional has been explicitly set to null

#### `public int32 `[`Int10_Optional`](#structFRHAPI__MatchTimelineEvent_1a0f0a7968e2d8367f4c677bf610f2fb42) <a id="structFRHAPI__MatchTimelineEvent_1a0f0a7968e2d8367f4c677bf610f2fb42"></a>

#### `public bool `[`Int10_IsSet`](#structFRHAPI__MatchTimelineEvent_1aa130301b8fdb36bc73827fa91eca5f94) <a id="structFRHAPI__MatchTimelineEvent_1aa130301b8fdb36bc73827fa91eca5f94"></a>

true if Int10_Optional has been set to a value

#### `public bool `[`Int10_IsNull`](#structFRHAPI__MatchTimelineEvent_1a9388e6524971f42cbf14872d9594139f) <a id="structFRHAPI__MatchTimelineEvent_1a9388e6524971f42cbf14872d9594139f"></a>

true if Int10_Optional has been explicitly set to null

#### `public int32 `[`Int11_Optional`](#structFRHAPI__MatchTimelineEvent_1a390444a17ef32edb1e098639c623e870) <a id="structFRHAPI__MatchTimelineEvent_1a390444a17ef32edb1e098639c623e870"></a>

#### `public bool `[`Int11_IsSet`](#structFRHAPI__MatchTimelineEvent_1a74dd465349d78bf17839bd2cec99c32a) <a id="structFRHAPI__MatchTimelineEvent_1a74dd465349d78bf17839bd2cec99c32a"></a>

true if Int11_Optional has been set to a value

#### `public bool `[`Int11_IsNull`](#structFRHAPI__MatchTimelineEvent_1adb35baa834fd157ebb9bdd63a0969bf2) <a id="structFRHAPI__MatchTimelineEvent_1adb35baa834fd157ebb9bdd63a0969bf2"></a>

true if Int11_Optional has been explicitly set to null

#### `public int32 `[`Int12_Optional`](#structFRHAPI__MatchTimelineEvent_1a1f202cf6f556826081fc9236e65f58e7) <a id="structFRHAPI__MatchTimelineEvent_1a1f202cf6f556826081fc9236e65f58e7"></a>

#### `public bool `[`Int12_IsSet`](#structFRHAPI__MatchTimelineEvent_1a67ae4a1372cadd6c7778b2518c045b2e) <a id="structFRHAPI__MatchTimelineEvent_1a67ae4a1372cadd6c7778b2518c045b2e"></a>

true if Int12_Optional has been set to a value

#### `public bool `[`Int12_IsNull`](#structFRHAPI__MatchTimelineEvent_1aab75e261fd5d5df0981f4a7fbc5b4b3a) <a id="structFRHAPI__MatchTimelineEvent_1aab75e261fd5d5df0981f4a7fbc5b4b3a"></a>

true if Int12_Optional has been explicitly set to null

#### `public int32 `[`Int13_Optional`](#structFRHAPI__MatchTimelineEvent_1a4348faa2dfc4ea0f2154004998d24f95) <a id="structFRHAPI__MatchTimelineEvent_1a4348faa2dfc4ea0f2154004998d24f95"></a>

#### `public bool `[`Int13_IsSet`](#structFRHAPI__MatchTimelineEvent_1ab0b956e86d25491727d3c09dd2a32145) <a id="structFRHAPI__MatchTimelineEvent_1ab0b956e86d25491727d3c09dd2a32145"></a>

true if Int13_Optional has been set to a value

#### `public bool `[`Int13_IsNull`](#structFRHAPI__MatchTimelineEvent_1a51ec26a0017fe93d11998bb4e3c7049a) <a id="structFRHAPI__MatchTimelineEvent_1a51ec26a0017fe93d11998bb4e3c7049a"></a>

true if Int13_Optional has been explicitly set to null

#### `public int32 `[`Int14_Optional`](#structFRHAPI__MatchTimelineEvent_1aeea3811be6f85e3c973af452e128d8e8) <a id="structFRHAPI__MatchTimelineEvent_1aeea3811be6f85e3c973af452e128d8e8"></a>

#### `public bool `[`Int14_IsSet`](#structFRHAPI__MatchTimelineEvent_1a38aec88bc2e0951458c060db716c5257) <a id="structFRHAPI__MatchTimelineEvent_1a38aec88bc2e0951458c060db716c5257"></a>

true if Int14_Optional has been set to a value

#### `public bool `[`Int14_IsNull`](#structFRHAPI__MatchTimelineEvent_1aaf46b25ad725acf04b529d92b1da9111) <a id="structFRHAPI__MatchTimelineEvent_1aaf46b25ad725acf04b529d92b1da9111"></a>

true if Int14_Optional has been explicitly set to null

#### `public int32 `[`Int15_Optional`](#structFRHAPI__MatchTimelineEvent_1a6a14169e5d3d778d39628de584ead157) <a id="structFRHAPI__MatchTimelineEvent_1a6a14169e5d3d778d39628de584ead157"></a>

#### `public bool `[`Int15_IsSet`](#structFRHAPI__MatchTimelineEvent_1a60b5960a1a0ace4d16e8177efe2d2f17) <a id="structFRHAPI__MatchTimelineEvent_1a60b5960a1a0ace4d16e8177efe2d2f17"></a>

true if Int15_Optional has been set to a value

#### `public bool `[`Int15_IsNull`](#structFRHAPI__MatchTimelineEvent_1a1267000a67a752814a6ff2cad7b2587f) <a id="structFRHAPI__MatchTimelineEvent_1a1267000a67a752814a6ff2cad7b2587f"></a>

true if Int15_Optional has been explicitly set to null

#### `public int32 `[`Int16_Optional`](#structFRHAPI__MatchTimelineEvent_1a0486194fe5023c06533c9ab06c8e49dc) <a id="structFRHAPI__MatchTimelineEvent_1a0486194fe5023c06533c9ab06c8e49dc"></a>

#### `public bool `[`Int16_IsSet`](#structFRHAPI__MatchTimelineEvent_1a15079b663355bb80883635c808d2235d) <a id="structFRHAPI__MatchTimelineEvent_1a15079b663355bb80883635c808d2235d"></a>

true if Int16_Optional has been set to a value

#### `public bool `[`Int16_IsNull`](#structFRHAPI__MatchTimelineEvent_1a4f0ec306e79a6d19ac8fc83e9867fc9b) <a id="structFRHAPI__MatchTimelineEvent_1a4f0ec306e79a6d19ac8fc83e9867fc9b"></a>

true if Int16_Optional has been explicitly set to null

#### `public int32 `[`Int17_Optional`](#structFRHAPI__MatchTimelineEvent_1a4103fc0b22946d640797d7516bc565c3) <a id="structFRHAPI__MatchTimelineEvent_1a4103fc0b22946d640797d7516bc565c3"></a>

#### `public bool `[`Int17_IsSet`](#structFRHAPI__MatchTimelineEvent_1a1cff9876e041796ab803be1f91ee7df7) <a id="structFRHAPI__MatchTimelineEvent_1a1cff9876e041796ab803be1f91ee7df7"></a>

true if Int17_Optional has been set to a value

#### `public bool `[`Int17_IsNull`](#structFRHAPI__MatchTimelineEvent_1a0542fbdfe6f807ee8b5b23e9089a927b) <a id="structFRHAPI__MatchTimelineEvent_1a0542fbdfe6f807ee8b5b23e9089a927b"></a>

true if Int17_Optional has been explicitly set to null

#### `public int32 `[`Int18_Optional`](#structFRHAPI__MatchTimelineEvent_1a1fa08ba0444b33f49e3fd30ae68118eb) <a id="structFRHAPI__MatchTimelineEvent_1a1fa08ba0444b33f49e3fd30ae68118eb"></a>

#### `public bool `[`Int18_IsSet`](#structFRHAPI__MatchTimelineEvent_1a67a10b761771efb1e49f11435145c9e0) <a id="structFRHAPI__MatchTimelineEvent_1a67a10b761771efb1e49f11435145c9e0"></a>

true if Int18_Optional has been set to a value

#### `public bool `[`Int18_IsNull`](#structFRHAPI__MatchTimelineEvent_1a6c5bb95dd44fa52d03502abe2c1411b9) <a id="structFRHAPI__MatchTimelineEvent_1a6c5bb95dd44fa52d03502abe2c1411b9"></a>

true if Int18_Optional has been explicitly set to null

#### `public int32 `[`Int19_Optional`](#structFRHAPI__MatchTimelineEvent_1a169b074351d18c09a70f701a960f442f) <a id="structFRHAPI__MatchTimelineEvent_1a169b074351d18c09a70f701a960f442f"></a>

#### `public bool `[`Int19_IsSet`](#structFRHAPI__MatchTimelineEvent_1acfd3e0c5eb1a8bcde67c27d0ac4aec18) <a id="structFRHAPI__MatchTimelineEvent_1acfd3e0c5eb1a8bcde67c27d0ac4aec18"></a>

true if Int19_Optional has been set to a value

#### `public bool `[`Int19_IsNull`](#structFRHAPI__MatchTimelineEvent_1a84c8fd58435f8b5a6007be75c8e32cc4) <a id="structFRHAPI__MatchTimelineEvent_1a84c8fd58435f8b5a6007be75c8e32cc4"></a>

true if Int19_Optional has been explicitly set to null

#### `public int32 `[`Int20_Optional`](#structFRHAPI__MatchTimelineEvent_1a15036277a99e9eca642c93c3ac89a8f7) <a id="structFRHAPI__MatchTimelineEvent_1a15036277a99e9eca642c93c3ac89a8f7"></a>

#### `public bool `[`Int20_IsSet`](#structFRHAPI__MatchTimelineEvent_1a641cc87ee9465e8ba57aa7168ef4d0dc) <a id="structFRHAPI__MatchTimelineEvent_1a641cc87ee9465e8ba57aa7168ef4d0dc"></a>

true if Int20_Optional has been set to a value

#### `public bool `[`Int20_IsNull`](#structFRHAPI__MatchTimelineEvent_1a3d8aaaf875b22c4e5cc0286a3e59c043) <a id="structFRHAPI__MatchTimelineEvent_1a3d8aaaf875b22c4e5cc0286a3e59c043"></a>

true if Int20_Optional has been explicitly set to null

#### `public int32 `[`Int21_Optional`](#structFRHAPI__MatchTimelineEvent_1ae6d864422892152c75b59081ec382421) <a id="structFRHAPI__MatchTimelineEvent_1ae6d864422892152c75b59081ec382421"></a>

#### `public bool `[`Int21_IsSet`](#structFRHAPI__MatchTimelineEvent_1a42ea6c0c6ef1797b4bb7c694bb6360f2) <a id="structFRHAPI__MatchTimelineEvent_1a42ea6c0c6ef1797b4bb7c694bb6360f2"></a>

true if Int21_Optional has been set to a value

#### `public bool `[`Int21_IsNull`](#structFRHAPI__MatchTimelineEvent_1af2102d4160b2734ea8ec7dd7cf9b28a4) <a id="structFRHAPI__MatchTimelineEvent_1af2102d4160b2734ea8ec7dd7cf9b28a4"></a>

true if Int21_Optional has been explicitly set to null

#### `public int32 `[`Int22_Optional`](#structFRHAPI__MatchTimelineEvent_1ae9406235549246d2ffba70759e1909eb) <a id="structFRHAPI__MatchTimelineEvent_1ae9406235549246d2ffba70759e1909eb"></a>

#### `public bool `[`Int22_IsSet`](#structFRHAPI__MatchTimelineEvent_1a0c09b1991281e4f4437d2d3d44383c25) <a id="structFRHAPI__MatchTimelineEvent_1a0c09b1991281e4f4437d2d3d44383c25"></a>

true if Int22_Optional has been set to a value

#### `public bool `[`Int22_IsNull`](#structFRHAPI__MatchTimelineEvent_1a377ea3be514b3e8dafd8ef3897f0104b) <a id="structFRHAPI__MatchTimelineEvent_1a377ea3be514b3e8dafd8ef3897f0104b"></a>

true if Int22_Optional has been explicitly set to null

#### `public int32 `[`Int23_Optional`](#structFRHAPI__MatchTimelineEvent_1ab3e2c9850ddeb8a22b86f56e188465e5) <a id="structFRHAPI__MatchTimelineEvent_1ab3e2c9850ddeb8a22b86f56e188465e5"></a>

#### `public bool `[`Int23_IsSet`](#structFRHAPI__MatchTimelineEvent_1a0a8dcb739445942306709f26b0b3733c) <a id="structFRHAPI__MatchTimelineEvent_1a0a8dcb739445942306709f26b0b3733c"></a>

true if Int23_Optional has been set to a value

#### `public bool `[`Int23_IsNull`](#structFRHAPI__MatchTimelineEvent_1a7c24ef2c5ce23555c23e120c5a70efc3) <a id="structFRHAPI__MatchTimelineEvent_1a7c24ef2c5ce23555c23e120c5a70efc3"></a>

true if Int23_Optional has been explicitly set to null

#### `public int32 `[`Int24_Optional`](#structFRHAPI__MatchTimelineEvent_1aa76a6534e0f119645668fb1f40fa9886) <a id="structFRHAPI__MatchTimelineEvent_1aa76a6534e0f119645668fb1f40fa9886"></a>

#### `public bool `[`Int24_IsSet`](#structFRHAPI__MatchTimelineEvent_1a85cf809343f321aad9eea784d829b37c) <a id="structFRHAPI__MatchTimelineEvent_1a85cf809343f321aad9eea784d829b37c"></a>

true if Int24_Optional has been set to a value

#### `public bool `[`Int24_IsNull`](#structFRHAPI__MatchTimelineEvent_1af34e92fc170eb3f05e686b6e8ed8902a) <a id="structFRHAPI__MatchTimelineEvent_1af34e92fc170eb3f05e686b6e8ed8902a"></a>

true if Int24_Optional has been explicitly set to null

#### `public int32 `[`Int25_Optional`](#structFRHAPI__MatchTimelineEvent_1a72eb25a84216fadb0fcfabcc72143640) <a id="structFRHAPI__MatchTimelineEvent_1a72eb25a84216fadb0fcfabcc72143640"></a>

#### `public bool `[`Int25_IsSet`](#structFRHAPI__MatchTimelineEvent_1a6c5e99d4ccc19210e1285f11b3697c21) <a id="structFRHAPI__MatchTimelineEvent_1a6c5e99d4ccc19210e1285f11b3697c21"></a>

true if Int25_Optional has been set to a value

#### `public bool `[`Int25_IsNull`](#structFRHAPI__MatchTimelineEvent_1a4ee6995390edc6b1c2ad790927677c0f) <a id="structFRHAPI__MatchTimelineEvent_1a4ee6995390edc6b1c2ad790927677c0f"></a>

true if Int25_Optional has been explicitly set to null

#### `public int32 `[`Int26_Optional`](#structFRHAPI__MatchTimelineEvent_1a6abf89f77afd731e904ae7bb837ae3f9) <a id="structFRHAPI__MatchTimelineEvent_1a6abf89f77afd731e904ae7bb837ae3f9"></a>

#### `public bool `[`Int26_IsSet`](#structFRHAPI__MatchTimelineEvent_1aa49fc14c16ddeaacc27acb75f40ceff7) <a id="structFRHAPI__MatchTimelineEvent_1aa49fc14c16ddeaacc27acb75f40ceff7"></a>

true if Int26_Optional has been set to a value

#### `public bool `[`Int26_IsNull`](#structFRHAPI__MatchTimelineEvent_1a0a1130ea54c7cf0317d2fab0f0018f62) <a id="structFRHAPI__MatchTimelineEvent_1a0a1130ea54c7cf0317d2fab0f0018f62"></a>

true if Int26_Optional has been explicitly set to null

#### `public int32 `[`Int27_Optional`](#structFRHAPI__MatchTimelineEvent_1af0ab9f7c10b4e3e9a965730722bdf449) <a id="structFRHAPI__MatchTimelineEvent_1af0ab9f7c10b4e3e9a965730722bdf449"></a>

#### `public bool `[`Int27_IsSet`](#structFRHAPI__MatchTimelineEvent_1ac8f68a29e98c64114db78c71db065e73) <a id="structFRHAPI__MatchTimelineEvent_1ac8f68a29e98c64114db78c71db065e73"></a>

true if Int27_Optional has been set to a value

#### `public bool `[`Int27_IsNull`](#structFRHAPI__MatchTimelineEvent_1a523267f43ca4b059eaf3d9b19ca978f0) <a id="structFRHAPI__MatchTimelineEvent_1a523267f43ca4b059eaf3d9b19ca978f0"></a>

true if Int27_Optional has been explicitly set to null

#### `public int32 `[`Int28_Optional`](#structFRHAPI__MatchTimelineEvent_1a61cc1104e766d3b0e19069f638ee0878) <a id="structFRHAPI__MatchTimelineEvent_1a61cc1104e766d3b0e19069f638ee0878"></a>

#### `public bool `[`Int28_IsSet`](#structFRHAPI__MatchTimelineEvent_1ae5517590f57fc1463fb742d15ab28fb2) <a id="structFRHAPI__MatchTimelineEvent_1ae5517590f57fc1463fb742d15ab28fb2"></a>

true if Int28_Optional has been set to a value

#### `public bool `[`Int28_IsNull`](#structFRHAPI__MatchTimelineEvent_1a9f21c3fb498733405a2075692341d3ed) <a id="structFRHAPI__MatchTimelineEvent_1a9f21c3fb498733405a2075692341d3ed"></a>

true if Int28_Optional has been explicitly set to null

#### `public int32 `[`Int29_Optional`](#structFRHAPI__MatchTimelineEvent_1aba3b3afc227dd8dc83636679d39fe1e3) <a id="structFRHAPI__MatchTimelineEvent_1aba3b3afc227dd8dc83636679d39fe1e3"></a>

#### `public bool `[`Int29_IsSet`](#structFRHAPI__MatchTimelineEvent_1a30e12cf059e14fe3d0b1a3ffb95e2096) <a id="structFRHAPI__MatchTimelineEvent_1a30e12cf059e14fe3d0b1a3ffb95e2096"></a>

true if Int29_Optional has been set to a value

#### `public bool `[`Int29_IsNull`](#structFRHAPI__MatchTimelineEvent_1abaab873deda8db55d436fd830eff64cf) <a id="structFRHAPI__MatchTimelineEvent_1abaab873deda8db55d436fd830eff64cf"></a>

true if Int29_Optional has been explicitly set to null

#### `public int32 `[`Int30_Optional`](#structFRHAPI__MatchTimelineEvent_1a07eb1de2bab0e6642421996518f458df) <a id="structFRHAPI__MatchTimelineEvent_1a07eb1de2bab0e6642421996518f458df"></a>

#### `public bool `[`Int30_IsSet`](#structFRHAPI__MatchTimelineEvent_1a9fa74fae9c2ce2b163d0f10af6bd41db) <a id="structFRHAPI__MatchTimelineEvent_1a9fa74fae9c2ce2b163d0f10af6bd41db"></a>

true if Int30_Optional has been set to a value

#### `public bool `[`Int30_IsNull`](#structFRHAPI__MatchTimelineEvent_1ac5b1da6a129b415532ab5e6e915e1289) <a id="structFRHAPI__MatchTimelineEvent_1ac5b1da6a129b415532ab5e6e915e1289"></a>

true if Int30_Optional has been explicitly set to null

#### `public int32 `[`Int31_Optional`](#structFRHAPI__MatchTimelineEvent_1afafe8a963ac2fd058b1aaa91da93e30e) <a id="structFRHAPI__MatchTimelineEvent_1afafe8a963ac2fd058b1aaa91da93e30e"></a>

#### `public bool `[`Int31_IsSet`](#structFRHAPI__MatchTimelineEvent_1a9a5f87df3309fc34d2b53bd01affd59b) <a id="structFRHAPI__MatchTimelineEvent_1a9a5f87df3309fc34d2b53bd01affd59b"></a>

true if Int31_Optional has been set to a value

#### `public bool `[`Int31_IsNull`](#structFRHAPI__MatchTimelineEvent_1ac6fe9f1d71ad9f7a3ce94e32303600e2) <a id="structFRHAPI__MatchTimelineEvent_1ac6fe9f1d71ad9f7a3ce94e32303600e2"></a>

true if Int31_Optional has been explicitly set to null

#### `public int32 `[`Int32_Optional`](#structFRHAPI__MatchTimelineEvent_1a0085a8a1743988defd21f10dbfd4b48b) <a id="structFRHAPI__MatchTimelineEvent_1a0085a8a1743988defd21f10dbfd4b48b"></a>

#### `public bool `[`Int32_IsSet`](#structFRHAPI__MatchTimelineEvent_1a2c9a9df2d4accd7b26d383f53a45484d) <a id="structFRHAPI__MatchTimelineEvent_1a2c9a9df2d4accd7b26d383f53a45484d"></a>

true if Int32_Optional has been set to a value

#### `public bool `[`Int32_IsNull`](#structFRHAPI__MatchTimelineEvent_1ac15c6a37f944ba1b58c9a6b3a41b23eb) <a id="structFRHAPI__MatchTimelineEvent_1ac15c6a37f944ba1b58c9a6b3a41b23eb"></a>

true if Int32_Optional has been explicitly set to null

#### `public FString `[`Str1_Optional`](#structFRHAPI__MatchTimelineEvent_1aedf5ea58a8fdfa23b050caa06d8fc716) <a id="structFRHAPI__MatchTimelineEvent_1aedf5ea58a8fdfa23b050caa06d8fc716"></a>

#### `public bool `[`Str1_IsSet`](#structFRHAPI__MatchTimelineEvent_1a4203fede5ef0186d6dc0d34271a0889a) <a id="structFRHAPI__MatchTimelineEvent_1a4203fede5ef0186d6dc0d34271a0889a"></a>

true if Str1_Optional has been set to a value

#### `public bool `[`Str1_IsNull`](#structFRHAPI__MatchTimelineEvent_1a588ab43651a4379805d8df9fa055ed33) <a id="structFRHAPI__MatchTimelineEvent_1a588ab43651a4379805d8df9fa055ed33"></a>

true if Str1_Optional has been explicitly set to null

#### `public FString `[`Str2_Optional`](#structFRHAPI__MatchTimelineEvent_1ac18bfec7d40b3df4b24f3c21a095de6e) <a id="structFRHAPI__MatchTimelineEvent_1ac18bfec7d40b3df4b24f3c21a095de6e"></a>

#### `public bool `[`Str2_IsSet`](#structFRHAPI__MatchTimelineEvent_1affd3c168be05e4eb6e06dd5923b3f40a) <a id="structFRHAPI__MatchTimelineEvent_1affd3c168be05e4eb6e06dd5923b3f40a"></a>

true if Str2_Optional has been set to a value

#### `public bool `[`Str2_IsNull`](#structFRHAPI__MatchTimelineEvent_1aca348d9fc1af6b1d8dc97d5426224aa8) <a id="structFRHAPI__MatchTimelineEvent_1aca348d9fc1af6b1d8dc97d5426224aa8"></a>

true if Str2_Optional has been explicitly set to null

#### `public FString `[`Str3_Optional`](#structFRHAPI__MatchTimelineEvent_1a3607f18239ff85a5dafdc0ec1189567c) <a id="structFRHAPI__MatchTimelineEvent_1a3607f18239ff85a5dafdc0ec1189567c"></a>

#### `public bool `[`Str3_IsSet`](#structFRHAPI__MatchTimelineEvent_1a765b6dfff71073563ec1eff0f7a8ae69) <a id="structFRHAPI__MatchTimelineEvent_1a765b6dfff71073563ec1eff0f7a8ae69"></a>

true if Str3_Optional has been set to a value

#### `public bool `[`Str3_IsNull`](#structFRHAPI__MatchTimelineEvent_1accf48304ee1ca44bd1260894f813d92a) <a id="structFRHAPI__MatchTimelineEvent_1accf48304ee1ca44bd1260894f813d92a"></a>

true if Str3_Optional has been explicitly set to null

#### `public FString `[`Str4_Optional`](#structFRHAPI__MatchTimelineEvent_1a80102a3ece41b58da9696005ffa91cb1) <a id="structFRHAPI__MatchTimelineEvent_1a80102a3ece41b58da9696005ffa91cb1"></a>

#### `public bool `[`Str4_IsSet`](#structFRHAPI__MatchTimelineEvent_1ab0c5afc68d82af522c35adce2c1197d1) <a id="structFRHAPI__MatchTimelineEvent_1ab0c5afc68d82af522c35adce2c1197d1"></a>

true if Str4_Optional has been set to a value

#### `public bool `[`Str4_IsNull`](#structFRHAPI__MatchTimelineEvent_1a88b5553801e8d469b86ba0312b4862af) <a id="structFRHAPI__MatchTimelineEvent_1a88b5553801e8d469b86ba0312b4862af"></a>

true if Str4_Optional has been explicitly set to null

#### `public FString `[`Str5_Optional`](#structFRHAPI__MatchTimelineEvent_1a8933479db70150e39898ef4abd62505d) <a id="structFRHAPI__MatchTimelineEvent_1a8933479db70150e39898ef4abd62505d"></a>

#### `public bool `[`Str5_IsSet`](#structFRHAPI__MatchTimelineEvent_1a192228a8e190640206946b0d3926ce1f) <a id="structFRHAPI__MatchTimelineEvent_1a192228a8e190640206946b0d3926ce1f"></a>

true if Str5_Optional has been set to a value

#### `public bool `[`Str5_IsNull`](#structFRHAPI__MatchTimelineEvent_1a37f22454be626cea254403674e6555d5) <a id="structFRHAPI__MatchTimelineEvent_1a37f22454be626cea254403674e6555d5"></a>

true if Str5_Optional has been explicitly set to null

#### `public FString `[`Str6_Optional`](#structFRHAPI__MatchTimelineEvent_1aae8140fa2d3471fb8a0f60cc1797f750) <a id="structFRHAPI__MatchTimelineEvent_1aae8140fa2d3471fb8a0f60cc1797f750"></a>

#### `public bool `[`Str6_IsSet`](#structFRHAPI__MatchTimelineEvent_1a7d0ef3a3cf4bd704b5faa628195eb300) <a id="structFRHAPI__MatchTimelineEvent_1a7d0ef3a3cf4bd704b5faa628195eb300"></a>

true if Str6_Optional has been set to a value

#### `public bool `[`Str6_IsNull`](#structFRHAPI__MatchTimelineEvent_1a59f9d719bef1144926edba23789be0b8) <a id="structFRHAPI__MatchTimelineEvent_1a59f9d719bef1144926edba23789be0b8"></a>

true if Str6_Optional has been explicitly set to null

#### `public FString `[`Str7_Optional`](#structFRHAPI__MatchTimelineEvent_1ab6273a201d83cb6d78ea41d266a0dbcc) <a id="structFRHAPI__MatchTimelineEvent_1ab6273a201d83cb6d78ea41d266a0dbcc"></a>

#### `public bool `[`Str7_IsSet`](#structFRHAPI__MatchTimelineEvent_1ad660858950c761e238c8aeef7b387b06) <a id="structFRHAPI__MatchTimelineEvent_1ad660858950c761e238c8aeef7b387b06"></a>

true if Str7_Optional has been set to a value

#### `public bool `[`Str7_IsNull`](#structFRHAPI__MatchTimelineEvent_1ab60f7198d2002d527871f2a5c99c05be) <a id="structFRHAPI__MatchTimelineEvent_1ab60f7198d2002d527871f2a5c99c05be"></a>

true if Str7_Optional has been explicitly set to null

#### `public FString `[`Str8_Optional`](#structFRHAPI__MatchTimelineEvent_1a1ecebea4a04664054a356711a0377717) <a id="structFRHAPI__MatchTimelineEvent_1a1ecebea4a04664054a356711a0377717"></a>

#### `public bool `[`Str8_IsSet`](#structFRHAPI__MatchTimelineEvent_1a842347ce2f4ea1a00f4c309a05b84b2f) <a id="structFRHAPI__MatchTimelineEvent_1a842347ce2f4ea1a00f4c309a05b84b2f"></a>

true if Str8_Optional has been set to a value

#### `public bool `[`Str8_IsNull`](#structFRHAPI__MatchTimelineEvent_1a863f8fb5c7b1afe92ab3ec9842051d7d) <a id="structFRHAPI__MatchTimelineEvent_1a863f8fb5c7b1afe92ab3ec9842051d7d"></a>

true if Str8_Optional has been explicitly set to null

#### `public FString `[`Str9_Optional`](#structFRHAPI__MatchTimelineEvent_1a1697b4dcb3928b9dfcbfc9964726dd12) <a id="structFRHAPI__MatchTimelineEvent_1a1697b4dcb3928b9dfcbfc9964726dd12"></a>

#### `public bool `[`Str9_IsSet`](#structFRHAPI__MatchTimelineEvent_1a7e9e84aed35565e9eaaf57942fab5300) <a id="structFRHAPI__MatchTimelineEvent_1a7e9e84aed35565e9eaaf57942fab5300"></a>

true if Str9_Optional has been set to a value

#### `public bool `[`Str9_IsNull`](#structFRHAPI__MatchTimelineEvent_1a1ae3b66a8e94c9aa93f68ce5fa0b7548) <a id="structFRHAPI__MatchTimelineEvent_1a1ae3b66a8e94c9aa93f68ce5fa0b7548"></a>

true if Str9_Optional has been explicitly set to null

#### `public FString `[`Str10_Optional`](#structFRHAPI__MatchTimelineEvent_1ab30e1b801a8c8cc07220092980d1d734) <a id="structFRHAPI__MatchTimelineEvent_1ab30e1b801a8c8cc07220092980d1d734"></a>

#### `public bool `[`Str10_IsSet`](#structFRHAPI__MatchTimelineEvent_1a394014ce5817d95bcd94d3675e3792cd) <a id="structFRHAPI__MatchTimelineEvent_1a394014ce5817d95bcd94d3675e3792cd"></a>

true if Str10_Optional has been set to a value

#### `public bool `[`Str10_IsNull`](#structFRHAPI__MatchTimelineEvent_1a1641f3f7b94a073fa1bb476542ac22bc) <a id="structFRHAPI__MatchTimelineEvent_1a1641f3f7b94a073fa1bb476542ac22bc"></a>

true if Str10_Optional has been explicitly set to null

#### `public FString `[`Str11_Optional`](#structFRHAPI__MatchTimelineEvent_1adf8bdef0a110203cf9037a82d850108b) <a id="structFRHAPI__MatchTimelineEvent_1adf8bdef0a110203cf9037a82d850108b"></a>

#### `public bool `[`Str11_IsSet`](#structFRHAPI__MatchTimelineEvent_1a48a16e95e8b9c497012b7e77e5d40699) <a id="structFRHAPI__MatchTimelineEvent_1a48a16e95e8b9c497012b7e77e5d40699"></a>

true if Str11_Optional has been set to a value

#### `public bool `[`Str11_IsNull`](#structFRHAPI__MatchTimelineEvent_1abd39aa1861a4e803683a108352ec7528) <a id="structFRHAPI__MatchTimelineEvent_1abd39aa1861a4e803683a108352ec7528"></a>

true if Str11_Optional has been explicitly set to null

#### `public FString `[`Str12_Optional`](#structFRHAPI__MatchTimelineEvent_1a8dbed5124e594301dfb0ef9ce3e0f009) <a id="structFRHAPI__MatchTimelineEvent_1a8dbed5124e594301dfb0ef9ce3e0f009"></a>

#### `public bool `[`Str12_IsSet`](#structFRHAPI__MatchTimelineEvent_1a576fd347e7e1a72263e596cfde716eaf) <a id="structFRHAPI__MatchTimelineEvent_1a576fd347e7e1a72263e596cfde716eaf"></a>

true if Str12_Optional has been set to a value

#### `public bool `[`Str12_IsNull`](#structFRHAPI__MatchTimelineEvent_1acf880552edb46a88f390e5ade4861813) <a id="structFRHAPI__MatchTimelineEvent_1acf880552edb46a88f390e5ade4861813"></a>

true if Str12_Optional has been explicitly set to null

#### `public FString `[`Str13_Optional`](#structFRHAPI__MatchTimelineEvent_1a9cf316d744514eab19f0b35a3019329d) <a id="structFRHAPI__MatchTimelineEvent_1a9cf316d744514eab19f0b35a3019329d"></a>

#### `public bool `[`Str13_IsSet`](#structFRHAPI__MatchTimelineEvent_1ad99b0b7cce7aff35cff72bddabe0d034) <a id="structFRHAPI__MatchTimelineEvent_1ad99b0b7cce7aff35cff72bddabe0d034"></a>

true if Str13_Optional has been set to a value

#### `public bool `[`Str13_IsNull`](#structFRHAPI__MatchTimelineEvent_1aa0ebd5ad3f2d62baf2c1f600208e0468) <a id="structFRHAPI__MatchTimelineEvent_1aa0ebd5ad3f2d62baf2c1f600208e0468"></a>

true if Str13_Optional has been explicitly set to null

#### `public FString `[`Str14_Optional`](#structFRHAPI__MatchTimelineEvent_1af890a1914bc3cb5681921fdcf32b3eb3) <a id="structFRHAPI__MatchTimelineEvent_1af890a1914bc3cb5681921fdcf32b3eb3"></a>

#### `public bool `[`Str14_IsSet`](#structFRHAPI__MatchTimelineEvent_1a16e3a5ac6c237322bb93a3804d1feec6) <a id="structFRHAPI__MatchTimelineEvent_1a16e3a5ac6c237322bb93a3804d1feec6"></a>

true if Str14_Optional has been set to a value

#### `public bool `[`Str14_IsNull`](#structFRHAPI__MatchTimelineEvent_1ae9c7e660e15f6225ce6f2a80e05e3b3b) <a id="structFRHAPI__MatchTimelineEvent_1ae9c7e660e15f6225ce6f2a80e05e3b3b"></a>

true if Str14_Optional has been explicitly set to null

#### `public FString `[`Str15_Optional`](#structFRHAPI__MatchTimelineEvent_1aacc7911d30d321d367ecb39de4c49de2) <a id="structFRHAPI__MatchTimelineEvent_1aacc7911d30d321d367ecb39de4c49de2"></a>

#### `public bool `[`Str15_IsSet`](#structFRHAPI__MatchTimelineEvent_1a2ed6421147afc719caa8accc0b5753b3) <a id="structFRHAPI__MatchTimelineEvent_1a2ed6421147afc719caa8accc0b5753b3"></a>

true if Str15_Optional has been set to a value

#### `public bool `[`Str15_IsNull`](#structFRHAPI__MatchTimelineEvent_1a7387aba8152ebd7c04b91baaf008bfc7) <a id="structFRHAPI__MatchTimelineEvent_1a7387aba8152ebd7c04b91baaf008bfc7"></a>

true if Str15_Optional has been explicitly set to null

#### `public FString `[`Str16_Optional`](#structFRHAPI__MatchTimelineEvent_1a65eb20664166d690a4655614e14da1e6) <a id="structFRHAPI__MatchTimelineEvent_1a65eb20664166d690a4655614e14da1e6"></a>

#### `public bool `[`Str16_IsSet`](#structFRHAPI__MatchTimelineEvent_1adfa0d5290d9ed8364cebb355843a5444) <a id="structFRHAPI__MatchTimelineEvent_1adfa0d5290d9ed8364cebb355843a5444"></a>

true if Str16_Optional has been set to a value

#### `public bool `[`Str16_IsNull`](#structFRHAPI__MatchTimelineEvent_1a82ba4bc3d40a2de9758c86e301571ec4) <a id="structFRHAPI__MatchTimelineEvent_1a82ba4bc3d40a2de9758c86e301571ec4"></a>

true if Str16_Optional has been explicitly set to null

#### `public FString `[`Str17_Optional`](#structFRHAPI__MatchTimelineEvent_1a6ba3b730f11c9b96e08d7b5aa6cec31b) <a id="structFRHAPI__MatchTimelineEvent_1a6ba3b730f11c9b96e08d7b5aa6cec31b"></a>

#### `public bool `[`Str17_IsSet`](#structFRHAPI__MatchTimelineEvent_1a670e6c3578355409d9b24f66f7ccd02a) <a id="structFRHAPI__MatchTimelineEvent_1a670e6c3578355409d9b24f66f7ccd02a"></a>

true if Str17_Optional has been set to a value

#### `public bool `[`Str17_IsNull`](#structFRHAPI__MatchTimelineEvent_1a539de569e2304b00bd10a188ab8c50eb) <a id="structFRHAPI__MatchTimelineEvent_1a539de569e2304b00bd10a188ab8c50eb"></a>

true if Str17_Optional has been explicitly set to null

#### `public FString `[`Str18_Optional`](#structFRHAPI__MatchTimelineEvent_1aef76f11b2b1713e082a4229b13d96275) <a id="structFRHAPI__MatchTimelineEvent_1aef76f11b2b1713e082a4229b13d96275"></a>

#### `public bool `[`Str18_IsSet`](#structFRHAPI__MatchTimelineEvent_1a8fa415de9295e6a79e2077399b1dbdd1) <a id="structFRHAPI__MatchTimelineEvent_1a8fa415de9295e6a79e2077399b1dbdd1"></a>

true if Str18_Optional has been set to a value

#### `public bool `[`Str18_IsNull`](#structFRHAPI__MatchTimelineEvent_1a8fa82384a69fbe42619852cb1b97fba8) <a id="structFRHAPI__MatchTimelineEvent_1a8fa82384a69fbe42619852cb1b97fba8"></a>

true if Str18_Optional has been explicitly set to null

#### `public FString `[`Str19_Optional`](#structFRHAPI__MatchTimelineEvent_1a2ebd7b332a32b3b5e3ded4a3c1bcd177) <a id="structFRHAPI__MatchTimelineEvent_1a2ebd7b332a32b3b5e3ded4a3c1bcd177"></a>

#### `public bool `[`Str19_IsSet`](#structFRHAPI__MatchTimelineEvent_1af3c800412c27917282d31073ddcb9c9a) <a id="structFRHAPI__MatchTimelineEvent_1af3c800412c27917282d31073ddcb9c9a"></a>

true if Str19_Optional has been set to a value

#### `public bool `[`Str19_IsNull`](#structFRHAPI__MatchTimelineEvent_1ae56d9a16e8946378157be643ac2e4219) <a id="structFRHAPI__MatchTimelineEvent_1ae56d9a16e8946378157be643ac2e4219"></a>

true if Str19_Optional has been explicitly set to null

#### `public FString `[`Str20_Optional`](#structFRHAPI__MatchTimelineEvent_1abacfdde4618b347c8554e45bdfb64635) <a id="structFRHAPI__MatchTimelineEvent_1abacfdde4618b347c8554e45bdfb64635"></a>

#### `public bool `[`Str20_IsSet`](#structFRHAPI__MatchTimelineEvent_1ab1b9b4602482a4610c9313b4e49e3232) <a id="structFRHAPI__MatchTimelineEvent_1ab1b9b4602482a4610c9313b4e49e3232"></a>

true if Str20_Optional has been set to a value

#### `public bool `[`Str20_IsNull`](#structFRHAPI__MatchTimelineEvent_1acc592762cbba8511f2c3c180164cae8a) <a id="structFRHAPI__MatchTimelineEvent_1acc592762cbba8511f2c3c180164cae8a"></a>

true if Str20_Optional has been explicitly set to null

#### `public FString `[`Str21_Optional`](#structFRHAPI__MatchTimelineEvent_1a2af0d4f9af4e714e39c280cab8e2fbe4) <a id="structFRHAPI__MatchTimelineEvent_1a2af0d4f9af4e714e39c280cab8e2fbe4"></a>

#### `public bool `[`Str21_IsSet`](#structFRHAPI__MatchTimelineEvent_1ab2e753681b08d2952148eefcdb3c41f3) <a id="structFRHAPI__MatchTimelineEvent_1ab2e753681b08d2952148eefcdb3c41f3"></a>

true if Str21_Optional has been set to a value

#### `public bool `[`Str21_IsNull`](#structFRHAPI__MatchTimelineEvent_1af42143c23bdcef28bb9b5b972ccf5d30) <a id="structFRHAPI__MatchTimelineEvent_1af42143c23bdcef28bb9b5b972ccf5d30"></a>

true if Str21_Optional has been explicitly set to null

#### `public FString `[`Str22_Optional`](#structFRHAPI__MatchTimelineEvent_1a9330e108b2ca176e8a85900aa1b3ae4c) <a id="structFRHAPI__MatchTimelineEvent_1a9330e108b2ca176e8a85900aa1b3ae4c"></a>

#### `public bool `[`Str22_IsSet`](#structFRHAPI__MatchTimelineEvent_1a6cbd96d80d17602c954246e9797212ce) <a id="structFRHAPI__MatchTimelineEvent_1a6cbd96d80d17602c954246e9797212ce"></a>

true if Str22_Optional has been set to a value

#### `public bool `[`Str22_IsNull`](#structFRHAPI__MatchTimelineEvent_1ae6a361417905c3789f12447eeeabbddd) <a id="structFRHAPI__MatchTimelineEvent_1ae6a361417905c3789f12447eeeabbddd"></a>

true if Str22_Optional has been explicitly set to null

#### `public FString `[`Str23_Optional`](#structFRHAPI__MatchTimelineEvent_1a680096d877749e78addd8006d50f228a) <a id="structFRHAPI__MatchTimelineEvent_1a680096d877749e78addd8006d50f228a"></a>

#### `public bool `[`Str23_IsSet`](#structFRHAPI__MatchTimelineEvent_1a17d05ef6f799f13db7944e3f07085958) <a id="structFRHAPI__MatchTimelineEvent_1a17d05ef6f799f13db7944e3f07085958"></a>

true if Str23_Optional has been set to a value

#### `public bool `[`Str23_IsNull`](#structFRHAPI__MatchTimelineEvent_1ab5306b5c647c1173395927f282721ffe) <a id="structFRHAPI__MatchTimelineEvent_1ab5306b5c647c1173395927f282721ffe"></a>

true if Str23_Optional has been explicitly set to null

#### `public FString `[`Str24_Optional`](#structFRHAPI__MatchTimelineEvent_1a0e3395a23d1b294e02ebd15946c14906) <a id="structFRHAPI__MatchTimelineEvent_1a0e3395a23d1b294e02ebd15946c14906"></a>

#### `public bool `[`Str24_IsSet`](#structFRHAPI__MatchTimelineEvent_1a0f66235d7796ff2abd1dd0e944c29c1c) <a id="structFRHAPI__MatchTimelineEvent_1a0f66235d7796ff2abd1dd0e944c29c1c"></a>

true if Str24_Optional has been set to a value

#### `public bool `[`Str24_IsNull`](#structFRHAPI__MatchTimelineEvent_1a79a2c47e127b88d68256e9279761250a) <a id="structFRHAPI__MatchTimelineEvent_1a79a2c47e127b88d68256e9279761250a"></a>

true if Str24_Optional has been explicitly set to null

#### `public FString `[`Str25_Optional`](#structFRHAPI__MatchTimelineEvent_1a328d68019e75479cce72d8e3c151b8c3) <a id="structFRHAPI__MatchTimelineEvent_1a328d68019e75479cce72d8e3c151b8c3"></a>

#### `public bool `[`Str25_IsSet`](#structFRHAPI__MatchTimelineEvent_1a0eaf1f6526524c8bc74f3b7befccd7b0) <a id="structFRHAPI__MatchTimelineEvent_1a0eaf1f6526524c8bc74f3b7befccd7b0"></a>

true if Str25_Optional has been set to a value

#### `public bool `[`Str25_IsNull`](#structFRHAPI__MatchTimelineEvent_1aac5b93a872ce52b1bfbc8637a8c67df9) <a id="structFRHAPI__MatchTimelineEvent_1aac5b93a872ce52b1bfbc8637a8c67df9"></a>

true if Str25_Optional has been explicitly set to null

#### `public FString `[`Str26_Optional`](#structFRHAPI__MatchTimelineEvent_1a4292e3fc1d6641f33b72a320c3f41be5) <a id="structFRHAPI__MatchTimelineEvent_1a4292e3fc1d6641f33b72a320c3f41be5"></a>

#### `public bool `[`Str26_IsSet`](#structFRHAPI__MatchTimelineEvent_1a7e837d0c5f3fe5d10574f6a0e0c79a9e) <a id="structFRHAPI__MatchTimelineEvent_1a7e837d0c5f3fe5d10574f6a0e0c79a9e"></a>

true if Str26_Optional has been set to a value

#### `public bool `[`Str26_IsNull`](#structFRHAPI__MatchTimelineEvent_1adc40e5bdc03448644b361785dea3b0cf) <a id="structFRHAPI__MatchTimelineEvent_1adc40e5bdc03448644b361785dea3b0cf"></a>

true if Str26_Optional has been explicitly set to null

#### `public FString `[`Str27_Optional`](#structFRHAPI__MatchTimelineEvent_1a5e9cc966553c3b9b7f2ebe2e322ab94f) <a id="structFRHAPI__MatchTimelineEvent_1a5e9cc966553c3b9b7f2ebe2e322ab94f"></a>

#### `public bool `[`Str27_IsSet`](#structFRHAPI__MatchTimelineEvent_1a7ffa69bd3a92fce20661ce728861f89a) <a id="structFRHAPI__MatchTimelineEvent_1a7ffa69bd3a92fce20661ce728861f89a"></a>

true if Str27_Optional has been set to a value

#### `public bool `[`Str27_IsNull`](#structFRHAPI__MatchTimelineEvent_1a1a160c4b26624e42657ad7332919c9e1) <a id="structFRHAPI__MatchTimelineEvent_1a1a160c4b26624e42657ad7332919c9e1"></a>

true if Str27_Optional has been explicitly set to null

#### `public FString `[`Str28_Optional`](#structFRHAPI__MatchTimelineEvent_1acc711ae10855fb142792f2d93e5c3baf) <a id="structFRHAPI__MatchTimelineEvent_1acc711ae10855fb142792f2d93e5c3baf"></a>

#### `public bool `[`Str28_IsSet`](#structFRHAPI__MatchTimelineEvent_1a8608a12a7bfcce10e3f4f0aa1f72f747) <a id="structFRHAPI__MatchTimelineEvent_1a8608a12a7bfcce10e3f4f0aa1f72f747"></a>

true if Str28_Optional has been set to a value

#### `public bool `[`Str28_IsNull`](#structFRHAPI__MatchTimelineEvent_1a146ab23780ca382d8ae88d504a810bba) <a id="structFRHAPI__MatchTimelineEvent_1a146ab23780ca382d8ae88d504a810bba"></a>

true if Str28_Optional has been explicitly set to null

#### `public FString `[`Str29_Optional`](#structFRHAPI__MatchTimelineEvent_1a56fb5260ea18631576eabeecdd94f369) <a id="structFRHAPI__MatchTimelineEvent_1a56fb5260ea18631576eabeecdd94f369"></a>

#### `public bool `[`Str29_IsSet`](#structFRHAPI__MatchTimelineEvent_1a27564fef5f0cd530b1998e04d0f2b48e) <a id="structFRHAPI__MatchTimelineEvent_1a27564fef5f0cd530b1998e04d0f2b48e"></a>

true if Str29_Optional has been set to a value

#### `public bool `[`Str29_IsNull`](#structFRHAPI__MatchTimelineEvent_1a6095ddc004cae88c228387638c490384) <a id="structFRHAPI__MatchTimelineEvent_1a6095ddc004cae88c228387638c490384"></a>

true if Str29_Optional has been explicitly set to null

#### `public FString `[`Str30_Optional`](#structFRHAPI__MatchTimelineEvent_1a4305bddeb140d6060dd768cfafd9a0a0) <a id="structFRHAPI__MatchTimelineEvent_1a4305bddeb140d6060dd768cfafd9a0a0"></a>

#### `public bool `[`Str30_IsSet`](#structFRHAPI__MatchTimelineEvent_1a4f582d80375922e3057890f5f43a6942) <a id="structFRHAPI__MatchTimelineEvent_1a4f582d80375922e3057890f5f43a6942"></a>

true if Str30_Optional has been set to a value

#### `public bool `[`Str30_IsNull`](#structFRHAPI__MatchTimelineEvent_1a8647fdf53d3ef02ccc687edeb92a863e) <a id="structFRHAPI__MatchTimelineEvent_1a8647fdf53d3ef02ccc687edeb92a863e"></a>

true if Str30_Optional has been explicitly set to null

#### `public FString `[`Str31_Optional`](#structFRHAPI__MatchTimelineEvent_1a0921f558e8464a5c8e1c2f1cbe19b66b) <a id="structFRHAPI__MatchTimelineEvent_1a0921f558e8464a5c8e1c2f1cbe19b66b"></a>

#### `public bool `[`Str31_IsSet`](#structFRHAPI__MatchTimelineEvent_1a3c3ea74bbd37ac9b734cbfa8f54af1e8) <a id="structFRHAPI__MatchTimelineEvent_1a3c3ea74bbd37ac9b734cbfa8f54af1e8"></a>

true if Str31_Optional has been set to a value

#### `public bool `[`Str31_IsNull`](#structFRHAPI__MatchTimelineEvent_1ab130ca06692b26b536926846cb9a6444) <a id="structFRHAPI__MatchTimelineEvent_1ab130ca06692b26b536926846cb9a6444"></a>

true if Str31_Optional has been explicitly set to null

#### `public FString `[`Str32_Optional`](#structFRHAPI__MatchTimelineEvent_1ab06adfd474dc207e400264e93920fb82) <a id="structFRHAPI__MatchTimelineEvent_1ab06adfd474dc207e400264e93920fb82"></a>

#### `public bool `[`Str32_IsSet`](#structFRHAPI__MatchTimelineEvent_1a4671cbe83f193432181363688c149ec3) <a id="structFRHAPI__MatchTimelineEvent_1a4671cbe83f193432181363688c149ec3"></a>

true if Str32_Optional has been set to a value

#### `public bool `[`Str32_IsNull`](#structFRHAPI__MatchTimelineEvent_1a734ebdc0c15c05d7b878c4cfc0c682e1) <a id="structFRHAPI__MatchTimelineEvent_1a734ebdc0c15c05d7b878c4cfc0c682e1"></a>

true if Str32_Optional has been explicitly set to null

#### `public float `[`Float1_Optional`](#structFRHAPI__MatchTimelineEvent_1aeb12146de27780aae5578c541bf6908c) <a id="structFRHAPI__MatchTimelineEvent_1aeb12146de27780aae5578c541bf6908c"></a>

#### `public bool `[`Float1_IsSet`](#structFRHAPI__MatchTimelineEvent_1abac3bda3672a53f70222ca179796e67a) <a id="structFRHAPI__MatchTimelineEvent_1abac3bda3672a53f70222ca179796e67a"></a>

true if Float1_Optional has been set to a value

#### `public bool `[`Float1_IsNull`](#structFRHAPI__MatchTimelineEvent_1a22993b97098c1d1a8ee3531ee43061b6) <a id="structFRHAPI__MatchTimelineEvent_1a22993b97098c1d1a8ee3531ee43061b6"></a>

true if Float1_Optional has been explicitly set to null

#### `public float `[`Float2_Optional`](#structFRHAPI__MatchTimelineEvent_1afc15dc8fb129e2b2cb2c428874c1e525) <a id="structFRHAPI__MatchTimelineEvent_1afc15dc8fb129e2b2cb2c428874c1e525"></a>

#### `public bool `[`Float2_IsSet`](#structFRHAPI__MatchTimelineEvent_1a68e3be0277b1947ed8a741dd91c6dfea) <a id="structFRHAPI__MatchTimelineEvent_1a68e3be0277b1947ed8a741dd91c6dfea"></a>

true if Float2_Optional has been set to a value

#### `public bool `[`Float2_IsNull`](#structFRHAPI__MatchTimelineEvent_1ad29b45765dc46ccd403ddd7586d874f4) <a id="structFRHAPI__MatchTimelineEvent_1ad29b45765dc46ccd403ddd7586d874f4"></a>

true if Float2_Optional has been explicitly set to null

#### `public float `[`Float3_Optional`](#structFRHAPI__MatchTimelineEvent_1a4f3f1c2e02f45b3d20e64d31832bcb24) <a id="structFRHAPI__MatchTimelineEvent_1a4f3f1c2e02f45b3d20e64d31832bcb24"></a>

#### `public bool `[`Float3_IsSet`](#structFRHAPI__MatchTimelineEvent_1a24903bfb948c93e4f037d82d74142e77) <a id="structFRHAPI__MatchTimelineEvent_1a24903bfb948c93e4f037d82d74142e77"></a>

true if Float3_Optional has been set to a value

#### `public bool `[`Float3_IsNull`](#structFRHAPI__MatchTimelineEvent_1a8d541fc74d023eb061a8fb8516f82050) <a id="structFRHAPI__MatchTimelineEvent_1a8d541fc74d023eb061a8fb8516f82050"></a>

true if Float3_Optional has been explicitly set to null

#### `public float `[`Float4_Optional`](#structFRHAPI__MatchTimelineEvent_1a6594aaf1245ff0b1feefcfe37e4c373d) <a id="structFRHAPI__MatchTimelineEvent_1a6594aaf1245ff0b1feefcfe37e4c373d"></a>

#### `public bool `[`Float4_IsSet`](#structFRHAPI__MatchTimelineEvent_1a0d8f003abfce400fd4bccc57757b8b66) <a id="structFRHAPI__MatchTimelineEvent_1a0d8f003abfce400fd4bccc57757b8b66"></a>

true if Float4_Optional has been set to a value

#### `public bool `[`Float4_IsNull`](#structFRHAPI__MatchTimelineEvent_1a12c8b77495a6addb009900124c418e8b) <a id="structFRHAPI__MatchTimelineEvent_1a12c8b77495a6addb009900124c418e8b"></a>

true if Float4_Optional has been explicitly set to null

#### `public float `[`Float5_Optional`](#structFRHAPI__MatchTimelineEvent_1a4df40cb8e48fce32da1d5411e604c8d6) <a id="structFRHAPI__MatchTimelineEvent_1a4df40cb8e48fce32da1d5411e604c8d6"></a>

#### `public bool `[`Float5_IsSet`](#structFRHAPI__MatchTimelineEvent_1a36c5cfebf0211d9c9bfd84c8ec5477dc) <a id="structFRHAPI__MatchTimelineEvent_1a36c5cfebf0211d9c9bfd84c8ec5477dc"></a>

true if Float5_Optional has been set to a value

#### `public bool `[`Float5_IsNull`](#structFRHAPI__MatchTimelineEvent_1aaaeab8c59bfb42fe570e4d6788d2bae4) <a id="structFRHAPI__MatchTimelineEvent_1aaaeab8c59bfb42fe570e4d6788d2bae4"></a>

true if Float5_Optional has been explicitly set to null

#### `public float `[`Float6_Optional`](#structFRHAPI__MatchTimelineEvent_1a0d00dacc7094d18bc9e2c1a46b80b6ad) <a id="structFRHAPI__MatchTimelineEvent_1a0d00dacc7094d18bc9e2c1a46b80b6ad"></a>

#### `public bool `[`Float6_IsSet`](#structFRHAPI__MatchTimelineEvent_1ae797fac2bd1dfbe1be535ab7ff1a3c15) <a id="structFRHAPI__MatchTimelineEvent_1ae797fac2bd1dfbe1be535ab7ff1a3c15"></a>

true if Float6_Optional has been set to a value

#### `public bool `[`Float6_IsNull`](#structFRHAPI__MatchTimelineEvent_1a0e62f04ae3df49350b450dbe0fd4ead8) <a id="structFRHAPI__MatchTimelineEvent_1a0e62f04ae3df49350b450dbe0fd4ead8"></a>

true if Float6_Optional has been explicitly set to null

#### `public float `[`Float7_Optional`](#structFRHAPI__MatchTimelineEvent_1a9d9aa27e5d33c9f717cc565c883d92b2) <a id="structFRHAPI__MatchTimelineEvent_1a9d9aa27e5d33c9f717cc565c883d92b2"></a>

#### `public bool `[`Float7_IsSet`](#structFRHAPI__MatchTimelineEvent_1a3a078025774410d360599d16368a3a82) <a id="structFRHAPI__MatchTimelineEvent_1a3a078025774410d360599d16368a3a82"></a>

true if Float7_Optional has been set to a value

#### `public bool `[`Float7_IsNull`](#structFRHAPI__MatchTimelineEvent_1a2993317081115450d564537a40a6f323) <a id="structFRHAPI__MatchTimelineEvent_1a2993317081115450d564537a40a6f323"></a>

true if Float7_Optional has been explicitly set to null

#### `public float `[`Float8_Optional`](#structFRHAPI__MatchTimelineEvent_1ac7c2895c527d84230838770a308dd19d) <a id="structFRHAPI__MatchTimelineEvent_1ac7c2895c527d84230838770a308dd19d"></a>

#### `public bool `[`Float8_IsSet`](#structFRHAPI__MatchTimelineEvent_1aee010f7d8d727c35b79cc8f162f14da1) <a id="structFRHAPI__MatchTimelineEvent_1aee010f7d8d727c35b79cc8f162f14da1"></a>

true if Float8_Optional has been set to a value

#### `public bool `[`Float8_IsNull`](#structFRHAPI__MatchTimelineEvent_1a41acadab0129598be6b39dbaaca1e5ec) <a id="structFRHAPI__MatchTimelineEvent_1a41acadab0129598be6b39dbaaca1e5ec"></a>

true if Float8_Optional has been explicitly set to null

#### `public float `[`Float9_Optional`](#structFRHAPI__MatchTimelineEvent_1a407f1b8adc4b091e11561d1ccc69b219) <a id="structFRHAPI__MatchTimelineEvent_1a407f1b8adc4b091e11561d1ccc69b219"></a>

#### `public bool `[`Float9_IsSet`](#structFRHAPI__MatchTimelineEvent_1a39c0fbd13fe87eb9a9c41f42d26155b9) <a id="structFRHAPI__MatchTimelineEvent_1a39c0fbd13fe87eb9a9c41f42d26155b9"></a>

true if Float9_Optional has been set to a value

#### `public bool `[`Float9_IsNull`](#structFRHAPI__MatchTimelineEvent_1ad92cd92626aba094348998ec68920bec) <a id="structFRHAPI__MatchTimelineEvent_1ad92cd92626aba094348998ec68920bec"></a>

true if Float9_Optional has been explicitly set to null

#### `public float `[`Float10_Optional`](#structFRHAPI__MatchTimelineEvent_1a80ce46af193e122dca3e5c0c8851ad39) <a id="structFRHAPI__MatchTimelineEvent_1a80ce46af193e122dca3e5c0c8851ad39"></a>

#### `public bool `[`Float10_IsSet`](#structFRHAPI__MatchTimelineEvent_1ac923db2a52692e99f3e2b770b8a35988) <a id="structFRHAPI__MatchTimelineEvent_1ac923db2a52692e99f3e2b770b8a35988"></a>

true if Float10_Optional has been set to a value

#### `public bool `[`Float10_IsNull`](#structFRHAPI__MatchTimelineEvent_1a276a6c17a41dd57967e88e04e5b357ba) <a id="structFRHAPI__MatchTimelineEvent_1a276a6c17a41dd57967e88e04e5b357ba"></a>

true if Float10_Optional has been explicitly set to null

#### `public float `[`Float11_Optional`](#structFRHAPI__MatchTimelineEvent_1a87c359aff6f32d3234e3fe4a1b704f99) <a id="structFRHAPI__MatchTimelineEvent_1a87c359aff6f32d3234e3fe4a1b704f99"></a>

#### `public bool `[`Float11_IsSet`](#structFRHAPI__MatchTimelineEvent_1ab5303191f46eb9edec93a539cd339a54) <a id="structFRHAPI__MatchTimelineEvent_1ab5303191f46eb9edec93a539cd339a54"></a>

true if Float11_Optional has been set to a value

#### `public bool `[`Float11_IsNull`](#structFRHAPI__MatchTimelineEvent_1a29d4d37e03da439a23748ac2ff517105) <a id="structFRHAPI__MatchTimelineEvent_1a29d4d37e03da439a23748ac2ff517105"></a>

true if Float11_Optional has been explicitly set to null

#### `public float `[`Float12_Optional`](#structFRHAPI__MatchTimelineEvent_1af770291187c258e357867cb6a19af2ab) <a id="structFRHAPI__MatchTimelineEvent_1af770291187c258e357867cb6a19af2ab"></a>

#### `public bool `[`Float12_IsSet`](#structFRHAPI__MatchTimelineEvent_1af9fc8fe12c87680d639d914b3081cd2c) <a id="structFRHAPI__MatchTimelineEvent_1af9fc8fe12c87680d639d914b3081cd2c"></a>

true if Float12_Optional has been set to a value

#### `public bool `[`Float12_IsNull`](#structFRHAPI__MatchTimelineEvent_1a0a497d61a8eedf17e0776af71581c236) <a id="structFRHAPI__MatchTimelineEvent_1a0a497d61a8eedf17e0776af71581c236"></a>

true if Float12_Optional has been explicitly set to null

#### `public float `[`Float13_Optional`](#structFRHAPI__MatchTimelineEvent_1a38075c28e76caaa039b134a8a80eebd4) <a id="structFRHAPI__MatchTimelineEvent_1a38075c28e76caaa039b134a8a80eebd4"></a>

#### `public bool `[`Float13_IsSet`](#structFRHAPI__MatchTimelineEvent_1a0eb74b0d64bae525a6095046c72930dd) <a id="structFRHAPI__MatchTimelineEvent_1a0eb74b0d64bae525a6095046c72930dd"></a>

true if Float13_Optional has been set to a value

#### `public bool `[`Float13_IsNull`](#structFRHAPI__MatchTimelineEvent_1a7a6633b95626b787a8b628405d0eeb9a) <a id="structFRHAPI__MatchTimelineEvent_1a7a6633b95626b787a8b628405d0eeb9a"></a>

true if Float13_Optional has been explicitly set to null

#### `public float `[`Float14_Optional`](#structFRHAPI__MatchTimelineEvent_1a0cf73d343d3c068219f381bc8f50503c) <a id="structFRHAPI__MatchTimelineEvent_1a0cf73d343d3c068219f381bc8f50503c"></a>

#### `public bool `[`Float14_IsSet`](#structFRHAPI__MatchTimelineEvent_1a1470ed6ee0e12470f3d0c70f2e7ee276) <a id="structFRHAPI__MatchTimelineEvent_1a1470ed6ee0e12470f3d0c70f2e7ee276"></a>

true if Float14_Optional has been set to a value

#### `public bool `[`Float14_IsNull`](#structFRHAPI__MatchTimelineEvent_1a2b4c91957fc2cc9631d2868a99b37509) <a id="structFRHAPI__MatchTimelineEvent_1a2b4c91957fc2cc9631d2868a99b37509"></a>

true if Float14_Optional has been explicitly set to null

#### `public float `[`Float15_Optional`](#structFRHAPI__MatchTimelineEvent_1adff1577572c7720ab50d9ba98d2f2a70) <a id="structFRHAPI__MatchTimelineEvent_1adff1577572c7720ab50d9ba98d2f2a70"></a>

#### `public bool `[`Float15_IsSet`](#structFRHAPI__MatchTimelineEvent_1a22b08ce875e035eedf87c87bbc864b87) <a id="structFRHAPI__MatchTimelineEvent_1a22b08ce875e035eedf87c87bbc864b87"></a>

true if Float15_Optional has been set to a value

#### `public bool `[`Float15_IsNull`](#structFRHAPI__MatchTimelineEvent_1a074e9691abc36558b57b6575c92bcec8) <a id="structFRHAPI__MatchTimelineEvent_1a074e9691abc36558b57b6575c92bcec8"></a>

true if Float15_Optional has been explicitly set to null

#### `public float `[`Float16_Optional`](#structFRHAPI__MatchTimelineEvent_1af5f320606503ba0915b46d804d218788) <a id="structFRHAPI__MatchTimelineEvent_1af5f320606503ba0915b46d804d218788"></a>

#### `public bool `[`Float16_IsSet`](#structFRHAPI__MatchTimelineEvent_1a223861db5011d1cdf78ff8ea7c3ea367) <a id="structFRHAPI__MatchTimelineEvent_1a223861db5011d1cdf78ff8ea7c3ea367"></a>

true if Float16_Optional has been set to a value

#### `public bool `[`Float16_IsNull`](#structFRHAPI__MatchTimelineEvent_1ad76d33d87d88cabe799508f366af6c97) <a id="structFRHAPI__MatchTimelineEvent_1ad76d33d87d88cabe799508f366af6c97"></a>

true if Float16_Optional has been explicitly set to null

#### `public float `[`Float17_Optional`](#structFRHAPI__MatchTimelineEvent_1a312afddbfa4966ad2885ae50826c9ffd) <a id="structFRHAPI__MatchTimelineEvent_1a312afddbfa4966ad2885ae50826c9ffd"></a>

#### `public bool `[`Float17_IsSet`](#structFRHAPI__MatchTimelineEvent_1abcad978a4485e808d19854211ef9cc5a) <a id="structFRHAPI__MatchTimelineEvent_1abcad978a4485e808d19854211ef9cc5a"></a>

true if Float17_Optional has been set to a value

#### `public bool `[`Float17_IsNull`](#structFRHAPI__MatchTimelineEvent_1af25fada749a4d1e47e293b2b1d8c3179) <a id="structFRHAPI__MatchTimelineEvent_1af25fada749a4d1e47e293b2b1d8c3179"></a>

true if Float17_Optional has been explicitly set to null

#### `public float `[`Float18_Optional`](#structFRHAPI__MatchTimelineEvent_1a17faf2a8ae2b6f36ba23c759a7619f81) <a id="structFRHAPI__MatchTimelineEvent_1a17faf2a8ae2b6f36ba23c759a7619f81"></a>

#### `public bool `[`Float18_IsSet`](#structFRHAPI__MatchTimelineEvent_1ababfb8bff665238aa5a29b6183c51485) <a id="structFRHAPI__MatchTimelineEvent_1ababfb8bff665238aa5a29b6183c51485"></a>

true if Float18_Optional has been set to a value

#### `public bool `[`Float18_IsNull`](#structFRHAPI__MatchTimelineEvent_1a076281ca07466ab56505810e45cd8820) <a id="structFRHAPI__MatchTimelineEvent_1a076281ca07466ab56505810e45cd8820"></a>

true if Float18_Optional has been explicitly set to null

#### `public float `[`Float19_Optional`](#structFRHAPI__MatchTimelineEvent_1accd23370e3f063567ee2269898168c2d) <a id="structFRHAPI__MatchTimelineEvent_1accd23370e3f063567ee2269898168c2d"></a>

#### `public bool `[`Float19_IsSet`](#structFRHAPI__MatchTimelineEvent_1a66d3551631085792ce70dfa06e7a53aa) <a id="structFRHAPI__MatchTimelineEvent_1a66d3551631085792ce70dfa06e7a53aa"></a>

true if Float19_Optional has been set to a value

#### `public bool `[`Float19_IsNull`](#structFRHAPI__MatchTimelineEvent_1ae0b059f39a3fa703eeefa1a1d5adc178) <a id="structFRHAPI__MatchTimelineEvent_1ae0b059f39a3fa703eeefa1a1d5adc178"></a>

true if Float19_Optional has been explicitly set to null

#### `public float `[`Float20_Optional`](#structFRHAPI__MatchTimelineEvent_1a715c186b6f86ce574f47940e309afbec) <a id="structFRHAPI__MatchTimelineEvent_1a715c186b6f86ce574f47940e309afbec"></a>

#### `public bool `[`Float20_IsSet`](#structFRHAPI__MatchTimelineEvent_1aa9dbe270673099cc52eb85b0c6c20965) <a id="structFRHAPI__MatchTimelineEvent_1aa9dbe270673099cc52eb85b0c6c20965"></a>

true if Float20_Optional has been set to a value

#### `public bool `[`Float20_IsNull`](#structFRHAPI__MatchTimelineEvent_1a27bd53d45d7fbbd96f7ea443a7ec9787) <a id="structFRHAPI__MatchTimelineEvent_1a27bd53d45d7fbbd96f7ea443a7ec9787"></a>

true if Float20_Optional has been explicitly set to null

#### `public float `[`Float21_Optional`](#structFRHAPI__MatchTimelineEvent_1a5533dc8dd0764fd881e123cc0afc2190) <a id="structFRHAPI__MatchTimelineEvent_1a5533dc8dd0764fd881e123cc0afc2190"></a>

#### `public bool `[`Float21_IsSet`](#structFRHAPI__MatchTimelineEvent_1ae011be54144ba62aa24312be35c87e5c) <a id="structFRHAPI__MatchTimelineEvent_1ae011be54144ba62aa24312be35c87e5c"></a>

true if Float21_Optional has been set to a value

#### `public bool `[`Float21_IsNull`](#structFRHAPI__MatchTimelineEvent_1ad7c8f784322625cc00c1288f67a64e4b) <a id="structFRHAPI__MatchTimelineEvent_1ad7c8f784322625cc00c1288f67a64e4b"></a>

true if Float21_Optional has been explicitly set to null

#### `public float `[`Float22_Optional`](#structFRHAPI__MatchTimelineEvent_1a23254a69080d201c4b405a3974241736) <a id="structFRHAPI__MatchTimelineEvent_1a23254a69080d201c4b405a3974241736"></a>

#### `public bool `[`Float22_IsSet`](#structFRHAPI__MatchTimelineEvent_1a7d9dce3c0202a038eff1eabdc6a8b91e) <a id="structFRHAPI__MatchTimelineEvent_1a7d9dce3c0202a038eff1eabdc6a8b91e"></a>

true if Float22_Optional has been set to a value

#### `public bool `[`Float22_IsNull`](#structFRHAPI__MatchTimelineEvent_1af285ebb9755f75e423f8a67e3f6dddbf) <a id="structFRHAPI__MatchTimelineEvent_1af285ebb9755f75e423f8a67e3f6dddbf"></a>

true if Float22_Optional has been explicitly set to null

#### `public float `[`Float23_Optional`](#structFRHAPI__MatchTimelineEvent_1aa05c00d207a5dc4609b6a07ff5f73b1f) <a id="structFRHAPI__MatchTimelineEvent_1aa05c00d207a5dc4609b6a07ff5f73b1f"></a>

#### `public bool `[`Float23_IsSet`](#structFRHAPI__MatchTimelineEvent_1aa33df8c595467ba1f087db4e83823d35) <a id="structFRHAPI__MatchTimelineEvent_1aa33df8c595467ba1f087db4e83823d35"></a>

true if Float23_Optional has been set to a value

#### `public bool `[`Float23_IsNull`](#structFRHAPI__MatchTimelineEvent_1ade01beeb2cfe55563f4b55a0c96e4bcd) <a id="structFRHAPI__MatchTimelineEvent_1ade01beeb2cfe55563f4b55a0c96e4bcd"></a>

true if Float23_Optional has been explicitly set to null

#### `public float `[`Float24_Optional`](#structFRHAPI__MatchTimelineEvent_1a0315b5e7f380a217679714294727480b) <a id="structFRHAPI__MatchTimelineEvent_1a0315b5e7f380a217679714294727480b"></a>

#### `public bool `[`Float24_IsSet`](#structFRHAPI__MatchTimelineEvent_1a762fda38c1a7696f7ad68a386a0ca6b1) <a id="structFRHAPI__MatchTimelineEvent_1a762fda38c1a7696f7ad68a386a0ca6b1"></a>

true if Float24_Optional has been set to a value

#### `public bool `[`Float24_IsNull`](#structFRHAPI__MatchTimelineEvent_1a55c71fd6583cb424fb5864efb9fb1e8f) <a id="structFRHAPI__MatchTimelineEvent_1a55c71fd6583cb424fb5864efb9fb1e8f"></a>

true if Float24_Optional has been explicitly set to null

#### `public float `[`Float25_Optional`](#structFRHAPI__MatchTimelineEvent_1a0d92f49362f4cbda355b291798d54057) <a id="structFRHAPI__MatchTimelineEvent_1a0d92f49362f4cbda355b291798d54057"></a>

#### `public bool `[`Float25_IsSet`](#structFRHAPI__MatchTimelineEvent_1af4883553a313cd2f75d827c103960a55) <a id="structFRHAPI__MatchTimelineEvent_1af4883553a313cd2f75d827c103960a55"></a>

true if Float25_Optional has been set to a value

#### `public bool `[`Float25_IsNull`](#structFRHAPI__MatchTimelineEvent_1a38392fea78dc8b053f295ce9461ddbe9) <a id="structFRHAPI__MatchTimelineEvent_1a38392fea78dc8b053f295ce9461ddbe9"></a>

true if Float25_Optional has been explicitly set to null

#### `public float `[`Float26_Optional`](#structFRHAPI__MatchTimelineEvent_1a01a9f617aa729921431606f7fd5a37ec) <a id="structFRHAPI__MatchTimelineEvent_1a01a9f617aa729921431606f7fd5a37ec"></a>

#### `public bool `[`Float26_IsSet`](#structFRHAPI__MatchTimelineEvent_1abea47c5582b9389f428cbf467139a689) <a id="structFRHAPI__MatchTimelineEvent_1abea47c5582b9389f428cbf467139a689"></a>

true if Float26_Optional has been set to a value

#### `public bool `[`Float26_IsNull`](#structFRHAPI__MatchTimelineEvent_1afe6fdea48a7e9dcf64113be4d810d93f) <a id="structFRHAPI__MatchTimelineEvent_1afe6fdea48a7e9dcf64113be4d810d93f"></a>

true if Float26_Optional has been explicitly set to null

#### `public float `[`Float27_Optional`](#structFRHAPI__MatchTimelineEvent_1a1eddf413b1cb96fea33b12d5accc09cb) <a id="structFRHAPI__MatchTimelineEvent_1a1eddf413b1cb96fea33b12d5accc09cb"></a>

#### `public bool `[`Float27_IsSet`](#structFRHAPI__MatchTimelineEvent_1a11bf55045f8197a244a5ef4442f466a6) <a id="structFRHAPI__MatchTimelineEvent_1a11bf55045f8197a244a5ef4442f466a6"></a>

true if Float27_Optional has been set to a value

#### `public bool `[`Float27_IsNull`](#structFRHAPI__MatchTimelineEvent_1ade70f75ffaa62c47cd57a9303ee741fe) <a id="structFRHAPI__MatchTimelineEvent_1ade70f75ffaa62c47cd57a9303ee741fe"></a>

true if Float27_Optional has been explicitly set to null

#### `public float `[`Float28_Optional`](#structFRHAPI__MatchTimelineEvent_1a2586596bc4bb3dfa3b7403a6755ebbaa) <a id="structFRHAPI__MatchTimelineEvent_1a2586596bc4bb3dfa3b7403a6755ebbaa"></a>

#### `public bool `[`Float28_IsSet`](#structFRHAPI__MatchTimelineEvent_1a4d880bb36066101c2b20938efe579d92) <a id="structFRHAPI__MatchTimelineEvent_1a4d880bb36066101c2b20938efe579d92"></a>

true if Float28_Optional has been set to a value

#### `public bool `[`Float28_IsNull`](#structFRHAPI__MatchTimelineEvent_1a2ff6045b9c83b02e9f54f564edee5bb7) <a id="structFRHAPI__MatchTimelineEvent_1a2ff6045b9c83b02e9f54f564edee5bb7"></a>

true if Float28_Optional has been explicitly set to null

#### `public float `[`Float29_Optional`](#structFRHAPI__MatchTimelineEvent_1a5bf0c7f0ea86ca37daa39ddaf5228e59) <a id="structFRHAPI__MatchTimelineEvent_1a5bf0c7f0ea86ca37daa39ddaf5228e59"></a>

#### `public bool `[`Float29_IsSet`](#structFRHAPI__MatchTimelineEvent_1a92473216b95fedbb0bbb608ab30036e7) <a id="structFRHAPI__MatchTimelineEvent_1a92473216b95fedbb0bbb608ab30036e7"></a>

true if Float29_Optional has been set to a value

#### `public bool `[`Float29_IsNull`](#structFRHAPI__MatchTimelineEvent_1ac2257be502f870fb20d0462a760aeda4) <a id="structFRHAPI__MatchTimelineEvent_1ac2257be502f870fb20d0462a760aeda4"></a>

true if Float29_Optional has been explicitly set to null

#### `public float `[`Float30_Optional`](#structFRHAPI__MatchTimelineEvent_1ac97af44ce92fc233d6933e6bc1b66058) <a id="structFRHAPI__MatchTimelineEvent_1ac97af44ce92fc233d6933e6bc1b66058"></a>

#### `public bool `[`Float30_IsSet`](#structFRHAPI__MatchTimelineEvent_1afc94be79df35fe4e44e956fd4da94d90) <a id="structFRHAPI__MatchTimelineEvent_1afc94be79df35fe4e44e956fd4da94d90"></a>

true if Float30_Optional has been set to a value

#### `public bool `[`Float30_IsNull`](#structFRHAPI__MatchTimelineEvent_1aefc73b3e34694c854e7ce1687a049b87) <a id="structFRHAPI__MatchTimelineEvent_1aefc73b3e34694c854e7ce1687a049b87"></a>

true if Float30_Optional has been explicitly set to null

#### `public float `[`Float31_Optional`](#structFRHAPI__MatchTimelineEvent_1a056cac1a55ae6c0f77a501a7b07ee026) <a id="structFRHAPI__MatchTimelineEvent_1a056cac1a55ae6c0f77a501a7b07ee026"></a>

#### `public bool `[`Float31_IsSet`](#structFRHAPI__MatchTimelineEvent_1a753e4225bdc40171e5678103010079d1) <a id="structFRHAPI__MatchTimelineEvent_1a753e4225bdc40171e5678103010079d1"></a>

true if Float31_Optional has been set to a value

#### `public bool `[`Float31_IsNull`](#structFRHAPI__MatchTimelineEvent_1aefd64cc73b72bd8e5de22ecf06b84f25) <a id="structFRHAPI__MatchTimelineEvent_1aefd64cc73b72bd8e5de22ecf06b84f25"></a>

true if Float31_Optional has been explicitly set to null

#### `public float `[`Float32_Optional`](#structFRHAPI__MatchTimelineEvent_1a1028fdef7b0bd5d8c841897967dcae70) <a id="structFRHAPI__MatchTimelineEvent_1a1028fdef7b0bd5d8c841897967dcae70"></a>

#### `public bool `[`Float32_IsSet`](#structFRHAPI__MatchTimelineEvent_1ac2af8d3502ca3af32d62cf35b1da7524) <a id="structFRHAPI__MatchTimelineEvent_1ac2af8d3502ca3af32d62cf35b1da7524"></a>

true if Float32_Optional has been set to a value

#### `public bool `[`Float32_IsNull`](#structFRHAPI__MatchTimelineEvent_1aee25bf2ad3a7f96947b62012d177472b) <a id="structFRHAPI__MatchTimelineEvent_1aee25bf2ad3a7f96947b62012d177472b"></a>

true if Float32_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchTimelineEvent_1a626b4165b789eba6a4de25dc877917bd)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchTimelineEvent_1a626b4165b789eba6a4de25dc877917bd"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchTimelineEvent_1a2574557e325d5693cb48bbf2cb7c188b)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchTimelineEvent_1a2574557e325d5693cb48bbf2cb7c188b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetCreatedInto`](#structFRHAPI__MatchTimelineEvent_1a0f41da06cd6d611d4c4081d99340ba89)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0f41da06cd6d611d4c4081d99340ba89"></a>

Gets the value of CreatedInto_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetCreatedInto`](#structFRHAPI__MatchTimelineEvent_1a5439f1ff69a23d9e99a64179cfe484ae)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5439f1ff69a23d9e99a64179cfe484ae"></a>

Gets the value of CreatedInto_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetCreatedInto`](#structFRHAPI__MatchTimelineEvent_1a2a575ed63928863036cc4162ffa5bbab)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a2a575ed63928863036cc4162ffa5bbab"></a>

Gets the value of CreatedInto_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCreatedInto`](#structFRHAPI__MatchTimelineEvent_1ab6cfe139588b4377b1a0c386b1e4a846)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ab6cfe139588b4377b1a0c386b1e4a846"></a>

Fills OutValue with the value of CreatedInto_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetCreatedIntoOrNull`](#structFRHAPI__MatchTimelineEvent_1aa9eedb1e80babf3db4385acd3dba5916)`()` <a id="structFRHAPI__MatchTimelineEvent_1aa9eedb1e80babf3db4385acd3dba5916"></a>

Returns a pointer to CreatedInto_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetCreatedIntoOrNull`](#structFRHAPI__MatchTimelineEvent_1a7aebc952f5da4f47b5071f3e514d627a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7aebc952f5da4f47b5071f3e514d627a"></a>

Returns a pointer to CreatedInto_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCreatedInto`](#structFRHAPI__MatchTimelineEvent_1a8273634edaef46f39aa818854326d193)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a8273634edaef46f39aa818854326d193"></a>

Sets the value of CreatedInto_Optional and also sets CreatedInto_IsSet to true.

#### `public inline void `[`SetCreatedInto`](#structFRHAPI__MatchTimelineEvent_1acdd403e04365314a9353c6bd1dea27a8)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1acdd403e04365314a9353c6bd1dea27a8"></a>

Sets the value of CreatedInto_Optional and also sets CreatedInto_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedInto`](#structFRHAPI__MatchTimelineEvent_1aca2f1ff2c72f6c09a52df0ccc9862fa7)`()` <a id="structFRHAPI__MatchTimelineEvent_1aca2f1ff2c72f6c09a52df0ccc9862fa7"></a>

Clears the value of CreatedInto_Optional and sets CreatedInto_IsSet to false.

#### `public inline bool `[`IsCreatedIntoSet`](#structFRHAPI__MatchTimelineEvent_1a356a11a9013c5d7bde44e59daeb4f36b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a356a11a9013c5d7bde44e59daeb4f36b"></a>

Checks whether CreatedInto_Optional has been set.

#### `public inline bool `[`IsCreatedIntoDefaultValue`](#structFRHAPI__MatchTimelineEvent_1a1bb2a44fee9301a978dd20f788cd0b01)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1bb2a44fee9301a978dd20f788cd0b01"></a>

Returns true if CreatedInto_Optional is set and matches the default value.

#### `public inline void `[`SetCreatedIntoToDefault`](#structFRHAPI__MatchTimelineEvent_1a11360e1648d7a370b708d44f0a2ef0df)`()` <a id="structFRHAPI__MatchTimelineEvent_1a11360e1648d7a370b708d44f0a2ef0df"></a>

Sets the value of CreatedInto_Optional to its default and also sets CreatedInto_IsSet to true.

#### `public inline void `[`SetCreatedIntoToNull`](#structFRHAPI__MatchTimelineEvent_1a3daea9bd774e43638343af5ba9034a1b)`()` <a id="structFRHAPI__MatchTimelineEvent_1a3daea9bd774e43638343af5ba9034a1b"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCreatedIntoNull`](#structFRHAPI__MatchTimelineEvent_1a46271b5ce70ee6fb90f048b22e2a850e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a46271b5ce70ee6fb90f048b22e2a850e"></a>

Checks whether CreatedInto_Optional is set to null.

#### `public inline FDateTime & `[`GetCreatedDt`](#structFRHAPI__MatchTimelineEvent_1a23b995f0d28a17c306b5353f3a947690)`()` <a id="structFRHAPI__MatchTimelineEvent_1a23b995f0d28a17c306b5353f3a947690"></a>

Gets the value of CreatedDt_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetCreatedDt`](#structFRHAPI__MatchTimelineEvent_1acd3c8aea1a156fa7b6ba88c0da1e59db)`() const` <a id="structFRHAPI__MatchTimelineEvent_1acd3c8aea1a156fa7b6ba88c0da1e59db"></a>

Gets the value of CreatedDt_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetCreatedDt`](#structFRHAPI__MatchTimelineEvent_1af979d0d5fa19353a1f023fcfe18e0cee)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1af979d0d5fa19353a1f023fcfe18e0cee"></a>

Gets the value of CreatedDt_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCreatedDt`](#structFRHAPI__MatchTimelineEvent_1ae032a336df039b59b47f17c0451e111d)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ae032a336df039b59b47f17c0451e111d"></a>

Fills OutValue with the value of CreatedDt_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetCreatedDtOrNull`](#structFRHAPI__MatchTimelineEvent_1ac99ffec165cf7435a5a30e350afba61f)`()` <a id="structFRHAPI__MatchTimelineEvent_1ac99ffec165cf7435a5a30e350afba61f"></a>

Returns a pointer to CreatedDt_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetCreatedDtOrNull`](#structFRHAPI__MatchTimelineEvent_1a759660877412027ff173c887e312ca1c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a759660877412027ff173c887e312ca1c"></a>

Returns a pointer to CreatedDt_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCreatedDt`](#structFRHAPI__MatchTimelineEvent_1aab2fe687ccd656f3ecb045f567466f6b)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aab2fe687ccd656f3ecb045f567466f6b"></a>

Sets the value of CreatedDt_Optional and also sets CreatedDt_IsSet to true.

#### `public inline void `[`SetCreatedDt`](#structFRHAPI__MatchTimelineEvent_1af71971cc6c677b2a67cf50fbe5fa327a)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1af71971cc6c677b2a67cf50fbe5fa327a"></a>

Sets the value of CreatedDt_Optional and also sets CreatedDt_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedDt`](#structFRHAPI__MatchTimelineEvent_1add6500bcf5937146815a505858241b24)`()` <a id="structFRHAPI__MatchTimelineEvent_1add6500bcf5937146815a505858241b24"></a>

Clears the value of CreatedDt_Optional and sets CreatedDt_IsSet to false.

#### `public inline bool `[`IsCreatedDtSet`](#structFRHAPI__MatchTimelineEvent_1afec6825811d6b641d2e026ec76b352aa)`() const` <a id="structFRHAPI__MatchTimelineEvent_1afec6825811d6b641d2e026ec76b352aa"></a>

Checks whether CreatedDt_Optional has been set.

#### `public inline void `[`SetCreatedDtToNull`](#structFRHAPI__MatchTimelineEvent_1a9fbf35c331a116562e7e862c0ce85387)`()` <a id="structFRHAPI__MatchTimelineEvent_1a9fbf35c331a116562e7e862c0ce85387"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCreatedDtNull`](#structFRHAPI__MatchTimelineEvent_1ae979d673af6845bfa91dea78e20a1d1e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ae979d673af6845bfa91dea78e20a1d1e"></a>

Checks whether CreatedDt_Optional is set to null.

#### `public inline FString & `[`GetType`](#structFRHAPI__MatchTimelineEvent_1afb27cd58c4fd4713195077d177820794)`()` <a id="structFRHAPI__MatchTimelineEvent_1afb27cd58c4fd4713195077d177820794"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchTimelineEvent_1a6d09b53db57fc033234fef9b83f6eb61)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a6d09b53db57fc033234fef9b83f6eb61"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchTimelineEvent_1af6eafe8e65c5b2ea59bef9c410bd9c4c)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1af6eafe8e65c5b2ea59bef9c410bd9c4c"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType`](#structFRHAPI__MatchTimelineEvent_1a73120a724e599f87e1dfe11e4ebdfc0d)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a73120a724e599f87e1dfe11e4ebdfc0d"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchTimelineEvent_1a9803935351702f7aef128b7daaa578cb)`()` <a id="structFRHAPI__MatchTimelineEvent_1a9803935351702f7aef128b7daaa578cb"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchTimelineEvent_1aa679cb0ca3550eb04dc63b1a6dc8675c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa679cb0ca3550eb04dc63b1a6dc8675c"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType`](#structFRHAPI__MatchTimelineEvent_1a1df07d16fcc1c4646aa03e5fa8b06bc7)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a1df07d16fcc1c4646aa03e5fa8b06bc7"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline void `[`SetType`](#structFRHAPI__MatchTimelineEvent_1a7da01ba6280a272b3d65ef06611251e6)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a7da01ba6280a272b3d65ef06611251e6"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__MatchTimelineEvent_1ad0699927de601eb12d90312d40c72bef)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad0699927de601eb12d90312d40c72bef"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline bool `[`IsTypeSet`](#structFRHAPI__MatchTimelineEvent_1ad45db0412c0e9d34efd9acd43d815095)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ad45db0412c0e9d34efd9acd43d815095"></a>

Checks whether Type_Optional has been set.

#### `public inline void `[`SetTypeToNull`](#structFRHAPI__MatchTimelineEvent_1ad136203516bfa77982abdd7ec022c900)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad136203516bfa77982abdd7ec022c900"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTypeNull`](#structFRHAPI__MatchTimelineEvent_1ab3146d1f8b6c291153a8543b53921670)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab3146d1f8b6c291153a8543b53921670"></a>

Checks whether Type_Optional is set to null.

#### `public inline FString & `[`GetType2`](#structFRHAPI__MatchTimelineEvent_1ac17839e63a634c2e72cee406dec56c72)`()` <a id="structFRHAPI__MatchTimelineEvent_1ac17839e63a634c2e72cee406dec56c72"></a>

Gets the value of Type2_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType2`](#structFRHAPI__MatchTimelineEvent_1a99491276c1450e495c07fae3c8c86fe2)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a99491276c1450e495c07fae3c8c86fe2"></a>

Gets the value of Type2_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType2`](#structFRHAPI__MatchTimelineEvent_1aa26546fbbd71e84256d8de9d901f3197)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aa26546fbbd71e84256d8de9d901f3197"></a>

Gets the value of Type2_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType2`](#structFRHAPI__MatchTimelineEvent_1a5d48d3fc66752262988ae447372d98ca)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a5d48d3fc66752262988ae447372d98ca"></a>

Fills OutValue with the value of Type2_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetType2OrNull`](#structFRHAPI__MatchTimelineEvent_1a61e3e586e943066e3df5128746818c03)`()` <a id="structFRHAPI__MatchTimelineEvent_1a61e3e586e943066e3df5128746818c03"></a>

Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetType2OrNull`](#structFRHAPI__MatchTimelineEvent_1a635523a34e28cdf9a9c4830b259da790)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a635523a34e28cdf9a9c4830b259da790"></a>

Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType2`](#structFRHAPI__MatchTimelineEvent_1a0548da06dfae837f7a87abfec9a16b49)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a0548da06dfae837f7a87abfec9a16b49"></a>

Sets the value of Type2_Optional and also sets Type2_IsSet to true.

#### `public inline void `[`SetType2`](#structFRHAPI__MatchTimelineEvent_1a8c326c309e94e229420d325418281106)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a8c326c309e94e229420d325418281106"></a>

Sets the value of Type2_Optional and also sets Type2_IsSet to true using move semantics.

#### `public inline void `[`ClearType2`](#structFRHAPI__MatchTimelineEvent_1a69e249319219979f9f163851be7dc76a)`()` <a id="structFRHAPI__MatchTimelineEvent_1a69e249319219979f9f163851be7dc76a"></a>

Clears the value of Type2_Optional and sets Type2_IsSet to false.

#### `public inline bool `[`IsType2Set`](#structFRHAPI__MatchTimelineEvent_1af8662cdc087d8201e9fa600efbc46ff4)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af8662cdc087d8201e9fa600efbc46ff4"></a>

Checks whether Type2_Optional has been set.

#### `public inline void `[`SetType2ToNull`](#structFRHAPI__MatchTimelineEvent_1a0eed7f8b0a1d04fdf9cee732e5da59ae)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0eed7f8b0a1d04fdf9cee732e5da59ae"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsType2Null`](#structFRHAPI__MatchTimelineEvent_1ad69874668039f670e736edb7b5e9c9a8)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ad69874668039f670e736edb7b5e9c9a8"></a>

Checks whether Type2_Optional is set to null.

#### `public inline FString & `[`GetType3`](#structFRHAPI__MatchTimelineEvent_1abd464e183ac961456521076916b4e50b)`()` <a id="structFRHAPI__MatchTimelineEvent_1abd464e183ac961456521076916b4e50b"></a>

Gets the value of Type3_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType3`](#structFRHAPI__MatchTimelineEvent_1a96b94af9ab71830099ada623b0b76dde)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a96b94af9ab71830099ada623b0b76dde"></a>

Gets the value of Type3_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType3`](#structFRHAPI__MatchTimelineEvent_1a1db8d0fa86cb399b91c6082309fca0ac)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a1db8d0fa86cb399b91c6082309fca0ac"></a>

Gets the value of Type3_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType3`](#structFRHAPI__MatchTimelineEvent_1acad0070c79d51da2135fde2fdfd56475)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1acad0070c79d51da2135fde2fdfd56475"></a>

Fills OutValue with the value of Type3_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetType3OrNull`](#structFRHAPI__MatchTimelineEvent_1a842bb38ae805cf43a23d73460942e796)`()` <a id="structFRHAPI__MatchTimelineEvent_1a842bb38ae805cf43a23d73460942e796"></a>

Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetType3OrNull`](#structFRHAPI__MatchTimelineEvent_1a970a4139f6062608951cf9a8819ee671)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a970a4139f6062608951cf9a8819ee671"></a>

Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType3`](#structFRHAPI__MatchTimelineEvent_1a42292444cab07597b94942ee4967ede3)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a42292444cab07597b94942ee4967ede3"></a>

Sets the value of Type3_Optional and also sets Type3_IsSet to true.

#### `public inline void `[`SetType3`](#structFRHAPI__MatchTimelineEvent_1a047bf6ba782927c925ba276b309ae618)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a047bf6ba782927c925ba276b309ae618"></a>

Sets the value of Type3_Optional and also sets Type3_IsSet to true using move semantics.

#### `public inline void `[`ClearType3`](#structFRHAPI__MatchTimelineEvent_1a259c1d79a7d01a96ab949abc8240d15a)`()` <a id="structFRHAPI__MatchTimelineEvent_1a259c1d79a7d01a96ab949abc8240d15a"></a>

Clears the value of Type3_Optional and sets Type3_IsSet to false.

#### `public inline bool `[`IsType3Set`](#structFRHAPI__MatchTimelineEvent_1af3e310600154677023bf26eefab55a91)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af3e310600154677023bf26eefab55a91"></a>

Checks whether Type3_Optional has been set.

#### `public inline void `[`SetType3ToNull`](#structFRHAPI__MatchTimelineEvent_1a26673cf7e83bf34593f7f8da6a7c97e6)`()` <a id="structFRHAPI__MatchTimelineEvent_1a26673cf7e83bf34593f7f8da6a7c97e6"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsType3Null`](#structFRHAPI__MatchTimelineEvent_1af19627d9b23a511d9fb8d1d06191f6b8)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af19627d9b23a511d9fb8d1d06191f6b8"></a>

Checks whether Type3_Optional is set to null.

#### `public inline FString & `[`GetType4`](#structFRHAPI__MatchTimelineEvent_1a8460f4afece5c5632f26a3645cf8469c)`()` <a id="structFRHAPI__MatchTimelineEvent_1a8460f4afece5c5632f26a3645cf8469c"></a>

Gets the value of Type4_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType4`](#structFRHAPI__MatchTimelineEvent_1aaa7d6bef119a8113411854a326ee7c1e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aaa7d6bef119a8113411854a326ee7c1e"></a>

Gets the value of Type4_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType4`](#structFRHAPI__MatchTimelineEvent_1a82762ab955ad0ca3aa84467f603dc8a3)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a82762ab955ad0ca3aa84467f603dc8a3"></a>

Gets the value of Type4_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType4`](#structFRHAPI__MatchTimelineEvent_1a5a5ff220cb74b307d6bd6bbf3e50c831)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a5a5ff220cb74b307d6bd6bbf3e50c831"></a>

Fills OutValue with the value of Type4_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetType4OrNull`](#structFRHAPI__MatchTimelineEvent_1a075212d835528253331b6f8b6f530025)`()` <a id="structFRHAPI__MatchTimelineEvent_1a075212d835528253331b6f8b6f530025"></a>

Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetType4OrNull`](#structFRHAPI__MatchTimelineEvent_1a3b4f4c03a1ecf78df1b48ba4c4e10d1d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a3b4f4c03a1ecf78df1b48ba4c4e10d1d"></a>

Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType4`](#structFRHAPI__MatchTimelineEvent_1a0d39eb1819a9445f445e46cf092d67b8)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a0d39eb1819a9445f445e46cf092d67b8"></a>

Sets the value of Type4_Optional and also sets Type4_IsSet to true.

#### `public inline void `[`SetType4`](#structFRHAPI__MatchTimelineEvent_1a92e91ff4e525757683dda5d6a8b43f58)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a92e91ff4e525757683dda5d6a8b43f58"></a>

Sets the value of Type4_Optional and also sets Type4_IsSet to true using move semantics.

#### `public inline void `[`ClearType4`](#structFRHAPI__MatchTimelineEvent_1ab82236cdc24e1a1a022a0cbcf081bfc1)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab82236cdc24e1a1a022a0cbcf081bfc1"></a>

Clears the value of Type4_Optional and sets Type4_IsSet to false.

#### `public inline bool `[`IsType4Set`](#structFRHAPI__MatchTimelineEvent_1adfb86e8e462ad79314655c25c46b20c0)`() const` <a id="structFRHAPI__MatchTimelineEvent_1adfb86e8e462ad79314655c25c46b20c0"></a>

Checks whether Type4_Optional has been set.

#### `public inline void `[`SetType4ToNull`](#structFRHAPI__MatchTimelineEvent_1a48a864a3e2acafa80804ff5648e9328e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a48a864a3e2acafa80804ff5648e9328e"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsType4Null`](#structFRHAPI__MatchTimelineEvent_1a30eae85ebfd3ba54950b3d22b7dd83e4)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a30eae85ebfd3ba54950b3d22b7dd83e4"></a>

Checks whether Type4_Optional is set to null.

#### `public inline float & `[`GetLocX`](#structFRHAPI__MatchTimelineEvent_1a0ab3e0153945f2a389572b00aa1caf48)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0ab3e0153945f2a389572b00aa1caf48"></a>

Gets the value of LocX_Optional, regardless of it having been set.

#### `public inline const float & `[`GetLocX`](#structFRHAPI__MatchTimelineEvent_1ac6762d15586bbe25540e0f9e32236a96)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac6762d15586bbe25540e0f9e32236a96"></a>

Gets the value of LocX_Optional, regardless of it having been set.

#### `public inline const float & `[`GetLocX`](#structFRHAPI__MatchTimelineEvent_1a7d5534e7cc8586ff18ca4c8430f18c89)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a7d5534e7cc8586ff18ca4c8430f18c89"></a>

Gets the value of LocX_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLocX`](#structFRHAPI__MatchTimelineEvent_1a6d0a226f9e8ed7d14203adf56cd1e33a)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a6d0a226f9e8ed7d14203adf56cd1e33a"></a>

Fills OutValue with the value of LocX_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetLocXOrNull`](#structFRHAPI__MatchTimelineEvent_1a369a1277c26911034f206bbbb6270c4e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a369a1277c26911034f206bbbb6270c4e"></a>

Returns a pointer to LocX_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetLocXOrNull`](#structFRHAPI__MatchTimelineEvent_1a0c1bf422a07b18fa9007f199a8e24dcd)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0c1bf422a07b18fa9007f199a8e24dcd"></a>

Returns a pointer to LocX_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLocX`](#structFRHAPI__MatchTimelineEvent_1a5da8527f1f973a454fa10651bd8f5c7c)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a5da8527f1f973a454fa10651bd8f5c7c"></a>

Sets the value of LocX_Optional and also sets LocX_IsSet to true.

#### `public inline void `[`SetLocX`](#structFRHAPI__MatchTimelineEvent_1a1a5f00ee0d8abdd0c6085c90dcce3654)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a1a5f00ee0d8abdd0c6085c90dcce3654"></a>

Sets the value of LocX_Optional and also sets LocX_IsSet to true using move semantics.

#### `public inline void `[`ClearLocX`](#structFRHAPI__MatchTimelineEvent_1aa2d5cfd4bed1ecac5ae1d56d95622415)`()` <a id="structFRHAPI__MatchTimelineEvent_1aa2d5cfd4bed1ecac5ae1d56d95622415"></a>

Clears the value of LocX_Optional and sets LocX_IsSet to false.

#### `public inline bool `[`IsLocXSet`](#structFRHAPI__MatchTimelineEvent_1a7e2e4cd8978aef53362c302934abffca)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7e2e4cd8978aef53362c302934abffca"></a>

Checks whether LocX_Optional has been set.

#### `public inline void `[`SetLocXToNull`](#structFRHAPI__MatchTimelineEvent_1a2d539a9fb4f427df5ed19ccb22cf83eb)`()` <a id="structFRHAPI__MatchTimelineEvent_1a2d539a9fb4f427df5ed19ccb22cf83eb"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsLocXNull`](#structFRHAPI__MatchTimelineEvent_1a0f09b51805855e26682680f40978c920)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0f09b51805855e26682680f40978c920"></a>

Checks whether LocX_Optional is set to null.

#### `public inline float & `[`GetLocY`](#structFRHAPI__MatchTimelineEvent_1ae34c2b753fd8b982a2fc1f31ca4771c6)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae34c2b753fd8b982a2fc1f31ca4771c6"></a>

Gets the value of LocY_Optional, regardless of it having been set.

#### `public inline const float & `[`GetLocY`](#structFRHAPI__MatchTimelineEvent_1a18f7f353d1e4669bf2933739ca01ec3c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a18f7f353d1e4669bf2933739ca01ec3c"></a>

Gets the value of LocY_Optional, regardless of it having been set.

#### `public inline const float & `[`GetLocY`](#structFRHAPI__MatchTimelineEvent_1acabcc1fae34e0e129bbd037844b7cc1b)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1acabcc1fae34e0e129bbd037844b7cc1b"></a>

Gets the value of LocY_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLocY`](#structFRHAPI__MatchTimelineEvent_1a6c28181df66bb0078915916bb20579f9)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a6c28181df66bb0078915916bb20579f9"></a>

Fills OutValue with the value of LocY_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetLocYOrNull`](#structFRHAPI__MatchTimelineEvent_1a9a61d45769e3c4558d19440cca72fe94)`()` <a id="structFRHAPI__MatchTimelineEvent_1a9a61d45769e3c4558d19440cca72fe94"></a>

Returns a pointer to LocY_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetLocYOrNull`](#structFRHAPI__MatchTimelineEvent_1aee1a22b979d8c4071fef208c0a0f753a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aee1a22b979d8c4071fef208c0a0f753a"></a>

Returns a pointer to LocY_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLocY`](#structFRHAPI__MatchTimelineEvent_1accafc79cfab8c9453c2b9074e82fc9d4)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1accafc79cfab8c9453c2b9074e82fc9d4"></a>

Sets the value of LocY_Optional and also sets LocY_IsSet to true.

#### `public inline void `[`SetLocY`](#structFRHAPI__MatchTimelineEvent_1a0699d2564d2e78268009dabfa4814b77)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a0699d2564d2e78268009dabfa4814b77"></a>

Sets the value of LocY_Optional and also sets LocY_IsSet to true using move semantics.

#### `public inline void `[`ClearLocY`](#structFRHAPI__MatchTimelineEvent_1acd52d7c8274991d0ecb7523ace7473f5)`()` <a id="structFRHAPI__MatchTimelineEvent_1acd52d7c8274991d0ecb7523ace7473f5"></a>

Clears the value of LocY_Optional and sets LocY_IsSet to false.

#### `public inline bool `[`IsLocYSet`](#structFRHAPI__MatchTimelineEvent_1a5509eba7dc228f4eb6e1c73c982ff290)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5509eba7dc228f4eb6e1c73c982ff290"></a>

Checks whether LocY_Optional has been set.

#### `public inline void `[`SetLocYToNull`](#structFRHAPI__MatchTimelineEvent_1afc62fcb1c83aa756523201aba5650d02)`()` <a id="structFRHAPI__MatchTimelineEvent_1afc62fcb1c83aa756523201aba5650d02"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsLocYNull`](#structFRHAPI__MatchTimelineEvent_1aa5739ce05ae6e2e5c64c53e7e51fa5cf)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa5739ce05ae6e2e5c64c53e7e51fa5cf"></a>

Checks whether LocY_Optional is set to null.

#### `public inline float & `[`GetLocZ`](#structFRHAPI__MatchTimelineEvent_1af5e31fd2194f854cfa2f91ce3ca723c8)`()` <a id="structFRHAPI__MatchTimelineEvent_1af5e31fd2194f854cfa2f91ce3ca723c8"></a>

Gets the value of LocZ_Optional, regardless of it having been set.

#### `public inline const float & `[`GetLocZ`](#structFRHAPI__MatchTimelineEvent_1ad75d258afda757e8a08f664a2ac4d9eb)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ad75d258afda757e8a08f664a2ac4d9eb"></a>

Gets the value of LocZ_Optional, regardless of it having been set.

#### `public inline const float & `[`GetLocZ`](#structFRHAPI__MatchTimelineEvent_1a8332fab224372c75dadd5b9d4aadcf20)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a8332fab224372c75dadd5b9d4aadcf20"></a>

Gets the value of LocZ_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLocZ`](#structFRHAPI__MatchTimelineEvent_1a23eef5f0de98eaaed6a76c43223244a5)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a23eef5f0de98eaaed6a76c43223244a5"></a>

Fills OutValue with the value of LocZ_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetLocZOrNull`](#structFRHAPI__MatchTimelineEvent_1ad56a7245b9d5c7a645bbacc2f984a5ac)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad56a7245b9d5c7a645bbacc2f984a5ac"></a>

Returns a pointer to LocZ_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetLocZOrNull`](#structFRHAPI__MatchTimelineEvent_1a14f204d9f820d1d2db38f5a3d51cdfdd)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a14f204d9f820d1d2db38f5a3d51cdfdd"></a>

Returns a pointer to LocZ_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLocZ`](#structFRHAPI__MatchTimelineEvent_1aada1c0b3f7f8d8bee8ae025cfbf233ab)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aada1c0b3f7f8d8bee8ae025cfbf233ab"></a>

Sets the value of LocZ_Optional and also sets LocZ_IsSet to true.

#### `public inline void `[`SetLocZ`](#structFRHAPI__MatchTimelineEvent_1a5e5d6f05f4daff32f3a13a24ba347547)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a5e5d6f05f4daff32f3a13a24ba347547"></a>

Sets the value of LocZ_Optional and also sets LocZ_IsSet to true using move semantics.

#### `public inline void `[`ClearLocZ`](#structFRHAPI__MatchTimelineEvent_1a758aa7740b7e5f40ba55606c4a9fbbd1)`()` <a id="structFRHAPI__MatchTimelineEvent_1a758aa7740b7e5f40ba55606c4a9fbbd1"></a>

Clears the value of LocZ_Optional and sets LocZ_IsSet to false.

#### `public inline bool `[`IsLocZSet`](#structFRHAPI__MatchTimelineEvent_1a7b3fa7f47e270262d530e6a2bb045fed)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7b3fa7f47e270262d530e6a2bb045fed"></a>

Checks whether LocZ_Optional has been set.

#### `public inline void `[`SetLocZToNull`](#structFRHAPI__MatchTimelineEvent_1a770282814680b281ebd516dc8e5940c8)`()` <a id="structFRHAPI__MatchTimelineEvent_1a770282814680b281ebd516dc8e5940c8"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsLocZNull`](#structFRHAPI__MatchTimelineEvent_1a934adfcfdbf7c1957c87c63b9867c55a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a934adfcfdbf7c1957c87c63b9867c55a"></a>

Checks whether LocZ_Optional is set to null.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1aeefc73b9b6958738e78d21f34bec0ff8)`()` <a id="structFRHAPI__MatchTimelineEvent_1aeefc73b9b6958738e78d21f34bec0ff8"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a09458e7cb483f030a88de8e3ca8e0b6b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a09458e7cb483f030a88de8e3ca8e0b6b"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1ab07eea55933ee5fb28fff0cdaca2f4aa)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ab07eea55933ee5fb28fff0cdaca2f4aa"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a3b4f578249f0ea7951d9a975498043ab)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a3b4f578249f0ea7951d9a975498043ab"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchTimelineEvent_1a70d3a190130dfbf4da5da3cdef783194)`()` <a id="structFRHAPI__MatchTimelineEvent_1a70d3a190130dfbf4da5da3cdef783194"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchTimelineEvent_1adc2311a203d55c30dc091db3b97c0b84)`() const` <a id="structFRHAPI__MatchTimelineEvent_1adc2311a203d55c30dc091db3b97c0b84"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a66f787da5b911988ce7cea4083465fd2)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a66f787da5b911988ce7cea4083465fd2"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a5c464d93f788e996590e66c9be2d0c3d)`(FGuid && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a5c464d93f788e996590e66c9be2d0c3d"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1ab565c7e037efb50a6a7283757c7ccf19)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab565c7e037efb50a6a7283757c7ccf19"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__MatchTimelineEvent_1aa51268c58039402d86ac2be12b2fdef9)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa51268c58039402d86ac2be12b2fdef9"></a>

Checks whether PlayerUuid_Optional has been set.

#### `public inline void `[`SetPlayerUuidToNull`](#structFRHAPI__MatchTimelineEvent_1a7708a00946cd3b8589b9deac26819ff5)`()` <a id="structFRHAPI__MatchTimelineEvent_1a7708a00946cd3b8589b9deac26819ff5"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPlayerUuidNull`](#structFRHAPI__MatchTimelineEvent_1a7c8f6ec50f5f9bf9fe0a2eea483e4536)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7c8f6ec50f5f9bf9fe0a2eea483e4536"></a>

Checks whether PlayerUuid_Optional is set to null.

#### `public inline FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a9eec4254b922df50a667b6233a693595)`()` <a id="structFRHAPI__MatchTimelineEvent_1a9eec4254b922df50a667b6233a693595"></a>

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__MatchTimelineEvent_1aa6b84c7bcd9642e16da62cc4a4f037a5)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa6b84c7bcd9642e16da62cc4a4f037a5"></a>

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__MatchTimelineEvent_1aa5bc979cdedcdc9eb8e2ac2e3183bd9d)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aa5bc979cdedcdc9eb8e2ac2e3183bd9d"></a>

Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSourcePlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a4a77a92fdb6015a20bca9595f44fc872)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a4a77a92fdb6015a20bca9595f44fc872"></a>

Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__MatchTimelineEvent_1a938a79624747be6894a76e9e4fc9c87d)`()` <a id="structFRHAPI__MatchTimelineEvent_1a938a79624747be6894a76e9e4fc9c87d"></a>

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__MatchTimelineEvent_1ad8340259b6772713587b64541c611c23)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ad8340259b6772713587b64541c611c23"></a>

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__MatchTimelineEvent_1af5de616f39f9b16c7a708e177a86ae0f)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1af5de616f39f9b16c7a708e177a86ae0f"></a>

Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.

#### `public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a2494c58bf8eb3a6b767d3cdc8cd778ef)`(FGuid && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a2494c58bf8eb3a6b767d3cdc8cd778ef"></a>

Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearSourcePlayerUuid`](#structFRHAPI__MatchTimelineEvent_1affe8756a00e36d1517c15be9e353080d)`()` <a id="structFRHAPI__MatchTimelineEvent_1affe8756a00e36d1517c15be9e353080d"></a>

Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.

#### `public inline bool `[`IsSourcePlayerUuidSet`](#structFRHAPI__MatchTimelineEvent_1a8bddb95b1e2452ce44f3adec4d6a35a7)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8bddb95b1e2452ce44f3adec4d6a35a7"></a>

Checks whether SourcePlayerUuid_Optional has been set.

#### `public inline void `[`SetSourcePlayerUuidToNull`](#structFRHAPI__MatchTimelineEvent_1a8c5f5438bdd7a09bf71e27bd821e0ac4)`()` <a id="structFRHAPI__MatchTimelineEvent_1a8c5f5438bdd7a09bf71e27bd821e0ac4"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsSourcePlayerUuidNull`](#structFRHAPI__MatchTimelineEvent_1ac1af944f09d371d89fdf054040f86a20)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac1af944f09d371d89fdf054040f86a20"></a>

Checks whether SourcePlayerUuid_Optional is set to null.

#### `public inline FString & `[`GetSourceId`](#structFRHAPI__MatchTimelineEvent_1a6fe0c8342d5a937213c704a2734a6c69)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6fe0c8342d5a937213c704a2734a6c69"></a>

Gets the value of SourceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSourceId`](#structFRHAPI__MatchTimelineEvent_1a4d332bf46c7318b621899b6bd11277d8)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4d332bf46c7318b621899b6bd11277d8"></a>

Gets the value of SourceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSourceId`](#structFRHAPI__MatchTimelineEvent_1aa84708a5f6db47f73c5f7e42f172d671)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aa84708a5f6db47f73c5f7e42f172d671"></a>

Gets the value of SourceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSourceId`](#structFRHAPI__MatchTimelineEvent_1ac64d74e1cc99ce53f43eec30823b176e)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ac64d74e1cc99ce53f43eec30823b176e"></a>

Fills OutValue with the value of SourceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetSourceIdOrNull`](#structFRHAPI__MatchTimelineEvent_1a72791820917b462a006a3fa2b2dfbd71)`()` <a id="structFRHAPI__MatchTimelineEvent_1a72791820917b462a006a3fa2b2dfbd71"></a>

Returns a pointer to SourceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetSourceIdOrNull`](#structFRHAPI__MatchTimelineEvent_1ae71ba225169e72a0f0d1dc6cf04de791)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ae71ba225169e72a0f0d1dc6cf04de791"></a>

Returns a pointer to SourceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSourceId`](#structFRHAPI__MatchTimelineEvent_1af496e5aec51d25c8c268add140a34986)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1af496e5aec51d25c8c268add140a34986"></a>

Sets the value of SourceId_Optional and also sets SourceId_IsSet to true.

#### `public inline void `[`SetSourceId`](#structFRHAPI__MatchTimelineEvent_1a5d152578b2481bb17229fc8a9793faa3)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a5d152578b2481bb17229fc8a9793faa3"></a>

Sets the value of SourceId_Optional and also sets SourceId_IsSet to true using move semantics.

#### `public inline void `[`ClearSourceId`](#structFRHAPI__MatchTimelineEvent_1a6c217fa613446ee33733e88befd8d8e2)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6c217fa613446ee33733e88befd8d8e2"></a>

Clears the value of SourceId_Optional and sets SourceId_IsSet to false.

#### `public inline bool `[`IsSourceIdSet`](#structFRHAPI__MatchTimelineEvent_1a23bcb21cc20ec88ab7687c22ec2c078d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a23bcb21cc20ec88ab7687c22ec2c078d"></a>

Checks whether SourceId_Optional has been set.

#### `public inline void `[`SetSourceIdToNull`](#structFRHAPI__MatchTimelineEvent_1aa4c7f0fc14037cf48e04853d21972fcc)`()` <a id="structFRHAPI__MatchTimelineEvent_1aa4c7f0fc14037cf48e04853d21972fcc"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsSourceIdNull`](#structFRHAPI__MatchTimelineEvent_1a2c5ee18a09de243c1d45d160c017b88b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2c5ee18a09de243c1d45d160c017b88b"></a>

Checks whether SourceId_Optional is set to null.

#### `public inline FString & `[`GetSourceId2`](#structFRHAPI__MatchTimelineEvent_1a2d71c1f547f8afa33b0dcce55d0dabd1)`()` <a id="structFRHAPI__MatchTimelineEvent_1a2d71c1f547f8afa33b0dcce55d0dabd1"></a>

Gets the value of SourceId2_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSourceId2`](#structFRHAPI__MatchTimelineEvent_1aaf8f819daffd415a0172abb94eecbc3d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aaf8f819daffd415a0172abb94eecbc3d"></a>

Gets the value of SourceId2_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSourceId2`](#structFRHAPI__MatchTimelineEvent_1ad484e32d9986c39ba6a0a33de46d2d15)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ad484e32d9986c39ba6a0a33de46d2d15"></a>

Gets the value of SourceId2_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSourceId2`](#structFRHAPI__MatchTimelineEvent_1a93b6df64fd30f36f74975b8d5c79104a)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a93b6df64fd30f36f74975b8d5c79104a"></a>

Fills OutValue with the value of SourceId2_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetSourceId2OrNull`](#structFRHAPI__MatchTimelineEvent_1aa2b970610cac60910839db16289c868d)`()` <a id="structFRHAPI__MatchTimelineEvent_1aa2b970610cac60910839db16289c868d"></a>

Returns a pointer to SourceId2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetSourceId2OrNull`](#structFRHAPI__MatchTimelineEvent_1a2f4d0407793b5198bf7bdfba5b01869b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2f4d0407793b5198bf7bdfba5b01869b"></a>

Returns a pointer to SourceId2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSourceId2`](#structFRHAPI__MatchTimelineEvent_1ad01a3f095ff2f459db93de79c857037c)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ad01a3f095ff2f459db93de79c857037c"></a>

Sets the value of SourceId2_Optional and also sets SourceId2_IsSet to true.

#### `public inline void `[`SetSourceId2`](#structFRHAPI__MatchTimelineEvent_1af173f35a6639f73d6763e88ea06b6d75)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1af173f35a6639f73d6763e88ea06b6d75"></a>

Sets the value of SourceId2_Optional and also sets SourceId2_IsSet to true using move semantics.

#### `public inline void `[`ClearSourceId2`](#structFRHAPI__MatchTimelineEvent_1a0aeee2c744cb177d4c8f4e38879f09ff)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0aeee2c744cb177d4c8f4e38879f09ff"></a>

Clears the value of SourceId2_Optional and sets SourceId2_IsSet to false.

#### `public inline bool `[`IsSourceId2Set`](#structFRHAPI__MatchTimelineEvent_1a92a880576b195454eb30f23e3841efa7)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a92a880576b195454eb30f23e3841efa7"></a>

Checks whether SourceId2_Optional has been set.

#### `public inline void `[`SetSourceId2ToNull`](#structFRHAPI__MatchTimelineEvent_1a0817d1ca3a38a9b25230ae914bb4641a)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0817d1ca3a38a9b25230ae914bb4641a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsSourceId2Null`](#structFRHAPI__MatchTimelineEvent_1a9cb1e5366235913220589a51af965f1e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a9cb1e5366235913220589a51af965f1e"></a>

Checks whether SourceId2_Optional is set to null.

#### `public inline FString & `[`GetSourceId3`](#structFRHAPI__MatchTimelineEvent_1a942387fd1e79795140fd05c5a2632afb)`()` <a id="structFRHAPI__MatchTimelineEvent_1a942387fd1e79795140fd05c5a2632afb"></a>

Gets the value of SourceId3_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSourceId3`](#structFRHAPI__MatchTimelineEvent_1ad6620c1e4d1ea15a933a2a6aaccb2935)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ad6620c1e4d1ea15a933a2a6aaccb2935"></a>

Gets the value of SourceId3_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSourceId3`](#structFRHAPI__MatchTimelineEvent_1a33b8dcd5c10679b4de7449f638e8a551)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a33b8dcd5c10679b4de7449f638e8a551"></a>

Gets the value of SourceId3_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSourceId3`](#structFRHAPI__MatchTimelineEvent_1af6cca4fe56772e6689cc65793ad7cdf0)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1af6cca4fe56772e6689cc65793ad7cdf0"></a>

Fills OutValue with the value of SourceId3_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetSourceId3OrNull`](#structFRHAPI__MatchTimelineEvent_1ab61abd0f7f3dca48ad6950dfbff46e4f)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab61abd0f7f3dca48ad6950dfbff46e4f"></a>

Returns a pointer to SourceId3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetSourceId3OrNull`](#structFRHAPI__MatchTimelineEvent_1a2925d8f683a29a8f96315ed7ad1a4a69)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2925d8f683a29a8f96315ed7ad1a4a69"></a>

Returns a pointer to SourceId3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSourceId3`](#structFRHAPI__MatchTimelineEvent_1a6363fc331cb88966058a0be376af938d)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a6363fc331cb88966058a0be376af938d"></a>

Sets the value of SourceId3_Optional and also sets SourceId3_IsSet to true.

#### `public inline void `[`SetSourceId3`](#structFRHAPI__MatchTimelineEvent_1a7ea4f43a93fa916ba3dceb58bf607428)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a7ea4f43a93fa916ba3dceb58bf607428"></a>

Sets the value of SourceId3_Optional and also sets SourceId3_IsSet to true using move semantics.

#### `public inline void `[`ClearSourceId3`](#structFRHAPI__MatchTimelineEvent_1ad2d8024c45fa42d9f52a3396e8dbec8f)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad2d8024c45fa42d9f52a3396e8dbec8f"></a>

Clears the value of SourceId3_Optional and sets SourceId3_IsSet to false.

#### `public inline bool `[`IsSourceId3Set`](#structFRHAPI__MatchTimelineEvent_1a0f821d8f210ccc69aa347622f78dc61c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0f821d8f210ccc69aa347622f78dc61c"></a>

Checks whether SourceId3_Optional has been set.

#### `public inline void `[`SetSourceId3ToNull`](#structFRHAPI__MatchTimelineEvent_1aacd2aafd3a7839294c24e4ea1380d437)`()` <a id="structFRHAPI__MatchTimelineEvent_1aacd2aafd3a7839294c24e4ea1380d437"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsSourceId3Null`](#structFRHAPI__MatchTimelineEvent_1ab03a894e20af1bf44f10dfe14b33010e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab03a894e20af1bf44f10dfe14b33010e"></a>

Checks whether SourceId3_Optional is set to null.

#### `public inline FString & `[`GetSourceId4`](#structFRHAPI__MatchTimelineEvent_1a637785b000cbad2d338f09e6385426f3)`()` <a id="structFRHAPI__MatchTimelineEvent_1a637785b000cbad2d338f09e6385426f3"></a>

Gets the value of SourceId4_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSourceId4`](#structFRHAPI__MatchTimelineEvent_1a457ae5c04e264058978cf347ed8b7e51)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a457ae5c04e264058978cf347ed8b7e51"></a>

Gets the value of SourceId4_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSourceId4`](#structFRHAPI__MatchTimelineEvent_1ad259c2c58a1fef3939476306b4131062)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ad259c2c58a1fef3939476306b4131062"></a>

Gets the value of SourceId4_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSourceId4`](#structFRHAPI__MatchTimelineEvent_1a10793919f013d5c8ad41713349b04283)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a10793919f013d5c8ad41713349b04283"></a>

Fills OutValue with the value of SourceId4_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetSourceId4OrNull`](#structFRHAPI__MatchTimelineEvent_1aef5ffc8ae1354f569c49ba02be66256f)`()` <a id="structFRHAPI__MatchTimelineEvent_1aef5ffc8ae1354f569c49ba02be66256f"></a>

Returns a pointer to SourceId4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetSourceId4OrNull`](#structFRHAPI__MatchTimelineEvent_1a1c477f2dbb4238c58d7b03a3e80dd285)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1c477f2dbb4238c58d7b03a3e80dd285"></a>

Returns a pointer to SourceId4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSourceId4`](#structFRHAPI__MatchTimelineEvent_1ae54b5c90ac69c641a26af32cf7ccdf58)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ae54b5c90ac69c641a26af32cf7ccdf58"></a>

Sets the value of SourceId4_Optional and also sets SourceId4_IsSet to true.

#### `public inline void `[`SetSourceId4`](#structFRHAPI__MatchTimelineEvent_1a8a369d41032229a4ad9873c171cbb8f0)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a8a369d41032229a4ad9873c171cbb8f0"></a>

Sets the value of SourceId4_Optional and also sets SourceId4_IsSet to true using move semantics.

#### `public inline void `[`ClearSourceId4`](#structFRHAPI__MatchTimelineEvent_1afc4c548ec7674c1c1cd827f592f6d4c5)`()` <a id="structFRHAPI__MatchTimelineEvent_1afc4c548ec7674c1c1cd827f592f6d4c5"></a>

Clears the value of SourceId4_Optional and sets SourceId4_IsSet to false.

#### `public inline bool `[`IsSourceId4Set`](#structFRHAPI__MatchTimelineEvent_1a82c3dc3c28aaa40cdb51bb72c334779b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a82c3dc3c28aaa40cdb51bb72c334779b"></a>

Checks whether SourceId4_Optional has been set.

#### `public inline void `[`SetSourceId4ToNull`](#structFRHAPI__MatchTimelineEvent_1a08a714aadf5b77d2c9d696d45ebf3d1f)`()` <a id="structFRHAPI__MatchTimelineEvent_1a08a714aadf5b77d2c9d696d45ebf3d1f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsSourceId4Null`](#structFRHAPI__MatchTimelineEvent_1a6d63ad5b112037369dd923a80b398d5b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a6d63ad5b112037369dd923a80b398d5b"></a>

Checks whether SourceId4_Optional is set to null.

#### `public inline FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a1ee19f9796381525a176b08bab2c9be8)`()` <a id="structFRHAPI__MatchTimelineEvent_1a1ee19f9796381525a176b08bab2c9be8"></a>

Gets the value of TargetPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1ad94452e66fbeacf8ad568033b4f300f6)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ad94452e66fbeacf8ad568033b4f300f6"></a>

Gets the value of TargetPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a224ac2b881f0b8d11287ffe3bc1d07e9)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a224ac2b881f0b8d11287ffe3bc1d07e9"></a>

Gets the value of TargetPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTargetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1af555322e3fcd05ddc62ec7117ca9e513)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1af555322e3fcd05ddc62ec7117ca9e513"></a>

Fills OutValue with the value of TargetPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetTargetPlayerUuidOrNull`](#structFRHAPI__MatchTimelineEvent_1a79de6d7c343f430c5c3cac6738329924)`()` <a id="structFRHAPI__MatchTimelineEvent_1a79de6d7c343f430c5c3cac6738329924"></a>

Returns a pointer to TargetPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetTargetPlayerUuidOrNull`](#structFRHAPI__MatchTimelineEvent_1a4edde20f02486b47a3ad3b468bc7da0f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4edde20f02486b47a3ad3b468bc7da0f"></a>

Returns a pointer to TargetPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTargetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1aea78e8159cb6068f51b5fa78036cca4b)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aea78e8159cb6068f51b5fa78036cca4b"></a>

Sets the value of TargetPlayerUuid_Optional and also sets TargetPlayerUuid_IsSet to true.

#### `public inline void `[`SetTargetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a4c32fd848073bf47f21fefef9a0810d4)`(FGuid && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a4c32fd848073bf47f21fefef9a0810d4"></a>

Sets the value of TargetPlayerUuid_Optional and also sets TargetPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearTargetPlayerUuid`](#structFRHAPI__MatchTimelineEvent_1a44505bb0c5e18d45aeb809d0db9d456d)`()` <a id="structFRHAPI__MatchTimelineEvent_1a44505bb0c5e18d45aeb809d0db9d456d"></a>

Clears the value of TargetPlayerUuid_Optional and sets TargetPlayerUuid_IsSet to false.

#### `public inline bool `[`IsTargetPlayerUuidSet`](#structFRHAPI__MatchTimelineEvent_1af6ea0b55d3555e073ec2b7b8bc78597e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af6ea0b55d3555e073ec2b7b8bc78597e"></a>

Checks whether TargetPlayerUuid_Optional has been set.

#### `public inline void `[`SetTargetPlayerUuidToNull`](#structFRHAPI__MatchTimelineEvent_1a30660262e2a382351a080fe6a1f695a1)`()` <a id="structFRHAPI__MatchTimelineEvent_1a30660262e2a382351a080fe6a1f695a1"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTargetPlayerUuidNull`](#structFRHAPI__MatchTimelineEvent_1a90504bba72ca463e90b7498b2c35aeac)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a90504bba72ca463e90b7498b2c35aeac"></a>

Checks whether TargetPlayerUuid_Optional is set to null.

#### `public inline FString & `[`GetTargetId`](#structFRHAPI__MatchTimelineEvent_1a007619ff042d4e3bbafa6742a933d5e9)`()` <a id="structFRHAPI__MatchTimelineEvent_1a007619ff042d4e3bbafa6742a933d5e9"></a>

Gets the value of TargetId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTargetId`](#structFRHAPI__MatchTimelineEvent_1ada9b54c90ab23c7ba7287ba3d9876830)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ada9b54c90ab23c7ba7287ba3d9876830"></a>

Gets the value of TargetId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTargetId`](#structFRHAPI__MatchTimelineEvent_1a4202587b0073872391eb02201ae0115d)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a4202587b0073872391eb02201ae0115d"></a>

Gets the value of TargetId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTargetId`](#structFRHAPI__MatchTimelineEvent_1abd9397990c143398b2349882f1cea621)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1abd9397990c143398b2349882f1cea621"></a>

Fills OutValue with the value of TargetId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTargetIdOrNull`](#structFRHAPI__MatchTimelineEvent_1af4ae9bccadff52101232b73a8657251a)`()` <a id="structFRHAPI__MatchTimelineEvent_1af4ae9bccadff52101232b73a8657251a"></a>

Returns a pointer to TargetId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTargetIdOrNull`](#structFRHAPI__MatchTimelineEvent_1a1f2f087d0add8d618e0afe9867ce67e7)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1f2f087d0add8d618e0afe9867ce67e7"></a>

Returns a pointer to TargetId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTargetId`](#structFRHAPI__MatchTimelineEvent_1acf3dbaec3e74c28e0cfd5e5cee671dcc)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1acf3dbaec3e74c28e0cfd5e5cee671dcc"></a>

Sets the value of TargetId_Optional and also sets TargetId_IsSet to true.

#### `public inline void `[`SetTargetId`](#structFRHAPI__MatchTimelineEvent_1a13937966b2a8aa1facc82c1c7f43b998)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a13937966b2a8aa1facc82c1c7f43b998"></a>

Sets the value of TargetId_Optional and also sets TargetId_IsSet to true using move semantics.

#### `public inline void `[`ClearTargetId`](#structFRHAPI__MatchTimelineEvent_1a6d5eec0b6e03f4358f60b0e6a187ee24)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6d5eec0b6e03f4358f60b0e6a187ee24"></a>

Clears the value of TargetId_Optional and sets TargetId_IsSet to false.

#### `public inline bool `[`IsTargetIdSet`](#structFRHAPI__MatchTimelineEvent_1a592d463c8c618d68356c285789539fb4)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a592d463c8c618d68356c285789539fb4"></a>

Checks whether TargetId_Optional has been set.

#### `public inline void `[`SetTargetIdToNull`](#structFRHAPI__MatchTimelineEvent_1a0b2cffe74aa0c0d644a0f50aaaa1b795)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0b2cffe74aa0c0d644a0f50aaaa1b795"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTargetIdNull`](#structFRHAPI__MatchTimelineEvent_1a49aebfea073e9e8511d26cf347b96aa7)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a49aebfea073e9e8511d26cf347b96aa7"></a>

Checks whether TargetId_Optional is set to null.

#### `public inline FString & `[`GetTargetId2`](#structFRHAPI__MatchTimelineEvent_1abefc9f313a863a69a43f0c7c49088cfc)`()` <a id="structFRHAPI__MatchTimelineEvent_1abefc9f313a863a69a43f0c7c49088cfc"></a>

Gets the value of TargetId2_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTargetId2`](#structFRHAPI__MatchTimelineEvent_1a1c09eb9197948087b40dac609515020d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1c09eb9197948087b40dac609515020d"></a>

Gets the value of TargetId2_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTargetId2`](#structFRHAPI__MatchTimelineEvent_1affd7f57c582ea996d0cf5908924d7d64)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1affd7f57c582ea996d0cf5908924d7d64"></a>

Gets the value of TargetId2_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTargetId2`](#structFRHAPI__MatchTimelineEvent_1a86b54e304ed598f607d1088407a2897b)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a86b54e304ed598f607d1088407a2897b"></a>

Fills OutValue with the value of TargetId2_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTargetId2OrNull`](#structFRHAPI__MatchTimelineEvent_1a14750568f1925b7ff385e9d96056a92a)`()` <a id="structFRHAPI__MatchTimelineEvent_1a14750568f1925b7ff385e9d96056a92a"></a>

Returns a pointer to TargetId2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTargetId2OrNull`](#structFRHAPI__MatchTimelineEvent_1a0c19466e724a9388e2366413c52a199f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0c19466e724a9388e2366413c52a199f"></a>

Returns a pointer to TargetId2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTargetId2`](#structFRHAPI__MatchTimelineEvent_1aff4d665f99e9c7526e8b059d70df404f)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aff4d665f99e9c7526e8b059d70df404f"></a>

Sets the value of TargetId2_Optional and also sets TargetId2_IsSet to true.

#### `public inline void `[`SetTargetId2`](#structFRHAPI__MatchTimelineEvent_1a791586447757abc866d3fb291b9aa936)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a791586447757abc866d3fb291b9aa936"></a>

Sets the value of TargetId2_Optional and also sets TargetId2_IsSet to true using move semantics.

#### `public inline void `[`ClearTargetId2`](#structFRHAPI__MatchTimelineEvent_1acef8285fe6d28388d3e9e35003b12bfd)`()` <a id="structFRHAPI__MatchTimelineEvent_1acef8285fe6d28388d3e9e35003b12bfd"></a>

Clears the value of TargetId2_Optional and sets TargetId2_IsSet to false.

#### `public inline bool `[`IsTargetId2Set`](#structFRHAPI__MatchTimelineEvent_1ab8004f09b73f595746d116f5cb5148fa)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab8004f09b73f595746d116f5cb5148fa"></a>

Checks whether TargetId2_Optional has been set.

#### `public inline void `[`SetTargetId2ToNull`](#structFRHAPI__MatchTimelineEvent_1a2ab642941bd864238618e198388b5cef)`()` <a id="structFRHAPI__MatchTimelineEvent_1a2ab642941bd864238618e198388b5cef"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTargetId2Null`](#structFRHAPI__MatchTimelineEvent_1a46d1991efd4eb2572e1560899043c20b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a46d1991efd4eb2572e1560899043c20b"></a>

Checks whether TargetId2_Optional is set to null.

#### `public inline FString & `[`GetTargetId3`](#structFRHAPI__MatchTimelineEvent_1a1af376990bc0b56c762978b75ba3912e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a1af376990bc0b56c762978b75ba3912e"></a>

Gets the value of TargetId3_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTargetId3`](#structFRHAPI__MatchTimelineEvent_1af503c889475b14e679bb610c248e5530)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af503c889475b14e679bb610c248e5530"></a>

Gets the value of TargetId3_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTargetId3`](#structFRHAPI__MatchTimelineEvent_1a339e8f8debfd5b87813bbd87f50dddda)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a339e8f8debfd5b87813bbd87f50dddda"></a>

Gets the value of TargetId3_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTargetId3`](#structFRHAPI__MatchTimelineEvent_1a55cc73912d0c4703eba9a2ad32cac967)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a55cc73912d0c4703eba9a2ad32cac967"></a>

Fills OutValue with the value of TargetId3_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTargetId3OrNull`](#structFRHAPI__MatchTimelineEvent_1a75b97042f099231950fbf1cb8cb13e44)`()` <a id="structFRHAPI__MatchTimelineEvent_1a75b97042f099231950fbf1cb8cb13e44"></a>

Returns a pointer to TargetId3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTargetId3OrNull`](#structFRHAPI__MatchTimelineEvent_1af0202c2a1fc934e69e1e3ef9b9ccce65)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af0202c2a1fc934e69e1e3ef9b9ccce65"></a>

Returns a pointer to TargetId3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTargetId3`](#structFRHAPI__MatchTimelineEvent_1aa53a6a2125700f66ae3440b69da2ef80)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aa53a6a2125700f66ae3440b69da2ef80"></a>

Sets the value of TargetId3_Optional and also sets TargetId3_IsSet to true.

#### `public inline void `[`SetTargetId3`](#structFRHAPI__MatchTimelineEvent_1a6e0c9848b31b614f782f7b6c84ccdb0d)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a6e0c9848b31b614f782f7b6c84ccdb0d"></a>

Sets the value of TargetId3_Optional and also sets TargetId3_IsSet to true using move semantics.

#### `public inline void `[`ClearTargetId3`](#structFRHAPI__MatchTimelineEvent_1a45f28cdb3da9b02d9039a213186217e4)`()` <a id="structFRHAPI__MatchTimelineEvent_1a45f28cdb3da9b02d9039a213186217e4"></a>

Clears the value of TargetId3_Optional and sets TargetId3_IsSet to false.

#### `public inline bool `[`IsTargetId3Set`](#structFRHAPI__MatchTimelineEvent_1a1bd054d39b0ee14ab64d8ef3c3daa379)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1bd054d39b0ee14ab64d8ef3c3daa379"></a>

Checks whether TargetId3_Optional has been set.

#### `public inline void `[`SetTargetId3ToNull`](#structFRHAPI__MatchTimelineEvent_1af9940a0a5b79533d609a14b52a701640)`()` <a id="structFRHAPI__MatchTimelineEvent_1af9940a0a5b79533d609a14b52a701640"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTargetId3Null`](#structFRHAPI__MatchTimelineEvent_1a1001b44e61e7fdf36b3e220bd774eb98)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1001b44e61e7fdf36b3e220bd774eb98"></a>

Checks whether TargetId3_Optional is set to null.

#### `public inline FString & `[`GetTargetId4`](#structFRHAPI__MatchTimelineEvent_1a72bf96bc2f542cc59ca019b703f54510)`()` <a id="structFRHAPI__MatchTimelineEvent_1a72bf96bc2f542cc59ca019b703f54510"></a>

Gets the value of TargetId4_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTargetId4`](#structFRHAPI__MatchTimelineEvent_1a2033480c7e52fe851c16be294f12a719)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2033480c7e52fe851c16be294f12a719"></a>

Gets the value of TargetId4_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTargetId4`](#structFRHAPI__MatchTimelineEvent_1ad67c394fcb0cc601a60fcb1f0e3804c4)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ad67c394fcb0cc601a60fcb1f0e3804c4"></a>

Gets the value of TargetId4_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTargetId4`](#structFRHAPI__MatchTimelineEvent_1aed12f4ae9624744c8217c59e473a8a85)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aed12f4ae9624744c8217c59e473a8a85"></a>

Fills OutValue with the value of TargetId4_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTargetId4OrNull`](#structFRHAPI__MatchTimelineEvent_1acabd756c98c96165b7893dfc0f23907d)`()` <a id="structFRHAPI__MatchTimelineEvent_1acabd756c98c96165b7893dfc0f23907d"></a>

Returns a pointer to TargetId4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTargetId4OrNull`](#structFRHAPI__MatchTimelineEvent_1aa472eb45d06566d16ceae7fddaf5e8d2)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa472eb45d06566d16ceae7fddaf5e8d2"></a>

Returns a pointer to TargetId4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTargetId4`](#structFRHAPI__MatchTimelineEvent_1a2441ea68dd7883474d81bf29101ee7e8)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a2441ea68dd7883474d81bf29101ee7e8"></a>

Sets the value of TargetId4_Optional and also sets TargetId4_IsSet to true.

#### `public inline void `[`SetTargetId4`](#structFRHAPI__MatchTimelineEvent_1a6604a498ac52f56eb36717d767415ed3)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a6604a498ac52f56eb36717d767415ed3"></a>

Sets the value of TargetId4_Optional and also sets TargetId4_IsSet to true using move semantics.

#### `public inline void `[`ClearTargetId4`](#structFRHAPI__MatchTimelineEvent_1a85d5fb948094a7cc8881c72d0a10cd3e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a85d5fb948094a7cc8881c72d0a10cd3e"></a>

Clears the value of TargetId4_Optional and sets TargetId4_IsSet to false.

#### `public inline bool `[`IsTargetId4Set`](#structFRHAPI__MatchTimelineEvent_1a99b0e180a61a8f746ef666a84df2a807)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a99b0e180a61a8f746ef666a84df2a807"></a>

Checks whether TargetId4_Optional has been set.

#### `public inline void `[`SetTargetId4ToNull`](#structFRHAPI__MatchTimelineEvent_1a03edbb508d3bd7d12d814dd5fd3e0ddb)`()` <a id="structFRHAPI__MatchTimelineEvent_1a03edbb508d3bd7d12d814dd5fd3e0ddb"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTargetId4Null`](#structFRHAPI__MatchTimelineEvent_1a0e71af8a4cc50f3bffe7ec441b285970)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0e71af8a4cc50f3bffe7ec441b285970"></a>

Checks whether TargetId4_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchTimelineEvent_1ad4bb0569565c3890b12424ecd02f0024)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad4bb0569565c3890b12424ecd02f0024"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchTimelineEvent_1a6432d6aff9e4ae7325e3926f297e1af1)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a6432d6aff9e4ae7325e3926f297e1af1"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchTimelineEvent_1af6bc62f83041f7396dc8ea7e7eda9d0c)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1af6bc62f83041f7396dc8ea7e7eda9d0c"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchTimelineEvent_1a0326ef4f69a5c3af270da4f86c481a47)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a0326ef4f69a5c3af270da4f86c481a47"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchTimelineEvent_1a02ded057063a877d1cae14c9c9a95079)`()` <a id="structFRHAPI__MatchTimelineEvent_1a02ded057063a877d1cae14c9c9a95079"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchTimelineEvent_1a5a96ab4dc6bda4b2981346662023a06c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5a96ab4dc6bda4b2981346662023a06c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchTimelineEvent_1aaa0c5aea57c89437362e1732c41e7061)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aaa0c5aea57c89437362e1732c41e7061"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchTimelineEvent_1ad57a22be922f7e2ef32a341e4bc9466f)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ad57a22be922f7e2ef32a341e4bc9466f"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchTimelineEvent_1ae448b9ae5f762f06302051620d016fe5)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae448b9ae5f762f06302051620d016fe5"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchTimelineEvent_1a36dd0f559a6ca5149ce514664894c7e3)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a36dd0f559a6ca5149ce514664894c7e3"></a>

Checks whether CustomData_Optional has been set.

#### `public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchTimelineEvent_1aedb3dcab4d76e25ca0b7a2a298cec643)`()` <a id="structFRHAPI__MatchTimelineEvent_1aedb3dcab4d76e25ca0b7a2a298cec643"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchTimelineEvent_1a0ece037e9481fa2a6e28031822781eca)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0ece037e9481fa2a6e28031822781eca"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline int32 & `[`GetInt1`](#structFRHAPI__MatchTimelineEvent_1aeadb952188651f485c5d4ac5df31abb2)`()` <a id="structFRHAPI__MatchTimelineEvent_1aeadb952188651f485c5d4ac5df31abb2"></a>

Gets the value of Int1_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt1`](#structFRHAPI__MatchTimelineEvent_1a66ab3886cab4641d8a42e9c0f7eb5b8a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a66ab3886cab4641d8a42e9c0f7eb5b8a"></a>

Gets the value of Int1_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt1`](#structFRHAPI__MatchTimelineEvent_1ae107d1090373a9e1b5b6d0002c984ce1)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ae107d1090373a9e1b5b6d0002c984ce1"></a>

Gets the value of Int1_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt1`](#structFRHAPI__MatchTimelineEvent_1a3b2e166a25f56a020540b25e4ff6cf87)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a3b2e166a25f56a020540b25e4ff6cf87"></a>

Fills OutValue with the value of Int1_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt1OrNull`](#structFRHAPI__MatchTimelineEvent_1ace9ea926d48b0abc4aacd9b9a45c2fe8)`()` <a id="structFRHAPI__MatchTimelineEvent_1ace9ea926d48b0abc4aacd9b9a45c2fe8"></a>

Returns a pointer to Int1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt1OrNull`](#structFRHAPI__MatchTimelineEvent_1a9a90dda79c5b433915821ad87f1b68dc)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a9a90dda79c5b433915821ad87f1b68dc"></a>

Returns a pointer to Int1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt1`](#structFRHAPI__MatchTimelineEvent_1a483889d7938c6c8f03bde16f149b1c0a)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a483889d7938c6c8f03bde16f149b1c0a"></a>

Sets the value of Int1_Optional and also sets Int1_IsSet to true.

#### `public inline void `[`SetInt1`](#structFRHAPI__MatchTimelineEvent_1a3c66c7837f70e938cbb5296c25959c64)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a3c66c7837f70e938cbb5296c25959c64"></a>

Sets the value of Int1_Optional and also sets Int1_IsSet to true using move semantics.

#### `public inline void `[`ClearInt1`](#structFRHAPI__MatchTimelineEvent_1ada7c1f3abc86d1ce4bf67e27a36ee049)`()` <a id="structFRHAPI__MatchTimelineEvent_1ada7c1f3abc86d1ce4bf67e27a36ee049"></a>

Clears the value of Int1_Optional and sets Int1_IsSet to false.

#### `public inline bool `[`IsInt1Set`](#structFRHAPI__MatchTimelineEvent_1a05a1de6eb0c60a0c6eb2df89193e86b1)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a05a1de6eb0c60a0c6eb2df89193e86b1"></a>

Checks whether Int1_Optional has been set.

#### `public inline bool `[`IsInt1DefaultValue`](#structFRHAPI__MatchTimelineEvent_1ac61e23285c6a23a67a56ccb7b70a0432)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac61e23285c6a23a67a56ccb7b70a0432"></a>

Returns true if Int1_Optional is set and matches the default value.

#### `public inline void `[`SetInt1ToDefault`](#structFRHAPI__MatchTimelineEvent_1a7340c987e1ae64773e1cd252b7b7ab63)`()` <a id="structFRHAPI__MatchTimelineEvent_1a7340c987e1ae64773e1cd252b7b7ab63"></a>

Sets the value of Int1_Optional to its default and also sets Int1_IsSet to true.

#### `public inline void `[`SetInt1ToNull`](#structFRHAPI__MatchTimelineEvent_1a044425270f7d5515c751a57ec2e7fdea)`()` <a id="structFRHAPI__MatchTimelineEvent_1a044425270f7d5515c751a57ec2e7fdea"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt1Null`](#structFRHAPI__MatchTimelineEvent_1a5a616158606f7592f0085ddfdc42de95)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5a616158606f7592f0085ddfdc42de95"></a>

Checks whether Int1_Optional is set to null.

#### `public inline int32 & `[`GetInt2`](#structFRHAPI__MatchTimelineEvent_1a516442d83dfd0aa7981d916ba7211e7d)`()` <a id="structFRHAPI__MatchTimelineEvent_1a516442d83dfd0aa7981d916ba7211e7d"></a>

Gets the value of Int2_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt2`](#structFRHAPI__MatchTimelineEvent_1a6489eafd31d1b2f58cafb99e0548dc30)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a6489eafd31d1b2f58cafb99e0548dc30"></a>

Gets the value of Int2_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt2`](#structFRHAPI__MatchTimelineEvent_1a864bdde4f56c3e338ba82682857a02b1)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a864bdde4f56c3e338ba82682857a02b1"></a>

Gets the value of Int2_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt2`](#structFRHAPI__MatchTimelineEvent_1a3e309bb1f29527a954973a3bb453cc49)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a3e309bb1f29527a954973a3bb453cc49"></a>

Fills OutValue with the value of Int2_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt2OrNull`](#structFRHAPI__MatchTimelineEvent_1a5db714d896e76f79fb97a4e2de00dbcb)`()` <a id="structFRHAPI__MatchTimelineEvent_1a5db714d896e76f79fb97a4e2de00dbcb"></a>

Returns a pointer to Int2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt2OrNull`](#structFRHAPI__MatchTimelineEvent_1a7c67a668c5972f53423371878fa1f9ba)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7c67a668c5972f53423371878fa1f9ba"></a>

Returns a pointer to Int2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt2`](#structFRHAPI__MatchTimelineEvent_1a66caf46aad906b8ccf14ac8506f86976)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a66caf46aad906b8ccf14ac8506f86976"></a>

Sets the value of Int2_Optional and also sets Int2_IsSet to true.

#### `public inline void `[`SetInt2`](#structFRHAPI__MatchTimelineEvent_1ace3eeb90beb0a7ae573cc57d9845e2c4)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ace3eeb90beb0a7ae573cc57d9845e2c4"></a>

Sets the value of Int2_Optional and also sets Int2_IsSet to true using move semantics.

#### `public inline void `[`ClearInt2`](#structFRHAPI__MatchTimelineEvent_1a99e9d819cbfd627c7c5cbe7644c54fa8)`()` <a id="structFRHAPI__MatchTimelineEvent_1a99e9d819cbfd627c7c5cbe7644c54fa8"></a>

Clears the value of Int2_Optional and sets Int2_IsSet to false.

#### `public inline bool `[`IsInt2Set`](#structFRHAPI__MatchTimelineEvent_1a60f919cb3efbf2eaaaeab0b84b1368a7)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a60f919cb3efbf2eaaaeab0b84b1368a7"></a>

Checks whether Int2_Optional has been set.

#### `public inline bool `[`IsInt2DefaultValue`](#structFRHAPI__MatchTimelineEvent_1acd589abe5a6bc3f66779483249592548)`() const` <a id="structFRHAPI__MatchTimelineEvent_1acd589abe5a6bc3f66779483249592548"></a>

Returns true if Int2_Optional is set and matches the default value.

#### `public inline void `[`SetInt2ToDefault`](#structFRHAPI__MatchTimelineEvent_1a6ddcb2851f396dd4a8592fbb978a7302)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6ddcb2851f396dd4a8592fbb978a7302"></a>

Sets the value of Int2_Optional to its default and also sets Int2_IsSet to true.

#### `public inline void `[`SetInt2ToNull`](#structFRHAPI__MatchTimelineEvent_1a2183ee57b37bb3edd9463d0bde130488)`()` <a id="structFRHAPI__MatchTimelineEvent_1a2183ee57b37bb3edd9463d0bde130488"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt2Null`](#structFRHAPI__MatchTimelineEvent_1ab148d42ba16cf11c7a5d78b73d7ce469)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab148d42ba16cf11c7a5d78b73d7ce469"></a>

Checks whether Int2_Optional is set to null.

#### `public inline int32 & `[`GetInt3`](#structFRHAPI__MatchTimelineEvent_1a8d6d8fd537e5a94d495e6e83f84108ec)`()` <a id="structFRHAPI__MatchTimelineEvent_1a8d6d8fd537e5a94d495e6e83f84108ec"></a>

Gets the value of Int3_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt3`](#structFRHAPI__MatchTimelineEvent_1ac25e98dc0cc74d9ae6ce66d0d3d5cd01)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac25e98dc0cc74d9ae6ce66d0d3d5cd01"></a>

Gets the value of Int3_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt3`](#structFRHAPI__MatchTimelineEvent_1a446355484054d99d497e5f14b5e975bc)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a446355484054d99d497e5f14b5e975bc"></a>

Gets the value of Int3_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt3`](#structFRHAPI__MatchTimelineEvent_1a4665e2e1f0c2dc0f4a5dfe8f2d224b4d)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a4665e2e1f0c2dc0f4a5dfe8f2d224b4d"></a>

Fills OutValue with the value of Int3_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt3OrNull`](#structFRHAPI__MatchTimelineEvent_1a80e7f8ed089bfebe144922fddf824942)`()` <a id="structFRHAPI__MatchTimelineEvent_1a80e7f8ed089bfebe144922fddf824942"></a>

Returns a pointer to Int3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt3OrNull`](#structFRHAPI__MatchTimelineEvent_1a30dedd54213ffd2311749f5d4903d31e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a30dedd54213ffd2311749f5d4903d31e"></a>

Returns a pointer to Int3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt3`](#structFRHAPI__MatchTimelineEvent_1a163eff20c29c664e117eb5e881c89bb3)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a163eff20c29c664e117eb5e881c89bb3"></a>

Sets the value of Int3_Optional and also sets Int3_IsSet to true.

#### `public inline void `[`SetInt3`](#structFRHAPI__MatchTimelineEvent_1a862d077eb23dfae4fa5f10ecee904a72)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a862d077eb23dfae4fa5f10ecee904a72"></a>

Sets the value of Int3_Optional and also sets Int3_IsSet to true using move semantics.

#### `public inline void `[`ClearInt3`](#structFRHAPI__MatchTimelineEvent_1a3d26a7e04f14fa40a3de6bc1c41aad96)`()` <a id="structFRHAPI__MatchTimelineEvent_1a3d26a7e04f14fa40a3de6bc1c41aad96"></a>

Clears the value of Int3_Optional and sets Int3_IsSet to false.

#### `public inline bool `[`IsInt3Set`](#structFRHAPI__MatchTimelineEvent_1a297001357ec42f05872efe4cba36bace)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a297001357ec42f05872efe4cba36bace"></a>

Checks whether Int3_Optional has been set.

#### `public inline bool `[`IsInt3DefaultValue`](#structFRHAPI__MatchTimelineEvent_1afe15ed0735d59a41704822b64df6387e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1afe15ed0735d59a41704822b64df6387e"></a>

Returns true if Int3_Optional is set and matches the default value.

#### `public inline void `[`SetInt3ToDefault`](#structFRHAPI__MatchTimelineEvent_1af9f1da668d442341c8613b9499b99839)`()` <a id="structFRHAPI__MatchTimelineEvent_1af9f1da668d442341c8613b9499b99839"></a>

Sets the value of Int3_Optional to its default and also sets Int3_IsSet to true.

#### `public inline void `[`SetInt3ToNull`](#structFRHAPI__MatchTimelineEvent_1a9edba849ad084d91d5f74c4f1505a376)`()` <a id="structFRHAPI__MatchTimelineEvent_1a9edba849ad084d91d5f74c4f1505a376"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt3Null`](#structFRHAPI__MatchTimelineEvent_1a66ee75ab417f11902d5e2970f70a1ea8)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a66ee75ab417f11902d5e2970f70a1ea8"></a>

Checks whether Int3_Optional is set to null.

#### `public inline int32 & `[`GetInt4`](#structFRHAPI__MatchTimelineEvent_1a7ddbc09df0b7fea1906d6e411b5f967d)`()` <a id="structFRHAPI__MatchTimelineEvent_1a7ddbc09df0b7fea1906d6e411b5f967d"></a>

Gets the value of Int4_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt4`](#structFRHAPI__MatchTimelineEvent_1a877871e4b593859b7b259ce775b36cf2)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a877871e4b593859b7b259ce775b36cf2"></a>

Gets the value of Int4_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt4`](#structFRHAPI__MatchTimelineEvent_1a18e7466a67b968e5cbecb0c73ece356f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a18e7466a67b968e5cbecb0c73ece356f"></a>

Gets the value of Int4_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt4`](#structFRHAPI__MatchTimelineEvent_1aff26abad2457dd320d5056082170315c)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aff26abad2457dd320d5056082170315c"></a>

Fills OutValue with the value of Int4_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt4OrNull`](#structFRHAPI__MatchTimelineEvent_1a991d63ab4690b38294b40b584fdb6ace)`()` <a id="structFRHAPI__MatchTimelineEvent_1a991d63ab4690b38294b40b584fdb6ace"></a>

Returns a pointer to Int4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt4OrNull`](#structFRHAPI__MatchTimelineEvent_1a057d5f508e7cf3f5e0526491047e9d66)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a057d5f508e7cf3f5e0526491047e9d66"></a>

Returns a pointer to Int4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt4`](#structFRHAPI__MatchTimelineEvent_1a0e6e8d9f64240e77084df96038997ddc)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a0e6e8d9f64240e77084df96038997ddc"></a>

Sets the value of Int4_Optional and also sets Int4_IsSet to true.

#### `public inline void `[`SetInt4`](#structFRHAPI__MatchTimelineEvent_1abfec0466725be2e68295b54e14b7f775)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1abfec0466725be2e68295b54e14b7f775"></a>

Sets the value of Int4_Optional and also sets Int4_IsSet to true using move semantics.

#### `public inline void `[`ClearInt4`](#structFRHAPI__MatchTimelineEvent_1ab06d2f36183d8c117d7654fddc34f23d)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab06d2f36183d8c117d7654fddc34f23d"></a>

Clears the value of Int4_Optional and sets Int4_IsSet to false.

#### `public inline bool `[`IsInt4Set`](#structFRHAPI__MatchTimelineEvent_1a49369da3bed20c0ffeb64442ebcd1019)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a49369da3bed20c0ffeb64442ebcd1019"></a>

Checks whether Int4_Optional has been set.

#### `public inline bool `[`IsInt4DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a72be44b7e7e2083a4a5c07e00e3ebedb)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a72be44b7e7e2083a4a5c07e00e3ebedb"></a>

Returns true if Int4_Optional is set and matches the default value.

#### `public inline void `[`SetInt4ToDefault`](#structFRHAPI__MatchTimelineEvent_1a48715b8894a91cdbef1e56acf0fe2090)`()` <a id="structFRHAPI__MatchTimelineEvent_1a48715b8894a91cdbef1e56acf0fe2090"></a>

Sets the value of Int4_Optional to its default and also sets Int4_IsSet to true.

#### `public inline void `[`SetInt4ToNull`](#structFRHAPI__MatchTimelineEvent_1a5a98ae31e5a65fa4150ef65dde912d10)`()` <a id="structFRHAPI__MatchTimelineEvent_1a5a98ae31e5a65fa4150ef65dde912d10"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt4Null`](#structFRHAPI__MatchTimelineEvent_1aa871a0ebd540daf17881a3a55e08c86d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa871a0ebd540daf17881a3a55e08c86d"></a>

Checks whether Int4_Optional is set to null.

#### `public inline int32 & `[`GetInt5`](#structFRHAPI__MatchTimelineEvent_1a9d2e32b7bce591dea2fce6d10afbe005)`()` <a id="structFRHAPI__MatchTimelineEvent_1a9d2e32b7bce591dea2fce6d10afbe005"></a>

Gets the value of Int5_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt5`](#structFRHAPI__MatchTimelineEvent_1a939f1980aaceb35fb83c045d761fc375)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a939f1980aaceb35fb83c045d761fc375"></a>

Gets the value of Int5_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt5`](#structFRHAPI__MatchTimelineEvent_1a1b9721482a8e91c676303280dde46861)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a1b9721482a8e91c676303280dde46861"></a>

Gets the value of Int5_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt5`](#structFRHAPI__MatchTimelineEvent_1a81a03568c4498bcb3abcaf85d09b6caf)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a81a03568c4498bcb3abcaf85d09b6caf"></a>

Fills OutValue with the value of Int5_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt5OrNull`](#structFRHAPI__MatchTimelineEvent_1a798f920be7b589e75e99a55788f45fcd)`()` <a id="structFRHAPI__MatchTimelineEvent_1a798f920be7b589e75e99a55788f45fcd"></a>

Returns a pointer to Int5_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt5OrNull`](#structFRHAPI__MatchTimelineEvent_1a0913ee60cac3056940cc0806d6187fdb)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0913ee60cac3056940cc0806d6187fdb"></a>

Returns a pointer to Int5_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt5`](#structFRHAPI__MatchTimelineEvent_1a8bdbe802753c8d26833fa55153993b0e)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a8bdbe802753c8d26833fa55153993b0e"></a>

Sets the value of Int5_Optional and also sets Int5_IsSet to true.

#### `public inline void `[`SetInt5`](#structFRHAPI__MatchTimelineEvent_1a87f0f166a2e342a88c8e79dda4c23ef4)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a87f0f166a2e342a88c8e79dda4c23ef4"></a>

Sets the value of Int5_Optional and also sets Int5_IsSet to true using move semantics.

#### `public inline void `[`ClearInt5`](#structFRHAPI__MatchTimelineEvent_1a3589dab957e07c67cfefb79d6595a580)`()` <a id="structFRHAPI__MatchTimelineEvent_1a3589dab957e07c67cfefb79d6595a580"></a>

Clears the value of Int5_Optional and sets Int5_IsSet to false.

#### `public inline bool `[`IsInt5Set`](#structFRHAPI__MatchTimelineEvent_1a1ee484acbc7141c844be445524572ff0)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1ee484acbc7141c844be445524572ff0"></a>

Checks whether Int5_Optional has been set.

#### `public inline bool `[`IsInt5DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a8cc358253157fa8f51c9aa60e143e140)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8cc358253157fa8f51c9aa60e143e140"></a>

Returns true if Int5_Optional is set and matches the default value.

#### `public inline void `[`SetInt5ToDefault`](#structFRHAPI__MatchTimelineEvent_1aa0cf1b060863a2558bf265deac3cf382)`()` <a id="structFRHAPI__MatchTimelineEvent_1aa0cf1b060863a2558bf265deac3cf382"></a>

Sets the value of Int5_Optional to its default and also sets Int5_IsSet to true.

#### `public inline void `[`SetInt5ToNull`](#structFRHAPI__MatchTimelineEvent_1abe78bbafc6e10ffb75ed2b43247b5e3f)`()` <a id="structFRHAPI__MatchTimelineEvent_1abe78bbafc6e10ffb75ed2b43247b5e3f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt5Null`](#structFRHAPI__MatchTimelineEvent_1aa6bc5ef306d5d7065a37327032751ec9)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa6bc5ef306d5d7065a37327032751ec9"></a>

Checks whether Int5_Optional is set to null.

#### `public inline int32 & `[`GetInt6`](#structFRHAPI__MatchTimelineEvent_1a9986beecc83b309a432364ddb605739d)`()` <a id="structFRHAPI__MatchTimelineEvent_1a9986beecc83b309a432364ddb605739d"></a>

Gets the value of Int6_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt6`](#structFRHAPI__MatchTimelineEvent_1a6e7839f26c0dda620a9b71bee3111617)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a6e7839f26c0dda620a9b71bee3111617"></a>

Gets the value of Int6_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt6`](#structFRHAPI__MatchTimelineEvent_1a11893f631c8da0bbe8688cf9b0a0fafe)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a11893f631c8da0bbe8688cf9b0a0fafe"></a>

Gets the value of Int6_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt6`](#structFRHAPI__MatchTimelineEvent_1ad1894099949ef48379d760aff54f8816)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ad1894099949ef48379d760aff54f8816"></a>

Fills OutValue with the value of Int6_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt6OrNull`](#structFRHAPI__MatchTimelineEvent_1a5705c7b0f187385ff6847b5478bb1a6e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a5705c7b0f187385ff6847b5478bb1a6e"></a>

Returns a pointer to Int6_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt6OrNull`](#structFRHAPI__MatchTimelineEvent_1a0fd876955541be389f69d20c13b79165)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0fd876955541be389f69d20c13b79165"></a>

Returns a pointer to Int6_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt6`](#structFRHAPI__MatchTimelineEvent_1af0ce78926903480eedddc86f20871adc)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1af0ce78926903480eedddc86f20871adc"></a>

Sets the value of Int6_Optional and also sets Int6_IsSet to true.

#### `public inline void `[`SetInt6`](#structFRHAPI__MatchTimelineEvent_1a3f6ef4d93c4c5bf34672fe2b1a447d17)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a3f6ef4d93c4c5bf34672fe2b1a447d17"></a>

Sets the value of Int6_Optional and also sets Int6_IsSet to true using move semantics.

#### `public inline void `[`ClearInt6`](#structFRHAPI__MatchTimelineEvent_1aef64a533f9aab3dc91825d0f61bdbf9b)`()` <a id="structFRHAPI__MatchTimelineEvent_1aef64a533f9aab3dc91825d0f61bdbf9b"></a>

Clears the value of Int6_Optional and sets Int6_IsSet to false.

#### `public inline bool `[`IsInt6Set`](#structFRHAPI__MatchTimelineEvent_1a862b2028e34a61f7ac658eeaa28e0863)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a862b2028e34a61f7ac658eeaa28e0863"></a>

Checks whether Int6_Optional has been set.

#### `public inline bool `[`IsInt6DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a7bb15e35dc730694f77cbc57c0a7e1a5)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7bb15e35dc730694f77cbc57c0a7e1a5"></a>

Returns true if Int6_Optional is set and matches the default value.

#### `public inline void `[`SetInt6ToDefault`](#structFRHAPI__MatchTimelineEvent_1ae7602d983317fc367e02fcaa666fadfa)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae7602d983317fc367e02fcaa666fadfa"></a>

Sets the value of Int6_Optional to its default and also sets Int6_IsSet to true.

#### `public inline void `[`SetInt6ToNull`](#structFRHAPI__MatchTimelineEvent_1a4f18c1df4924c7d9c25b8c636dacae41)`()` <a id="structFRHAPI__MatchTimelineEvent_1a4f18c1df4924c7d9c25b8c636dacae41"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt6Null`](#structFRHAPI__MatchTimelineEvent_1a03803d439b2103b3d89a9ba807806290)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a03803d439b2103b3d89a9ba807806290"></a>

Checks whether Int6_Optional is set to null.

#### `public inline int32 & `[`GetInt7`](#structFRHAPI__MatchTimelineEvent_1a49efa031cb498e45f0947e3c80780e5e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a49efa031cb498e45f0947e3c80780e5e"></a>

Gets the value of Int7_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt7`](#structFRHAPI__MatchTimelineEvent_1a25314a9d9556b983891c0707519a2da6)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a25314a9d9556b983891c0707519a2da6"></a>

Gets the value of Int7_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt7`](#structFRHAPI__MatchTimelineEvent_1ab16d2527125bf733af5320b0eb2c1ed4)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ab16d2527125bf733af5320b0eb2c1ed4"></a>

Gets the value of Int7_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt7`](#structFRHAPI__MatchTimelineEvent_1a896b1cdf5c7f0b0eb121247ee7f2029e)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a896b1cdf5c7f0b0eb121247ee7f2029e"></a>

Fills OutValue with the value of Int7_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt7OrNull`](#structFRHAPI__MatchTimelineEvent_1abc4c9d0f4ed6c70f0e00b9705a649d93)`()` <a id="structFRHAPI__MatchTimelineEvent_1abc4c9d0f4ed6c70f0e00b9705a649d93"></a>

Returns a pointer to Int7_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt7OrNull`](#structFRHAPI__MatchTimelineEvent_1a42a0cc927bef7b12eb7e57e5be238c81)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a42a0cc927bef7b12eb7e57e5be238c81"></a>

Returns a pointer to Int7_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt7`](#structFRHAPI__MatchTimelineEvent_1ae96bb670f96d7f2cad9869d8aa93c1ae)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ae96bb670f96d7f2cad9869d8aa93c1ae"></a>

Sets the value of Int7_Optional and also sets Int7_IsSet to true.

#### `public inline void `[`SetInt7`](#structFRHAPI__MatchTimelineEvent_1ad6e948aa126e331397a6dc2c1df88792)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ad6e948aa126e331397a6dc2c1df88792"></a>

Sets the value of Int7_Optional and also sets Int7_IsSet to true using move semantics.

#### `public inline void `[`ClearInt7`](#structFRHAPI__MatchTimelineEvent_1af6f9dcf4af7ce77152e4d8a40fd750e4)`()` <a id="structFRHAPI__MatchTimelineEvent_1af6f9dcf4af7ce77152e4d8a40fd750e4"></a>

Clears the value of Int7_Optional and sets Int7_IsSet to false.

#### `public inline bool `[`IsInt7Set`](#structFRHAPI__MatchTimelineEvent_1a571eb2039082297baeb91be80a00be08)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a571eb2039082297baeb91be80a00be08"></a>

Checks whether Int7_Optional has been set.

#### `public inline bool `[`IsInt7DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a9b5b77677331bf9d3912645c349fc552)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a9b5b77677331bf9d3912645c349fc552"></a>

Returns true if Int7_Optional is set and matches the default value.

#### `public inline void `[`SetInt7ToDefault`](#structFRHAPI__MatchTimelineEvent_1af44053a9972c12a2dc3b452a1626ff7a)`()` <a id="structFRHAPI__MatchTimelineEvent_1af44053a9972c12a2dc3b452a1626ff7a"></a>

Sets the value of Int7_Optional to its default and also sets Int7_IsSet to true.

#### `public inline void `[`SetInt7ToNull`](#structFRHAPI__MatchTimelineEvent_1added6ce351e9a5e8b5debc5b8eb28f61)`()` <a id="structFRHAPI__MatchTimelineEvent_1added6ce351e9a5e8b5debc5b8eb28f61"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt7Null`](#structFRHAPI__MatchTimelineEvent_1a5c2090edd4ef2986503b1d0bf8e8ad73)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5c2090edd4ef2986503b1d0bf8e8ad73"></a>

Checks whether Int7_Optional is set to null.

#### `public inline int32 & `[`GetInt8`](#structFRHAPI__MatchTimelineEvent_1a4efec2ed0d8e9658cbeefe2887139f94)`()` <a id="structFRHAPI__MatchTimelineEvent_1a4efec2ed0d8e9658cbeefe2887139f94"></a>

Gets the value of Int8_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt8`](#structFRHAPI__MatchTimelineEvent_1a54cf5816365edd0e5b67192536b57209)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a54cf5816365edd0e5b67192536b57209"></a>

Gets the value of Int8_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt8`](#structFRHAPI__MatchTimelineEvent_1a24477667860f43acf5b1a7c5ab2099fa)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a24477667860f43acf5b1a7c5ab2099fa"></a>

Gets the value of Int8_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt8`](#structFRHAPI__MatchTimelineEvent_1a052b419f11414d879bffe081f66e388b)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a052b419f11414d879bffe081f66e388b"></a>

Fills OutValue with the value of Int8_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt8OrNull`](#structFRHAPI__MatchTimelineEvent_1a9fc9437478886ef08df8485427bbd042)`()` <a id="structFRHAPI__MatchTimelineEvent_1a9fc9437478886ef08df8485427bbd042"></a>

Returns a pointer to Int8_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt8OrNull`](#structFRHAPI__MatchTimelineEvent_1adcb81a487b6d45ea4c8c83e0bdcfa7e9)`() const` <a id="structFRHAPI__MatchTimelineEvent_1adcb81a487b6d45ea4c8c83e0bdcfa7e9"></a>

Returns a pointer to Int8_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt8`](#structFRHAPI__MatchTimelineEvent_1ac389519b68e387351b9f12c1eccb19b3)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ac389519b68e387351b9f12c1eccb19b3"></a>

Sets the value of Int8_Optional and also sets Int8_IsSet to true.

#### `public inline void `[`SetInt8`](#structFRHAPI__MatchTimelineEvent_1a45fb2e5c1b6a222976784f804f241a01)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a45fb2e5c1b6a222976784f804f241a01"></a>

Sets the value of Int8_Optional and also sets Int8_IsSet to true using move semantics.

#### `public inline void `[`ClearInt8`](#structFRHAPI__MatchTimelineEvent_1a9b5fb5a3d9f2a6a6651f6c481814724c)`()` <a id="structFRHAPI__MatchTimelineEvent_1a9b5fb5a3d9f2a6a6651f6c481814724c"></a>

Clears the value of Int8_Optional and sets Int8_IsSet to false.

#### `public inline bool `[`IsInt8Set`](#structFRHAPI__MatchTimelineEvent_1a5cc1abf432ce2b7e99faca8f5d69e05f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5cc1abf432ce2b7e99faca8f5d69e05f"></a>

Checks whether Int8_Optional has been set.

#### `public inline bool `[`IsInt8DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a1d2cf215aded9eab5b9d46c3e9c4310d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1d2cf215aded9eab5b9d46c3e9c4310d"></a>

Returns true if Int8_Optional is set and matches the default value.

#### `public inline void `[`SetInt8ToDefault`](#structFRHAPI__MatchTimelineEvent_1aa81f5709794ac67b4177c9db3fe837b0)`()` <a id="structFRHAPI__MatchTimelineEvent_1aa81f5709794ac67b4177c9db3fe837b0"></a>

Sets the value of Int8_Optional to its default and also sets Int8_IsSet to true.

#### `public inline void `[`SetInt8ToNull`](#structFRHAPI__MatchTimelineEvent_1aa30b62c7e189ccdf53f6d503a8ec3bba)`()` <a id="structFRHAPI__MatchTimelineEvent_1aa30b62c7e189ccdf53f6d503a8ec3bba"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt8Null`](#structFRHAPI__MatchTimelineEvent_1aeccd21807af210d8be1173ebcd78bbdb)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aeccd21807af210d8be1173ebcd78bbdb"></a>

Checks whether Int8_Optional is set to null.

#### `public inline int32 & `[`GetInt9`](#structFRHAPI__MatchTimelineEvent_1af789cba104499423e69911b54cec2bef)`()` <a id="structFRHAPI__MatchTimelineEvent_1af789cba104499423e69911b54cec2bef"></a>

Gets the value of Int9_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt9`](#structFRHAPI__MatchTimelineEvent_1ab3acd01c870b18bee617ff33650eae73)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab3acd01c870b18bee617ff33650eae73"></a>

Gets the value of Int9_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt9`](#structFRHAPI__MatchTimelineEvent_1a72b80af6e4cf1b105af2c761141f5529)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a72b80af6e4cf1b105af2c761141f5529"></a>

Gets the value of Int9_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt9`](#structFRHAPI__MatchTimelineEvent_1a54af575b3f11bf2a6232bede0e67c747)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a54af575b3f11bf2a6232bede0e67c747"></a>

Fills OutValue with the value of Int9_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt9OrNull`](#structFRHAPI__MatchTimelineEvent_1a64d07656e6da19526f98103574472491)`()` <a id="structFRHAPI__MatchTimelineEvent_1a64d07656e6da19526f98103574472491"></a>

Returns a pointer to Int9_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt9OrNull`](#structFRHAPI__MatchTimelineEvent_1a1b3873bb90293253691e351fac19fe7f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1b3873bb90293253691e351fac19fe7f"></a>

Returns a pointer to Int9_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt9`](#structFRHAPI__MatchTimelineEvent_1abd6e326b5b76e8c3facb53698f693952)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1abd6e326b5b76e8c3facb53698f693952"></a>

Sets the value of Int9_Optional and also sets Int9_IsSet to true.

#### `public inline void `[`SetInt9`](#structFRHAPI__MatchTimelineEvent_1adcf35e2b7176d1995ceb03ee1f828510)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1adcf35e2b7176d1995ceb03ee1f828510"></a>

Sets the value of Int9_Optional and also sets Int9_IsSet to true using move semantics.

#### `public inline void `[`ClearInt9`](#structFRHAPI__MatchTimelineEvent_1ab23b016932797a2343a47055e00e8e52)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab23b016932797a2343a47055e00e8e52"></a>

Clears the value of Int9_Optional and sets Int9_IsSet to false.

#### `public inline bool `[`IsInt9Set`](#structFRHAPI__MatchTimelineEvent_1a9d6b72f44c3dbabe1974462ddaa2bd11)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a9d6b72f44c3dbabe1974462ddaa2bd11"></a>

Checks whether Int9_Optional has been set.

#### `public inline bool `[`IsInt9DefaultValue`](#structFRHAPI__MatchTimelineEvent_1ac3af0cb61d105e8aef6b85c44fdd8af9)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac3af0cb61d105e8aef6b85c44fdd8af9"></a>

Returns true if Int9_Optional is set and matches the default value.

#### `public inline void `[`SetInt9ToDefault`](#structFRHAPI__MatchTimelineEvent_1ade2ea28994252a8d41763c480637ddcd)`()` <a id="structFRHAPI__MatchTimelineEvent_1ade2ea28994252a8d41763c480637ddcd"></a>

Sets the value of Int9_Optional to its default and also sets Int9_IsSet to true.

#### `public inline void `[`SetInt9ToNull`](#structFRHAPI__MatchTimelineEvent_1a6d669a38a6f31a2b5e0e482309fb60cc)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6d669a38a6f31a2b5e0e482309fb60cc"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt9Null`](#structFRHAPI__MatchTimelineEvent_1a08fecab443e1cdfe23d78ddd0b6becdf)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a08fecab443e1cdfe23d78ddd0b6becdf"></a>

Checks whether Int9_Optional is set to null.

#### `public inline int32 & `[`GetInt10`](#structFRHAPI__MatchTimelineEvent_1ab2e54b2525b380c47fdee74c107e5f17)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab2e54b2525b380c47fdee74c107e5f17"></a>

Gets the value of Int10_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt10`](#structFRHAPI__MatchTimelineEvent_1a1377718688c6fd59e10144bda6d1a51d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1377718688c6fd59e10144bda6d1a51d"></a>

Gets the value of Int10_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt10`](#structFRHAPI__MatchTimelineEvent_1adf8c5ff6fd00f29667a284e09f2c70f7)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1adf8c5ff6fd00f29667a284e09f2c70f7"></a>

Gets the value of Int10_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt10`](#structFRHAPI__MatchTimelineEvent_1a569f800cf6633ee58c8d516d85456333)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a569f800cf6633ee58c8d516d85456333"></a>

Fills OutValue with the value of Int10_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt10OrNull`](#structFRHAPI__MatchTimelineEvent_1a91714b76253e1c3b1cdb779673f5c1a1)`()` <a id="structFRHAPI__MatchTimelineEvent_1a91714b76253e1c3b1cdb779673f5c1a1"></a>

Returns a pointer to Int10_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt10OrNull`](#structFRHAPI__MatchTimelineEvent_1adf63910374f0253c68d8953021ff9001)`() const` <a id="structFRHAPI__MatchTimelineEvent_1adf63910374f0253c68d8953021ff9001"></a>

Returns a pointer to Int10_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt10`](#structFRHAPI__MatchTimelineEvent_1a02b616465d17bddc6849a1cc8b449b4f)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a02b616465d17bddc6849a1cc8b449b4f"></a>

Sets the value of Int10_Optional and also sets Int10_IsSet to true.

#### `public inline void `[`SetInt10`](#structFRHAPI__MatchTimelineEvent_1a6d987ead9945d9d06c4e8097219f6ba5)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a6d987ead9945d9d06c4e8097219f6ba5"></a>

Sets the value of Int10_Optional and also sets Int10_IsSet to true using move semantics.

#### `public inline void `[`ClearInt10`](#structFRHAPI__MatchTimelineEvent_1af45e752cfef3389a824c49bcc8e5ba96)`()` <a id="structFRHAPI__MatchTimelineEvent_1af45e752cfef3389a824c49bcc8e5ba96"></a>

Clears the value of Int10_Optional and sets Int10_IsSet to false.

#### `public inline bool `[`IsInt10Set`](#structFRHAPI__MatchTimelineEvent_1aedffe12aa0ffa336edb214f716b5f2e0)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aedffe12aa0ffa336edb214f716b5f2e0"></a>

Checks whether Int10_Optional has been set.

#### `public inline bool `[`IsInt10DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a7e62f36f8b1c6290fc27b86f2252fc2f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7e62f36f8b1c6290fc27b86f2252fc2f"></a>

Returns true if Int10_Optional is set and matches the default value.

#### `public inline void `[`SetInt10ToDefault`](#structFRHAPI__MatchTimelineEvent_1a15efa3a1bfe07a96dadaee8461d21ba8)`()` <a id="structFRHAPI__MatchTimelineEvent_1a15efa3a1bfe07a96dadaee8461d21ba8"></a>

Sets the value of Int10_Optional to its default and also sets Int10_IsSet to true.

#### `public inline void `[`SetInt10ToNull`](#structFRHAPI__MatchTimelineEvent_1af7ceac3174475d38d084f8e1601dfcbf)`()` <a id="structFRHAPI__MatchTimelineEvent_1af7ceac3174475d38d084f8e1601dfcbf"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt10Null`](#structFRHAPI__MatchTimelineEvent_1a747fa4c3697ed9176522386351166926)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a747fa4c3697ed9176522386351166926"></a>

Checks whether Int10_Optional is set to null.

#### `public inline int32 & `[`GetInt11`](#structFRHAPI__MatchTimelineEvent_1a6ec12f918b457e095da1b81e4a8ad086)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6ec12f918b457e095da1b81e4a8ad086"></a>

Gets the value of Int11_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt11`](#structFRHAPI__MatchTimelineEvent_1a30530d9bdace512196ba572336916e14)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a30530d9bdace512196ba572336916e14"></a>

Gets the value of Int11_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt11`](#structFRHAPI__MatchTimelineEvent_1a8f462ffa1b4290c1e0cda6f55f83644e)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a8f462ffa1b4290c1e0cda6f55f83644e"></a>

Gets the value of Int11_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt11`](#structFRHAPI__MatchTimelineEvent_1a970f82e955d498ae01ffcaba73447013)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a970f82e955d498ae01ffcaba73447013"></a>

Fills OutValue with the value of Int11_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt11OrNull`](#structFRHAPI__MatchTimelineEvent_1ab8ada775c320cf20fd72909836f614af)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab8ada775c320cf20fd72909836f614af"></a>

Returns a pointer to Int11_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt11OrNull`](#structFRHAPI__MatchTimelineEvent_1aaeb399af2c3068e7328af01c5b3e467d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aaeb399af2c3068e7328af01c5b3e467d"></a>

Returns a pointer to Int11_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt11`](#structFRHAPI__MatchTimelineEvent_1a3cf0eab34825db1f7177bec01976995a)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a3cf0eab34825db1f7177bec01976995a"></a>

Sets the value of Int11_Optional and also sets Int11_IsSet to true.

#### `public inline void `[`SetInt11`](#structFRHAPI__MatchTimelineEvent_1a99a58bf1e02d6f6913b769c3a1a47e5d)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a99a58bf1e02d6f6913b769c3a1a47e5d"></a>

Sets the value of Int11_Optional and also sets Int11_IsSet to true using move semantics.

#### `public inline void `[`ClearInt11`](#structFRHAPI__MatchTimelineEvent_1a76a9827fa7e9b9aafbb8c4266a1bf037)`()` <a id="structFRHAPI__MatchTimelineEvent_1a76a9827fa7e9b9aafbb8c4266a1bf037"></a>

Clears the value of Int11_Optional and sets Int11_IsSet to false.

#### `public inline bool `[`IsInt11Set`](#structFRHAPI__MatchTimelineEvent_1a74c2acff8a8d1d949a3ee7141fc932df)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a74c2acff8a8d1d949a3ee7141fc932df"></a>

Checks whether Int11_Optional has been set.

#### `public inline bool `[`IsInt11DefaultValue`](#structFRHAPI__MatchTimelineEvent_1aa39f5983447ee07be5ec870905ef66b8)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa39f5983447ee07be5ec870905ef66b8"></a>

Returns true if Int11_Optional is set and matches the default value.

#### `public inline void `[`SetInt11ToDefault`](#structFRHAPI__MatchTimelineEvent_1a5e918c61740a6c87f8abe3437f921d70)`()` <a id="structFRHAPI__MatchTimelineEvent_1a5e918c61740a6c87f8abe3437f921d70"></a>

Sets the value of Int11_Optional to its default and also sets Int11_IsSet to true.

#### `public inline void `[`SetInt11ToNull`](#structFRHAPI__MatchTimelineEvent_1af97d0e9b025b92a32388bdf3db657f71)`()` <a id="structFRHAPI__MatchTimelineEvent_1af97d0e9b025b92a32388bdf3db657f71"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt11Null`](#structFRHAPI__MatchTimelineEvent_1a341a5d7060c0d9de0365bebd58d750c6)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a341a5d7060c0d9de0365bebd58d750c6"></a>

Checks whether Int11_Optional is set to null.

#### `public inline int32 & `[`GetInt12`](#structFRHAPI__MatchTimelineEvent_1a41e280023f3efb8e9dc77f70813f081f)`()` <a id="structFRHAPI__MatchTimelineEvent_1a41e280023f3efb8e9dc77f70813f081f"></a>

Gets the value of Int12_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt12`](#structFRHAPI__MatchTimelineEvent_1ac425fd72d0ff2d89b472b6a831f0c18f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac425fd72d0ff2d89b472b6a831f0c18f"></a>

Gets the value of Int12_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt12`](#structFRHAPI__MatchTimelineEvent_1ab3049eb21631d92b8c7f1485059413a5)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ab3049eb21631d92b8c7f1485059413a5"></a>

Gets the value of Int12_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt12`](#structFRHAPI__MatchTimelineEvent_1a7360230c2b8602c1cb01f5f44172a6ba)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a7360230c2b8602c1cb01f5f44172a6ba"></a>

Fills OutValue with the value of Int12_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt12OrNull`](#structFRHAPI__MatchTimelineEvent_1aac58230200470dec2c104a3414aa6afb)`()` <a id="structFRHAPI__MatchTimelineEvent_1aac58230200470dec2c104a3414aa6afb"></a>

Returns a pointer to Int12_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt12OrNull`](#structFRHAPI__MatchTimelineEvent_1a78f3dc2523fee577275e318e84487e12)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a78f3dc2523fee577275e318e84487e12"></a>

Returns a pointer to Int12_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt12`](#structFRHAPI__MatchTimelineEvent_1a33a71d7f140da73662892280ee1cb706)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a33a71d7f140da73662892280ee1cb706"></a>

Sets the value of Int12_Optional and also sets Int12_IsSet to true.

#### `public inline void `[`SetInt12`](#structFRHAPI__MatchTimelineEvent_1ac6925dd34af081826c6166a061dc9ebf)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ac6925dd34af081826c6166a061dc9ebf"></a>

Sets the value of Int12_Optional and also sets Int12_IsSet to true using move semantics.

#### `public inline void `[`ClearInt12`](#structFRHAPI__MatchTimelineEvent_1af992dffe417493254d7c5b518928d05c)`()` <a id="structFRHAPI__MatchTimelineEvent_1af992dffe417493254d7c5b518928d05c"></a>

Clears the value of Int12_Optional and sets Int12_IsSet to false.

#### `public inline bool `[`IsInt12Set`](#structFRHAPI__MatchTimelineEvent_1a4d56c6bfa9b08d91b9f7a9b2b7796900)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4d56c6bfa9b08d91b9f7a9b2b7796900"></a>

Checks whether Int12_Optional has been set.

#### `public inline bool `[`IsInt12DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a10c94348ce0d96060266dad3c80fb440)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a10c94348ce0d96060266dad3c80fb440"></a>

Returns true if Int12_Optional is set and matches the default value.

#### `public inline void `[`SetInt12ToDefault`](#structFRHAPI__MatchTimelineEvent_1a36ac6797c006ada99c4aa80625f06f0e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a36ac6797c006ada99c4aa80625f06f0e"></a>

Sets the value of Int12_Optional to its default and also sets Int12_IsSet to true.

#### `public inline void `[`SetInt12ToNull`](#structFRHAPI__MatchTimelineEvent_1ab304890dfcc85739600092f79eb82a52)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab304890dfcc85739600092f79eb82a52"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt12Null`](#structFRHAPI__MatchTimelineEvent_1a1f94e16b83f12ac29791cca3adc02caf)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1f94e16b83f12ac29791cca3adc02caf"></a>

Checks whether Int12_Optional is set to null.

#### `public inline int32 & `[`GetInt13`](#structFRHAPI__MatchTimelineEvent_1ad40269c67b5a6517f626ab02aadded3d)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad40269c67b5a6517f626ab02aadded3d"></a>

Gets the value of Int13_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt13`](#structFRHAPI__MatchTimelineEvent_1a0f8ced3d1daa07c0ea037c6af249d4c2)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0f8ced3d1daa07c0ea037c6af249d4c2"></a>

Gets the value of Int13_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt13`](#structFRHAPI__MatchTimelineEvent_1af77f5b6a5387cd34ca790c036870c4dc)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1af77f5b6a5387cd34ca790c036870c4dc"></a>

Gets the value of Int13_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt13`](#structFRHAPI__MatchTimelineEvent_1af8edea976a65c889cf15a743125f97ce)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1af8edea976a65c889cf15a743125f97ce"></a>

Fills OutValue with the value of Int13_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt13OrNull`](#structFRHAPI__MatchTimelineEvent_1a7f0ee8060c79bbc13c8fa693ebf359b5)`()` <a id="structFRHAPI__MatchTimelineEvent_1a7f0ee8060c79bbc13c8fa693ebf359b5"></a>

Returns a pointer to Int13_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt13OrNull`](#structFRHAPI__MatchTimelineEvent_1a2a9293842d619596d1dcef9be216fd24)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2a9293842d619596d1dcef9be216fd24"></a>

Returns a pointer to Int13_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt13`](#structFRHAPI__MatchTimelineEvent_1afb7088d41378b1bb5bb0761234da139f)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1afb7088d41378b1bb5bb0761234da139f"></a>

Sets the value of Int13_Optional and also sets Int13_IsSet to true.

#### `public inline void `[`SetInt13`](#structFRHAPI__MatchTimelineEvent_1a396898d5f58d42988d1194fd0e6ef585)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a396898d5f58d42988d1194fd0e6ef585"></a>

Sets the value of Int13_Optional and also sets Int13_IsSet to true using move semantics.

#### `public inline void `[`ClearInt13`](#structFRHAPI__MatchTimelineEvent_1a6a4568363d69384f53fea667d36f425a)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6a4568363d69384f53fea667d36f425a"></a>

Clears the value of Int13_Optional and sets Int13_IsSet to false.

#### `public inline bool `[`IsInt13Set`](#structFRHAPI__MatchTimelineEvent_1a7fbc214899d510934ee583938a864d6a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7fbc214899d510934ee583938a864d6a"></a>

Checks whether Int13_Optional has been set.

#### `public inline bool `[`IsInt13DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a7edb3cf96b263312b97a2ff26afc4a7f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7edb3cf96b263312b97a2ff26afc4a7f"></a>

Returns true if Int13_Optional is set and matches the default value.

#### `public inline void `[`SetInt13ToDefault`](#structFRHAPI__MatchTimelineEvent_1a56dc37c69976052ecdd9d6ea57c7b035)`()` <a id="structFRHAPI__MatchTimelineEvent_1a56dc37c69976052ecdd9d6ea57c7b035"></a>

Sets the value of Int13_Optional to its default and also sets Int13_IsSet to true.

#### `public inline void `[`SetInt13ToNull`](#structFRHAPI__MatchTimelineEvent_1a68888dd359a6fe7575f43aeb45d46ecf)`()` <a id="structFRHAPI__MatchTimelineEvent_1a68888dd359a6fe7575f43aeb45d46ecf"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt13Null`](#structFRHAPI__MatchTimelineEvent_1a8db422083d10887210fa271b0624091e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8db422083d10887210fa271b0624091e"></a>

Checks whether Int13_Optional is set to null.

#### `public inline int32 & `[`GetInt14`](#structFRHAPI__MatchTimelineEvent_1a03f2fba83f6e1dec29a9cce723a2bf3f)`()` <a id="structFRHAPI__MatchTimelineEvent_1a03f2fba83f6e1dec29a9cce723a2bf3f"></a>

Gets the value of Int14_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt14`](#structFRHAPI__MatchTimelineEvent_1a9a75770099a758775e5ec86ddff50aef)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a9a75770099a758775e5ec86ddff50aef"></a>

Gets the value of Int14_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt14`](#structFRHAPI__MatchTimelineEvent_1a84497b7fee4d9287ceb9801318fb3526)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a84497b7fee4d9287ceb9801318fb3526"></a>

Gets the value of Int14_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt14`](#structFRHAPI__MatchTimelineEvent_1aedd5f5bd575ddca2055fd95d3021c6c4)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aedd5f5bd575ddca2055fd95d3021c6c4"></a>

Fills OutValue with the value of Int14_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt14OrNull`](#structFRHAPI__MatchTimelineEvent_1a0736764534c07a02633c1c72d9193908)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0736764534c07a02633c1c72d9193908"></a>

Returns a pointer to Int14_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt14OrNull`](#structFRHAPI__MatchTimelineEvent_1ac7b0cc645ffdf3c83084a4067b2d5270)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac7b0cc645ffdf3c83084a4067b2d5270"></a>

Returns a pointer to Int14_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt14`](#structFRHAPI__MatchTimelineEvent_1a097da1755dace4eddfb009acca19c14a)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a097da1755dace4eddfb009acca19c14a"></a>

Sets the value of Int14_Optional and also sets Int14_IsSet to true.

#### `public inline void `[`SetInt14`](#structFRHAPI__MatchTimelineEvent_1a6439da2ae392621f254b628b72f54053)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a6439da2ae392621f254b628b72f54053"></a>

Sets the value of Int14_Optional and also sets Int14_IsSet to true using move semantics.

#### `public inline void `[`ClearInt14`](#structFRHAPI__MatchTimelineEvent_1af0d5514a7c74d727d998ddd9e81fd555)`()` <a id="structFRHAPI__MatchTimelineEvent_1af0d5514a7c74d727d998ddd9e81fd555"></a>

Clears the value of Int14_Optional and sets Int14_IsSet to false.

#### `public inline bool `[`IsInt14Set`](#structFRHAPI__MatchTimelineEvent_1a58cbe06e906c31fe4930ca0012d22ae2)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a58cbe06e906c31fe4930ca0012d22ae2"></a>

Checks whether Int14_Optional has been set.

#### `public inline bool `[`IsInt14DefaultValue`](#structFRHAPI__MatchTimelineEvent_1af1581855ab25621f87c7e101531b3292)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af1581855ab25621f87c7e101531b3292"></a>

Returns true if Int14_Optional is set and matches the default value.

#### `public inline void `[`SetInt14ToDefault`](#structFRHAPI__MatchTimelineEvent_1a251fce812ea0527552efa8d56a990403)`()` <a id="structFRHAPI__MatchTimelineEvent_1a251fce812ea0527552efa8d56a990403"></a>

Sets the value of Int14_Optional to its default and also sets Int14_IsSet to true.

#### `public inline void `[`SetInt14ToNull`](#structFRHAPI__MatchTimelineEvent_1a01f6b585eaaafad4dd8f3089a74cd0a9)`()` <a id="structFRHAPI__MatchTimelineEvent_1a01f6b585eaaafad4dd8f3089a74cd0a9"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt14Null`](#structFRHAPI__MatchTimelineEvent_1a8e3b010ebd7de540f41a453dbd547d4e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8e3b010ebd7de540f41a453dbd547d4e"></a>

Checks whether Int14_Optional is set to null.

#### `public inline int32 & `[`GetInt15`](#structFRHAPI__MatchTimelineEvent_1ad0f1f6d32d00bfc1fa37b8d17ef2d9c3)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad0f1f6d32d00bfc1fa37b8d17ef2d9c3"></a>

Gets the value of Int15_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt15`](#structFRHAPI__MatchTimelineEvent_1a954b34abeb4fccfb94e728ca8e7fabd3)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a954b34abeb4fccfb94e728ca8e7fabd3"></a>

Gets the value of Int15_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt15`](#structFRHAPI__MatchTimelineEvent_1ab4a063dd44a0894b559947e6050f4cb3)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ab4a063dd44a0894b559947e6050f4cb3"></a>

Gets the value of Int15_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt15`](#structFRHAPI__MatchTimelineEvent_1a3bb4f840006f026e66b5d0dd89b91afb)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a3bb4f840006f026e66b5d0dd89b91afb"></a>

Fills OutValue with the value of Int15_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt15OrNull`](#structFRHAPI__MatchTimelineEvent_1a6dc147b1bfca6278395bd6ed7d83cf1e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6dc147b1bfca6278395bd6ed7d83cf1e"></a>

Returns a pointer to Int15_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt15OrNull`](#structFRHAPI__MatchTimelineEvent_1a14063a9c8810716182ee8cecbb84cc66)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a14063a9c8810716182ee8cecbb84cc66"></a>

Returns a pointer to Int15_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt15`](#structFRHAPI__MatchTimelineEvent_1a154c20eec2c99662bd1715012da77102)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a154c20eec2c99662bd1715012da77102"></a>

Sets the value of Int15_Optional and also sets Int15_IsSet to true.

#### `public inline void `[`SetInt15`](#structFRHAPI__MatchTimelineEvent_1afdada12c726dc9c9c60ec51fdcd5a9c3)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1afdada12c726dc9c9c60ec51fdcd5a9c3"></a>

Sets the value of Int15_Optional and also sets Int15_IsSet to true using move semantics.

#### `public inline void `[`ClearInt15`](#structFRHAPI__MatchTimelineEvent_1a22ecb8062ca39378dd0130a29f08ad13)`()` <a id="structFRHAPI__MatchTimelineEvent_1a22ecb8062ca39378dd0130a29f08ad13"></a>

Clears the value of Int15_Optional and sets Int15_IsSet to false.

#### `public inline bool `[`IsInt15Set`](#structFRHAPI__MatchTimelineEvent_1aa4cf9c12c76d1876444b53669bf5b0af)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa4cf9c12c76d1876444b53669bf5b0af"></a>

Checks whether Int15_Optional has been set.

#### `public inline bool `[`IsInt15DefaultValue`](#structFRHAPI__MatchTimelineEvent_1abad0115d3f79679f4a70e61c7d5e179b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1abad0115d3f79679f4a70e61c7d5e179b"></a>

Returns true if Int15_Optional is set and matches the default value.

#### `public inline void `[`SetInt15ToDefault`](#structFRHAPI__MatchTimelineEvent_1a914722b5b2b535368b52e7dd8238fd8e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a914722b5b2b535368b52e7dd8238fd8e"></a>

Sets the value of Int15_Optional to its default and also sets Int15_IsSet to true.

#### `public inline void `[`SetInt15ToNull`](#structFRHAPI__MatchTimelineEvent_1ab2319a308a7956b61e1ed8f72140f242)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab2319a308a7956b61e1ed8f72140f242"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt15Null`](#structFRHAPI__MatchTimelineEvent_1a8e6d42c36a7e7993d3a03ffe1b9faa9d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8e6d42c36a7e7993d3a03ffe1b9faa9d"></a>

Checks whether Int15_Optional is set to null.

#### `public inline int32 & `[`GetInt16`](#structFRHAPI__MatchTimelineEvent_1a5f752ecb7e0b8081efdce0190624d0c3)`()` <a id="structFRHAPI__MatchTimelineEvent_1a5f752ecb7e0b8081efdce0190624d0c3"></a>

Gets the value of Int16_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt16`](#structFRHAPI__MatchTimelineEvent_1a8ed7d7353e0caf01b65b89e30bc49850)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8ed7d7353e0caf01b65b89e30bc49850"></a>

Gets the value of Int16_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt16`](#structFRHAPI__MatchTimelineEvent_1a29309925037042bd28cadf0d7c5d28ab)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a29309925037042bd28cadf0d7c5d28ab"></a>

Gets the value of Int16_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt16`](#structFRHAPI__MatchTimelineEvent_1a9e6287ae4cc9d8085e67de7f75f4021a)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a9e6287ae4cc9d8085e67de7f75f4021a"></a>

Fills OutValue with the value of Int16_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt16OrNull`](#structFRHAPI__MatchTimelineEvent_1a1007154c72530ab62883b3962979aaa5)`()` <a id="structFRHAPI__MatchTimelineEvent_1a1007154c72530ab62883b3962979aaa5"></a>

Returns a pointer to Int16_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt16OrNull`](#structFRHAPI__MatchTimelineEvent_1a75364ab6fed9c1a2547add5cf40365b4)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a75364ab6fed9c1a2547add5cf40365b4"></a>

Returns a pointer to Int16_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt16`](#structFRHAPI__MatchTimelineEvent_1a433210623310809e64b1c84a47614be1)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a433210623310809e64b1c84a47614be1"></a>

Sets the value of Int16_Optional and also sets Int16_IsSet to true.

#### `public inline void `[`SetInt16`](#structFRHAPI__MatchTimelineEvent_1a84dcc68ae5c248739b3e6dacfb936184)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a84dcc68ae5c248739b3e6dacfb936184"></a>

Sets the value of Int16_Optional and also sets Int16_IsSet to true using move semantics.

#### `public inline void `[`ClearInt16`](#structFRHAPI__MatchTimelineEvent_1a9cbdcb15ecb8fe18c3346e871ef92e61)`()` <a id="structFRHAPI__MatchTimelineEvent_1a9cbdcb15ecb8fe18c3346e871ef92e61"></a>

Clears the value of Int16_Optional and sets Int16_IsSet to false.

#### `public inline bool `[`IsInt16Set`](#structFRHAPI__MatchTimelineEvent_1a4ce28f64d357dadc66d160966bb48e20)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4ce28f64d357dadc66d160966bb48e20"></a>

Checks whether Int16_Optional has been set.

#### `public inline bool `[`IsInt16DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a1b6ff62f9d669838cdd5837e6cf0d036)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1b6ff62f9d669838cdd5837e6cf0d036"></a>

Returns true if Int16_Optional is set and matches the default value.

#### `public inline void `[`SetInt16ToDefault`](#structFRHAPI__MatchTimelineEvent_1a5cd21331cb8486db132cde99203de4c4)`()` <a id="structFRHAPI__MatchTimelineEvent_1a5cd21331cb8486db132cde99203de4c4"></a>

Sets the value of Int16_Optional to its default and also sets Int16_IsSet to true.

#### `public inline void `[`SetInt16ToNull`](#structFRHAPI__MatchTimelineEvent_1a42fde10fb360f34b025467b3fa1ce749)`()` <a id="structFRHAPI__MatchTimelineEvent_1a42fde10fb360f34b025467b3fa1ce749"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt16Null`](#structFRHAPI__MatchTimelineEvent_1a2290a6e943102ce4293ddf8b12539d15)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2290a6e943102ce4293ddf8b12539d15"></a>

Checks whether Int16_Optional is set to null.

#### `public inline int32 & `[`GetInt17`](#structFRHAPI__MatchTimelineEvent_1a77679646d845fc0d8df76943d9aa8e63)`()` <a id="structFRHAPI__MatchTimelineEvent_1a77679646d845fc0d8df76943d9aa8e63"></a>

Gets the value of Int17_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt17`](#structFRHAPI__MatchTimelineEvent_1a8ca00f6daa4f9f527bc5724278863251)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8ca00f6daa4f9f527bc5724278863251"></a>

Gets the value of Int17_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt17`](#structFRHAPI__MatchTimelineEvent_1adcb1392dbdd34e66ede561117be91458)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1adcb1392dbdd34e66ede561117be91458"></a>

Gets the value of Int17_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt17`](#structFRHAPI__MatchTimelineEvent_1a2445fa2231da078a874dcaa397fa7439)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a2445fa2231da078a874dcaa397fa7439"></a>

Fills OutValue with the value of Int17_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt17OrNull`](#structFRHAPI__MatchTimelineEvent_1aaa0a2964f9572e8994aa106f35defd80)`()` <a id="structFRHAPI__MatchTimelineEvent_1aaa0a2964f9572e8994aa106f35defd80"></a>

Returns a pointer to Int17_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt17OrNull`](#structFRHAPI__MatchTimelineEvent_1af52a370e09df8f89a824b6caa112ebd7)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af52a370e09df8f89a824b6caa112ebd7"></a>

Returns a pointer to Int17_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt17`](#structFRHAPI__MatchTimelineEvent_1a4f62c2da6f77d8933513e56f87bd45f5)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a4f62c2da6f77d8933513e56f87bd45f5"></a>

Sets the value of Int17_Optional and also sets Int17_IsSet to true.

#### `public inline void `[`SetInt17`](#structFRHAPI__MatchTimelineEvent_1ac7f169319a406065e62add4e0a5d19c8)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ac7f169319a406065e62add4e0a5d19c8"></a>

Sets the value of Int17_Optional and also sets Int17_IsSet to true using move semantics.

#### `public inline void `[`ClearInt17`](#structFRHAPI__MatchTimelineEvent_1a9080f59d9329edc3bba9343a3463a23a)`()` <a id="structFRHAPI__MatchTimelineEvent_1a9080f59d9329edc3bba9343a3463a23a"></a>

Clears the value of Int17_Optional and sets Int17_IsSet to false.

#### `public inline bool `[`IsInt17Set`](#structFRHAPI__MatchTimelineEvent_1a302c834827725a1730916992c3aeb3d6)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a302c834827725a1730916992c3aeb3d6"></a>

Checks whether Int17_Optional has been set.

#### `public inline bool `[`IsInt17DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a09cf5ae718b8bb5edb864cf56ebf42d3)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a09cf5ae718b8bb5edb864cf56ebf42d3"></a>

Returns true if Int17_Optional is set and matches the default value.

#### `public inline void `[`SetInt17ToDefault`](#structFRHAPI__MatchTimelineEvent_1aea26a865164fcde809b732cbf47fd899)`()` <a id="structFRHAPI__MatchTimelineEvent_1aea26a865164fcde809b732cbf47fd899"></a>

Sets the value of Int17_Optional to its default and also sets Int17_IsSet to true.

#### `public inline void `[`SetInt17ToNull`](#structFRHAPI__MatchTimelineEvent_1a0dffadfc4cc588e1d033388c76e81ee3)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0dffadfc4cc588e1d033388c76e81ee3"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt17Null`](#structFRHAPI__MatchTimelineEvent_1a0b18da9093699fed3855ff0e08111c0f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0b18da9093699fed3855ff0e08111c0f"></a>

Checks whether Int17_Optional is set to null.

#### `public inline int32 & `[`GetInt18`](#structFRHAPI__MatchTimelineEvent_1a2230767873f4c9533e175f895704f17f)`()` <a id="structFRHAPI__MatchTimelineEvent_1a2230767873f4c9533e175f895704f17f"></a>

Gets the value of Int18_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt18`](#structFRHAPI__MatchTimelineEvent_1ab67a3ab5134e5dbc6fa4d80499e431f1)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab67a3ab5134e5dbc6fa4d80499e431f1"></a>

Gets the value of Int18_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt18`](#structFRHAPI__MatchTimelineEvent_1a6192e158e78b9f3b79d7706c7ec81f28)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a6192e158e78b9f3b79d7706c7ec81f28"></a>

Gets the value of Int18_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt18`](#structFRHAPI__MatchTimelineEvent_1aed8a84e6c0ad532a8de81cc0d0e30d1e)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aed8a84e6c0ad532a8de81cc0d0e30d1e"></a>

Fills OutValue with the value of Int18_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt18OrNull`](#structFRHAPI__MatchTimelineEvent_1a3f121a97daa419368fc4c39338eb0e98)`()` <a id="structFRHAPI__MatchTimelineEvent_1a3f121a97daa419368fc4c39338eb0e98"></a>

Returns a pointer to Int18_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt18OrNull`](#structFRHAPI__MatchTimelineEvent_1a0e6d12a900eef36e162359a96f2b1a3a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0e6d12a900eef36e162359a96f2b1a3a"></a>

Returns a pointer to Int18_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt18`](#structFRHAPI__MatchTimelineEvent_1add402597f1a875b9c2201b79718ef18e)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1add402597f1a875b9c2201b79718ef18e"></a>

Sets the value of Int18_Optional and also sets Int18_IsSet to true.

#### `public inline void `[`SetInt18`](#structFRHAPI__MatchTimelineEvent_1ab664a147b4898f9303978d7a8576a5cc)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ab664a147b4898f9303978d7a8576a5cc"></a>

Sets the value of Int18_Optional and also sets Int18_IsSet to true using move semantics.

#### `public inline void `[`ClearInt18`](#structFRHAPI__MatchTimelineEvent_1aaac8f901e40ed23cca924a8175dd1de0)`()` <a id="structFRHAPI__MatchTimelineEvent_1aaac8f901e40ed23cca924a8175dd1de0"></a>

Clears the value of Int18_Optional and sets Int18_IsSet to false.

#### `public inline bool `[`IsInt18Set`](#structFRHAPI__MatchTimelineEvent_1ac46ad348a7b3198b15fac038d75f6356)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac46ad348a7b3198b15fac038d75f6356"></a>

Checks whether Int18_Optional has been set.

#### `public inline bool `[`IsInt18DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a57f57aefd4ac030614f9d234efc98ce9)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a57f57aefd4ac030614f9d234efc98ce9"></a>

Returns true if Int18_Optional is set and matches the default value.

#### `public inline void `[`SetInt18ToDefault`](#structFRHAPI__MatchTimelineEvent_1a29547a9b3dd5aee108f742571d361ff9)`()` <a id="structFRHAPI__MatchTimelineEvent_1a29547a9b3dd5aee108f742571d361ff9"></a>

Sets the value of Int18_Optional to its default and also sets Int18_IsSet to true.

#### `public inline void `[`SetInt18ToNull`](#structFRHAPI__MatchTimelineEvent_1aec710ad86edacedeedabf29587216534)`()` <a id="structFRHAPI__MatchTimelineEvent_1aec710ad86edacedeedabf29587216534"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt18Null`](#structFRHAPI__MatchTimelineEvent_1ae06729dbd1c2d0e3780b6b86d8e7c49b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ae06729dbd1c2d0e3780b6b86d8e7c49b"></a>

Checks whether Int18_Optional is set to null.

#### `public inline int32 & `[`GetInt19`](#structFRHAPI__MatchTimelineEvent_1a1250960318a14082cae3cbdec28b6a31)`()` <a id="structFRHAPI__MatchTimelineEvent_1a1250960318a14082cae3cbdec28b6a31"></a>

Gets the value of Int19_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt19`](#structFRHAPI__MatchTimelineEvent_1a074f824b2891f9854e69429e08d8398d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a074f824b2891f9854e69429e08d8398d"></a>

Gets the value of Int19_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt19`](#structFRHAPI__MatchTimelineEvent_1aaf466fc4ffaeb5de4f837b57e978878b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aaf466fc4ffaeb5de4f837b57e978878b"></a>

Gets the value of Int19_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt19`](#structFRHAPI__MatchTimelineEvent_1ae7f32d5fbe465546ccfcb2934923415c)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ae7f32d5fbe465546ccfcb2934923415c"></a>

Fills OutValue with the value of Int19_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt19OrNull`](#structFRHAPI__MatchTimelineEvent_1a07c82991e8908ae4550cce63ce52d323)`()` <a id="structFRHAPI__MatchTimelineEvent_1a07c82991e8908ae4550cce63ce52d323"></a>

Returns a pointer to Int19_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt19OrNull`](#structFRHAPI__MatchTimelineEvent_1a4ce04b4e10b5885813a87c5ab9b44a0e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4ce04b4e10b5885813a87c5ab9b44a0e"></a>

Returns a pointer to Int19_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt19`](#structFRHAPI__MatchTimelineEvent_1a7572b1e1bf75d0546656fd6a57c23dbb)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a7572b1e1bf75d0546656fd6a57c23dbb"></a>

Sets the value of Int19_Optional and also sets Int19_IsSet to true.

#### `public inline void `[`SetInt19`](#structFRHAPI__MatchTimelineEvent_1aeabc164c90f2a81262da3905c3d9317d)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aeabc164c90f2a81262da3905c3d9317d"></a>

Sets the value of Int19_Optional and also sets Int19_IsSet to true using move semantics.

#### `public inline void `[`ClearInt19`](#structFRHAPI__MatchTimelineEvent_1aba2486d1f4532b3a9a9438a6993a9c28)`()` <a id="structFRHAPI__MatchTimelineEvent_1aba2486d1f4532b3a9a9438a6993a9c28"></a>

Clears the value of Int19_Optional and sets Int19_IsSet to false.

#### `public inline bool `[`IsInt19Set`](#structFRHAPI__MatchTimelineEvent_1af62e62eead38813575c934d9122980dc)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af62e62eead38813575c934d9122980dc"></a>

Checks whether Int19_Optional has been set.

#### `public inline bool `[`IsInt19DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a5d5c5a723da5916feb5361f5f7624041)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5d5c5a723da5916feb5361f5f7624041"></a>

Returns true if Int19_Optional is set and matches the default value.

#### `public inline void `[`SetInt19ToDefault`](#structFRHAPI__MatchTimelineEvent_1a73b155a22f84a7907aa21c674ee7982b)`()` <a id="structFRHAPI__MatchTimelineEvent_1a73b155a22f84a7907aa21c674ee7982b"></a>

Sets the value of Int19_Optional to its default and also sets Int19_IsSet to true.

#### `public inline void `[`SetInt19ToNull`](#structFRHAPI__MatchTimelineEvent_1a087ddd93a1a2e1217bc50f2ac9e856ff)`()` <a id="structFRHAPI__MatchTimelineEvent_1a087ddd93a1a2e1217bc50f2ac9e856ff"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt19Null`](#structFRHAPI__MatchTimelineEvent_1a845777726176ef753111e071595d9d18)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a845777726176ef753111e071595d9d18"></a>

Checks whether Int19_Optional is set to null.

#### `public inline int32 & `[`GetInt20`](#structFRHAPI__MatchTimelineEvent_1a5be2e6aa22c1fdf7d64e6cc0075ad505)`()` <a id="structFRHAPI__MatchTimelineEvent_1a5be2e6aa22c1fdf7d64e6cc0075ad505"></a>

Gets the value of Int20_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt20`](#structFRHAPI__MatchTimelineEvent_1a70d5f599e3112af2a216d9b56ff4963a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a70d5f599e3112af2a216d9b56ff4963a"></a>

Gets the value of Int20_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt20`](#structFRHAPI__MatchTimelineEvent_1a9beff173e94200b150dfef1bc3e87af7)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a9beff173e94200b150dfef1bc3e87af7"></a>

Gets the value of Int20_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt20`](#structFRHAPI__MatchTimelineEvent_1a781ddb6818567c1b3cc18b8452a07df9)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a781ddb6818567c1b3cc18b8452a07df9"></a>

Fills OutValue with the value of Int20_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt20OrNull`](#structFRHAPI__MatchTimelineEvent_1abef78f9a3318e6970324e984c6cd5666)`()` <a id="structFRHAPI__MatchTimelineEvent_1abef78f9a3318e6970324e984c6cd5666"></a>

Returns a pointer to Int20_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt20OrNull`](#structFRHAPI__MatchTimelineEvent_1af5fed96d54b83327cec95a6bda37ccea)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af5fed96d54b83327cec95a6bda37ccea"></a>

Returns a pointer to Int20_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt20`](#structFRHAPI__MatchTimelineEvent_1a89d0abd3f8b38c8411972705883c7935)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a89d0abd3f8b38c8411972705883c7935"></a>

Sets the value of Int20_Optional and also sets Int20_IsSet to true.

#### `public inline void `[`SetInt20`](#structFRHAPI__MatchTimelineEvent_1ad41487baa15e065737dcd2a8ff0939b5)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ad41487baa15e065737dcd2a8ff0939b5"></a>

Sets the value of Int20_Optional and also sets Int20_IsSet to true using move semantics.

#### `public inline void `[`ClearInt20`](#structFRHAPI__MatchTimelineEvent_1a710ab0a20056a8be7816a9dea6ae57b9)`()` <a id="structFRHAPI__MatchTimelineEvent_1a710ab0a20056a8be7816a9dea6ae57b9"></a>

Clears the value of Int20_Optional and sets Int20_IsSet to false.

#### `public inline bool `[`IsInt20Set`](#structFRHAPI__MatchTimelineEvent_1ae40da0e2d89656db9fae541f3a10af4f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ae40da0e2d89656db9fae541f3a10af4f"></a>

Checks whether Int20_Optional has been set.

#### `public inline bool `[`IsInt20DefaultValue`](#structFRHAPI__MatchTimelineEvent_1abecb0470769988827dd0cce7c68b7c23)`() const` <a id="structFRHAPI__MatchTimelineEvent_1abecb0470769988827dd0cce7c68b7c23"></a>

Returns true if Int20_Optional is set and matches the default value.

#### `public inline void `[`SetInt20ToDefault`](#structFRHAPI__MatchTimelineEvent_1a631cb4249471d793f9fbeab8e3bc069d)`()` <a id="structFRHAPI__MatchTimelineEvent_1a631cb4249471d793f9fbeab8e3bc069d"></a>

Sets the value of Int20_Optional to its default and also sets Int20_IsSet to true.

#### `public inline void `[`SetInt20ToNull`](#structFRHAPI__MatchTimelineEvent_1ab6ed5455f40ca26ebc3efbb858bd5b8a)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab6ed5455f40ca26ebc3efbb858bd5b8a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt20Null`](#structFRHAPI__MatchTimelineEvent_1aadc00cdf4f2005e4f813615705f8bf77)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aadc00cdf4f2005e4f813615705f8bf77"></a>

Checks whether Int20_Optional is set to null.

#### `public inline int32 & `[`GetInt21`](#structFRHAPI__MatchTimelineEvent_1a74ca5d454d61caecba21a61b811eabc0)`()` <a id="structFRHAPI__MatchTimelineEvent_1a74ca5d454d61caecba21a61b811eabc0"></a>

Gets the value of Int21_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt21`](#structFRHAPI__MatchTimelineEvent_1ad273787fa2a7bd8498d8dafeefbd665f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ad273787fa2a7bd8498d8dafeefbd665f"></a>

Gets the value of Int21_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt21`](#structFRHAPI__MatchTimelineEvent_1a6d89e2d7024a970cf84db7ead775716e)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a6d89e2d7024a970cf84db7ead775716e"></a>

Gets the value of Int21_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt21`](#structFRHAPI__MatchTimelineEvent_1a7068dbd3706076a15cbfe6d52fbaaf89)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a7068dbd3706076a15cbfe6d52fbaaf89"></a>

Fills OutValue with the value of Int21_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt21OrNull`](#structFRHAPI__MatchTimelineEvent_1af7832433892adc4d3dc5ea7cba58af2d)`()` <a id="structFRHAPI__MatchTimelineEvent_1af7832433892adc4d3dc5ea7cba58af2d"></a>

Returns a pointer to Int21_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt21OrNull`](#structFRHAPI__MatchTimelineEvent_1a94c031742c3863cc3b66980f364df866)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a94c031742c3863cc3b66980f364df866"></a>

Returns a pointer to Int21_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt21`](#structFRHAPI__MatchTimelineEvent_1a5e0d52e7360a1a3f6921997a5a16fcd7)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a5e0d52e7360a1a3f6921997a5a16fcd7"></a>

Sets the value of Int21_Optional and also sets Int21_IsSet to true.

#### `public inline void `[`SetInt21`](#structFRHAPI__MatchTimelineEvent_1a954019a117f50ab4177e544fa5af5214)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a954019a117f50ab4177e544fa5af5214"></a>

Sets the value of Int21_Optional and also sets Int21_IsSet to true using move semantics.

#### `public inline void `[`ClearInt21`](#structFRHAPI__MatchTimelineEvent_1a7cefff0eaf50ba512b33da6236dc4aca)`()` <a id="structFRHAPI__MatchTimelineEvent_1a7cefff0eaf50ba512b33da6236dc4aca"></a>

Clears the value of Int21_Optional and sets Int21_IsSet to false.

#### `public inline bool `[`IsInt21Set`](#structFRHAPI__MatchTimelineEvent_1aef0fb5f4e9eab42758c0aa56f9bfecb2)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aef0fb5f4e9eab42758c0aa56f9bfecb2"></a>

Checks whether Int21_Optional has been set.

#### `public inline bool `[`IsInt21DefaultValue`](#structFRHAPI__MatchTimelineEvent_1aa9fb41a7457a287d9cff48dfa4118ae7)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa9fb41a7457a287d9cff48dfa4118ae7"></a>

Returns true if Int21_Optional is set and matches the default value.

#### `public inline void `[`SetInt21ToDefault`](#structFRHAPI__MatchTimelineEvent_1a2504e25ed79147ef74b41dc44c641a25)`()` <a id="structFRHAPI__MatchTimelineEvent_1a2504e25ed79147ef74b41dc44c641a25"></a>

Sets the value of Int21_Optional to its default and also sets Int21_IsSet to true.

#### `public inline void `[`SetInt21ToNull`](#structFRHAPI__MatchTimelineEvent_1a99bfe8544f634a583ff9a1fdd7351a45)`()` <a id="structFRHAPI__MatchTimelineEvent_1a99bfe8544f634a583ff9a1fdd7351a45"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt21Null`](#structFRHAPI__MatchTimelineEvent_1ab5752df403f5e69e7f96ae7493e2f340)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab5752df403f5e69e7f96ae7493e2f340"></a>

Checks whether Int21_Optional is set to null.

#### `public inline int32 & `[`GetInt22`](#structFRHAPI__MatchTimelineEvent_1a98b4724ad3d9ea7777b3620f6eae9cbd)`()` <a id="structFRHAPI__MatchTimelineEvent_1a98b4724ad3d9ea7777b3620f6eae9cbd"></a>

Gets the value of Int22_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt22`](#structFRHAPI__MatchTimelineEvent_1a993fa097ca49262eb1b5396e7929f7b0)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a993fa097ca49262eb1b5396e7929f7b0"></a>

Gets the value of Int22_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt22`](#structFRHAPI__MatchTimelineEvent_1a9e492e189e8658d3d5c16157ef7c060a)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a9e492e189e8658d3d5c16157ef7c060a"></a>

Gets the value of Int22_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt22`](#structFRHAPI__MatchTimelineEvent_1afc989d34c2162883dd9d601e31bc540a)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1afc989d34c2162883dd9d601e31bc540a"></a>

Fills OutValue with the value of Int22_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt22OrNull`](#structFRHAPI__MatchTimelineEvent_1a0a0598367054ea8e8cf47103440a745f)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0a0598367054ea8e8cf47103440a745f"></a>

Returns a pointer to Int22_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt22OrNull`](#structFRHAPI__MatchTimelineEvent_1ae63956765eb4b83e5dbd1afbb614c56c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ae63956765eb4b83e5dbd1afbb614c56c"></a>

Returns a pointer to Int22_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt22`](#structFRHAPI__MatchTimelineEvent_1a48b99e31d9254ba943176a290e62bfba)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a48b99e31d9254ba943176a290e62bfba"></a>

Sets the value of Int22_Optional and also sets Int22_IsSet to true.

#### `public inline void `[`SetInt22`](#structFRHAPI__MatchTimelineEvent_1a92a9bf738793c61498d13c5d7f3a7593)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a92a9bf738793c61498d13c5d7f3a7593"></a>

Sets the value of Int22_Optional and also sets Int22_IsSet to true using move semantics.

#### `public inline void `[`ClearInt22`](#structFRHAPI__MatchTimelineEvent_1a22a5954c424301e004cdbdbc905e06a5)`()` <a id="structFRHAPI__MatchTimelineEvent_1a22a5954c424301e004cdbdbc905e06a5"></a>

Clears the value of Int22_Optional and sets Int22_IsSet to false.

#### `public inline bool `[`IsInt22Set`](#structFRHAPI__MatchTimelineEvent_1abfcfaaac640d90bf02984b8d2251a8a5)`() const` <a id="structFRHAPI__MatchTimelineEvent_1abfcfaaac640d90bf02984b8d2251a8a5"></a>

Checks whether Int22_Optional has been set.

#### `public inline bool `[`IsInt22DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a714f07818da7d17d93d82ccf249429b0)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a714f07818da7d17d93d82ccf249429b0"></a>

Returns true if Int22_Optional is set and matches the default value.

#### `public inline void `[`SetInt22ToDefault`](#structFRHAPI__MatchTimelineEvent_1ae361d42da49ff655f338dbc8fc20dc47)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae361d42da49ff655f338dbc8fc20dc47"></a>

Sets the value of Int22_Optional to its default and also sets Int22_IsSet to true.

#### `public inline void `[`SetInt22ToNull`](#structFRHAPI__MatchTimelineEvent_1a8c50eda8d250b5a29604d2e56863d701)`()` <a id="structFRHAPI__MatchTimelineEvent_1a8c50eda8d250b5a29604d2e56863d701"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt22Null`](#structFRHAPI__MatchTimelineEvent_1aae84818a23d5ccd839b9ffe3b9e05c31)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aae84818a23d5ccd839b9ffe3b9e05c31"></a>

Checks whether Int22_Optional is set to null.

#### `public inline int32 & `[`GetInt23`](#structFRHAPI__MatchTimelineEvent_1a5ad97ddbd354abb69eadf065abeeb6a1)`()` <a id="structFRHAPI__MatchTimelineEvent_1a5ad97ddbd354abb69eadf065abeeb6a1"></a>

Gets the value of Int23_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt23`](#structFRHAPI__MatchTimelineEvent_1a9a9f9c8ddf69144caba8ea6bcff538dd)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a9a9f9c8ddf69144caba8ea6bcff538dd"></a>

Gets the value of Int23_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt23`](#structFRHAPI__MatchTimelineEvent_1a2df9139640b1399b45fdf546fe2a443c)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a2df9139640b1399b45fdf546fe2a443c"></a>

Gets the value of Int23_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt23`](#structFRHAPI__MatchTimelineEvent_1a0500f021da45aa794733247210b3ac02)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a0500f021da45aa794733247210b3ac02"></a>

Fills OutValue with the value of Int23_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt23OrNull`](#structFRHAPI__MatchTimelineEvent_1af5928f380da21cac80bf1d9da65d2197)`()` <a id="structFRHAPI__MatchTimelineEvent_1af5928f380da21cac80bf1d9da65d2197"></a>

Returns a pointer to Int23_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt23OrNull`](#structFRHAPI__MatchTimelineEvent_1a1e010c547031e38eb8a44a14b6999456)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1e010c547031e38eb8a44a14b6999456"></a>

Returns a pointer to Int23_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt23`](#structFRHAPI__MatchTimelineEvent_1a90af9511596dde68942cb409dc8fc306)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a90af9511596dde68942cb409dc8fc306"></a>

Sets the value of Int23_Optional and also sets Int23_IsSet to true.

#### `public inline void `[`SetInt23`](#structFRHAPI__MatchTimelineEvent_1a4412d25b1c203f4bec0669f3033a13a3)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a4412d25b1c203f4bec0669f3033a13a3"></a>

Sets the value of Int23_Optional and also sets Int23_IsSet to true using move semantics.

#### `public inline void `[`ClearInt23`](#structFRHAPI__MatchTimelineEvent_1ae5e02ae6e5ddac85082d50e5d5f157a9)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae5e02ae6e5ddac85082d50e5d5f157a9"></a>

Clears the value of Int23_Optional and sets Int23_IsSet to false.

#### `public inline bool `[`IsInt23Set`](#structFRHAPI__MatchTimelineEvent_1a73fa22470ea064d6f0a80f8875128746)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a73fa22470ea064d6f0a80f8875128746"></a>

Checks whether Int23_Optional has been set.

#### `public inline bool `[`IsInt23DefaultValue`](#structFRHAPI__MatchTimelineEvent_1aceb96e654df6836953a7be1ee28bbd2c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aceb96e654df6836953a7be1ee28bbd2c"></a>

Returns true if Int23_Optional is set and matches the default value.

#### `public inline void `[`SetInt23ToDefault`](#structFRHAPI__MatchTimelineEvent_1ae28f2f52672b90941602168dcd590a9b)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae28f2f52672b90941602168dcd590a9b"></a>

Sets the value of Int23_Optional to its default and also sets Int23_IsSet to true.

#### `public inline void `[`SetInt23ToNull`](#structFRHAPI__MatchTimelineEvent_1a78d64071639b9eccd0fea3a00987d5b8)`()` <a id="structFRHAPI__MatchTimelineEvent_1a78d64071639b9eccd0fea3a00987d5b8"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt23Null`](#structFRHAPI__MatchTimelineEvent_1aa2f7f576d73e8e7de3cfaf11569e1bae)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa2f7f576d73e8e7de3cfaf11569e1bae"></a>

Checks whether Int23_Optional is set to null.

#### `public inline int32 & `[`GetInt24`](#structFRHAPI__MatchTimelineEvent_1ad8c312140b3e5df419fbfc1c6ea61813)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad8c312140b3e5df419fbfc1c6ea61813"></a>

Gets the value of Int24_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt24`](#structFRHAPI__MatchTimelineEvent_1aee6f9a9800dbdce4022f8b69ed54f22f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aee6f9a9800dbdce4022f8b69ed54f22f"></a>

Gets the value of Int24_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt24`](#structFRHAPI__MatchTimelineEvent_1a58f22c07ab667ad34d3f43ffa1b3f4af)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a58f22c07ab667ad34d3f43ffa1b3f4af"></a>

Gets the value of Int24_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt24`](#structFRHAPI__MatchTimelineEvent_1ae0f8f087dff24f718307f1a57948d5c6)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ae0f8f087dff24f718307f1a57948d5c6"></a>

Fills OutValue with the value of Int24_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt24OrNull`](#structFRHAPI__MatchTimelineEvent_1ad2ba81c0c09e15e0156b880ec09ea269)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad2ba81c0c09e15e0156b880ec09ea269"></a>

Returns a pointer to Int24_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt24OrNull`](#structFRHAPI__MatchTimelineEvent_1aa384246b9c9a97323d9da120897c3f3a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa384246b9c9a97323d9da120897c3f3a"></a>

Returns a pointer to Int24_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt24`](#structFRHAPI__MatchTimelineEvent_1a6600571c6202aa7306af8e54b9e7545c)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a6600571c6202aa7306af8e54b9e7545c"></a>

Sets the value of Int24_Optional and also sets Int24_IsSet to true.

#### `public inline void `[`SetInt24`](#structFRHAPI__MatchTimelineEvent_1a014fb84ae4811fd815578f56ec4e96af)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a014fb84ae4811fd815578f56ec4e96af"></a>

Sets the value of Int24_Optional and also sets Int24_IsSet to true using move semantics.

#### `public inline void `[`ClearInt24`](#structFRHAPI__MatchTimelineEvent_1aef479d440983d4ef2a8c8c2822599e0b)`()` <a id="structFRHAPI__MatchTimelineEvent_1aef479d440983d4ef2a8c8c2822599e0b"></a>

Clears the value of Int24_Optional and sets Int24_IsSet to false.

#### `public inline bool `[`IsInt24Set`](#structFRHAPI__MatchTimelineEvent_1a6587c4c54a8dd2280f0ef8891e6f96b9)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a6587c4c54a8dd2280f0ef8891e6f96b9"></a>

Checks whether Int24_Optional has been set.

#### `public inline bool `[`IsInt24DefaultValue`](#structFRHAPI__MatchTimelineEvent_1ad01bf92a116f6202b03310bf2d7b5939)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ad01bf92a116f6202b03310bf2d7b5939"></a>

Returns true if Int24_Optional is set and matches the default value.

#### `public inline void `[`SetInt24ToDefault`](#structFRHAPI__MatchTimelineEvent_1a1aa152758057b25a919359987ed896c7)`()` <a id="structFRHAPI__MatchTimelineEvent_1a1aa152758057b25a919359987ed896c7"></a>

Sets the value of Int24_Optional to its default and also sets Int24_IsSet to true.

#### `public inline void `[`SetInt24ToNull`](#structFRHAPI__MatchTimelineEvent_1a0c0659d9b353a86ce95f2e0086168219)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0c0659d9b353a86ce95f2e0086168219"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt24Null`](#structFRHAPI__MatchTimelineEvent_1a83b47d22bd3956fce96d156c41a61e7f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a83b47d22bd3956fce96d156c41a61e7f"></a>

Checks whether Int24_Optional is set to null.

#### `public inline int32 & `[`GetInt25`](#structFRHAPI__MatchTimelineEvent_1a39e80b03b2097d28f15d69ddf21ad9ad)`()` <a id="structFRHAPI__MatchTimelineEvent_1a39e80b03b2097d28f15d69ddf21ad9ad"></a>

Gets the value of Int25_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt25`](#structFRHAPI__MatchTimelineEvent_1ac832492b8a25e32db655df4319971617)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac832492b8a25e32db655df4319971617"></a>

Gets the value of Int25_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt25`](#structFRHAPI__MatchTimelineEvent_1ae5baa2b04a58d3649375a7333a1b0d24)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ae5baa2b04a58d3649375a7333a1b0d24"></a>

Gets the value of Int25_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt25`](#structFRHAPI__MatchTimelineEvent_1a449de70ec17a1a1f5905cd1320195971)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a449de70ec17a1a1f5905cd1320195971"></a>

Fills OutValue with the value of Int25_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt25OrNull`](#structFRHAPI__MatchTimelineEvent_1ad68f3a622a374b8a3488b7047522e3ff)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad68f3a622a374b8a3488b7047522e3ff"></a>

Returns a pointer to Int25_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt25OrNull`](#structFRHAPI__MatchTimelineEvent_1a6e34ab5121b911012afb65616d915001)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a6e34ab5121b911012afb65616d915001"></a>

Returns a pointer to Int25_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt25`](#structFRHAPI__MatchTimelineEvent_1aaeb4b73cefeaa5baaeb3359a9076dcaf)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aaeb4b73cefeaa5baaeb3359a9076dcaf"></a>

Sets the value of Int25_Optional and also sets Int25_IsSet to true.

#### `public inline void `[`SetInt25`](#structFRHAPI__MatchTimelineEvent_1a7f1d8daa366bce9b23ea4e970aa9b4e5)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a7f1d8daa366bce9b23ea4e970aa9b4e5"></a>

Sets the value of Int25_Optional and also sets Int25_IsSet to true using move semantics.

#### `public inline void `[`ClearInt25`](#structFRHAPI__MatchTimelineEvent_1ab9a7e5588c1839ccc6196dd98bfdd110)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab9a7e5588c1839ccc6196dd98bfdd110"></a>

Clears the value of Int25_Optional and sets Int25_IsSet to false.

#### `public inline bool `[`IsInt25Set`](#structFRHAPI__MatchTimelineEvent_1a04a74999b8771268ef5f4f1749a72f86)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a04a74999b8771268ef5f4f1749a72f86"></a>

Checks whether Int25_Optional has been set.

#### `public inline bool `[`IsInt25DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a1865870efb33160bee072d3ca6690070)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1865870efb33160bee072d3ca6690070"></a>

Returns true if Int25_Optional is set and matches the default value.

#### `public inline void `[`SetInt25ToDefault`](#structFRHAPI__MatchTimelineEvent_1a963cbb1e992aef8a9df328bb4b0a5cce)`()` <a id="structFRHAPI__MatchTimelineEvent_1a963cbb1e992aef8a9df328bb4b0a5cce"></a>

Sets the value of Int25_Optional to its default and also sets Int25_IsSet to true.

#### `public inline void `[`SetInt25ToNull`](#structFRHAPI__MatchTimelineEvent_1acb993db1c71f51d0a519300c386643a4)`()` <a id="structFRHAPI__MatchTimelineEvent_1acb993db1c71f51d0a519300c386643a4"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt25Null`](#structFRHAPI__MatchTimelineEvent_1a748699fa2d416589a93c326ef4cabacd)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a748699fa2d416589a93c326ef4cabacd"></a>

Checks whether Int25_Optional is set to null.

#### `public inline int32 & `[`GetInt26`](#structFRHAPI__MatchTimelineEvent_1a26e5956c908945e0ee1efa6df1a8887c)`()` <a id="structFRHAPI__MatchTimelineEvent_1a26e5956c908945e0ee1efa6df1a8887c"></a>

Gets the value of Int26_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt26`](#structFRHAPI__MatchTimelineEvent_1a066b8867e7e265468f9732d786d3b60c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a066b8867e7e265468f9732d786d3b60c"></a>

Gets the value of Int26_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt26`](#structFRHAPI__MatchTimelineEvent_1adb46afba996a4e9ad9f84b2ed7c2b472)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1adb46afba996a4e9ad9f84b2ed7c2b472"></a>

Gets the value of Int26_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt26`](#structFRHAPI__MatchTimelineEvent_1a3c042856440a0161ab5e6d91060cebc4)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a3c042856440a0161ab5e6d91060cebc4"></a>

Fills OutValue with the value of Int26_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt26OrNull`](#structFRHAPI__MatchTimelineEvent_1a77ca28c918854658b78f197d55689222)`()` <a id="structFRHAPI__MatchTimelineEvent_1a77ca28c918854658b78f197d55689222"></a>

Returns a pointer to Int26_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt26OrNull`](#structFRHAPI__MatchTimelineEvent_1a247641700a42f9d628a1b1998985ecf2)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a247641700a42f9d628a1b1998985ecf2"></a>

Returns a pointer to Int26_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt26`](#structFRHAPI__MatchTimelineEvent_1a4aba827817fc5e1e7277f0734587c105)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a4aba827817fc5e1e7277f0734587c105"></a>

Sets the value of Int26_Optional and also sets Int26_IsSet to true.

#### `public inline void `[`SetInt26`](#structFRHAPI__MatchTimelineEvent_1a1fc260c930f90c5d06c4b4af63d6175c)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a1fc260c930f90c5d06c4b4af63d6175c"></a>

Sets the value of Int26_Optional and also sets Int26_IsSet to true using move semantics.

#### `public inline void `[`ClearInt26`](#structFRHAPI__MatchTimelineEvent_1ad7120f71af9f2ea7b6f407179884f87d)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad7120f71af9f2ea7b6f407179884f87d"></a>

Clears the value of Int26_Optional and sets Int26_IsSet to false.

#### `public inline bool `[`IsInt26Set`](#structFRHAPI__MatchTimelineEvent_1a608df9af56eb473f13f2d8c163ee0175)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a608df9af56eb473f13f2d8c163ee0175"></a>

Checks whether Int26_Optional has been set.

#### `public inline bool `[`IsInt26DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a6e44bc760a3fd782fdeb14a85c887484)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a6e44bc760a3fd782fdeb14a85c887484"></a>

Returns true if Int26_Optional is set and matches the default value.

#### `public inline void `[`SetInt26ToDefault`](#structFRHAPI__MatchTimelineEvent_1a8987e5898fb2b9e97f902ab247c7bd42)`()` <a id="structFRHAPI__MatchTimelineEvent_1a8987e5898fb2b9e97f902ab247c7bd42"></a>

Sets the value of Int26_Optional to its default and also sets Int26_IsSet to true.

#### `public inline void `[`SetInt26ToNull`](#structFRHAPI__MatchTimelineEvent_1acbfc3eae91dd7efe3ff684bda77a95ec)`()` <a id="structFRHAPI__MatchTimelineEvent_1acbfc3eae91dd7efe3ff684bda77a95ec"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt26Null`](#structFRHAPI__MatchTimelineEvent_1a1e4c809547870d5d8ad691458849a853)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1e4c809547870d5d8ad691458849a853"></a>

Checks whether Int26_Optional is set to null.

#### `public inline int32 & `[`GetInt27`](#structFRHAPI__MatchTimelineEvent_1a13cd5195c924fc0d4dd95f95ef4c2017)`()` <a id="structFRHAPI__MatchTimelineEvent_1a13cd5195c924fc0d4dd95f95ef4c2017"></a>

Gets the value of Int27_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt27`](#structFRHAPI__MatchTimelineEvent_1a2a2e262a516a887ddeeba023e696c9fd)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2a2e262a516a887ddeeba023e696c9fd"></a>

Gets the value of Int27_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt27`](#structFRHAPI__MatchTimelineEvent_1a649da8366873608696cde84ff7b010ae)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a649da8366873608696cde84ff7b010ae"></a>

Gets the value of Int27_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt27`](#structFRHAPI__MatchTimelineEvent_1af2c49043541262c2bf72597242c9485e)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1af2c49043541262c2bf72597242c9485e"></a>

Fills OutValue with the value of Int27_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt27OrNull`](#structFRHAPI__MatchTimelineEvent_1ae486e91ee4bf784c2f5b33bb114d1026)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae486e91ee4bf784c2f5b33bb114d1026"></a>

Returns a pointer to Int27_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt27OrNull`](#structFRHAPI__MatchTimelineEvent_1a702a41b11e7667bbc3411876f292516c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a702a41b11e7667bbc3411876f292516c"></a>

Returns a pointer to Int27_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt27`](#structFRHAPI__MatchTimelineEvent_1ab701419819339a467898c2349ad3b074)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ab701419819339a467898c2349ad3b074"></a>

Sets the value of Int27_Optional and also sets Int27_IsSet to true.

#### `public inline void `[`SetInt27`](#structFRHAPI__MatchTimelineEvent_1a9b5d99f011ea940245158a0caf1cd63f)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a9b5d99f011ea940245158a0caf1cd63f"></a>

Sets the value of Int27_Optional and also sets Int27_IsSet to true using move semantics.

#### `public inline void `[`ClearInt27`](#structFRHAPI__MatchTimelineEvent_1af3b59cdba5438945815a15230f8de9e1)`()` <a id="structFRHAPI__MatchTimelineEvent_1af3b59cdba5438945815a15230f8de9e1"></a>

Clears the value of Int27_Optional and sets Int27_IsSet to false.

#### `public inline bool `[`IsInt27Set`](#structFRHAPI__MatchTimelineEvent_1a74c3edbf0a59689d049f31ffd7f56bfd)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a74c3edbf0a59689d049f31ffd7f56bfd"></a>

Checks whether Int27_Optional has been set.

#### `public inline bool `[`IsInt27DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a33dcf754c75f02284fd1b865e09a40e3)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a33dcf754c75f02284fd1b865e09a40e3"></a>

Returns true if Int27_Optional is set and matches the default value.

#### `public inline void `[`SetInt27ToDefault`](#structFRHAPI__MatchTimelineEvent_1a0d3881cf5e5289fd51394958e3dbb430)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0d3881cf5e5289fd51394958e3dbb430"></a>

Sets the value of Int27_Optional to its default and also sets Int27_IsSet to true.

#### `public inline void `[`SetInt27ToNull`](#structFRHAPI__MatchTimelineEvent_1a6a812818cd88e669fe68e8181bbc3e35)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6a812818cd88e669fe68e8181bbc3e35"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt27Null`](#structFRHAPI__MatchTimelineEvent_1a94922cf0495b13a45c808d233050536b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a94922cf0495b13a45c808d233050536b"></a>

Checks whether Int27_Optional is set to null.

#### `public inline int32 & `[`GetInt28`](#structFRHAPI__MatchTimelineEvent_1a18b69a5dbc3953bd08cf9ed1377160fc)`()` <a id="structFRHAPI__MatchTimelineEvent_1a18b69a5dbc3953bd08cf9ed1377160fc"></a>

Gets the value of Int28_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt28`](#structFRHAPI__MatchTimelineEvent_1a4377fc414a0a47917defa7dcfc14979a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4377fc414a0a47917defa7dcfc14979a"></a>

Gets the value of Int28_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt28`](#structFRHAPI__MatchTimelineEvent_1a421528abb43e127f5fd75d54ada046ed)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a421528abb43e127f5fd75d54ada046ed"></a>

Gets the value of Int28_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt28`](#structFRHAPI__MatchTimelineEvent_1aa13cf77ef809f8ad86529d59c9681821)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aa13cf77ef809f8ad86529d59c9681821"></a>

Fills OutValue with the value of Int28_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt28OrNull`](#structFRHAPI__MatchTimelineEvent_1a5491eede5b89f4586316613f9c08bcd2)`()` <a id="structFRHAPI__MatchTimelineEvent_1a5491eede5b89f4586316613f9c08bcd2"></a>

Returns a pointer to Int28_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt28OrNull`](#structFRHAPI__MatchTimelineEvent_1a44a0553c469bcd3ec3d671c12524a6d6)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a44a0553c469bcd3ec3d671c12524a6d6"></a>

Returns a pointer to Int28_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt28`](#structFRHAPI__MatchTimelineEvent_1a507627f124e7cbc1510d3aff7d1fe411)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a507627f124e7cbc1510d3aff7d1fe411"></a>

Sets the value of Int28_Optional and also sets Int28_IsSet to true.

#### `public inline void `[`SetInt28`](#structFRHAPI__MatchTimelineEvent_1a1cecdeb41422e43c9baf6a22ea0f6096)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a1cecdeb41422e43c9baf6a22ea0f6096"></a>

Sets the value of Int28_Optional and also sets Int28_IsSet to true using move semantics.

#### `public inline void `[`ClearInt28`](#structFRHAPI__MatchTimelineEvent_1ac75b378a9ceee64de93e51aa9bb6bc92)`()` <a id="structFRHAPI__MatchTimelineEvent_1ac75b378a9ceee64de93e51aa9bb6bc92"></a>

Clears the value of Int28_Optional and sets Int28_IsSet to false.

#### `public inline bool `[`IsInt28Set`](#structFRHAPI__MatchTimelineEvent_1a2ae100e9fd33b4e351cb100048a6c127)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2ae100e9fd33b4e351cb100048a6c127"></a>

Checks whether Int28_Optional has been set.

#### `public inline bool `[`IsInt28DefaultValue`](#structFRHAPI__MatchTimelineEvent_1aacb53f8400ad99977df7e10d322ff2d2)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aacb53f8400ad99977df7e10d322ff2d2"></a>

Returns true if Int28_Optional is set and matches the default value.

#### `public inline void `[`SetInt28ToDefault`](#structFRHAPI__MatchTimelineEvent_1a79169a5a2c4367cc4f713c7d8be19710)`()` <a id="structFRHAPI__MatchTimelineEvent_1a79169a5a2c4367cc4f713c7d8be19710"></a>

Sets the value of Int28_Optional to its default and also sets Int28_IsSet to true.

#### `public inline void `[`SetInt28ToNull`](#structFRHAPI__MatchTimelineEvent_1af6b169da5d1e5fd87f41367783febcc5)`()` <a id="structFRHAPI__MatchTimelineEvent_1af6b169da5d1e5fd87f41367783febcc5"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt28Null`](#structFRHAPI__MatchTimelineEvent_1a7eac02a8ae1cc9b796eea58bbf71587a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7eac02a8ae1cc9b796eea58bbf71587a"></a>

Checks whether Int28_Optional is set to null.

#### `public inline int32 & `[`GetInt29`](#structFRHAPI__MatchTimelineEvent_1a3d01337c0bf11e8d70a8a42e06b269e4)`()` <a id="structFRHAPI__MatchTimelineEvent_1a3d01337c0bf11e8d70a8a42e06b269e4"></a>

Gets the value of Int29_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt29`](#structFRHAPI__MatchTimelineEvent_1a04695b763b86be80cebbb541ac6345cd)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a04695b763b86be80cebbb541ac6345cd"></a>

Gets the value of Int29_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt29`](#structFRHAPI__MatchTimelineEvent_1a1b6398aa5831a86c79309f22b362a938)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a1b6398aa5831a86c79309f22b362a938"></a>

Gets the value of Int29_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt29`](#structFRHAPI__MatchTimelineEvent_1abf790095286b7598aae981a748fdb62e)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1abf790095286b7598aae981a748fdb62e"></a>

Fills OutValue with the value of Int29_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt29OrNull`](#structFRHAPI__MatchTimelineEvent_1a3d60770db7a7125787bc178c8004d419)`()` <a id="structFRHAPI__MatchTimelineEvent_1a3d60770db7a7125787bc178c8004d419"></a>

Returns a pointer to Int29_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt29OrNull`](#structFRHAPI__MatchTimelineEvent_1a04b07e77791aff19ea6eb348707e56d3)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a04b07e77791aff19ea6eb348707e56d3"></a>

Returns a pointer to Int29_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt29`](#structFRHAPI__MatchTimelineEvent_1a48a0f9c93b787d9309dde7792f30a0f1)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a48a0f9c93b787d9309dde7792f30a0f1"></a>

Sets the value of Int29_Optional and also sets Int29_IsSet to true.

#### `public inline void `[`SetInt29`](#structFRHAPI__MatchTimelineEvent_1a1bfc484ea0545bbef76adf80a9908d11)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a1bfc484ea0545bbef76adf80a9908d11"></a>

Sets the value of Int29_Optional and also sets Int29_IsSet to true using move semantics.

#### `public inline void `[`ClearInt29`](#structFRHAPI__MatchTimelineEvent_1afc47555cd8caf68d2ea9d25cb2443d61)`()` <a id="structFRHAPI__MatchTimelineEvent_1afc47555cd8caf68d2ea9d25cb2443d61"></a>

Clears the value of Int29_Optional and sets Int29_IsSet to false.

#### `public inline bool `[`IsInt29Set`](#structFRHAPI__MatchTimelineEvent_1a2650e411870921ba5e8fded9fca9a3c8)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2650e411870921ba5e8fded9fca9a3c8"></a>

Checks whether Int29_Optional has been set.

#### `public inline bool `[`IsInt29DefaultValue`](#structFRHAPI__MatchTimelineEvent_1ac19b68a254a244d3101fc5609a173633)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac19b68a254a244d3101fc5609a173633"></a>

Returns true if Int29_Optional is set and matches the default value.

#### `public inline void `[`SetInt29ToDefault`](#structFRHAPI__MatchTimelineEvent_1af14a63c2a1fdc284c52b4ee606ef08a0)`()` <a id="structFRHAPI__MatchTimelineEvent_1af14a63c2a1fdc284c52b4ee606ef08a0"></a>

Sets the value of Int29_Optional to its default and also sets Int29_IsSet to true.

#### `public inline void `[`SetInt29ToNull`](#structFRHAPI__MatchTimelineEvent_1af7fba0ffafea5ca47f6581f00136000d)`()` <a id="structFRHAPI__MatchTimelineEvent_1af7fba0ffafea5ca47f6581f00136000d"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt29Null`](#structFRHAPI__MatchTimelineEvent_1a5b675638513290e68e1c1dec2b4672dd)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5b675638513290e68e1c1dec2b4672dd"></a>

Checks whether Int29_Optional is set to null.

#### `public inline int32 & `[`GetInt30`](#structFRHAPI__MatchTimelineEvent_1a792af0f8ff759f58267725604b79aaf1)`()` <a id="structFRHAPI__MatchTimelineEvent_1a792af0f8ff759f58267725604b79aaf1"></a>

Gets the value of Int30_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt30`](#structFRHAPI__MatchTimelineEvent_1a523dfafdd80cba0497fed69bd002a697)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a523dfafdd80cba0497fed69bd002a697"></a>

Gets the value of Int30_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt30`](#structFRHAPI__MatchTimelineEvent_1a7f9359eeeb44536824489c230eca5238)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a7f9359eeeb44536824489c230eca5238"></a>

Gets the value of Int30_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt30`](#structFRHAPI__MatchTimelineEvent_1a897ce033e7e97dbc79235e3b0b4c7ac6)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a897ce033e7e97dbc79235e3b0b4c7ac6"></a>

Fills OutValue with the value of Int30_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt30OrNull`](#structFRHAPI__MatchTimelineEvent_1a377fd23824937dd31e24829a5805b665)`()` <a id="structFRHAPI__MatchTimelineEvent_1a377fd23824937dd31e24829a5805b665"></a>

Returns a pointer to Int30_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt30OrNull`](#structFRHAPI__MatchTimelineEvent_1a7fedefc83be603e7322a938502ce5b1a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7fedefc83be603e7322a938502ce5b1a"></a>

Returns a pointer to Int30_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt30`](#structFRHAPI__MatchTimelineEvent_1afe3c9852ac26a4db339d04599e74caae)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1afe3c9852ac26a4db339d04599e74caae"></a>

Sets the value of Int30_Optional and also sets Int30_IsSet to true.

#### `public inline void `[`SetInt30`](#structFRHAPI__MatchTimelineEvent_1a801a01207c7281663b93b1f1020853a3)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a801a01207c7281663b93b1f1020853a3"></a>

Sets the value of Int30_Optional and also sets Int30_IsSet to true using move semantics.

#### `public inline void `[`ClearInt30`](#structFRHAPI__MatchTimelineEvent_1a641d7601890868a6c374075b85d78425)`()` <a id="structFRHAPI__MatchTimelineEvent_1a641d7601890868a6c374075b85d78425"></a>

Clears the value of Int30_Optional and sets Int30_IsSet to false.

#### `public inline bool `[`IsInt30Set`](#structFRHAPI__MatchTimelineEvent_1ab1dafad8baf2410a620d67aef3686841)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab1dafad8baf2410a620d67aef3686841"></a>

Checks whether Int30_Optional has been set.

#### `public inline bool `[`IsInt30DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a51d170f0188f47fbad2f89604938f0b5)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a51d170f0188f47fbad2f89604938f0b5"></a>

Returns true if Int30_Optional is set and matches the default value.

#### `public inline void `[`SetInt30ToDefault`](#structFRHAPI__MatchTimelineEvent_1a60f6f9127a36c54d0ffb81ea79076031)`()` <a id="structFRHAPI__MatchTimelineEvent_1a60f6f9127a36c54d0ffb81ea79076031"></a>

Sets the value of Int30_Optional to its default and also sets Int30_IsSet to true.

#### `public inline void `[`SetInt30ToNull`](#structFRHAPI__MatchTimelineEvent_1a3465677fd5150c72fb10061d377c5f51)`()` <a id="structFRHAPI__MatchTimelineEvent_1a3465677fd5150c72fb10061d377c5f51"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt30Null`](#structFRHAPI__MatchTimelineEvent_1aea067df0cb06b5ad4c5828e632d06fd0)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aea067df0cb06b5ad4c5828e632d06fd0"></a>

Checks whether Int30_Optional is set to null.

#### `public inline int32 & `[`GetInt31`](#structFRHAPI__MatchTimelineEvent_1a150ae8deb60ac22b00c3d6551cf87576)`()` <a id="structFRHAPI__MatchTimelineEvent_1a150ae8deb60ac22b00c3d6551cf87576"></a>

Gets the value of Int31_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt31`](#structFRHAPI__MatchTimelineEvent_1ab8b4e13e1b9959f790cce82b69c9c2ce)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab8b4e13e1b9959f790cce82b69c9c2ce"></a>

Gets the value of Int31_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt31`](#structFRHAPI__MatchTimelineEvent_1a3ed5d807aa0ccaaa0aa1060a8fb28877)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a3ed5d807aa0ccaaa0aa1060a8fb28877"></a>

Gets the value of Int31_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt31`](#structFRHAPI__MatchTimelineEvent_1a039ee7edec99ec84696f65144caa8b90)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a039ee7edec99ec84696f65144caa8b90"></a>

Fills OutValue with the value of Int31_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt31OrNull`](#structFRHAPI__MatchTimelineEvent_1adbfbcc399c1e616799fec38ce8dbbc03)`()` <a id="structFRHAPI__MatchTimelineEvent_1adbfbcc399c1e616799fec38ce8dbbc03"></a>

Returns a pointer to Int31_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt31OrNull`](#structFRHAPI__MatchTimelineEvent_1afec0150bb78a663759c6732c1f6cfd27)`() const` <a id="structFRHAPI__MatchTimelineEvent_1afec0150bb78a663759c6732c1f6cfd27"></a>

Returns a pointer to Int31_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt31`](#structFRHAPI__MatchTimelineEvent_1a89113d81ec3915e3590252038d107033)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a89113d81ec3915e3590252038d107033"></a>

Sets the value of Int31_Optional and also sets Int31_IsSet to true.

#### `public inline void `[`SetInt31`](#structFRHAPI__MatchTimelineEvent_1a0e29ba9408cebb2a9805c28e0eb6970f)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a0e29ba9408cebb2a9805c28e0eb6970f"></a>

Sets the value of Int31_Optional and also sets Int31_IsSet to true using move semantics.

#### `public inline void `[`ClearInt31`](#structFRHAPI__MatchTimelineEvent_1acedb5e2db29d021c843ec651c811423c)`()` <a id="structFRHAPI__MatchTimelineEvent_1acedb5e2db29d021c843ec651c811423c"></a>

Clears the value of Int31_Optional and sets Int31_IsSet to false.

#### `public inline bool `[`IsInt31Set`](#structFRHAPI__MatchTimelineEvent_1a00796f17ebaa51f9ed3575200f5faec0)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a00796f17ebaa51f9ed3575200f5faec0"></a>

Checks whether Int31_Optional has been set.

#### `public inline bool `[`IsInt31DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a140dade7226bb125a47206b8c80a7c96)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a140dade7226bb125a47206b8c80a7c96"></a>

Returns true if Int31_Optional is set and matches the default value.

#### `public inline void `[`SetInt31ToDefault`](#structFRHAPI__MatchTimelineEvent_1a581e96ec5f88a8367be153dce4da1cf2)`()` <a id="structFRHAPI__MatchTimelineEvent_1a581e96ec5f88a8367be153dce4da1cf2"></a>

Sets the value of Int31_Optional to its default and also sets Int31_IsSet to true.

#### `public inline void `[`SetInt31ToNull`](#structFRHAPI__MatchTimelineEvent_1a6c60dc6ae65e20b8b582744b2bbee8c6)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6c60dc6ae65e20b8b582744b2bbee8c6"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt31Null`](#structFRHAPI__MatchTimelineEvent_1a5ce4dbb2fc36456448d36621765f3e83)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5ce4dbb2fc36456448d36621765f3e83"></a>

Checks whether Int31_Optional is set to null.

#### `public inline int32 & `[`GetInt32`](#structFRHAPI__MatchTimelineEvent_1a2a33b5c760aa7cf120d5b5192389cbb5)`()` <a id="structFRHAPI__MatchTimelineEvent_1a2a33b5c760aa7cf120d5b5192389cbb5"></a>

Gets the value of Int32_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt32`](#structFRHAPI__MatchTimelineEvent_1a87c2045ff178d37e55164baad8e79c31)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a87c2045ff178d37e55164baad8e79c31"></a>

Gets the value of Int32_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetInt32`](#structFRHAPI__MatchTimelineEvent_1a38b9901b5629fcdcd4ae83bab4175e11)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a38b9901b5629fcdcd4ae83bab4175e11"></a>

Gets the value of Int32_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInt32`](#structFRHAPI__MatchTimelineEvent_1ad8b44844906b6db3ac5c6a73b2b0bae7)`(int32 & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ad8b44844906b6db3ac5c6a73b2b0bae7"></a>

Fills OutValue with the value of Int32_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetInt32OrNull`](#structFRHAPI__MatchTimelineEvent_1a0dfa80ca80d00ffb05b149549262bfd2)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0dfa80ca80d00ffb05b149549262bfd2"></a>

Returns a pointer to Int32_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetInt32OrNull`](#structFRHAPI__MatchTimelineEvent_1a701d9836e29a577f0da8a2151c21471f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a701d9836e29a577f0da8a2151c21471f"></a>

Returns a pointer to Int32_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInt32`](#structFRHAPI__MatchTimelineEvent_1a3a718bd7e52d9a370cfb1c54c6596599)`(const int32 & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a3a718bd7e52d9a370cfb1c54c6596599"></a>

Sets the value of Int32_Optional and also sets Int32_IsSet to true.

#### `public inline void `[`SetInt32`](#structFRHAPI__MatchTimelineEvent_1ad91c2569175763825cfeb52181356e1d)`(int32 && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ad91c2569175763825cfeb52181356e1d"></a>

Sets the value of Int32_Optional and also sets Int32_IsSet to true using move semantics.

#### `public inline void `[`ClearInt32`](#structFRHAPI__MatchTimelineEvent_1aaf18bda4b1b63b835e083f1c473b2281)`()` <a id="structFRHAPI__MatchTimelineEvent_1aaf18bda4b1b63b835e083f1c473b2281"></a>

Clears the value of Int32_Optional and sets Int32_IsSet to false.

#### `public inline bool `[`IsInt32Set`](#structFRHAPI__MatchTimelineEvent_1acf98019c72f7d12d42c94a50bd910e1d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1acf98019c72f7d12d42c94a50bd910e1d"></a>

Checks whether Int32_Optional has been set.

#### `public inline bool `[`IsInt32DefaultValue`](#structFRHAPI__MatchTimelineEvent_1a896d71b29e1f11a9a33efbce3dc04e37)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a896d71b29e1f11a9a33efbce3dc04e37"></a>

Returns true if Int32_Optional is set and matches the default value.

#### `public inline void `[`SetInt32ToDefault`](#structFRHAPI__MatchTimelineEvent_1af682f5f1256accb7604524cf89200cff)`()` <a id="structFRHAPI__MatchTimelineEvent_1af682f5f1256accb7604524cf89200cff"></a>

Sets the value of Int32_Optional to its default and also sets Int32_IsSet to true.

#### `public inline void `[`SetInt32ToNull`](#structFRHAPI__MatchTimelineEvent_1aa226ba0215ce6026d28f47ebfb84dba2)`()` <a id="structFRHAPI__MatchTimelineEvent_1aa226ba0215ce6026d28f47ebfb84dba2"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInt32Null`](#structFRHAPI__MatchTimelineEvent_1a0aa310c1a7f8d32bf1b8e2322a35d853)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0aa310c1a7f8d32bf1b8e2322a35d853"></a>

Checks whether Int32_Optional is set to null.

#### `public inline FString & `[`GetStr1`](#structFRHAPI__MatchTimelineEvent_1ae9d20e7733191dc0e66b99bab64b1319)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae9d20e7733191dc0e66b99bab64b1319"></a>

Gets the value of Str1_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr1`](#structFRHAPI__MatchTimelineEvent_1ace14d865d53204345bbef6e369c43cad)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ace14d865d53204345bbef6e369c43cad"></a>

Gets the value of Str1_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr1`](#structFRHAPI__MatchTimelineEvent_1a48bf82fc7aad98965cd2e2ddc634b1b3)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a48bf82fc7aad98965cd2e2ddc634b1b3"></a>

Gets the value of Str1_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr1`](#structFRHAPI__MatchTimelineEvent_1a698b212ba584e58e0b3247a0e1da8b97)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a698b212ba584e58e0b3247a0e1da8b97"></a>

Fills OutValue with the value of Str1_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr1OrNull`](#structFRHAPI__MatchTimelineEvent_1a0fb69a7746261e664e45ac75d2b2d6c2)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0fb69a7746261e664e45ac75d2b2d6c2"></a>

Returns a pointer to Str1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr1OrNull`](#structFRHAPI__MatchTimelineEvent_1a9812d21d272b67d69330dccedac4b046)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a9812d21d272b67d69330dccedac4b046"></a>

Returns a pointer to Str1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr1`](#structFRHAPI__MatchTimelineEvent_1a43537d5af8d1e3601655d04477e789ed)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a43537d5af8d1e3601655d04477e789ed"></a>

Sets the value of Str1_Optional and also sets Str1_IsSet to true.

#### `public inline void `[`SetStr1`](#structFRHAPI__MatchTimelineEvent_1a0351364c4bba6547c7bcf04a168305df)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a0351364c4bba6547c7bcf04a168305df"></a>

Sets the value of Str1_Optional and also sets Str1_IsSet to true using move semantics.

#### `public inline void `[`ClearStr1`](#structFRHAPI__MatchTimelineEvent_1a09c81b0bde457231d855281dcfeb0b85)`()` <a id="structFRHAPI__MatchTimelineEvent_1a09c81b0bde457231d855281dcfeb0b85"></a>

Clears the value of Str1_Optional and sets Str1_IsSet to false.

#### `public inline bool `[`IsStr1Set`](#structFRHAPI__MatchTimelineEvent_1a8fd2aedf1df109da3c942ebf880067df)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8fd2aedf1df109da3c942ebf880067df"></a>

Checks whether Str1_Optional has been set.

#### `public inline void `[`SetStr1ToNull`](#structFRHAPI__MatchTimelineEvent_1a21d813e45a4698acad1b1c840816f903)`()` <a id="structFRHAPI__MatchTimelineEvent_1a21d813e45a4698acad1b1c840816f903"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr1Null`](#structFRHAPI__MatchTimelineEvent_1aa5d7f4bfd6a4196c7c74405becbfe5a3)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa5d7f4bfd6a4196c7c74405becbfe5a3"></a>

Checks whether Str1_Optional is set to null.

#### `public inline FString & `[`GetStr2`](#structFRHAPI__MatchTimelineEvent_1a7b714563f3569920d37f6213014a6149)`()` <a id="structFRHAPI__MatchTimelineEvent_1a7b714563f3569920d37f6213014a6149"></a>

Gets the value of Str2_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr2`](#structFRHAPI__MatchTimelineEvent_1ae611aa42990f53799de8bb58529268a6)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ae611aa42990f53799de8bb58529268a6"></a>

Gets the value of Str2_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr2`](#structFRHAPI__MatchTimelineEvent_1afa3dbc211502577a24a4a86cc283327f)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1afa3dbc211502577a24a4a86cc283327f"></a>

Gets the value of Str2_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr2`](#structFRHAPI__MatchTimelineEvent_1a979f13beb6d2da1a544e1f811c2eaa04)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a979f13beb6d2da1a544e1f811c2eaa04"></a>

Fills OutValue with the value of Str2_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr2OrNull`](#structFRHAPI__MatchTimelineEvent_1a89a8fd8a5b7994a003aee721d63a7900)`()` <a id="structFRHAPI__MatchTimelineEvent_1a89a8fd8a5b7994a003aee721d63a7900"></a>

Returns a pointer to Str2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr2OrNull`](#structFRHAPI__MatchTimelineEvent_1aa689dbf477571cb408ea7d087f314318)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa689dbf477571cb408ea7d087f314318"></a>

Returns a pointer to Str2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr2`](#structFRHAPI__MatchTimelineEvent_1aed54f08ffba9b6d44c2664bb7a9c4860)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aed54f08ffba9b6d44c2664bb7a9c4860"></a>

Sets the value of Str2_Optional and also sets Str2_IsSet to true.

#### `public inline void `[`SetStr2`](#structFRHAPI__MatchTimelineEvent_1a97e218fad0bbbf43de10adf978a49fa1)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a97e218fad0bbbf43de10adf978a49fa1"></a>

Sets the value of Str2_Optional and also sets Str2_IsSet to true using move semantics.

#### `public inline void `[`ClearStr2`](#structFRHAPI__MatchTimelineEvent_1a00836d3f8366129b25613d21c8fcdbd6)`()` <a id="structFRHAPI__MatchTimelineEvent_1a00836d3f8366129b25613d21c8fcdbd6"></a>

Clears the value of Str2_Optional and sets Str2_IsSet to false.

#### `public inline bool `[`IsStr2Set`](#structFRHAPI__MatchTimelineEvent_1a7c879386615b22b550033eaa11701def)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7c879386615b22b550033eaa11701def"></a>

Checks whether Str2_Optional has been set.

#### `public inline void `[`SetStr2ToNull`](#structFRHAPI__MatchTimelineEvent_1a104160e05b0571588c7be85149e2c4ca)`()` <a id="structFRHAPI__MatchTimelineEvent_1a104160e05b0571588c7be85149e2c4ca"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr2Null`](#structFRHAPI__MatchTimelineEvent_1a992aac455bc09d46d600ab43fb4ecf41)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a992aac455bc09d46d600ab43fb4ecf41"></a>

Checks whether Str2_Optional is set to null.

#### `public inline FString & `[`GetStr3`](#structFRHAPI__MatchTimelineEvent_1a0ccbbf18667bb1e738a542bc8a108b77)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0ccbbf18667bb1e738a542bc8a108b77"></a>

Gets the value of Str3_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr3`](#structFRHAPI__MatchTimelineEvent_1a2164d19b4b0151720b9f7acf5de83bac)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2164d19b4b0151720b9f7acf5de83bac"></a>

Gets the value of Str3_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr3`](#structFRHAPI__MatchTimelineEvent_1a3687c79fc7eddafe0c999b4d0ba8e6d0)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a3687c79fc7eddafe0c999b4d0ba8e6d0"></a>

Gets the value of Str3_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr3`](#structFRHAPI__MatchTimelineEvent_1a2bf72e58ec9fc9951daf454afe9e63d9)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a2bf72e58ec9fc9951daf454afe9e63d9"></a>

Fills OutValue with the value of Str3_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr3OrNull`](#structFRHAPI__MatchTimelineEvent_1a6bd053aae5cb646044cbe6a71a2a1348)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6bd053aae5cb646044cbe6a71a2a1348"></a>

Returns a pointer to Str3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr3OrNull`](#structFRHAPI__MatchTimelineEvent_1a013ff45572765b7fd444348fd28fa9a2)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a013ff45572765b7fd444348fd28fa9a2"></a>

Returns a pointer to Str3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr3`](#structFRHAPI__MatchTimelineEvent_1aa094193528d39751efabd5f4887d27f1)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aa094193528d39751efabd5f4887d27f1"></a>

Sets the value of Str3_Optional and also sets Str3_IsSet to true.

#### `public inline void `[`SetStr3`](#structFRHAPI__MatchTimelineEvent_1ae3b10861f82986daeb127785827459ad)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ae3b10861f82986daeb127785827459ad"></a>

Sets the value of Str3_Optional and also sets Str3_IsSet to true using move semantics.

#### `public inline void `[`ClearStr3`](#structFRHAPI__MatchTimelineEvent_1aafef902572aa8bfb13433d4c7efadcbc)`()` <a id="structFRHAPI__MatchTimelineEvent_1aafef902572aa8bfb13433d4c7efadcbc"></a>

Clears the value of Str3_Optional and sets Str3_IsSet to false.

#### `public inline bool `[`IsStr3Set`](#structFRHAPI__MatchTimelineEvent_1ab021dce0e7771e07260b44cabdeddf58)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab021dce0e7771e07260b44cabdeddf58"></a>

Checks whether Str3_Optional has been set.

#### `public inline void `[`SetStr3ToNull`](#structFRHAPI__MatchTimelineEvent_1a29afccb717e5acd9de198fde8f3536a1)`()` <a id="structFRHAPI__MatchTimelineEvent_1a29afccb717e5acd9de198fde8f3536a1"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr3Null`](#structFRHAPI__MatchTimelineEvent_1aa38fb1f6a1da847e714a069c1e74e5da)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa38fb1f6a1da847e714a069c1e74e5da"></a>

Checks whether Str3_Optional is set to null.

#### `public inline FString & `[`GetStr4`](#structFRHAPI__MatchTimelineEvent_1ad49f8b1ea9cfe4fcbdb89ba7ce3e7545)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad49f8b1ea9cfe4fcbdb89ba7ce3e7545"></a>

Gets the value of Str4_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr4`](#structFRHAPI__MatchTimelineEvent_1af5b81e96b66d7d3e835410ac4f310e9e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af5b81e96b66d7d3e835410ac4f310e9e"></a>

Gets the value of Str4_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr4`](#structFRHAPI__MatchTimelineEvent_1ac174328fa66a50c6f6bcdade66683335)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ac174328fa66a50c6f6bcdade66683335"></a>

Gets the value of Str4_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr4`](#structFRHAPI__MatchTimelineEvent_1a693bb5475ddbdf8b1575b41197fb1d0e)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a693bb5475ddbdf8b1575b41197fb1d0e"></a>

Fills OutValue with the value of Str4_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr4OrNull`](#structFRHAPI__MatchTimelineEvent_1acb1c4a672e54f26d6076771bffed0cfe)`()` <a id="structFRHAPI__MatchTimelineEvent_1acb1c4a672e54f26d6076771bffed0cfe"></a>

Returns a pointer to Str4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr4OrNull`](#structFRHAPI__MatchTimelineEvent_1a1eeda44367511a39fffa6ea51f2cbc71)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1eeda44367511a39fffa6ea51f2cbc71"></a>

Returns a pointer to Str4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr4`](#structFRHAPI__MatchTimelineEvent_1adcba6ca9c045489dd02c690fc12e7c25)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1adcba6ca9c045489dd02c690fc12e7c25"></a>

Sets the value of Str4_Optional and also sets Str4_IsSet to true.

#### `public inline void `[`SetStr4`](#structFRHAPI__MatchTimelineEvent_1af8636b04c16891d464151d00e4cf140f)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1af8636b04c16891d464151d00e4cf140f"></a>

Sets the value of Str4_Optional and also sets Str4_IsSet to true using move semantics.

#### `public inline void `[`ClearStr4`](#structFRHAPI__MatchTimelineEvent_1a7a36ea36a5c36a501b1c79fe1be92808)`()` <a id="structFRHAPI__MatchTimelineEvent_1a7a36ea36a5c36a501b1c79fe1be92808"></a>

Clears the value of Str4_Optional and sets Str4_IsSet to false.

#### `public inline bool `[`IsStr4Set`](#structFRHAPI__MatchTimelineEvent_1ac4b1822d3117f297454b89308de895da)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac4b1822d3117f297454b89308de895da"></a>

Checks whether Str4_Optional has been set.

#### `public inline void `[`SetStr4ToNull`](#structFRHAPI__MatchTimelineEvent_1a33baa4edd1c100bdeaa58f9a228b4410)`()` <a id="structFRHAPI__MatchTimelineEvent_1a33baa4edd1c100bdeaa58f9a228b4410"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr4Null`](#structFRHAPI__MatchTimelineEvent_1aad9ab100a768dfdc366f7b18a5b5c063)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aad9ab100a768dfdc366f7b18a5b5c063"></a>

Checks whether Str4_Optional is set to null.

#### `public inline FString & `[`GetStr5`](#structFRHAPI__MatchTimelineEvent_1a4d8866ef1a9ddc08f4694ad419ec7562)`()` <a id="structFRHAPI__MatchTimelineEvent_1a4d8866ef1a9ddc08f4694ad419ec7562"></a>

Gets the value of Str5_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr5`](#structFRHAPI__MatchTimelineEvent_1a333566c725d736d4f03e7d4c338cb745)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a333566c725d736d4f03e7d4c338cb745"></a>

Gets the value of Str5_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr5`](#structFRHAPI__MatchTimelineEvent_1a645946d42cf945b68c3650d94248b6ad)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a645946d42cf945b68c3650d94248b6ad"></a>

Gets the value of Str5_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr5`](#structFRHAPI__MatchTimelineEvent_1a8a157162e860781d850766064d1d28c4)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a8a157162e860781d850766064d1d28c4"></a>

Fills OutValue with the value of Str5_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr5OrNull`](#structFRHAPI__MatchTimelineEvent_1a286b18d79a08e2dee87c1052329ee59a)`()` <a id="structFRHAPI__MatchTimelineEvent_1a286b18d79a08e2dee87c1052329ee59a"></a>

Returns a pointer to Str5_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr5OrNull`](#structFRHAPI__MatchTimelineEvent_1a4263fc449d7d2b18b84d945796e69b51)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4263fc449d7d2b18b84d945796e69b51"></a>

Returns a pointer to Str5_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr5`](#structFRHAPI__MatchTimelineEvent_1a4ec361f8f52747a97ea6f203bb3fbb69)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a4ec361f8f52747a97ea6f203bb3fbb69"></a>

Sets the value of Str5_Optional and also sets Str5_IsSet to true.

#### `public inline void `[`SetStr5`](#structFRHAPI__MatchTimelineEvent_1a3d88cc5c736a5190e0748b12d164d72e)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a3d88cc5c736a5190e0748b12d164d72e"></a>

Sets the value of Str5_Optional and also sets Str5_IsSet to true using move semantics.

#### `public inline void `[`ClearStr5`](#structFRHAPI__MatchTimelineEvent_1afb9ca287aba57ba7c947980c83e787ea)`()` <a id="structFRHAPI__MatchTimelineEvent_1afb9ca287aba57ba7c947980c83e787ea"></a>

Clears the value of Str5_Optional and sets Str5_IsSet to false.

#### `public inline bool `[`IsStr5Set`](#structFRHAPI__MatchTimelineEvent_1a0697d4c307b6fd7c56c65a05db318d69)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0697d4c307b6fd7c56c65a05db318d69"></a>

Checks whether Str5_Optional has been set.

#### `public inline void `[`SetStr5ToNull`](#structFRHAPI__MatchTimelineEvent_1a296128535d4503331e7d39c97dd65a5e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a296128535d4503331e7d39c97dd65a5e"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr5Null`](#structFRHAPI__MatchTimelineEvent_1a8cb67d4f6a4ecef50cb25fdad8c2b91f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8cb67d4f6a4ecef50cb25fdad8c2b91f"></a>

Checks whether Str5_Optional is set to null.

#### `public inline FString & `[`GetStr6`](#structFRHAPI__MatchTimelineEvent_1a7a5586bf32e01c20770814215559c105)`()` <a id="structFRHAPI__MatchTimelineEvent_1a7a5586bf32e01c20770814215559c105"></a>

Gets the value of Str6_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr6`](#structFRHAPI__MatchTimelineEvent_1a017abf46f1e59e9b51bc646b501c8367)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a017abf46f1e59e9b51bc646b501c8367"></a>

Gets the value of Str6_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr6`](#structFRHAPI__MatchTimelineEvent_1a17f15baf5428b97b58ed57bd969dec18)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a17f15baf5428b97b58ed57bd969dec18"></a>

Gets the value of Str6_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr6`](#structFRHAPI__MatchTimelineEvent_1a1ccf40a6ba85845d474c3b1a1d7548ed)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a1ccf40a6ba85845d474c3b1a1d7548ed"></a>

Fills OutValue with the value of Str6_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr6OrNull`](#structFRHAPI__MatchTimelineEvent_1a3e794973475da207812c7da85e1ca15e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a3e794973475da207812c7da85e1ca15e"></a>

Returns a pointer to Str6_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr6OrNull`](#structFRHAPI__MatchTimelineEvent_1abbc578eb9706e4b68d2385141461d95a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1abbc578eb9706e4b68d2385141461d95a"></a>

Returns a pointer to Str6_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr6`](#structFRHAPI__MatchTimelineEvent_1a38bd8c0e242dbb797cafdc6ea5daede1)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a38bd8c0e242dbb797cafdc6ea5daede1"></a>

Sets the value of Str6_Optional and also sets Str6_IsSet to true.

#### `public inline void `[`SetStr6`](#structFRHAPI__MatchTimelineEvent_1a3355e212d871413a5ca5844cfd75f0cf)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a3355e212d871413a5ca5844cfd75f0cf"></a>

Sets the value of Str6_Optional and also sets Str6_IsSet to true using move semantics.

#### `public inline void `[`ClearStr6`](#structFRHAPI__MatchTimelineEvent_1ad597d65ebbb093bbc6c133b422a19706)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad597d65ebbb093bbc6c133b422a19706"></a>

Clears the value of Str6_Optional and sets Str6_IsSet to false.

#### `public inline bool `[`IsStr6Set`](#structFRHAPI__MatchTimelineEvent_1a8f60ffb55f9ebde860f6900da94f3bde)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8f60ffb55f9ebde860f6900da94f3bde"></a>

Checks whether Str6_Optional has been set.

#### `public inline void `[`SetStr6ToNull`](#structFRHAPI__MatchTimelineEvent_1aa3ccea6a963b22081993b44cc8c4de5e)`()` <a id="structFRHAPI__MatchTimelineEvent_1aa3ccea6a963b22081993b44cc8c4de5e"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr6Null`](#structFRHAPI__MatchTimelineEvent_1a4713eacb8ab8c9fb080bbd05964c5ae4)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4713eacb8ab8c9fb080bbd05964c5ae4"></a>

Checks whether Str6_Optional is set to null.

#### `public inline FString & `[`GetStr7`](#structFRHAPI__MatchTimelineEvent_1ad499da956e1535cd261d87de29ee5917)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad499da956e1535cd261d87de29ee5917"></a>

Gets the value of Str7_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr7`](#structFRHAPI__MatchTimelineEvent_1ae790c24302a1eef6262b9f4256774c11)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ae790c24302a1eef6262b9f4256774c11"></a>

Gets the value of Str7_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr7`](#structFRHAPI__MatchTimelineEvent_1a4a23b8ed026d8dcd31cf0c246b12a7ab)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a4a23b8ed026d8dcd31cf0c246b12a7ab"></a>

Gets the value of Str7_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr7`](#structFRHAPI__MatchTimelineEvent_1a046a3f4357d9bd9076cf587ec4ca87d2)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a046a3f4357d9bd9076cf587ec4ca87d2"></a>

Fills OutValue with the value of Str7_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr7OrNull`](#structFRHAPI__MatchTimelineEvent_1a95c410cefc92bc89855f80e6b05c33f0)`()` <a id="structFRHAPI__MatchTimelineEvent_1a95c410cefc92bc89855f80e6b05c33f0"></a>

Returns a pointer to Str7_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr7OrNull`](#structFRHAPI__MatchTimelineEvent_1ac2c41b7e70cd59257a4ae0038b02dc5e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac2c41b7e70cd59257a4ae0038b02dc5e"></a>

Returns a pointer to Str7_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr7`](#structFRHAPI__MatchTimelineEvent_1a5c16c6f9f83147074adab84f1df8da69)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a5c16c6f9f83147074adab84f1df8da69"></a>

Sets the value of Str7_Optional and also sets Str7_IsSet to true.

#### `public inline void `[`SetStr7`](#structFRHAPI__MatchTimelineEvent_1ac25710f4c50af47548c44a3d0f110e08)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ac25710f4c50af47548c44a3d0f110e08"></a>

Sets the value of Str7_Optional and also sets Str7_IsSet to true using move semantics.

#### `public inline void `[`ClearStr7`](#structFRHAPI__MatchTimelineEvent_1afd2086460e4c5fbee304ba290bceef95)`()` <a id="structFRHAPI__MatchTimelineEvent_1afd2086460e4c5fbee304ba290bceef95"></a>

Clears the value of Str7_Optional and sets Str7_IsSet to false.

#### `public inline bool `[`IsStr7Set`](#structFRHAPI__MatchTimelineEvent_1aaedfa9fe069fe953b15f71dcf536ac5c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aaedfa9fe069fe953b15f71dcf536ac5c"></a>

Checks whether Str7_Optional has been set.

#### `public inline void `[`SetStr7ToNull`](#structFRHAPI__MatchTimelineEvent_1ad4f82d6e8d99ce6f3fe3e25eaf5a245f)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad4f82d6e8d99ce6f3fe3e25eaf5a245f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr7Null`](#structFRHAPI__MatchTimelineEvent_1abfac99433aceb741a8840c62bedd704f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1abfac99433aceb741a8840c62bedd704f"></a>

Checks whether Str7_Optional is set to null.

#### `public inline FString & `[`GetStr8`](#structFRHAPI__MatchTimelineEvent_1ac623d489847a5e35fb8eb7dc989511c7)`()` <a id="structFRHAPI__MatchTimelineEvent_1ac623d489847a5e35fb8eb7dc989511c7"></a>

Gets the value of Str8_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr8`](#structFRHAPI__MatchTimelineEvent_1aa7a868ea8333a7beb0fe69b9b3867fab)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa7a868ea8333a7beb0fe69b9b3867fab"></a>

Gets the value of Str8_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr8`](#structFRHAPI__MatchTimelineEvent_1a502e7db58cdc4866248874b0a243bc52)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a502e7db58cdc4866248874b0a243bc52"></a>

Gets the value of Str8_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr8`](#structFRHAPI__MatchTimelineEvent_1aa07533f01119e6d4fd28d4b591dda23c)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aa07533f01119e6d4fd28d4b591dda23c"></a>

Fills OutValue with the value of Str8_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr8OrNull`](#structFRHAPI__MatchTimelineEvent_1a2cf9a20e42bcc74247e5111fb2e86a23)`()` <a id="structFRHAPI__MatchTimelineEvent_1a2cf9a20e42bcc74247e5111fb2e86a23"></a>

Returns a pointer to Str8_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr8OrNull`](#structFRHAPI__MatchTimelineEvent_1a5b4e61339f30e7f2358b93dfe1476421)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5b4e61339f30e7f2358b93dfe1476421"></a>

Returns a pointer to Str8_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr8`](#structFRHAPI__MatchTimelineEvent_1a07145c801c70826ea82f3591b0560f6d)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a07145c801c70826ea82f3591b0560f6d"></a>

Sets the value of Str8_Optional and also sets Str8_IsSet to true.

#### `public inline void `[`SetStr8`](#structFRHAPI__MatchTimelineEvent_1a1f6c2bc3a67bd7960fc0fd4c3872fdf8)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a1f6c2bc3a67bd7960fc0fd4c3872fdf8"></a>

Sets the value of Str8_Optional and also sets Str8_IsSet to true using move semantics.

#### `public inline void `[`ClearStr8`](#structFRHAPI__MatchTimelineEvent_1a7e1b076a06636bd0b00c42f88ff01d33)`()` <a id="structFRHAPI__MatchTimelineEvent_1a7e1b076a06636bd0b00c42f88ff01d33"></a>

Clears the value of Str8_Optional and sets Str8_IsSet to false.

#### `public inline bool `[`IsStr8Set`](#structFRHAPI__MatchTimelineEvent_1a530876224fc27f8edb2c8a0d78c8b4de)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a530876224fc27f8edb2c8a0d78c8b4de"></a>

Checks whether Str8_Optional has been set.

#### `public inline void `[`SetStr8ToNull`](#structFRHAPI__MatchTimelineEvent_1a6233abe7553346320a33923576dfe072)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6233abe7553346320a33923576dfe072"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr8Null`](#structFRHAPI__MatchTimelineEvent_1a4f8a074cf187ac3459052173d55153e2)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4f8a074cf187ac3459052173d55153e2"></a>

Checks whether Str8_Optional is set to null.

#### `public inline FString & `[`GetStr9`](#structFRHAPI__MatchTimelineEvent_1a39546994d4c2189fdf6b1b5ada6059b5)`()` <a id="structFRHAPI__MatchTimelineEvent_1a39546994d4c2189fdf6b1b5ada6059b5"></a>

Gets the value of Str9_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr9`](#structFRHAPI__MatchTimelineEvent_1a95fbf67ccbc586fa0f3e034e0bce82b1)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a95fbf67ccbc586fa0f3e034e0bce82b1"></a>

Gets the value of Str9_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr9`](#structFRHAPI__MatchTimelineEvent_1a70df2c023f1607a253ef19b86833326f)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a70df2c023f1607a253ef19b86833326f"></a>

Gets the value of Str9_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr9`](#structFRHAPI__MatchTimelineEvent_1a6c5d168bc20f731b1b2792b369e72c27)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a6c5d168bc20f731b1b2792b369e72c27"></a>

Fills OutValue with the value of Str9_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr9OrNull`](#structFRHAPI__MatchTimelineEvent_1a5ba0a3e8bbc6cb174a21b268fb6d0411)`()` <a id="structFRHAPI__MatchTimelineEvent_1a5ba0a3e8bbc6cb174a21b268fb6d0411"></a>

Returns a pointer to Str9_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr9OrNull`](#structFRHAPI__MatchTimelineEvent_1a18d9a659a989429b9a0e9a3102c816ec)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a18d9a659a989429b9a0e9a3102c816ec"></a>

Returns a pointer to Str9_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr9`](#structFRHAPI__MatchTimelineEvent_1a6c4a908bc378119c49afd1d63d067c23)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a6c4a908bc378119c49afd1d63d067c23"></a>

Sets the value of Str9_Optional and also sets Str9_IsSet to true.

#### `public inline void `[`SetStr9`](#structFRHAPI__MatchTimelineEvent_1acd56184527b23b4c72286e6258c44763)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1acd56184527b23b4c72286e6258c44763"></a>

Sets the value of Str9_Optional and also sets Str9_IsSet to true using move semantics.

#### `public inline void `[`ClearStr9`](#structFRHAPI__MatchTimelineEvent_1a07a2f565b78245b1a0d00073ab5b1173)`()` <a id="structFRHAPI__MatchTimelineEvent_1a07a2f565b78245b1a0d00073ab5b1173"></a>

Clears the value of Str9_Optional and sets Str9_IsSet to false.

#### `public inline bool `[`IsStr9Set`](#structFRHAPI__MatchTimelineEvent_1acfb82cb5575401bbe3247421f6d795cc)`() const` <a id="structFRHAPI__MatchTimelineEvent_1acfb82cb5575401bbe3247421f6d795cc"></a>

Checks whether Str9_Optional has been set.

#### `public inline void `[`SetStr9ToNull`](#structFRHAPI__MatchTimelineEvent_1ab391f44e791611098fe22f4d0ace22c6)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab391f44e791611098fe22f4d0ace22c6"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr9Null`](#structFRHAPI__MatchTimelineEvent_1abd6d8c6e5c59e3e7167699d00ccb7592)`() const` <a id="structFRHAPI__MatchTimelineEvent_1abd6d8c6e5c59e3e7167699d00ccb7592"></a>

Checks whether Str9_Optional is set to null.

#### `public inline FString & `[`GetStr10`](#structFRHAPI__MatchTimelineEvent_1a5226db625dc5625214b433afe364fc07)`()` <a id="structFRHAPI__MatchTimelineEvent_1a5226db625dc5625214b433afe364fc07"></a>

Gets the value of Str10_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr10`](#structFRHAPI__MatchTimelineEvent_1a86f7ad33291235f7a01e6d7a5fc23f19)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a86f7ad33291235f7a01e6d7a5fc23f19"></a>

Gets the value of Str10_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr10`](#structFRHAPI__MatchTimelineEvent_1a9c57a916f131187c042d4a7995f07eaa)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a9c57a916f131187c042d4a7995f07eaa"></a>

Gets the value of Str10_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr10`](#structFRHAPI__MatchTimelineEvent_1a60304d41f4e0b8146daed76f89022d6b)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a60304d41f4e0b8146daed76f89022d6b"></a>

Fills OutValue with the value of Str10_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr10OrNull`](#structFRHAPI__MatchTimelineEvent_1a807949bf002dfa3e467d721a52b5b949)`()` <a id="structFRHAPI__MatchTimelineEvent_1a807949bf002dfa3e467d721a52b5b949"></a>

Returns a pointer to Str10_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr10OrNull`](#structFRHAPI__MatchTimelineEvent_1ac8473c54d362564899ab55ab9eff277e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac8473c54d362564899ab55ab9eff277e"></a>

Returns a pointer to Str10_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr10`](#structFRHAPI__MatchTimelineEvent_1a2d37cc4f33869e1523c46f6743ec13ee)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a2d37cc4f33869e1523c46f6743ec13ee"></a>

Sets the value of Str10_Optional and also sets Str10_IsSet to true.

#### `public inline void `[`SetStr10`](#structFRHAPI__MatchTimelineEvent_1a7f0e4af4a84337b8404f7bd922e276d2)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a7f0e4af4a84337b8404f7bd922e276d2"></a>

Sets the value of Str10_Optional and also sets Str10_IsSet to true using move semantics.

#### `public inline void `[`ClearStr10`](#structFRHAPI__MatchTimelineEvent_1a13e8edac4c1ea3f1c3be28b5c9cb5203)`()` <a id="structFRHAPI__MatchTimelineEvent_1a13e8edac4c1ea3f1c3be28b5c9cb5203"></a>

Clears the value of Str10_Optional and sets Str10_IsSet to false.

#### `public inline bool `[`IsStr10Set`](#structFRHAPI__MatchTimelineEvent_1a3cbf32b018f3e76ed00c9dfec331e86e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a3cbf32b018f3e76ed00c9dfec331e86e"></a>

Checks whether Str10_Optional has been set.

#### `public inline void `[`SetStr10ToNull`](#structFRHAPI__MatchTimelineEvent_1a35098ced5dce2bbde34d0c457ef72e85)`()` <a id="structFRHAPI__MatchTimelineEvent_1a35098ced5dce2bbde34d0c457ef72e85"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr10Null`](#structFRHAPI__MatchTimelineEvent_1aaa3033d50c04ac20b6d38d5ffa387c04)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aaa3033d50c04ac20b6d38d5ffa387c04"></a>

Checks whether Str10_Optional is set to null.

#### `public inline FString & `[`GetStr11`](#structFRHAPI__MatchTimelineEvent_1a8352b4206194f07291d54ae51388c569)`()` <a id="structFRHAPI__MatchTimelineEvent_1a8352b4206194f07291d54ae51388c569"></a>

Gets the value of Str11_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr11`](#structFRHAPI__MatchTimelineEvent_1aec18afd8d2d9e6ec80002014294cc006)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aec18afd8d2d9e6ec80002014294cc006"></a>

Gets the value of Str11_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr11`](#structFRHAPI__MatchTimelineEvent_1a515827291a7c71e47b1eaf8072cc9143)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a515827291a7c71e47b1eaf8072cc9143"></a>

Gets the value of Str11_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr11`](#structFRHAPI__MatchTimelineEvent_1a5ddf70f4b42deaae511bc8436eccf6b1)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a5ddf70f4b42deaae511bc8436eccf6b1"></a>

Fills OutValue with the value of Str11_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr11OrNull`](#structFRHAPI__MatchTimelineEvent_1a4e3ee6c598ef386c3a405c3e68c51d6a)`()` <a id="structFRHAPI__MatchTimelineEvent_1a4e3ee6c598ef386c3a405c3e68c51d6a"></a>

Returns a pointer to Str11_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr11OrNull`](#structFRHAPI__MatchTimelineEvent_1a044f3c5e2f582ae9ccb0f08740df088a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a044f3c5e2f582ae9ccb0f08740df088a"></a>

Returns a pointer to Str11_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr11`](#structFRHAPI__MatchTimelineEvent_1abb8ebfc7617bde7547bd57f6fefd58e1)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1abb8ebfc7617bde7547bd57f6fefd58e1"></a>

Sets the value of Str11_Optional and also sets Str11_IsSet to true.

#### `public inline void `[`SetStr11`](#structFRHAPI__MatchTimelineEvent_1a11a8b4633479538ee0559d33f03f1712)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a11a8b4633479538ee0559d33f03f1712"></a>

Sets the value of Str11_Optional and also sets Str11_IsSet to true using move semantics.

#### `public inline void `[`ClearStr11`](#structFRHAPI__MatchTimelineEvent_1aa66bf444af4a95ab62487a3cb6d82632)`()` <a id="structFRHAPI__MatchTimelineEvent_1aa66bf444af4a95ab62487a3cb6d82632"></a>

Clears the value of Str11_Optional and sets Str11_IsSet to false.

#### `public inline bool `[`IsStr11Set`](#structFRHAPI__MatchTimelineEvent_1a964c4a3586b0862a92e9ac3ff9e45ae8)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a964c4a3586b0862a92e9ac3ff9e45ae8"></a>

Checks whether Str11_Optional has been set.

#### `public inline void `[`SetStr11ToNull`](#structFRHAPI__MatchTimelineEvent_1ae798f477814404fa6bec8f4743cab7cf)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae798f477814404fa6bec8f4743cab7cf"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr11Null`](#structFRHAPI__MatchTimelineEvent_1a192a0b00644ce68fe0bc00820882aa89)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a192a0b00644ce68fe0bc00820882aa89"></a>

Checks whether Str11_Optional is set to null.

#### `public inline FString & `[`GetStr12`](#structFRHAPI__MatchTimelineEvent_1a802bd621129018721de7adc122b15d85)`()` <a id="structFRHAPI__MatchTimelineEvent_1a802bd621129018721de7adc122b15d85"></a>

Gets the value of Str12_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr12`](#structFRHAPI__MatchTimelineEvent_1ab13ba49211b0166e6792e4d2d470884e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab13ba49211b0166e6792e4d2d470884e"></a>

Gets the value of Str12_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr12`](#structFRHAPI__MatchTimelineEvent_1a498d949d1e2eac4d82a74573fa54d42b)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a498d949d1e2eac4d82a74573fa54d42b"></a>

Gets the value of Str12_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr12`](#structFRHAPI__MatchTimelineEvent_1a31cd39eaacfa81c6da0eaeecc6c9eda5)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a31cd39eaacfa81c6da0eaeecc6c9eda5"></a>

Fills OutValue with the value of Str12_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr12OrNull`](#structFRHAPI__MatchTimelineEvent_1a255260f0b486b2776ae3e8dea93eccf1)`()` <a id="structFRHAPI__MatchTimelineEvent_1a255260f0b486b2776ae3e8dea93eccf1"></a>

Returns a pointer to Str12_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr12OrNull`](#structFRHAPI__MatchTimelineEvent_1a63df7c5c673a0ce1d0488aa06f77c7e6)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a63df7c5c673a0ce1d0488aa06f77c7e6"></a>

Returns a pointer to Str12_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr12`](#structFRHAPI__MatchTimelineEvent_1a6a15f8b57c1e1e2f7920bd6530e94fcc)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a6a15f8b57c1e1e2f7920bd6530e94fcc"></a>

Sets the value of Str12_Optional and also sets Str12_IsSet to true.

#### `public inline void `[`SetStr12`](#structFRHAPI__MatchTimelineEvent_1aa8830d3ddeb97e4fda1b5b65c7d33a73)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aa8830d3ddeb97e4fda1b5b65c7d33a73"></a>

Sets the value of Str12_Optional and also sets Str12_IsSet to true using move semantics.

#### `public inline void `[`ClearStr12`](#structFRHAPI__MatchTimelineEvent_1af5fa6efdbe5321262b48849411b1b69e)`()` <a id="structFRHAPI__MatchTimelineEvent_1af5fa6efdbe5321262b48849411b1b69e"></a>

Clears the value of Str12_Optional and sets Str12_IsSet to false.

#### `public inline bool `[`IsStr12Set`](#structFRHAPI__MatchTimelineEvent_1a1d9173d84cc77a2cb29bc24b5e46fe28)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1d9173d84cc77a2cb29bc24b5e46fe28"></a>

Checks whether Str12_Optional has been set.

#### `public inline void `[`SetStr12ToNull`](#structFRHAPI__MatchTimelineEvent_1a22130534150cac9d8e97b92ac5ef6da8)`()` <a id="structFRHAPI__MatchTimelineEvent_1a22130534150cac9d8e97b92ac5ef6da8"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr12Null`](#structFRHAPI__MatchTimelineEvent_1a0221b126911ef54b989e4d71b40b964d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0221b126911ef54b989e4d71b40b964d"></a>

Checks whether Str12_Optional is set to null.

#### `public inline FString & `[`GetStr13`](#structFRHAPI__MatchTimelineEvent_1a7a0a325754d5d84bc0ba6a51fdbd1f5a)`()` <a id="structFRHAPI__MatchTimelineEvent_1a7a0a325754d5d84bc0ba6a51fdbd1f5a"></a>

Gets the value of Str13_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr13`](#structFRHAPI__MatchTimelineEvent_1a98bbc935263ed83e76705c6b8e59b119)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a98bbc935263ed83e76705c6b8e59b119"></a>

Gets the value of Str13_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr13`](#structFRHAPI__MatchTimelineEvent_1a472bd270ff6a8849a353f569d54ab01a)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a472bd270ff6a8849a353f569d54ab01a"></a>

Gets the value of Str13_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr13`](#structFRHAPI__MatchTimelineEvent_1a0dfdcef9fc6224fd65acce3586382b9a)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a0dfdcef9fc6224fd65acce3586382b9a"></a>

Fills OutValue with the value of Str13_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr13OrNull`](#structFRHAPI__MatchTimelineEvent_1a6f581028edd00d5f009e1dfe0e45d5a2)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6f581028edd00d5f009e1dfe0e45d5a2"></a>

Returns a pointer to Str13_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr13OrNull`](#structFRHAPI__MatchTimelineEvent_1afb9cb4198c5c187c38e0a44e3ecd8061)`() const` <a id="structFRHAPI__MatchTimelineEvent_1afb9cb4198c5c187c38e0a44e3ecd8061"></a>

Returns a pointer to Str13_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr13`](#structFRHAPI__MatchTimelineEvent_1a02973f19e697115531bc69bb7c81645b)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a02973f19e697115531bc69bb7c81645b"></a>

Sets the value of Str13_Optional and also sets Str13_IsSet to true.

#### `public inline void `[`SetStr13`](#structFRHAPI__MatchTimelineEvent_1abc7a4724f4176e4d401adc6e4e3b996c)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1abc7a4724f4176e4d401adc6e4e3b996c"></a>

Sets the value of Str13_Optional and also sets Str13_IsSet to true using move semantics.

#### `public inline void `[`ClearStr13`](#structFRHAPI__MatchTimelineEvent_1a32479d532752859d86053525693418d8)`()` <a id="structFRHAPI__MatchTimelineEvent_1a32479d532752859d86053525693418d8"></a>

Clears the value of Str13_Optional and sets Str13_IsSet to false.

#### `public inline bool `[`IsStr13Set`](#structFRHAPI__MatchTimelineEvent_1ae1083d2b69564a044e5b8dffd759818c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ae1083d2b69564a044e5b8dffd759818c"></a>

Checks whether Str13_Optional has been set.

#### `public inline void `[`SetStr13ToNull`](#structFRHAPI__MatchTimelineEvent_1af3a335a75e44b26752f79c25b544b132)`()` <a id="structFRHAPI__MatchTimelineEvent_1af3a335a75e44b26752f79c25b544b132"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr13Null`](#structFRHAPI__MatchTimelineEvent_1a0ccd3e36dd53dff5e847d385dd2ef5ec)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0ccd3e36dd53dff5e847d385dd2ef5ec"></a>

Checks whether Str13_Optional is set to null.

#### `public inline FString & `[`GetStr14`](#structFRHAPI__MatchTimelineEvent_1aca6f8077cadef93710c646279a488dd5)`()` <a id="structFRHAPI__MatchTimelineEvent_1aca6f8077cadef93710c646279a488dd5"></a>

Gets the value of Str14_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr14`](#structFRHAPI__MatchTimelineEvent_1adc6139d5f075f1867140459d61b07e65)`() const` <a id="structFRHAPI__MatchTimelineEvent_1adc6139d5f075f1867140459d61b07e65"></a>

Gets the value of Str14_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr14`](#structFRHAPI__MatchTimelineEvent_1a05dfb8a11633e459eec125ab2ee4df0f)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a05dfb8a11633e459eec125ab2ee4df0f"></a>

Gets the value of Str14_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr14`](#structFRHAPI__MatchTimelineEvent_1aac1e95061d6cb381711d577f3aa2f9f5)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aac1e95061d6cb381711d577f3aa2f9f5"></a>

Fills OutValue with the value of Str14_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr14OrNull`](#structFRHAPI__MatchTimelineEvent_1aeb58775ad1dbfb2b4b07a11455cc205e)`()` <a id="structFRHAPI__MatchTimelineEvent_1aeb58775ad1dbfb2b4b07a11455cc205e"></a>

Returns a pointer to Str14_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr14OrNull`](#structFRHAPI__MatchTimelineEvent_1a3ecda3d984f052a01802fe1f513fe052)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a3ecda3d984f052a01802fe1f513fe052"></a>

Returns a pointer to Str14_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr14`](#structFRHAPI__MatchTimelineEvent_1aea27bc967813b4d6be9c0f513bf5d2ba)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aea27bc967813b4d6be9c0f513bf5d2ba"></a>

Sets the value of Str14_Optional and also sets Str14_IsSet to true.

#### `public inline void `[`SetStr14`](#structFRHAPI__MatchTimelineEvent_1a17fc0f1e11188f08fc6cf760aee723ae)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a17fc0f1e11188f08fc6cf760aee723ae"></a>

Sets the value of Str14_Optional and also sets Str14_IsSet to true using move semantics.

#### `public inline void `[`ClearStr14`](#structFRHAPI__MatchTimelineEvent_1a6131b3f6b9b0430e7084de5aeb8d6540)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6131b3f6b9b0430e7084de5aeb8d6540"></a>

Clears the value of Str14_Optional and sets Str14_IsSet to false.

#### `public inline bool `[`IsStr14Set`](#structFRHAPI__MatchTimelineEvent_1a66c23bd6321d804b6e601065aea2c715)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a66c23bd6321d804b6e601065aea2c715"></a>

Checks whether Str14_Optional has been set.

#### `public inline void `[`SetStr14ToNull`](#structFRHAPI__MatchTimelineEvent_1ae8b87d4be14930b3341f0d5830cb37ad)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae8b87d4be14930b3341f0d5830cb37ad"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr14Null`](#structFRHAPI__MatchTimelineEvent_1a4a4c3fb6b6834ef82066cfe7f354d6bf)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4a4c3fb6b6834ef82066cfe7f354d6bf"></a>

Checks whether Str14_Optional is set to null.

#### `public inline FString & `[`GetStr15`](#structFRHAPI__MatchTimelineEvent_1a0b716b125694096599bce0f6375e1c9e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0b716b125694096599bce0f6375e1c9e"></a>

Gets the value of Str15_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr15`](#structFRHAPI__MatchTimelineEvent_1ada543c695e4ab7bb9461fb9f961cff72)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ada543c695e4ab7bb9461fb9f961cff72"></a>

Gets the value of Str15_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr15`](#structFRHAPI__MatchTimelineEvent_1af2291bccd0cd11cd51e89209ec6f1d93)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1af2291bccd0cd11cd51e89209ec6f1d93"></a>

Gets the value of Str15_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr15`](#structFRHAPI__MatchTimelineEvent_1a1b0224111739678fa496ea72c96ea4d6)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a1b0224111739678fa496ea72c96ea4d6"></a>

Fills OutValue with the value of Str15_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr15OrNull`](#structFRHAPI__MatchTimelineEvent_1a31a4f0fda75c8608eb6236729fae009b)`()` <a id="structFRHAPI__MatchTimelineEvent_1a31a4f0fda75c8608eb6236729fae009b"></a>

Returns a pointer to Str15_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr15OrNull`](#structFRHAPI__MatchTimelineEvent_1ad4bfb2379521c3165ec83cd02206e7be)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ad4bfb2379521c3165ec83cd02206e7be"></a>

Returns a pointer to Str15_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr15`](#structFRHAPI__MatchTimelineEvent_1a5605daddf1037fe2c5f4425de537518c)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a5605daddf1037fe2c5f4425de537518c"></a>

Sets the value of Str15_Optional and also sets Str15_IsSet to true.

#### `public inline void `[`SetStr15`](#structFRHAPI__MatchTimelineEvent_1a53dd49a1fc207ebc4339345191fa4382)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a53dd49a1fc207ebc4339345191fa4382"></a>

Sets the value of Str15_Optional and also sets Str15_IsSet to true using move semantics.

#### `public inline void `[`ClearStr15`](#structFRHAPI__MatchTimelineEvent_1a0e7ba518c0b4aba97605a68c0b6b18a1)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0e7ba518c0b4aba97605a68c0b6b18a1"></a>

Clears the value of Str15_Optional and sets Str15_IsSet to false.

#### `public inline bool `[`IsStr15Set`](#structFRHAPI__MatchTimelineEvent_1a1f6b62ef9e5b26522dee77aecaf8ed09)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1f6b62ef9e5b26522dee77aecaf8ed09"></a>

Checks whether Str15_Optional has been set.

#### `public inline void `[`SetStr15ToNull`](#structFRHAPI__MatchTimelineEvent_1a168bdc5baf5c19d457b24f01a1fbf73a)`()` <a id="structFRHAPI__MatchTimelineEvent_1a168bdc5baf5c19d457b24f01a1fbf73a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr15Null`](#structFRHAPI__MatchTimelineEvent_1a6c6a5e1e40e92b80d5bfc1723e08bce4)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a6c6a5e1e40e92b80d5bfc1723e08bce4"></a>

Checks whether Str15_Optional is set to null.

#### `public inline FString & `[`GetStr16`](#structFRHAPI__MatchTimelineEvent_1a1e3d09bad8fe89afabc00830d967e673)`()` <a id="structFRHAPI__MatchTimelineEvent_1a1e3d09bad8fe89afabc00830d967e673"></a>

Gets the value of Str16_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr16`](#structFRHAPI__MatchTimelineEvent_1a2ee35f56a514b642f7d5d2707695c689)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2ee35f56a514b642f7d5d2707695c689"></a>

Gets the value of Str16_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr16`](#structFRHAPI__MatchTimelineEvent_1a81862466f83ddba9a8e3b39c10778548)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a81862466f83ddba9a8e3b39c10778548"></a>

Gets the value of Str16_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr16`](#structFRHAPI__MatchTimelineEvent_1a45fd4e66d6798bbb7e02cf5a5e327529)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a45fd4e66d6798bbb7e02cf5a5e327529"></a>

Fills OutValue with the value of Str16_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr16OrNull`](#structFRHAPI__MatchTimelineEvent_1a92dee44efbb0d4c5ef2167b1050e9cee)`()` <a id="structFRHAPI__MatchTimelineEvent_1a92dee44efbb0d4c5ef2167b1050e9cee"></a>

Returns a pointer to Str16_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr16OrNull`](#structFRHAPI__MatchTimelineEvent_1a5a5d2f33cfb4108f751dc62859598629)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5a5d2f33cfb4108f751dc62859598629"></a>

Returns a pointer to Str16_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr16`](#structFRHAPI__MatchTimelineEvent_1a66ed56fee62de91dd4f4f1ea38190c9d)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a66ed56fee62de91dd4f4f1ea38190c9d"></a>

Sets the value of Str16_Optional and also sets Str16_IsSet to true.

#### `public inline void `[`SetStr16`](#structFRHAPI__MatchTimelineEvent_1a5452f69e668d8a4ad5c2b516c2457cfa)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a5452f69e668d8a4ad5c2b516c2457cfa"></a>

Sets the value of Str16_Optional and also sets Str16_IsSet to true using move semantics.

#### `public inline void `[`ClearStr16`](#structFRHAPI__MatchTimelineEvent_1a37f7c89d23da95ebe493548bf6da4c83)`()` <a id="structFRHAPI__MatchTimelineEvent_1a37f7c89d23da95ebe493548bf6da4c83"></a>

Clears the value of Str16_Optional and sets Str16_IsSet to false.

#### `public inline bool `[`IsStr16Set`](#structFRHAPI__MatchTimelineEvent_1a2fe871dcff9ee73116fd3c4e6f4f3248)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2fe871dcff9ee73116fd3c4e6f4f3248"></a>

Checks whether Str16_Optional has been set.

#### `public inline void `[`SetStr16ToNull`](#structFRHAPI__MatchTimelineEvent_1a149e24fa3238edd53402c5f7e551457c)`()` <a id="structFRHAPI__MatchTimelineEvent_1a149e24fa3238edd53402c5f7e551457c"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr16Null`](#structFRHAPI__MatchTimelineEvent_1aec572ba260138a87d94016eaee1a2e07)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aec572ba260138a87d94016eaee1a2e07"></a>

Checks whether Str16_Optional is set to null.

#### `public inline FString & `[`GetStr17`](#structFRHAPI__MatchTimelineEvent_1a6dd869f9713e19e475bb2427b2bd0215)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6dd869f9713e19e475bb2427b2bd0215"></a>

Gets the value of Str17_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr17`](#structFRHAPI__MatchTimelineEvent_1a429f22df4e0b2669a12d7eaea4728bed)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a429f22df4e0b2669a12d7eaea4728bed"></a>

Gets the value of Str17_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr17`](#structFRHAPI__MatchTimelineEvent_1afff0690c19fc9e075a31d16dc87b6b24)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1afff0690c19fc9e075a31d16dc87b6b24"></a>

Gets the value of Str17_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr17`](#structFRHAPI__MatchTimelineEvent_1a5787036e486ea9c935c69c93f9ff87fb)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a5787036e486ea9c935c69c93f9ff87fb"></a>

Fills OutValue with the value of Str17_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr17OrNull`](#structFRHAPI__MatchTimelineEvent_1a8a7efaa9420c3afa0b138d59c19bfc1e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a8a7efaa9420c3afa0b138d59c19bfc1e"></a>

Returns a pointer to Str17_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr17OrNull`](#structFRHAPI__MatchTimelineEvent_1a44bfa36d544851cab0b26eb9050aad55)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a44bfa36d544851cab0b26eb9050aad55"></a>

Returns a pointer to Str17_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr17`](#structFRHAPI__MatchTimelineEvent_1ad8cbc71637e3f8cf757565ad631d03e9)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ad8cbc71637e3f8cf757565ad631d03e9"></a>

Sets the value of Str17_Optional and also sets Str17_IsSet to true.

#### `public inline void `[`SetStr17`](#structFRHAPI__MatchTimelineEvent_1a0ccb11a2550304fa8615633d9454528a)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a0ccb11a2550304fa8615633d9454528a"></a>

Sets the value of Str17_Optional and also sets Str17_IsSet to true using move semantics.

#### `public inline void `[`ClearStr17`](#structFRHAPI__MatchTimelineEvent_1ad7936f35e5a6da65e806c2224941718c)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad7936f35e5a6da65e806c2224941718c"></a>

Clears the value of Str17_Optional and sets Str17_IsSet to false.

#### `public inline bool `[`IsStr17Set`](#structFRHAPI__MatchTimelineEvent_1a060db493d596f19aaa639cdfd0a8f25c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a060db493d596f19aaa639cdfd0a8f25c"></a>

Checks whether Str17_Optional has been set.

#### `public inline void `[`SetStr17ToNull`](#structFRHAPI__MatchTimelineEvent_1a691772b6ad974165a739e907cfefa571)`()` <a id="structFRHAPI__MatchTimelineEvent_1a691772b6ad974165a739e907cfefa571"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr17Null`](#structFRHAPI__MatchTimelineEvent_1ae5c67bfa67994eedcda29c81f1c37714)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ae5c67bfa67994eedcda29c81f1c37714"></a>

Checks whether Str17_Optional is set to null.

#### `public inline FString & `[`GetStr18`](#structFRHAPI__MatchTimelineEvent_1a463e65b2fc597df7ef06286372efb52d)`()` <a id="structFRHAPI__MatchTimelineEvent_1a463e65b2fc597df7ef06286372efb52d"></a>

Gets the value of Str18_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr18`](#structFRHAPI__MatchTimelineEvent_1a66b6ff5a217cb72711a3d357f7bf4331)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a66b6ff5a217cb72711a3d357f7bf4331"></a>

Gets the value of Str18_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr18`](#structFRHAPI__MatchTimelineEvent_1af96c9e71dfb983dbbf8d22fbff6cc6db)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1af96c9e71dfb983dbbf8d22fbff6cc6db"></a>

Gets the value of Str18_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr18`](#structFRHAPI__MatchTimelineEvent_1aacffbb614db068256eb6b5b82b061370)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aacffbb614db068256eb6b5b82b061370"></a>

Fills OutValue with the value of Str18_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr18OrNull`](#structFRHAPI__MatchTimelineEvent_1a940d2d8c28d77852f033d94b6c4d7775)`()` <a id="structFRHAPI__MatchTimelineEvent_1a940d2d8c28d77852f033d94b6c4d7775"></a>

Returns a pointer to Str18_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr18OrNull`](#structFRHAPI__MatchTimelineEvent_1a00f53dec5c32cc9e8374c502ab6e51c3)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a00f53dec5c32cc9e8374c502ab6e51c3"></a>

Returns a pointer to Str18_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr18`](#structFRHAPI__MatchTimelineEvent_1a0347591b6e33ffc2a7771d70429d7b02)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a0347591b6e33ffc2a7771d70429d7b02"></a>

Sets the value of Str18_Optional and also sets Str18_IsSet to true.

#### `public inline void `[`SetStr18`](#structFRHAPI__MatchTimelineEvent_1a87b8750e677e71b7a3966d3cfec75c74)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a87b8750e677e71b7a3966d3cfec75c74"></a>

Sets the value of Str18_Optional and also sets Str18_IsSet to true using move semantics.

#### `public inline void `[`ClearStr18`](#structFRHAPI__MatchTimelineEvent_1a3565799dfccc694fb74a4472d1e36b77)`()` <a id="structFRHAPI__MatchTimelineEvent_1a3565799dfccc694fb74a4472d1e36b77"></a>

Clears the value of Str18_Optional and sets Str18_IsSet to false.

#### `public inline bool `[`IsStr18Set`](#structFRHAPI__MatchTimelineEvent_1a3962459a8bd8cfd6faad454c413984cf)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a3962459a8bd8cfd6faad454c413984cf"></a>

Checks whether Str18_Optional has been set.

#### `public inline void `[`SetStr18ToNull`](#structFRHAPI__MatchTimelineEvent_1a6c26e30a664ba1b2bd0d4a110bf6991c)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6c26e30a664ba1b2bd0d4a110bf6991c"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr18Null`](#structFRHAPI__MatchTimelineEvent_1a26421a5f871a8bf254b05541f8a82b08)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a26421a5f871a8bf254b05541f8a82b08"></a>

Checks whether Str18_Optional is set to null.

#### `public inline FString & `[`GetStr19`](#structFRHAPI__MatchTimelineEvent_1abb4ebb54999b18942157c3c09ed4717c)`()` <a id="structFRHAPI__MatchTimelineEvent_1abb4ebb54999b18942157c3c09ed4717c"></a>

Gets the value of Str19_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr19`](#structFRHAPI__MatchTimelineEvent_1a0ce834056f1fc92f77065dab9ba4b4cc)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0ce834056f1fc92f77065dab9ba4b4cc"></a>

Gets the value of Str19_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr19`](#structFRHAPI__MatchTimelineEvent_1adef38c08afd852edbcb76fdeeb11865e)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1adef38c08afd852edbcb76fdeeb11865e"></a>

Gets the value of Str19_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr19`](#structFRHAPI__MatchTimelineEvent_1a73d01a1bc450aca386614084087d1e56)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a73d01a1bc450aca386614084087d1e56"></a>

Fills OutValue with the value of Str19_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr19OrNull`](#structFRHAPI__MatchTimelineEvent_1a5fce8615d230cbacb9ed4fa5d6d6fedc)`()` <a id="structFRHAPI__MatchTimelineEvent_1a5fce8615d230cbacb9ed4fa5d6d6fedc"></a>

Returns a pointer to Str19_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr19OrNull`](#structFRHAPI__MatchTimelineEvent_1a97c9bf36ba9b26517d4d921c8cf2033b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a97c9bf36ba9b26517d4d921c8cf2033b"></a>

Returns a pointer to Str19_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr19`](#structFRHAPI__MatchTimelineEvent_1a32dbe2d9902a795b4c974bce228a3ead)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a32dbe2d9902a795b4c974bce228a3ead"></a>

Sets the value of Str19_Optional and also sets Str19_IsSet to true.

#### `public inline void `[`SetStr19`](#structFRHAPI__MatchTimelineEvent_1ad2ac9e7fa9110ef06efe7d7e6271e6a9)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ad2ac9e7fa9110ef06efe7d7e6271e6a9"></a>

Sets the value of Str19_Optional and also sets Str19_IsSet to true using move semantics.

#### `public inline void `[`ClearStr19`](#structFRHAPI__MatchTimelineEvent_1ae1fef348210bcdbcbcad66c011bd49ce)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae1fef348210bcdbcbcad66c011bd49ce"></a>

Clears the value of Str19_Optional and sets Str19_IsSet to false.

#### `public inline bool `[`IsStr19Set`](#structFRHAPI__MatchTimelineEvent_1ad9d5f310ff1b81af79d2ead19310e461)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ad9d5f310ff1b81af79d2ead19310e461"></a>

Checks whether Str19_Optional has been set.

#### `public inline void `[`SetStr19ToNull`](#structFRHAPI__MatchTimelineEvent_1a3df0edda2b20b12a98c588156018d628)`()` <a id="structFRHAPI__MatchTimelineEvent_1a3df0edda2b20b12a98c588156018d628"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr19Null`](#structFRHAPI__MatchTimelineEvent_1a2bec892061f5615203301b7be5faca2c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2bec892061f5615203301b7be5faca2c"></a>

Checks whether Str19_Optional is set to null.

#### `public inline FString & `[`GetStr20`](#structFRHAPI__MatchTimelineEvent_1a14dd8536eb519264d91b190d392644aa)`()` <a id="structFRHAPI__MatchTimelineEvent_1a14dd8536eb519264d91b190d392644aa"></a>

Gets the value of Str20_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr20`](#structFRHAPI__MatchTimelineEvent_1a7fa62bcbb0864c757fdc02f248fecebd)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7fa62bcbb0864c757fdc02f248fecebd"></a>

Gets the value of Str20_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr20`](#structFRHAPI__MatchTimelineEvent_1a922e095a19a476559b6cd85d5c5e8f47)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a922e095a19a476559b6cd85d5c5e8f47"></a>

Gets the value of Str20_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr20`](#structFRHAPI__MatchTimelineEvent_1a38bb0e89d5d4c66e6d261c80184aeb9b)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a38bb0e89d5d4c66e6d261c80184aeb9b"></a>

Fills OutValue with the value of Str20_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr20OrNull`](#structFRHAPI__MatchTimelineEvent_1af1686f47824ea99bc43d7291ae6901cc)`()` <a id="structFRHAPI__MatchTimelineEvent_1af1686f47824ea99bc43d7291ae6901cc"></a>

Returns a pointer to Str20_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr20OrNull`](#structFRHAPI__MatchTimelineEvent_1a9ca6333ca3592213f4fbdd2e4c2371ae)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a9ca6333ca3592213f4fbdd2e4c2371ae"></a>

Returns a pointer to Str20_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr20`](#structFRHAPI__MatchTimelineEvent_1a06c5fc5e5834c99adfa049f700857798)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a06c5fc5e5834c99adfa049f700857798"></a>

Sets the value of Str20_Optional and also sets Str20_IsSet to true.

#### `public inline void `[`SetStr20`](#structFRHAPI__MatchTimelineEvent_1ae6adef1efd4c67f98d8650d25608e4c1)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ae6adef1efd4c67f98d8650d25608e4c1"></a>

Sets the value of Str20_Optional and also sets Str20_IsSet to true using move semantics.

#### `public inline void `[`ClearStr20`](#structFRHAPI__MatchTimelineEvent_1a6e03afee1137fc5ca1864532c27f8e2d)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6e03afee1137fc5ca1864532c27f8e2d"></a>

Clears the value of Str20_Optional and sets Str20_IsSet to false.

#### `public inline bool `[`IsStr20Set`](#structFRHAPI__MatchTimelineEvent_1a8aa2a81f80423e1a5cef9f9699af428b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8aa2a81f80423e1a5cef9f9699af428b"></a>

Checks whether Str20_Optional has been set.

#### `public inline void `[`SetStr20ToNull`](#structFRHAPI__MatchTimelineEvent_1a211b95dd5dc566128da5e283dfe014b6)`()` <a id="structFRHAPI__MatchTimelineEvent_1a211b95dd5dc566128da5e283dfe014b6"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr20Null`](#structFRHAPI__MatchTimelineEvent_1a86095ca7682d78691498ddfd12731d97)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a86095ca7682d78691498ddfd12731d97"></a>

Checks whether Str20_Optional is set to null.

#### `public inline FString & `[`GetStr21`](#structFRHAPI__MatchTimelineEvent_1a9d5b697eb256ec244b5503e966bdf302)`()` <a id="structFRHAPI__MatchTimelineEvent_1a9d5b697eb256ec244b5503e966bdf302"></a>

Gets the value of Str21_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr21`](#structFRHAPI__MatchTimelineEvent_1a5d665d660601c7f820bcf36c2c08bfef)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5d665d660601c7f820bcf36c2c08bfef"></a>

Gets the value of Str21_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr21`](#structFRHAPI__MatchTimelineEvent_1a0a33d0bbc8b131a8cc7c3d5b55286c8d)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a0a33d0bbc8b131a8cc7c3d5b55286c8d"></a>

Gets the value of Str21_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr21`](#structFRHAPI__MatchTimelineEvent_1aeb4d102217caedeb5dda869897a5be87)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aeb4d102217caedeb5dda869897a5be87"></a>

Fills OutValue with the value of Str21_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr21OrNull`](#structFRHAPI__MatchTimelineEvent_1acbf6941cb54b12bfbcd7a2cd61cf0ee5)`()` <a id="structFRHAPI__MatchTimelineEvent_1acbf6941cb54b12bfbcd7a2cd61cf0ee5"></a>

Returns a pointer to Str21_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr21OrNull`](#structFRHAPI__MatchTimelineEvent_1a5ddc799d499813d9294fa164927c758b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5ddc799d499813d9294fa164927c758b"></a>

Returns a pointer to Str21_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr21`](#structFRHAPI__MatchTimelineEvent_1abb885e854bf5cb77e6e1e3eca50d03de)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1abb885e854bf5cb77e6e1e3eca50d03de"></a>

Sets the value of Str21_Optional and also sets Str21_IsSet to true.

#### `public inline void `[`SetStr21`](#structFRHAPI__MatchTimelineEvent_1ad4f916ff5c98d3fefb8e37f4db557a7e)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ad4f916ff5c98d3fefb8e37f4db557a7e"></a>

Sets the value of Str21_Optional and also sets Str21_IsSet to true using move semantics.

#### `public inline void `[`ClearStr21`](#structFRHAPI__MatchTimelineEvent_1a484d3d05ac76746b31e4f278a8b7bb95)`()` <a id="structFRHAPI__MatchTimelineEvent_1a484d3d05ac76746b31e4f278a8b7bb95"></a>

Clears the value of Str21_Optional and sets Str21_IsSet to false.

#### `public inline bool `[`IsStr21Set`](#structFRHAPI__MatchTimelineEvent_1acdf09517515a9cd2f624fdd471cd78a2)`() const` <a id="structFRHAPI__MatchTimelineEvent_1acdf09517515a9cd2f624fdd471cd78a2"></a>

Checks whether Str21_Optional has been set.

#### `public inline void `[`SetStr21ToNull`](#structFRHAPI__MatchTimelineEvent_1a2cfe653ccdab3786fff32cc80d742bd7)`()` <a id="structFRHAPI__MatchTimelineEvent_1a2cfe653ccdab3786fff32cc80d742bd7"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr21Null`](#structFRHAPI__MatchTimelineEvent_1a8e54c4d304dbd28182eb71be414f8ec3)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8e54c4d304dbd28182eb71be414f8ec3"></a>

Checks whether Str21_Optional is set to null.

#### `public inline FString & `[`GetStr22`](#structFRHAPI__MatchTimelineEvent_1a23ed0889ffae718940473e41441d0ebb)`()` <a id="structFRHAPI__MatchTimelineEvent_1a23ed0889ffae718940473e41441d0ebb"></a>

Gets the value of Str22_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr22`](#structFRHAPI__MatchTimelineEvent_1ad5623a101d25c41a22a1570a13d5f6bb)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ad5623a101d25c41a22a1570a13d5f6bb"></a>

Gets the value of Str22_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr22`](#structFRHAPI__MatchTimelineEvent_1ae39635c87aaad7f847c86bf388c399fc)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ae39635c87aaad7f847c86bf388c399fc"></a>

Gets the value of Str22_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr22`](#structFRHAPI__MatchTimelineEvent_1a99de34620ae444a9d85fcae5a8f87c1b)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a99de34620ae444a9d85fcae5a8f87c1b"></a>

Fills OutValue with the value of Str22_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr22OrNull`](#structFRHAPI__MatchTimelineEvent_1af75524bcd8dbfb493476400f7c805b7a)`()` <a id="structFRHAPI__MatchTimelineEvent_1af75524bcd8dbfb493476400f7c805b7a"></a>

Returns a pointer to Str22_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr22OrNull`](#structFRHAPI__MatchTimelineEvent_1a8821202b3e7650e8e1b0447397939f94)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8821202b3e7650e8e1b0447397939f94"></a>

Returns a pointer to Str22_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr22`](#structFRHAPI__MatchTimelineEvent_1af3725767041c93259c3bab06ceea0b95)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1af3725767041c93259c3bab06ceea0b95"></a>

Sets the value of Str22_Optional and also sets Str22_IsSet to true.

#### `public inline void `[`SetStr22`](#structFRHAPI__MatchTimelineEvent_1af891647e7e4b621198bfb2eed0bb12e5)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1af891647e7e4b621198bfb2eed0bb12e5"></a>

Sets the value of Str22_Optional and also sets Str22_IsSet to true using move semantics.

#### `public inline void `[`ClearStr22`](#structFRHAPI__MatchTimelineEvent_1ad8e59033b97c170d1a63bd216c21870d)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad8e59033b97c170d1a63bd216c21870d"></a>

Clears the value of Str22_Optional and sets Str22_IsSet to false.

#### `public inline bool `[`IsStr22Set`](#structFRHAPI__MatchTimelineEvent_1a4cbdaaac548ebd64175a3a598e24de4d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4cbdaaac548ebd64175a3a598e24de4d"></a>

Checks whether Str22_Optional has been set.

#### `public inline void `[`SetStr22ToNull`](#structFRHAPI__MatchTimelineEvent_1a48198ff11bdfc0b419c8d3d51b480c5d)`()` <a id="structFRHAPI__MatchTimelineEvent_1a48198ff11bdfc0b419c8d3d51b480c5d"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr22Null`](#structFRHAPI__MatchTimelineEvent_1aeadc62457502b4b46ca086fbbaeaa346)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aeadc62457502b4b46ca086fbbaeaa346"></a>

Checks whether Str22_Optional is set to null.

#### `public inline FString & `[`GetStr23`](#structFRHAPI__MatchTimelineEvent_1ab961a5ca672d53cde6c46d6d4ae9bc74)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab961a5ca672d53cde6c46d6d4ae9bc74"></a>

Gets the value of Str23_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr23`](#structFRHAPI__MatchTimelineEvent_1ad55c355760ec5397a0ddfcb0a635b856)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ad55c355760ec5397a0ddfcb0a635b856"></a>

Gets the value of Str23_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr23`](#structFRHAPI__MatchTimelineEvent_1a93c6ea651bdc88df7a7792af9d9c71fd)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a93c6ea651bdc88df7a7792af9d9c71fd"></a>

Gets the value of Str23_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr23`](#structFRHAPI__MatchTimelineEvent_1a53e91560bfd4a8ea4c690b866363ebb2)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a53e91560bfd4a8ea4c690b866363ebb2"></a>

Fills OutValue with the value of Str23_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr23OrNull`](#structFRHAPI__MatchTimelineEvent_1a29336acbb5811ea0f8ff7c8975c70b60)`()` <a id="structFRHAPI__MatchTimelineEvent_1a29336acbb5811ea0f8ff7c8975c70b60"></a>

Returns a pointer to Str23_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr23OrNull`](#structFRHAPI__MatchTimelineEvent_1abfff9f41304ace1bbc14bacb0718d512)`() const` <a id="structFRHAPI__MatchTimelineEvent_1abfff9f41304ace1bbc14bacb0718d512"></a>

Returns a pointer to Str23_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr23`](#structFRHAPI__MatchTimelineEvent_1abbdddf6c46e55501a53a1ae4f28ded5d)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1abbdddf6c46e55501a53a1ae4f28ded5d"></a>

Sets the value of Str23_Optional and also sets Str23_IsSet to true.

#### `public inline void `[`SetStr23`](#structFRHAPI__MatchTimelineEvent_1af992d881e636b85a297214b7f0647c73)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1af992d881e636b85a297214b7f0647c73"></a>

Sets the value of Str23_Optional and also sets Str23_IsSet to true using move semantics.

#### `public inline void `[`ClearStr23`](#structFRHAPI__MatchTimelineEvent_1af86fd93c4e7341fb68290e090c0fe28b)`()` <a id="structFRHAPI__MatchTimelineEvent_1af86fd93c4e7341fb68290e090c0fe28b"></a>

Clears the value of Str23_Optional and sets Str23_IsSet to false.

#### `public inline bool `[`IsStr23Set`](#structFRHAPI__MatchTimelineEvent_1acb284e8d29426177bf514b1f1f194bd1)`() const` <a id="structFRHAPI__MatchTimelineEvent_1acb284e8d29426177bf514b1f1f194bd1"></a>

Checks whether Str23_Optional has been set.

#### `public inline void `[`SetStr23ToNull`](#structFRHAPI__MatchTimelineEvent_1a824d6023b183f851db63ebf9769ad0d1)`()` <a id="structFRHAPI__MatchTimelineEvent_1a824d6023b183f851db63ebf9769ad0d1"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr23Null`](#structFRHAPI__MatchTimelineEvent_1a973403679026c743c7fd2a12d326d092)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a973403679026c743c7fd2a12d326d092"></a>

Checks whether Str23_Optional is set to null.

#### `public inline FString & `[`GetStr24`](#structFRHAPI__MatchTimelineEvent_1a7433a7cc6e1ee804c7c0596e05b509d6)`()` <a id="structFRHAPI__MatchTimelineEvent_1a7433a7cc6e1ee804c7c0596e05b509d6"></a>

Gets the value of Str24_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr24`](#structFRHAPI__MatchTimelineEvent_1a3207fc6bd06b43c047a1fdb811c82b98)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a3207fc6bd06b43c047a1fdb811c82b98"></a>

Gets the value of Str24_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr24`](#structFRHAPI__MatchTimelineEvent_1aacb0f4c6cbd8a8738329589012144ddd)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aacb0f4c6cbd8a8738329589012144ddd"></a>

Gets the value of Str24_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr24`](#structFRHAPI__MatchTimelineEvent_1ab1f136442dfc3538a2664d8efdcbc486)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ab1f136442dfc3538a2664d8efdcbc486"></a>

Fills OutValue with the value of Str24_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr24OrNull`](#structFRHAPI__MatchTimelineEvent_1a715daf7fd9aac7215a3bd55510a2036f)`()` <a id="structFRHAPI__MatchTimelineEvent_1a715daf7fd9aac7215a3bd55510a2036f"></a>

Returns a pointer to Str24_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr24OrNull`](#structFRHAPI__MatchTimelineEvent_1abc5125111653ec8950904ad9948e9c88)`() const` <a id="structFRHAPI__MatchTimelineEvent_1abc5125111653ec8950904ad9948e9c88"></a>

Returns a pointer to Str24_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr24`](#structFRHAPI__MatchTimelineEvent_1af975344dfe9748223073e507e77c8896)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1af975344dfe9748223073e507e77c8896"></a>

Sets the value of Str24_Optional and also sets Str24_IsSet to true.

#### `public inline void `[`SetStr24`](#structFRHAPI__MatchTimelineEvent_1aee205ee6100c8a40fda3dd99f8b6db03)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aee205ee6100c8a40fda3dd99f8b6db03"></a>

Sets the value of Str24_Optional and also sets Str24_IsSet to true using move semantics.

#### `public inline void `[`ClearStr24`](#structFRHAPI__MatchTimelineEvent_1af670bcb1e9bddca26d42da1e13925564)`()` <a id="structFRHAPI__MatchTimelineEvent_1af670bcb1e9bddca26d42da1e13925564"></a>

Clears the value of Str24_Optional and sets Str24_IsSet to false.

#### `public inline bool `[`IsStr24Set`](#structFRHAPI__MatchTimelineEvent_1aa39ffc8526b15e0ed5fd3185fc6868b8)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa39ffc8526b15e0ed5fd3185fc6868b8"></a>

Checks whether Str24_Optional has been set.

#### `public inline void `[`SetStr24ToNull`](#structFRHAPI__MatchTimelineEvent_1a6116ba409476eaafe0016387481f8f70)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6116ba409476eaafe0016387481f8f70"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr24Null`](#structFRHAPI__MatchTimelineEvent_1a424f1ec874aa33e319f47c591354816c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a424f1ec874aa33e319f47c591354816c"></a>

Checks whether Str24_Optional is set to null.

#### `public inline FString & `[`GetStr25`](#structFRHAPI__MatchTimelineEvent_1ab75d658870d07100e9247983a296b0da)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab75d658870d07100e9247983a296b0da"></a>

Gets the value of Str25_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr25`](#structFRHAPI__MatchTimelineEvent_1ac3d8b3e42ac5a5082ffed6295e7074ef)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac3d8b3e42ac5a5082ffed6295e7074ef"></a>

Gets the value of Str25_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr25`](#structFRHAPI__MatchTimelineEvent_1ac13806cc24bba60e250ba3599e3eebb4)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ac13806cc24bba60e250ba3599e3eebb4"></a>

Gets the value of Str25_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr25`](#structFRHAPI__MatchTimelineEvent_1afd7b92ea43401cc88b5c154d256f4020)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1afd7b92ea43401cc88b5c154d256f4020"></a>

Fills OutValue with the value of Str25_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr25OrNull`](#structFRHAPI__MatchTimelineEvent_1a00bbde90d57a0e426f0aad249fe14e21)`()` <a id="structFRHAPI__MatchTimelineEvent_1a00bbde90d57a0e426f0aad249fe14e21"></a>

Returns a pointer to Str25_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr25OrNull`](#structFRHAPI__MatchTimelineEvent_1a0c297558d57ba511678242d09264396a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0c297558d57ba511678242d09264396a"></a>

Returns a pointer to Str25_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr25`](#structFRHAPI__MatchTimelineEvent_1a345a35ae266c443bc4cde04f2fd57213)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a345a35ae266c443bc4cde04f2fd57213"></a>

Sets the value of Str25_Optional and also sets Str25_IsSet to true.

#### `public inline void `[`SetStr25`](#structFRHAPI__MatchTimelineEvent_1a5914d6a12772ba124e6a9f0a3763e99c)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a5914d6a12772ba124e6a9f0a3763e99c"></a>

Sets the value of Str25_Optional and also sets Str25_IsSet to true using move semantics.

#### `public inline void `[`ClearStr25`](#structFRHAPI__MatchTimelineEvent_1aff25ec2e0c86617e1b26ffbde286f9df)`()` <a id="structFRHAPI__MatchTimelineEvent_1aff25ec2e0c86617e1b26ffbde286f9df"></a>

Clears the value of Str25_Optional and sets Str25_IsSet to false.

#### `public inline bool `[`IsStr25Set`](#structFRHAPI__MatchTimelineEvent_1a31b8b2e2e6f5a0957b13cfe811181c12)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a31b8b2e2e6f5a0957b13cfe811181c12"></a>

Checks whether Str25_Optional has been set.

#### `public inline void `[`SetStr25ToNull`](#structFRHAPI__MatchTimelineEvent_1aa32c9b388e5778ce427ee386b74aee71)`()` <a id="structFRHAPI__MatchTimelineEvent_1aa32c9b388e5778ce427ee386b74aee71"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr25Null`](#structFRHAPI__MatchTimelineEvent_1a201885e54ede0740b65d41e1df529037)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a201885e54ede0740b65d41e1df529037"></a>

Checks whether Str25_Optional is set to null.

#### `public inline FString & `[`GetStr26`](#structFRHAPI__MatchTimelineEvent_1abfee084b4357c58c69c112b3f3413412)`()` <a id="structFRHAPI__MatchTimelineEvent_1abfee084b4357c58c69c112b3f3413412"></a>

Gets the value of Str26_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr26`](#structFRHAPI__MatchTimelineEvent_1a944d5cfd106ca9673e5e1d7b58c4b531)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a944d5cfd106ca9673e5e1d7b58c4b531"></a>

Gets the value of Str26_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr26`](#structFRHAPI__MatchTimelineEvent_1a86819fba4cf7af86347a205f18f8a451)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a86819fba4cf7af86347a205f18f8a451"></a>

Gets the value of Str26_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr26`](#structFRHAPI__MatchTimelineEvent_1a37f2954366af1c7724ac1555482456d2)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a37f2954366af1c7724ac1555482456d2"></a>

Fills OutValue with the value of Str26_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr26OrNull`](#structFRHAPI__MatchTimelineEvent_1a55ee1b3c807a66c780b4879d654fdd28)`()` <a id="structFRHAPI__MatchTimelineEvent_1a55ee1b3c807a66c780b4879d654fdd28"></a>

Returns a pointer to Str26_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr26OrNull`](#structFRHAPI__MatchTimelineEvent_1abde01eb451acb1679014df01826191f0)`() const` <a id="structFRHAPI__MatchTimelineEvent_1abde01eb451acb1679014df01826191f0"></a>

Returns a pointer to Str26_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr26`](#structFRHAPI__MatchTimelineEvent_1a196ff246bb048854564a10320f0d4c3e)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a196ff246bb048854564a10320f0d4c3e"></a>

Sets the value of Str26_Optional and also sets Str26_IsSet to true.

#### `public inline void `[`SetStr26`](#structFRHAPI__MatchTimelineEvent_1a429150866c1a81f26503422802ebe19a)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a429150866c1a81f26503422802ebe19a"></a>

Sets the value of Str26_Optional and also sets Str26_IsSet to true using move semantics.

#### `public inline void `[`ClearStr26`](#structFRHAPI__MatchTimelineEvent_1ae385a78154d27aa25b8786519e5c25ad)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae385a78154d27aa25b8786519e5c25ad"></a>

Clears the value of Str26_Optional and sets Str26_IsSet to false.

#### `public inline bool `[`IsStr26Set`](#structFRHAPI__MatchTimelineEvent_1a51a015a00b0c7b216bf50f9853749764)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a51a015a00b0c7b216bf50f9853749764"></a>

Checks whether Str26_Optional has been set.

#### `public inline void `[`SetStr26ToNull`](#structFRHAPI__MatchTimelineEvent_1a60ce28b31dace46f6e86d0b1fe92cbf3)`()` <a id="structFRHAPI__MatchTimelineEvent_1a60ce28b31dace46f6e86d0b1fe92cbf3"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr26Null`](#structFRHAPI__MatchTimelineEvent_1a7f351e8ac022241079f51847a01d7a94)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7f351e8ac022241079f51847a01d7a94"></a>

Checks whether Str26_Optional is set to null.

#### `public inline FString & `[`GetStr27`](#structFRHAPI__MatchTimelineEvent_1a59c23069e6afc6e78be3ca598716680d)`()` <a id="structFRHAPI__MatchTimelineEvent_1a59c23069e6afc6e78be3ca598716680d"></a>

Gets the value of Str27_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr27`](#structFRHAPI__MatchTimelineEvent_1ac8a36d3c7c7d6930b8c462d7e8619281)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac8a36d3c7c7d6930b8c462d7e8619281"></a>

Gets the value of Str27_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr27`](#structFRHAPI__MatchTimelineEvent_1ab031adeb27d7676fbe68452ed10a660b)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ab031adeb27d7676fbe68452ed10a660b"></a>

Gets the value of Str27_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr27`](#structFRHAPI__MatchTimelineEvent_1afd6e53e02459d67448a2972981481333)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1afd6e53e02459d67448a2972981481333"></a>

Fills OutValue with the value of Str27_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr27OrNull`](#structFRHAPI__MatchTimelineEvent_1a65ea608e7f33519ddc0540a2bc6b8af1)`()` <a id="structFRHAPI__MatchTimelineEvent_1a65ea608e7f33519ddc0540a2bc6b8af1"></a>

Returns a pointer to Str27_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr27OrNull`](#structFRHAPI__MatchTimelineEvent_1adc36ddc84cc04cefb7211670bd5dbfc9)`() const` <a id="structFRHAPI__MatchTimelineEvent_1adc36ddc84cc04cefb7211670bd5dbfc9"></a>

Returns a pointer to Str27_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr27`](#structFRHAPI__MatchTimelineEvent_1a35d7ea99fcc005993cd329d8fd58c1c6)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a35d7ea99fcc005993cd329d8fd58c1c6"></a>

Sets the value of Str27_Optional and also sets Str27_IsSet to true.

#### `public inline void `[`SetStr27`](#structFRHAPI__MatchTimelineEvent_1a2b456aa64c26678dfadc1d4f56131a5e)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a2b456aa64c26678dfadc1d4f56131a5e"></a>

Sets the value of Str27_Optional and also sets Str27_IsSet to true using move semantics.

#### `public inline void `[`ClearStr27`](#structFRHAPI__MatchTimelineEvent_1aef396765d14943c10bd67593a11850a7)`()` <a id="structFRHAPI__MatchTimelineEvent_1aef396765d14943c10bd67593a11850a7"></a>

Clears the value of Str27_Optional and sets Str27_IsSet to false.

#### `public inline bool `[`IsStr27Set`](#structFRHAPI__MatchTimelineEvent_1acfec131a5f37758dc2f32b1be8d3a8a9)`() const` <a id="structFRHAPI__MatchTimelineEvent_1acfec131a5f37758dc2f32b1be8d3a8a9"></a>

Checks whether Str27_Optional has been set.

#### `public inline void `[`SetStr27ToNull`](#structFRHAPI__MatchTimelineEvent_1ae4366145811e6606b4c553c6d5803e1b)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae4366145811e6606b4c553c6d5803e1b"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr27Null`](#structFRHAPI__MatchTimelineEvent_1abb599b82817667cab73390656f2f9a83)`() const` <a id="structFRHAPI__MatchTimelineEvent_1abb599b82817667cab73390656f2f9a83"></a>

Checks whether Str27_Optional is set to null.

#### `public inline FString & `[`GetStr28`](#structFRHAPI__MatchTimelineEvent_1ac1c74c4d2aa6b7f8e68bc3f563d70595)`()` <a id="structFRHAPI__MatchTimelineEvent_1ac1c74c4d2aa6b7f8e68bc3f563d70595"></a>

Gets the value of Str28_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr28`](#structFRHAPI__MatchTimelineEvent_1a4a9e495c0fd6479db61baed05c0f0bd9)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4a9e495c0fd6479db61baed05c0f0bd9"></a>

Gets the value of Str28_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr28`](#structFRHAPI__MatchTimelineEvent_1a316ef2638f63cf17c0ef529da63eb11b)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a316ef2638f63cf17c0ef529da63eb11b"></a>

Gets the value of Str28_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr28`](#structFRHAPI__MatchTimelineEvent_1a8805a5ddee9cb1f4b90ede7f234f0ed0)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a8805a5ddee9cb1f4b90ede7f234f0ed0"></a>

Fills OutValue with the value of Str28_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr28OrNull`](#structFRHAPI__MatchTimelineEvent_1a1f6d70c6b4a15b21f9bab80715b87145)`()` <a id="structFRHAPI__MatchTimelineEvent_1a1f6d70c6b4a15b21f9bab80715b87145"></a>

Returns a pointer to Str28_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr28OrNull`](#structFRHAPI__MatchTimelineEvent_1a1097dda6ce85635a884f9df90e40be3e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1097dda6ce85635a884f9df90e40be3e"></a>

Returns a pointer to Str28_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr28`](#structFRHAPI__MatchTimelineEvent_1afdb4a3fc3378f48ac899537dacb48308)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1afdb4a3fc3378f48ac899537dacb48308"></a>

Sets the value of Str28_Optional and also sets Str28_IsSet to true.

#### `public inline void `[`SetStr28`](#structFRHAPI__MatchTimelineEvent_1ac0324d5f8112b7ac9822b3a7ec3963aa)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ac0324d5f8112b7ac9822b3a7ec3963aa"></a>

Sets the value of Str28_Optional and also sets Str28_IsSet to true using move semantics.

#### `public inline void `[`ClearStr28`](#structFRHAPI__MatchTimelineEvent_1acd03a6a4069a3e67d9ed9b20a9bb8a65)`()` <a id="structFRHAPI__MatchTimelineEvent_1acd03a6a4069a3e67d9ed9b20a9bb8a65"></a>

Clears the value of Str28_Optional and sets Str28_IsSet to false.

#### `public inline bool `[`IsStr28Set`](#structFRHAPI__MatchTimelineEvent_1ae3eb1f07e8d3ac33bcbf2f90dac8fd8d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ae3eb1f07e8d3ac33bcbf2f90dac8fd8d"></a>

Checks whether Str28_Optional has been set.

#### `public inline void `[`SetStr28ToNull`](#structFRHAPI__MatchTimelineEvent_1a73ed9fe78871f857f731ef06b18ecf96)`()` <a id="structFRHAPI__MatchTimelineEvent_1a73ed9fe78871f857f731ef06b18ecf96"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr28Null`](#structFRHAPI__MatchTimelineEvent_1a750257795a47b11812873afd6c4e35e3)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a750257795a47b11812873afd6c4e35e3"></a>

Checks whether Str28_Optional is set to null.

#### `public inline FString & `[`GetStr29`](#structFRHAPI__MatchTimelineEvent_1a00bd7ebfbab2e054518b8b2b5a8cd917)`()` <a id="structFRHAPI__MatchTimelineEvent_1a00bd7ebfbab2e054518b8b2b5a8cd917"></a>

Gets the value of Str29_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr29`](#structFRHAPI__MatchTimelineEvent_1a58663d0c615b9b8da34fa33e9edf7855)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a58663d0c615b9b8da34fa33e9edf7855"></a>

Gets the value of Str29_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr29`](#structFRHAPI__MatchTimelineEvent_1a1f18d62602a93ae38ca8b5453dbfbdee)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a1f18d62602a93ae38ca8b5453dbfbdee"></a>

Gets the value of Str29_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr29`](#structFRHAPI__MatchTimelineEvent_1a5692f7a007c103f08788fae07ba02315)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a5692f7a007c103f08788fae07ba02315"></a>

Fills OutValue with the value of Str29_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr29OrNull`](#structFRHAPI__MatchTimelineEvent_1a547db5e9f760fdbc68f660c1d2fb5769)`()` <a id="structFRHAPI__MatchTimelineEvent_1a547db5e9f760fdbc68f660c1d2fb5769"></a>

Returns a pointer to Str29_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr29OrNull`](#structFRHAPI__MatchTimelineEvent_1a54cf76240b7b2b76fa565a3e642c1ab1)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a54cf76240b7b2b76fa565a3e642c1ab1"></a>

Returns a pointer to Str29_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr29`](#structFRHAPI__MatchTimelineEvent_1ac8ee7f9d3b69104221c56648ff415e09)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ac8ee7f9d3b69104221c56648ff415e09"></a>

Sets the value of Str29_Optional and also sets Str29_IsSet to true.

#### `public inline void `[`SetStr29`](#structFRHAPI__MatchTimelineEvent_1a4907e641d6055fe88ba4e78eae72ea67)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a4907e641d6055fe88ba4e78eae72ea67"></a>

Sets the value of Str29_Optional and also sets Str29_IsSet to true using move semantics.

#### `public inline void `[`ClearStr29`](#structFRHAPI__MatchTimelineEvent_1a50acdd104be533855f994750f006c41e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a50acdd104be533855f994750f006c41e"></a>

Clears the value of Str29_Optional and sets Str29_IsSet to false.

#### `public inline bool `[`IsStr29Set`](#structFRHAPI__MatchTimelineEvent_1a4b7668f29db120d046e7c368a36392ef)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4b7668f29db120d046e7c368a36392ef"></a>

Checks whether Str29_Optional has been set.

#### `public inline void `[`SetStr29ToNull`](#structFRHAPI__MatchTimelineEvent_1a132c40edba4b1c4bda88e9eaebc3b6a5)`()` <a id="structFRHAPI__MatchTimelineEvent_1a132c40edba4b1c4bda88e9eaebc3b6a5"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr29Null`](#structFRHAPI__MatchTimelineEvent_1a670283d1f4bc01347f6ae7dec81d90f7)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a670283d1f4bc01347f6ae7dec81d90f7"></a>

Checks whether Str29_Optional is set to null.

#### `public inline FString & `[`GetStr30`](#structFRHAPI__MatchTimelineEvent_1aba201a0f17ff6b4c22c0d22d0fbf2f7d)`()` <a id="structFRHAPI__MatchTimelineEvent_1aba201a0f17ff6b4c22c0d22d0fbf2f7d"></a>

Gets the value of Str30_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr30`](#structFRHAPI__MatchTimelineEvent_1a629b8101b028d93daf0e4492ae79298b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a629b8101b028d93daf0e4492ae79298b"></a>

Gets the value of Str30_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr30`](#structFRHAPI__MatchTimelineEvent_1a22c340362574d50a8605b8f5fbcfcc79)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a22c340362574d50a8605b8f5fbcfcc79"></a>

Gets the value of Str30_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr30`](#structFRHAPI__MatchTimelineEvent_1a35c81249661aab9626b5373e78113aa2)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a35c81249661aab9626b5373e78113aa2"></a>

Fills OutValue with the value of Str30_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr30OrNull`](#structFRHAPI__MatchTimelineEvent_1a918d0a1750b6a4894c2c2acfad18cd8c)`()` <a id="structFRHAPI__MatchTimelineEvent_1a918d0a1750b6a4894c2c2acfad18cd8c"></a>

Returns a pointer to Str30_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr30OrNull`](#structFRHAPI__MatchTimelineEvent_1a82b4368231fdcf5dca44005a55949faa)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a82b4368231fdcf5dca44005a55949faa"></a>

Returns a pointer to Str30_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr30`](#structFRHAPI__MatchTimelineEvent_1a6c752543abc17da2413918c3e9574d57)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a6c752543abc17da2413918c3e9574d57"></a>

Sets the value of Str30_Optional and also sets Str30_IsSet to true.

#### `public inline void `[`SetStr30`](#structFRHAPI__MatchTimelineEvent_1ada7c84ee50951f2974b04f916512e1cb)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ada7c84ee50951f2974b04f916512e1cb"></a>

Sets the value of Str30_Optional and also sets Str30_IsSet to true using move semantics.

#### `public inline void `[`ClearStr30`](#structFRHAPI__MatchTimelineEvent_1a34c1c119d948f5d4dab3e0f083c0884d)`()` <a id="structFRHAPI__MatchTimelineEvent_1a34c1c119d948f5d4dab3e0f083c0884d"></a>

Clears the value of Str30_Optional and sets Str30_IsSet to false.

#### `public inline bool `[`IsStr30Set`](#structFRHAPI__MatchTimelineEvent_1a4bca7458502f6453beb6d1646f9a4252)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4bca7458502f6453beb6d1646f9a4252"></a>

Checks whether Str30_Optional has been set.

#### `public inline void `[`SetStr30ToNull`](#structFRHAPI__MatchTimelineEvent_1a2c4ff61a8de400092ac5fa7d61824d5f)`()` <a id="structFRHAPI__MatchTimelineEvent_1a2c4ff61a8de400092ac5fa7d61824d5f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr30Null`](#structFRHAPI__MatchTimelineEvent_1ad785c76850a3f4a85ca67a37e97a0df7)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ad785c76850a3f4a85ca67a37e97a0df7"></a>

Checks whether Str30_Optional is set to null.

#### `public inline FString & `[`GetStr31`](#structFRHAPI__MatchTimelineEvent_1a9c3a16960a6b9a4f906169386ab3fcd5)`()` <a id="structFRHAPI__MatchTimelineEvent_1a9c3a16960a6b9a4f906169386ab3fcd5"></a>

Gets the value of Str31_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr31`](#structFRHAPI__MatchTimelineEvent_1a42502e434de264f2fb347507d2a5e854)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a42502e434de264f2fb347507d2a5e854"></a>

Gets the value of Str31_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr31`](#structFRHAPI__MatchTimelineEvent_1a1906acf809486e07ebc38665421e9781)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a1906acf809486e07ebc38665421e9781"></a>

Gets the value of Str31_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr31`](#structFRHAPI__MatchTimelineEvent_1a80b817b02c34b22cdc7f64cd3a7ea192)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a80b817b02c34b22cdc7f64cd3a7ea192"></a>

Fills OutValue with the value of Str31_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr31OrNull`](#structFRHAPI__MatchTimelineEvent_1a356cdb26c3399f49eb767a95975c000a)`()` <a id="structFRHAPI__MatchTimelineEvent_1a356cdb26c3399f49eb767a95975c000a"></a>

Returns a pointer to Str31_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr31OrNull`](#structFRHAPI__MatchTimelineEvent_1ac27cb0d3973db5aede7fe7bfcd7af558)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac27cb0d3973db5aede7fe7bfcd7af558"></a>

Returns a pointer to Str31_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr31`](#structFRHAPI__MatchTimelineEvent_1ae156341649d5a72ca9101829907ccb4a)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ae156341649d5a72ca9101829907ccb4a"></a>

Sets the value of Str31_Optional and also sets Str31_IsSet to true.

#### `public inline void `[`SetStr31`](#structFRHAPI__MatchTimelineEvent_1aed0c35bdbb81a3bd2f1b0fa0f08982f4)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aed0c35bdbb81a3bd2f1b0fa0f08982f4"></a>

Sets the value of Str31_Optional and also sets Str31_IsSet to true using move semantics.

#### `public inline void `[`ClearStr31`](#structFRHAPI__MatchTimelineEvent_1a7011fc0db6d53b47769c255596310804)`()` <a id="structFRHAPI__MatchTimelineEvent_1a7011fc0db6d53b47769c255596310804"></a>

Clears the value of Str31_Optional and sets Str31_IsSet to false.

#### `public inline bool `[`IsStr31Set`](#structFRHAPI__MatchTimelineEvent_1a46f7424ce286af735f1e710781625216)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a46f7424ce286af735f1e710781625216"></a>

Checks whether Str31_Optional has been set.

#### `public inline void `[`SetStr31ToNull`](#structFRHAPI__MatchTimelineEvent_1a0fa8f4859536d03f169ac2e56d9e00ba)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0fa8f4859536d03f169ac2e56d9e00ba"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr31Null`](#structFRHAPI__MatchTimelineEvent_1a7487a77e51f5f1705ede17bdb10ad2c4)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7487a77e51f5f1705ede17bdb10ad2c4"></a>

Checks whether Str31_Optional is set to null.

#### `public inline FString & `[`GetStr32`](#structFRHAPI__MatchTimelineEvent_1a396c7050a91c0140f7f6c1122c02a241)`()` <a id="structFRHAPI__MatchTimelineEvent_1a396c7050a91c0140f7f6c1122c02a241"></a>

Gets the value of Str32_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr32`](#structFRHAPI__MatchTimelineEvent_1a9f54cacabb582d3386733a3862abb2a3)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a9f54cacabb582d3386733a3862abb2a3"></a>

Gets the value of Str32_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStr32`](#structFRHAPI__MatchTimelineEvent_1aa421770da5b094c13bc40fb3613076f7)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aa421770da5b094c13bc40fb3613076f7"></a>

Gets the value of Str32_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStr32`](#structFRHAPI__MatchTimelineEvent_1a26dd745071d7f16fe363f4dcedb37844)`(FString & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a26dd745071d7f16fe363f4dcedb37844"></a>

Fills OutValue with the value of Str32_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStr32OrNull`](#structFRHAPI__MatchTimelineEvent_1a42834f3849cbdfd5178e4729fd83f724)`()` <a id="structFRHAPI__MatchTimelineEvent_1a42834f3849cbdfd5178e4729fd83f724"></a>

Returns a pointer to Str32_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStr32OrNull`](#structFRHAPI__MatchTimelineEvent_1a333671550a4a52c967cbffbfe635c7da)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a333671550a4a52c967cbffbfe635c7da"></a>

Returns a pointer to Str32_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStr32`](#structFRHAPI__MatchTimelineEvent_1a37334ccb100a3e0d173ba6f4d258cb30)`(const FString & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a37334ccb100a3e0d173ba6f4d258cb30"></a>

Sets the value of Str32_Optional and also sets Str32_IsSet to true.

#### `public inline void `[`SetStr32`](#structFRHAPI__MatchTimelineEvent_1ad02db9098baecf7d85294d736a1c7498)`(FString && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ad02db9098baecf7d85294d736a1c7498"></a>

Sets the value of Str32_Optional and also sets Str32_IsSet to true using move semantics.

#### `public inline void `[`ClearStr32`](#structFRHAPI__MatchTimelineEvent_1a1d068d372bef6b19cf364ae0511d5c7e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a1d068d372bef6b19cf364ae0511d5c7e"></a>

Clears the value of Str32_Optional and sets Str32_IsSet to false.

#### `public inline bool `[`IsStr32Set`](#structFRHAPI__MatchTimelineEvent_1ab70ef9f75e139eac79f1ee85271d168b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab70ef9f75e139eac79f1ee85271d168b"></a>

Checks whether Str32_Optional has been set.

#### `public inline void `[`SetStr32ToNull`](#structFRHAPI__MatchTimelineEvent_1a675c5919bfc75d75f95d9168385d76ee)`()` <a id="structFRHAPI__MatchTimelineEvent_1a675c5919bfc75d75f95d9168385d76ee"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStr32Null`](#structFRHAPI__MatchTimelineEvent_1acd3199c83042528afe67d1945e557e2e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1acd3199c83042528afe67d1945e557e2e"></a>

Checks whether Str32_Optional is set to null.

#### `public inline float & `[`GetFloat1`](#structFRHAPI__MatchTimelineEvent_1a77c889336b6a2bb94a8c68b644cee741)`()` <a id="structFRHAPI__MatchTimelineEvent_1a77c889336b6a2bb94a8c68b644cee741"></a>

Gets the value of Float1_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat1`](#structFRHAPI__MatchTimelineEvent_1a8b20046d5067df42eb26c59154a5b016)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8b20046d5067df42eb26c59154a5b016"></a>

Gets the value of Float1_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat1`](#structFRHAPI__MatchTimelineEvent_1a89eaa34705b5f548334e79add67f1d27)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a89eaa34705b5f548334e79add67f1d27"></a>

Gets the value of Float1_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat1`](#structFRHAPI__MatchTimelineEvent_1a785d71129949a86ef2f608b67f2d0e98)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a785d71129949a86ef2f608b67f2d0e98"></a>

Fills OutValue with the value of Float1_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat1OrNull`](#structFRHAPI__MatchTimelineEvent_1ab22b79017fa0cb57739c249dc8377420)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab22b79017fa0cb57739c249dc8377420"></a>

Returns a pointer to Float1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat1OrNull`](#structFRHAPI__MatchTimelineEvent_1ade40bc64620499b025c63726d09c0b45)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ade40bc64620499b025c63726d09c0b45"></a>

Returns a pointer to Float1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat1`](#structFRHAPI__MatchTimelineEvent_1ae3de197054acb6744c7910ab98c6880a)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ae3de197054acb6744c7910ab98c6880a"></a>

Sets the value of Float1_Optional and also sets Float1_IsSet to true.

#### `public inline void `[`SetFloat1`](#structFRHAPI__MatchTimelineEvent_1aef0872f454638faece5527d3c6d92280)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aef0872f454638faece5527d3c6d92280"></a>

Sets the value of Float1_Optional and also sets Float1_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat1`](#structFRHAPI__MatchTimelineEvent_1ac101610d7a4b1a6074c447910de22d49)`()` <a id="structFRHAPI__MatchTimelineEvent_1ac101610d7a4b1a6074c447910de22d49"></a>

Clears the value of Float1_Optional and sets Float1_IsSet to false.

#### `public inline bool `[`IsFloat1Set`](#structFRHAPI__MatchTimelineEvent_1abb2ef181e28a889bdd9b6f801a795702)`() const` <a id="structFRHAPI__MatchTimelineEvent_1abb2ef181e28a889bdd9b6f801a795702"></a>

Checks whether Float1_Optional has been set.

#### `public inline void `[`SetFloat1ToNull`](#structFRHAPI__MatchTimelineEvent_1a7930201c4ecb3b945fe0ea4fcb51ee7e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a7930201c4ecb3b945fe0ea4fcb51ee7e"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat1Null`](#structFRHAPI__MatchTimelineEvent_1a68c969cc450891910063a52c975b2655)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a68c969cc450891910063a52c975b2655"></a>

Checks whether Float1_Optional is set to null.

#### `public inline float & `[`GetFloat2`](#structFRHAPI__MatchTimelineEvent_1a38f5f6a10e86ca6d47a386511fb0a124)`()` <a id="structFRHAPI__MatchTimelineEvent_1a38f5f6a10e86ca6d47a386511fb0a124"></a>

Gets the value of Float2_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat2`](#structFRHAPI__MatchTimelineEvent_1ab87bd1a87fae06a81a8e47ce868d0071)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab87bd1a87fae06a81a8e47ce868d0071"></a>

Gets the value of Float2_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat2`](#structFRHAPI__MatchTimelineEvent_1a87ed78d83c3b64e7bf64c4b2aa538336)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a87ed78d83c3b64e7bf64c4b2aa538336"></a>

Gets the value of Float2_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat2`](#structFRHAPI__MatchTimelineEvent_1a2be694374415536c49b32528e43ec1c8)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a2be694374415536c49b32528e43ec1c8"></a>

Fills OutValue with the value of Float2_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat2OrNull`](#structFRHAPI__MatchTimelineEvent_1a55b3ee394cd573b387976097ea459c69)`()` <a id="structFRHAPI__MatchTimelineEvent_1a55b3ee394cd573b387976097ea459c69"></a>

Returns a pointer to Float2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat2OrNull`](#structFRHAPI__MatchTimelineEvent_1a6c1b4fcb23af4610641cf6382c4c9ea4)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a6c1b4fcb23af4610641cf6382c4c9ea4"></a>

Returns a pointer to Float2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat2`](#structFRHAPI__MatchTimelineEvent_1a810c765b46231241b842a900dfc4855e)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a810c765b46231241b842a900dfc4855e"></a>

Sets the value of Float2_Optional and also sets Float2_IsSet to true.

#### `public inline void `[`SetFloat2`](#structFRHAPI__MatchTimelineEvent_1a4d3b2f7828ec455cb921789a2341e361)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a4d3b2f7828ec455cb921789a2341e361"></a>

Sets the value of Float2_Optional and also sets Float2_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat2`](#structFRHAPI__MatchTimelineEvent_1a98a0686352b16fa51e6d336007cac608)`()` <a id="structFRHAPI__MatchTimelineEvent_1a98a0686352b16fa51e6d336007cac608"></a>

Clears the value of Float2_Optional and sets Float2_IsSet to false.

#### `public inline bool `[`IsFloat2Set`](#structFRHAPI__MatchTimelineEvent_1a2ab363861bd37d52252ef6cb0ac753e0)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2ab363861bd37d52252ef6cb0ac753e0"></a>

Checks whether Float2_Optional has been set.

#### `public inline void `[`SetFloat2ToNull`](#structFRHAPI__MatchTimelineEvent_1a22d7c0fbdfb7481fde0393b6675dd83b)`()` <a id="structFRHAPI__MatchTimelineEvent_1a22d7c0fbdfb7481fde0393b6675dd83b"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat2Null`](#structFRHAPI__MatchTimelineEvent_1a6f2bf8f30641aaf33a7fe69d9b3ee4b3)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a6f2bf8f30641aaf33a7fe69d9b3ee4b3"></a>

Checks whether Float2_Optional is set to null.

#### `public inline float & `[`GetFloat3`](#structFRHAPI__MatchTimelineEvent_1ab0af4517b6d2095128c0347f3edeb78e)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab0af4517b6d2095128c0347f3edeb78e"></a>

Gets the value of Float3_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat3`](#structFRHAPI__MatchTimelineEvent_1aaf69cfb09ba7e417884d0a29e42056ac)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aaf69cfb09ba7e417884d0a29e42056ac"></a>

Gets the value of Float3_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat3`](#structFRHAPI__MatchTimelineEvent_1aaee1f154b3a7edd6ab475aeae8f0d32e)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aaee1f154b3a7edd6ab475aeae8f0d32e"></a>

Gets the value of Float3_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat3`](#structFRHAPI__MatchTimelineEvent_1ac6f84b8788f6a51d48c37ac029f76bfe)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ac6f84b8788f6a51d48c37ac029f76bfe"></a>

Fills OutValue with the value of Float3_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat3OrNull`](#structFRHAPI__MatchTimelineEvent_1a71b738affed2859cf596c223d612c1b8)`()` <a id="structFRHAPI__MatchTimelineEvent_1a71b738affed2859cf596c223d612c1b8"></a>

Returns a pointer to Float3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat3OrNull`](#structFRHAPI__MatchTimelineEvent_1adb9033ad8a073728ad73933a5c1b188a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1adb9033ad8a073728ad73933a5c1b188a"></a>

Returns a pointer to Float3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat3`](#structFRHAPI__MatchTimelineEvent_1ab7b20c4b788ac06e174a88547fef88e7)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ab7b20c4b788ac06e174a88547fef88e7"></a>

Sets the value of Float3_Optional and also sets Float3_IsSet to true.

#### `public inline void `[`SetFloat3`](#structFRHAPI__MatchTimelineEvent_1adf7c0e0a1f2f6bd34f3ce197602b4a84)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1adf7c0e0a1f2f6bd34f3ce197602b4a84"></a>

Sets the value of Float3_Optional and also sets Float3_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat3`](#structFRHAPI__MatchTimelineEvent_1a013bea762f301c310584c5c80b6c16ea)`()` <a id="structFRHAPI__MatchTimelineEvent_1a013bea762f301c310584c5c80b6c16ea"></a>

Clears the value of Float3_Optional and sets Float3_IsSet to false.

#### `public inline bool `[`IsFloat3Set`](#structFRHAPI__MatchTimelineEvent_1ad40d6416aa1277b46e74d8599f56d244)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ad40d6416aa1277b46e74d8599f56d244"></a>

Checks whether Float3_Optional has been set.

#### `public inline void `[`SetFloat3ToNull`](#structFRHAPI__MatchTimelineEvent_1a2e486db5ea959cd4f76f1143c6943222)`()` <a id="structFRHAPI__MatchTimelineEvent_1a2e486db5ea959cd4f76f1143c6943222"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat3Null`](#structFRHAPI__MatchTimelineEvent_1a528a9b80f282389e5449bd6c985d234a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a528a9b80f282389e5449bd6c985d234a"></a>

Checks whether Float3_Optional is set to null.

#### `public inline float & `[`GetFloat4`](#structFRHAPI__MatchTimelineEvent_1a64de1ae63e0d09d58681f0ea5fb3b127)`()` <a id="structFRHAPI__MatchTimelineEvent_1a64de1ae63e0d09d58681f0ea5fb3b127"></a>

Gets the value of Float4_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat4`](#structFRHAPI__MatchTimelineEvent_1a456bd392dbf30861517576eb1ddaf84d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a456bd392dbf30861517576eb1ddaf84d"></a>

Gets the value of Float4_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat4`](#structFRHAPI__MatchTimelineEvent_1aae0b8f79d53b074df9696e0845081b6d)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aae0b8f79d53b074df9696e0845081b6d"></a>

Gets the value of Float4_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat4`](#structFRHAPI__MatchTimelineEvent_1a92c0bdaeaaef0da8ceaad8f87eb0af61)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a92c0bdaeaaef0da8ceaad8f87eb0af61"></a>

Fills OutValue with the value of Float4_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat4OrNull`](#structFRHAPI__MatchTimelineEvent_1a4afae4afc8133e617357dbbc43a00ebc)`()` <a id="structFRHAPI__MatchTimelineEvent_1a4afae4afc8133e617357dbbc43a00ebc"></a>

Returns a pointer to Float4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat4OrNull`](#structFRHAPI__MatchTimelineEvent_1aa983b73690016241e298f841d1acecab)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa983b73690016241e298f841d1acecab"></a>

Returns a pointer to Float4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat4`](#structFRHAPI__MatchTimelineEvent_1a41f9e47e6bd976e38d06c4f9beb2bc12)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a41f9e47e6bd976e38d06c4f9beb2bc12"></a>

Sets the value of Float4_Optional and also sets Float4_IsSet to true.

#### `public inline void `[`SetFloat4`](#structFRHAPI__MatchTimelineEvent_1ae8a68e6cb68602a1b8f563d4fc1db039)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ae8a68e6cb68602a1b8f563d4fc1db039"></a>

Sets the value of Float4_Optional and also sets Float4_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat4`](#structFRHAPI__MatchTimelineEvent_1a1d9db31ed9170fef1243f754b6ec35f6)`()` <a id="structFRHAPI__MatchTimelineEvent_1a1d9db31ed9170fef1243f754b6ec35f6"></a>

Clears the value of Float4_Optional and sets Float4_IsSet to false.

#### `public inline bool `[`IsFloat4Set`](#structFRHAPI__MatchTimelineEvent_1ab90f0846ec2d337be813effc11e8c1e0)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab90f0846ec2d337be813effc11e8c1e0"></a>

Checks whether Float4_Optional has been set.

#### `public inline void `[`SetFloat4ToNull`](#structFRHAPI__MatchTimelineEvent_1a4f47b01395d000f96f48fbce70845954)`()` <a id="structFRHAPI__MatchTimelineEvent_1a4f47b01395d000f96f48fbce70845954"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat4Null`](#structFRHAPI__MatchTimelineEvent_1a9108381c97a3a597719738fc4c59dee7)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a9108381c97a3a597719738fc4c59dee7"></a>

Checks whether Float4_Optional is set to null.

#### `public inline float & `[`GetFloat5`](#structFRHAPI__MatchTimelineEvent_1a2f95fa314691de2a0f19b66bdf4fa5eb)`()` <a id="structFRHAPI__MatchTimelineEvent_1a2f95fa314691de2a0f19b66bdf4fa5eb"></a>

Gets the value of Float5_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat5`](#structFRHAPI__MatchTimelineEvent_1a36adca893533a84a40c5c61ff7eb914c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a36adca893533a84a40c5c61ff7eb914c"></a>

Gets the value of Float5_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat5`](#structFRHAPI__MatchTimelineEvent_1a7089bbb5827b56a9f3c7b641a2818e7d)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a7089bbb5827b56a9f3c7b641a2818e7d"></a>

Gets the value of Float5_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat5`](#structFRHAPI__MatchTimelineEvent_1aa5374356313eb219ab5c5d2046eb88e9)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aa5374356313eb219ab5c5d2046eb88e9"></a>

Fills OutValue with the value of Float5_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat5OrNull`](#structFRHAPI__MatchTimelineEvent_1a7065e27290b43cdb58fd98269883462b)`()` <a id="structFRHAPI__MatchTimelineEvent_1a7065e27290b43cdb58fd98269883462b"></a>

Returns a pointer to Float5_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat5OrNull`](#structFRHAPI__MatchTimelineEvent_1a52d49c998fe3739735e3e60a7deb8481)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a52d49c998fe3739735e3e60a7deb8481"></a>

Returns a pointer to Float5_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat5`](#structFRHAPI__MatchTimelineEvent_1a3e98b4eb5b5f3b161d9162601aa2ebf7)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a3e98b4eb5b5f3b161d9162601aa2ebf7"></a>

Sets the value of Float5_Optional and also sets Float5_IsSet to true.

#### `public inline void `[`SetFloat5`](#structFRHAPI__MatchTimelineEvent_1a75c189205f26e307a2f7a2106b9312c6)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a75c189205f26e307a2f7a2106b9312c6"></a>

Sets the value of Float5_Optional and also sets Float5_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat5`](#structFRHAPI__MatchTimelineEvent_1a9975356a3d03fb8f89c8e9c80a0b5c77)`()` <a id="structFRHAPI__MatchTimelineEvent_1a9975356a3d03fb8f89c8e9c80a0b5c77"></a>

Clears the value of Float5_Optional and sets Float5_IsSet to false.

#### `public inline bool `[`IsFloat5Set`](#structFRHAPI__MatchTimelineEvent_1ab53774076ef6fa936b18b1fd59a69aa9)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab53774076ef6fa936b18b1fd59a69aa9"></a>

Checks whether Float5_Optional has been set.

#### `public inline void `[`SetFloat5ToNull`](#structFRHAPI__MatchTimelineEvent_1a200f27954c9576ae1ea6636def403f0d)`()` <a id="structFRHAPI__MatchTimelineEvent_1a200f27954c9576ae1ea6636def403f0d"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat5Null`](#structFRHAPI__MatchTimelineEvent_1a3b5b448f8b54ac7bd3eece3e5fc0ac46)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a3b5b448f8b54ac7bd3eece3e5fc0ac46"></a>

Checks whether Float5_Optional is set to null.

#### `public inline float & `[`GetFloat6`](#structFRHAPI__MatchTimelineEvent_1acd33b082538126ea7f8e6ee8760a9087)`()` <a id="structFRHAPI__MatchTimelineEvent_1acd33b082538126ea7f8e6ee8760a9087"></a>

Gets the value of Float6_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat6`](#structFRHAPI__MatchTimelineEvent_1a63047423f417d1c1010e05c7d951a59f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a63047423f417d1c1010e05c7d951a59f"></a>

Gets the value of Float6_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat6`](#structFRHAPI__MatchTimelineEvent_1a2a5307c47d4c4b0df9a176f23fbda03b)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a2a5307c47d4c4b0df9a176f23fbda03b"></a>

Gets the value of Float6_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat6`](#structFRHAPI__MatchTimelineEvent_1a579b15a36a69d774666b579ebf4fb5ed)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a579b15a36a69d774666b579ebf4fb5ed"></a>

Fills OutValue with the value of Float6_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat6OrNull`](#structFRHAPI__MatchTimelineEvent_1aff29c1dd7e87fdd57b3ccc4dbfc54819)`()` <a id="structFRHAPI__MatchTimelineEvent_1aff29c1dd7e87fdd57b3ccc4dbfc54819"></a>

Returns a pointer to Float6_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat6OrNull`](#structFRHAPI__MatchTimelineEvent_1a39bf70551d159f6c7ec7f6c1ca031aeb)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a39bf70551d159f6c7ec7f6c1ca031aeb"></a>

Returns a pointer to Float6_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat6`](#structFRHAPI__MatchTimelineEvent_1a3d08f852a0c57182fb3095a92d972cfb)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a3d08f852a0c57182fb3095a92d972cfb"></a>

Sets the value of Float6_Optional and also sets Float6_IsSet to true.

#### `public inline void `[`SetFloat6`](#structFRHAPI__MatchTimelineEvent_1a11cd0ef6e77f07fef1f5ed26743ab41d)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a11cd0ef6e77f07fef1f5ed26743ab41d"></a>

Sets the value of Float6_Optional and also sets Float6_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat6`](#structFRHAPI__MatchTimelineEvent_1a8c604d35ed635fce4c8c53047c63aa21)`()` <a id="structFRHAPI__MatchTimelineEvent_1a8c604d35ed635fce4c8c53047c63aa21"></a>

Clears the value of Float6_Optional and sets Float6_IsSet to false.

#### `public inline bool `[`IsFloat6Set`](#structFRHAPI__MatchTimelineEvent_1a5d4f59a9a666319fb678647c9e28ed77)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5d4f59a9a666319fb678647c9e28ed77"></a>

Checks whether Float6_Optional has been set.

#### `public inline void `[`SetFloat6ToNull`](#structFRHAPI__MatchTimelineEvent_1a98129100e82096ce94109b19cbe39991)`()` <a id="structFRHAPI__MatchTimelineEvent_1a98129100e82096ce94109b19cbe39991"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat6Null`](#structFRHAPI__MatchTimelineEvent_1a0194bbbc93743cd015ab7e738753b769)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0194bbbc93743cd015ab7e738753b769"></a>

Checks whether Float6_Optional is set to null.

#### `public inline float & `[`GetFloat7`](#structFRHAPI__MatchTimelineEvent_1ae34fb4ba650b2029605fc8829a52f0ba)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae34fb4ba650b2029605fc8829a52f0ba"></a>

Gets the value of Float7_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat7`](#structFRHAPI__MatchTimelineEvent_1a2845520849579f936c3aedb180e7d803)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2845520849579f936c3aedb180e7d803"></a>

Gets the value of Float7_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat7`](#structFRHAPI__MatchTimelineEvent_1a772c0dce2d7d290535409d7975fcb1c6)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a772c0dce2d7d290535409d7975fcb1c6"></a>

Gets the value of Float7_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat7`](#structFRHAPI__MatchTimelineEvent_1ab47549a9776a1f3deec0240a11f6c92f)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ab47549a9776a1f3deec0240a11f6c92f"></a>

Fills OutValue with the value of Float7_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat7OrNull`](#structFRHAPI__MatchTimelineEvent_1af7612fc187ce04e303cfbb8b61f2889b)`()` <a id="structFRHAPI__MatchTimelineEvent_1af7612fc187ce04e303cfbb8b61f2889b"></a>

Returns a pointer to Float7_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat7OrNull`](#structFRHAPI__MatchTimelineEvent_1af8f930049011efd0885704568c3b3e4d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af8f930049011efd0885704568c3b3e4d"></a>

Returns a pointer to Float7_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat7`](#structFRHAPI__MatchTimelineEvent_1ae7c4bb7772c1b0a5852f7d30e2c3d4f8)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ae7c4bb7772c1b0a5852f7d30e2c3d4f8"></a>

Sets the value of Float7_Optional and also sets Float7_IsSet to true.

#### `public inline void `[`SetFloat7`](#structFRHAPI__MatchTimelineEvent_1acd336dec5f34b6412a10d346b8ef26dc)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1acd336dec5f34b6412a10d346b8ef26dc"></a>

Sets the value of Float7_Optional and also sets Float7_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat7`](#structFRHAPI__MatchTimelineEvent_1a743881324e50c26ff8aab8f04b3477b6)`()` <a id="structFRHAPI__MatchTimelineEvent_1a743881324e50c26ff8aab8f04b3477b6"></a>

Clears the value of Float7_Optional and sets Float7_IsSet to false.

#### `public inline bool `[`IsFloat7Set`](#structFRHAPI__MatchTimelineEvent_1a63afb4225b77f9de209753c4c19ad234)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a63afb4225b77f9de209753c4c19ad234"></a>

Checks whether Float7_Optional has been set.

#### `public inline void `[`SetFloat7ToNull`](#structFRHAPI__MatchTimelineEvent_1aabe6628b3d8eec52e658cc71615e708c)`()` <a id="structFRHAPI__MatchTimelineEvent_1aabe6628b3d8eec52e658cc71615e708c"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat7Null`](#structFRHAPI__MatchTimelineEvent_1a6d547e71cd22046a0487e4de65bd6275)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a6d547e71cd22046a0487e4de65bd6275"></a>

Checks whether Float7_Optional is set to null.

#### `public inline float & `[`GetFloat8`](#structFRHAPI__MatchTimelineEvent_1a5b6a73929ed0f1ea7c0830e30464fb1d)`()` <a id="structFRHAPI__MatchTimelineEvent_1a5b6a73929ed0f1ea7c0830e30464fb1d"></a>

Gets the value of Float8_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat8`](#structFRHAPI__MatchTimelineEvent_1a188a34a7cd263148b4ad1d1dec11c072)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a188a34a7cd263148b4ad1d1dec11c072"></a>

Gets the value of Float8_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat8`](#structFRHAPI__MatchTimelineEvent_1ad71ca4181b7dead45ec89bf29148cd6b)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ad71ca4181b7dead45ec89bf29148cd6b"></a>

Gets the value of Float8_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat8`](#structFRHAPI__MatchTimelineEvent_1aeaad1efa4a70e021f1ae26e7bf6673d8)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aeaad1efa4a70e021f1ae26e7bf6673d8"></a>

Fills OutValue with the value of Float8_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat8OrNull`](#structFRHAPI__MatchTimelineEvent_1a308bf11fced06e0fa5072e1a20ac10ef)`()` <a id="structFRHAPI__MatchTimelineEvent_1a308bf11fced06e0fa5072e1a20ac10ef"></a>

Returns a pointer to Float8_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat8OrNull`](#structFRHAPI__MatchTimelineEvent_1a9cfca16001cabab819e0a9afbc59489c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a9cfca16001cabab819e0a9afbc59489c"></a>

Returns a pointer to Float8_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat8`](#structFRHAPI__MatchTimelineEvent_1af51061711abc42cd9b4ffd3c707fa35c)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1af51061711abc42cd9b4ffd3c707fa35c"></a>

Sets the value of Float8_Optional and also sets Float8_IsSet to true.

#### `public inline void `[`SetFloat8`](#structFRHAPI__MatchTimelineEvent_1abe66d3ada04535eadbd7d609ffe6006e)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1abe66d3ada04535eadbd7d609ffe6006e"></a>

Sets the value of Float8_Optional and also sets Float8_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat8`](#structFRHAPI__MatchTimelineEvent_1a0fd42b782bfaf1ddfc63c182a5238018)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0fd42b782bfaf1ddfc63c182a5238018"></a>

Clears the value of Float8_Optional and sets Float8_IsSet to false.

#### `public inline bool `[`IsFloat8Set`](#structFRHAPI__MatchTimelineEvent_1ae23c76a4a183c6005abc53a315b20df5)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ae23c76a4a183c6005abc53a315b20df5"></a>

Checks whether Float8_Optional has been set.

#### `public inline void `[`SetFloat8ToNull`](#structFRHAPI__MatchTimelineEvent_1aba8b372fb86ad0e635945e33f79fa783)`()` <a id="structFRHAPI__MatchTimelineEvent_1aba8b372fb86ad0e635945e33f79fa783"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat8Null`](#structFRHAPI__MatchTimelineEvent_1abd8a0ba99bf4d0f0a5a129035535bef6)`() const` <a id="structFRHAPI__MatchTimelineEvent_1abd8a0ba99bf4d0f0a5a129035535bef6"></a>

Checks whether Float8_Optional is set to null.

#### `public inline float & `[`GetFloat9`](#structFRHAPI__MatchTimelineEvent_1a3dbef3452c3525754443f6a1a2cc7c56)`()` <a id="structFRHAPI__MatchTimelineEvent_1a3dbef3452c3525754443f6a1a2cc7c56"></a>

Gets the value of Float9_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat9`](#structFRHAPI__MatchTimelineEvent_1a02eddc90996ee6ecc9079368602a14e5)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a02eddc90996ee6ecc9079368602a14e5"></a>

Gets the value of Float9_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat9`](#structFRHAPI__MatchTimelineEvent_1a88ecbed3d41d52c284fe82ce46513c60)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a88ecbed3d41d52c284fe82ce46513c60"></a>

Gets the value of Float9_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat9`](#structFRHAPI__MatchTimelineEvent_1add982a28f2553af778bd30a6469ed284)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1add982a28f2553af778bd30a6469ed284"></a>

Fills OutValue with the value of Float9_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat9OrNull`](#structFRHAPI__MatchTimelineEvent_1a4972dfcb71c37f2c685a89d1deabd692)`()` <a id="structFRHAPI__MatchTimelineEvent_1a4972dfcb71c37f2c685a89d1deabd692"></a>

Returns a pointer to Float9_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat9OrNull`](#structFRHAPI__MatchTimelineEvent_1a8aad6b4a55b04cbd4f4ff6c4e797ad38)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8aad6b4a55b04cbd4f4ff6c4e797ad38"></a>

Returns a pointer to Float9_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat9`](#structFRHAPI__MatchTimelineEvent_1a7904008c0ec91919439dc4ae23f636f7)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a7904008c0ec91919439dc4ae23f636f7"></a>

Sets the value of Float9_Optional and also sets Float9_IsSet to true.

#### `public inline void `[`SetFloat9`](#structFRHAPI__MatchTimelineEvent_1a9c18f27604378a1b607d4130aadb3bba)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a9c18f27604378a1b607d4130aadb3bba"></a>

Sets the value of Float9_Optional and also sets Float9_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat9`](#structFRHAPI__MatchTimelineEvent_1a5b4e28468df39f2c99d20dd77f93e337)`()` <a id="structFRHAPI__MatchTimelineEvent_1a5b4e28468df39f2c99d20dd77f93e337"></a>

Clears the value of Float9_Optional and sets Float9_IsSet to false.

#### `public inline bool `[`IsFloat9Set`](#structFRHAPI__MatchTimelineEvent_1aa11e7d2d7d1c063b09d5a4674843a2dd)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa11e7d2d7d1c063b09d5a4674843a2dd"></a>

Checks whether Float9_Optional has been set.

#### `public inline void `[`SetFloat9ToNull`](#structFRHAPI__MatchTimelineEvent_1a8734d409cdb9889e1c0aa5e1a93b67da)`()` <a id="structFRHAPI__MatchTimelineEvent_1a8734d409cdb9889e1c0aa5e1a93b67da"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat9Null`](#structFRHAPI__MatchTimelineEvent_1a6a02475919e5465f366511809df2900a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a6a02475919e5465f366511809df2900a"></a>

Checks whether Float9_Optional is set to null.

#### `public inline float & `[`GetFloat10`](#structFRHAPI__MatchTimelineEvent_1afc8b494feab5b3ce35fc93ad2240b520)`()` <a id="structFRHAPI__MatchTimelineEvent_1afc8b494feab5b3ce35fc93ad2240b520"></a>

Gets the value of Float10_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat10`](#structFRHAPI__MatchTimelineEvent_1a207d5be6df106dd47138c27b96e17aa3)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a207d5be6df106dd47138c27b96e17aa3"></a>

Gets the value of Float10_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat10`](#structFRHAPI__MatchTimelineEvent_1ae03b5d0cd8c77b3f27b9d910471e0bcd)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ae03b5d0cd8c77b3f27b9d910471e0bcd"></a>

Gets the value of Float10_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat10`](#structFRHAPI__MatchTimelineEvent_1a58a305ea39072fcd87c2c61845c46455)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a58a305ea39072fcd87c2c61845c46455"></a>

Fills OutValue with the value of Float10_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat10OrNull`](#structFRHAPI__MatchTimelineEvent_1af8eef09e86ae4bccca0ea24250d519c7)`()` <a id="structFRHAPI__MatchTimelineEvent_1af8eef09e86ae4bccca0ea24250d519c7"></a>

Returns a pointer to Float10_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat10OrNull`](#structFRHAPI__MatchTimelineEvent_1ade62a88f00f1e2b3f2cdcb1849f626bf)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ade62a88f00f1e2b3f2cdcb1849f626bf"></a>

Returns a pointer to Float10_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat10`](#structFRHAPI__MatchTimelineEvent_1a85ced979e5e97da9240458b9b18abff9)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a85ced979e5e97da9240458b9b18abff9"></a>

Sets the value of Float10_Optional and also sets Float10_IsSet to true.

#### `public inline void `[`SetFloat10`](#structFRHAPI__MatchTimelineEvent_1a7db87f6faf6d5070789061bf59fb3826)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a7db87f6faf6d5070789061bf59fb3826"></a>

Sets the value of Float10_Optional and also sets Float10_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat10`](#structFRHAPI__MatchTimelineEvent_1af98159cd2beb33007c561461aab72a68)`()` <a id="structFRHAPI__MatchTimelineEvent_1af98159cd2beb33007c561461aab72a68"></a>

Clears the value of Float10_Optional and sets Float10_IsSet to false.

#### `public inline bool `[`IsFloat10Set`](#structFRHAPI__MatchTimelineEvent_1a2c4123ca03ba5df25857b1c2db492cae)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2c4123ca03ba5df25857b1c2db492cae"></a>

Checks whether Float10_Optional has been set.

#### `public inline void `[`SetFloat10ToNull`](#structFRHAPI__MatchTimelineEvent_1af891a21dc416ca80a4a6c90796727a32)`()` <a id="structFRHAPI__MatchTimelineEvent_1af891a21dc416ca80a4a6c90796727a32"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat10Null`](#structFRHAPI__MatchTimelineEvent_1af00d70e813fb1d4fa7f5ce57d09f57b9)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af00d70e813fb1d4fa7f5ce57d09f57b9"></a>

Checks whether Float10_Optional is set to null.

#### `public inline float & `[`GetFloat11`](#structFRHAPI__MatchTimelineEvent_1a710df4bc4223999bb250d3aa8d50455d)`()` <a id="structFRHAPI__MatchTimelineEvent_1a710df4bc4223999bb250d3aa8d50455d"></a>

Gets the value of Float11_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat11`](#structFRHAPI__MatchTimelineEvent_1a72b3acecff2f76e65446155add26d09c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a72b3acecff2f76e65446155add26d09c"></a>

Gets the value of Float11_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat11`](#structFRHAPI__MatchTimelineEvent_1aec5fe6db9862eba4f77dc596f4e54fba)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aec5fe6db9862eba4f77dc596f4e54fba"></a>

Gets the value of Float11_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat11`](#structFRHAPI__MatchTimelineEvent_1aaf20054d98037b728ba20636c295a90e)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aaf20054d98037b728ba20636c295a90e"></a>

Fills OutValue with the value of Float11_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat11OrNull`](#structFRHAPI__MatchTimelineEvent_1aac9d690aecc919fa792dafd6702c6b61)`()` <a id="structFRHAPI__MatchTimelineEvent_1aac9d690aecc919fa792dafd6702c6b61"></a>

Returns a pointer to Float11_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat11OrNull`](#structFRHAPI__MatchTimelineEvent_1adef3ae6aaa87a0b2ad388475bf9e0fee)`() const` <a id="structFRHAPI__MatchTimelineEvent_1adef3ae6aaa87a0b2ad388475bf9e0fee"></a>

Returns a pointer to Float11_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat11`](#structFRHAPI__MatchTimelineEvent_1a8decabe4afc19a2b8332ca33769607b6)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a8decabe4afc19a2b8332ca33769607b6"></a>

Sets the value of Float11_Optional and also sets Float11_IsSet to true.

#### `public inline void `[`SetFloat11`](#structFRHAPI__MatchTimelineEvent_1aee64b9371d8978d9a05113d7d08952b2)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aee64b9371d8978d9a05113d7d08952b2"></a>

Sets the value of Float11_Optional and also sets Float11_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat11`](#structFRHAPI__MatchTimelineEvent_1a15cc952f3426889c841839d9baf54cdd)`()` <a id="structFRHAPI__MatchTimelineEvent_1a15cc952f3426889c841839d9baf54cdd"></a>

Clears the value of Float11_Optional and sets Float11_IsSet to false.

#### `public inline bool `[`IsFloat11Set`](#structFRHAPI__MatchTimelineEvent_1a0d8e6b4bc0ff7ad4c77be57f42bdc93d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0d8e6b4bc0ff7ad4c77be57f42bdc93d"></a>

Checks whether Float11_Optional has been set.

#### `public inline void `[`SetFloat11ToNull`](#structFRHAPI__MatchTimelineEvent_1a0e19f2aac379f8c6e7e5451fbe8793a3)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0e19f2aac379f8c6e7e5451fbe8793a3"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat11Null`](#structFRHAPI__MatchTimelineEvent_1acd6012f8d60860c4bc9cddb68ffdf3c6)`() const` <a id="structFRHAPI__MatchTimelineEvent_1acd6012f8d60860c4bc9cddb68ffdf3c6"></a>

Checks whether Float11_Optional is set to null.

#### `public inline float & `[`GetFloat12`](#structFRHAPI__MatchTimelineEvent_1a4fb6e117b57e4a31f1b4f40e72e7d1f8)`()` <a id="structFRHAPI__MatchTimelineEvent_1a4fb6e117b57e4a31f1b4f40e72e7d1f8"></a>

Gets the value of Float12_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat12`](#structFRHAPI__MatchTimelineEvent_1a33a23edf66d6650eed8521cc4879cb92)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a33a23edf66d6650eed8521cc4879cb92"></a>

Gets the value of Float12_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat12`](#structFRHAPI__MatchTimelineEvent_1a0449307e41f422bc55ce5788e2a344ab)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a0449307e41f422bc55ce5788e2a344ab"></a>

Gets the value of Float12_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat12`](#structFRHAPI__MatchTimelineEvent_1a75704a29acfb87f9d5559abb833b5cf3)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a75704a29acfb87f9d5559abb833b5cf3"></a>

Fills OutValue with the value of Float12_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat12OrNull`](#structFRHAPI__MatchTimelineEvent_1a81c18078674814a0d581536458f05702)`()` <a id="structFRHAPI__MatchTimelineEvent_1a81c18078674814a0d581536458f05702"></a>

Returns a pointer to Float12_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat12OrNull`](#structFRHAPI__MatchTimelineEvent_1a1f9d81adfd0899251364b5aefc00d1cf)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1f9d81adfd0899251364b5aefc00d1cf"></a>

Returns a pointer to Float12_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat12`](#structFRHAPI__MatchTimelineEvent_1a5d4cb49937a5bbba94e657fcc02f25db)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a5d4cb49937a5bbba94e657fcc02f25db"></a>

Sets the value of Float12_Optional and also sets Float12_IsSet to true.

#### `public inline void `[`SetFloat12`](#structFRHAPI__MatchTimelineEvent_1ac37d0c84db4fbed77fc85ac951565ac5)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ac37d0c84db4fbed77fc85ac951565ac5"></a>

Sets the value of Float12_Optional and also sets Float12_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat12`](#structFRHAPI__MatchTimelineEvent_1aa1adb5d3b68c26e67588fd730b58c125)`()` <a id="structFRHAPI__MatchTimelineEvent_1aa1adb5d3b68c26e67588fd730b58c125"></a>

Clears the value of Float12_Optional and sets Float12_IsSet to false.

#### `public inline bool `[`IsFloat12Set`](#structFRHAPI__MatchTimelineEvent_1a250a8ea267799d72e35b61fffa099ee3)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a250a8ea267799d72e35b61fffa099ee3"></a>

Checks whether Float12_Optional has been set.

#### `public inline void `[`SetFloat12ToNull`](#structFRHAPI__MatchTimelineEvent_1abb4328860e4f028b7dff6b4b2fea51ae)`()` <a id="structFRHAPI__MatchTimelineEvent_1abb4328860e4f028b7dff6b4b2fea51ae"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat12Null`](#structFRHAPI__MatchTimelineEvent_1acd5dfaead49620dae268ecd5444fc909)`() const` <a id="structFRHAPI__MatchTimelineEvent_1acd5dfaead49620dae268ecd5444fc909"></a>

Checks whether Float12_Optional is set to null.

#### `public inline float & `[`GetFloat13`](#structFRHAPI__MatchTimelineEvent_1a3252266e9eada26d365c1dac1d042922)`()` <a id="structFRHAPI__MatchTimelineEvent_1a3252266e9eada26d365c1dac1d042922"></a>

Gets the value of Float13_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat13`](#structFRHAPI__MatchTimelineEvent_1a5f1203c6eb6f6a9e4fbfe0bf39e38ef5)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5f1203c6eb6f6a9e4fbfe0bf39e38ef5"></a>

Gets the value of Float13_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat13`](#structFRHAPI__MatchTimelineEvent_1a0b86a89120109b5f3112f14a895d0b67)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a0b86a89120109b5f3112f14a895d0b67"></a>

Gets the value of Float13_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat13`](#structFRHAPI__MatchTimelineEvent_1a44fc3c43e62b0153ed1bcd28c2582316)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a44fc3c43e62b0153ed1bcd28c2582316"></a>

Fills OutValue with the value of Float13_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat13OrNull`](#structFRHAPI__MatchTimelineEvent_1a7b388893a2662ff0e4039f845caa0fb6)`()` <a id="structFRHAPI__MatchTimelineEvent_1a7b388893a2662ff0e4039f845caa0fb6"></a>

Returns a pointer to Float13_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat13OrNull`](#structFRHAPI__MatchTimelineEvent_1acb268cee194ee935aa201a05a8c06ca0)`() const` <a id="structFRHAPI__MatchTimelineEvent_1acb268cee194ee935aa201a05a8c06ca0"></a>

Returns a pointer to Float13_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat13`](#structFRHAPI__MatchTimelineEvent_1a34e2cc51fe1b688644b4d921d1ab1269)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a34e2cc51fe1b688644b4d921d1ab1269"></a>

Sets the value of Float13_Optional and also sets Float13_IsSet to true.

#### `public inline void `[`SetFloat13`](#structFRHAPI__MatchTimelineEvent_1a15ba6d854b9e120cef29c103da571bff)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a15ba6d854b9e120cef29c103da571bff"></a>

Sets the value of Float13_Optional and also sets Float13_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat13`](#structFRHAPI__MatchTimelineEvent_1aacc26f151fa867b5639ef4e765351ff3)`()` <a id="structFRHAPI__MatchTimelineEvent_1aacc26f151fa867b5639ef4e765351ff3"></a>

Clears the value of Float13_Optional and sets Float13_IsSet to false.

#### `public inline bool `[`IsFloat13Set`](#structFRHAPI__MatchTimelineEvent_1a76c5099446906b93f3f2fc537ef33c75)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a76c5099446906b93f3f2fc537ef33c75"></a>

Checks whether Float13_Optional has been set.

#### `public inline void `[`SetFloat13ToNull`](#structFRHAPI__MatchTimelineEvent_1acdf4c328877570b050255d1447fe5769)`()` <a id="structFRHAPI__MatchTimelineEvent_1acdf4c328877570b050255d1447fe5769"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat13Null`](#structFRHAPI__MatchTimelineEvent_1add9642d1084e646a20ff6523f5284cf3)`() const` <a id="structFRHAPI__MatchTimelineEvent_1add9642d1084e646a20ff6523f5284cf3"></a>

Checks whether Float13_Optional is set to null.

#### `public inline float & `[`GetFloat14`](#structFRHAPI__MatchTimelineEvent_1a61c91c55d2280efb1208ae3155f14ed1)`()` <a id="structFRHAPI__MatchTimelineEvent_1a61c91c55d2280efb1208ae3155f14ed1"></a>

Gets the value of Float14_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat14`](#structFRHAPI__MatchTimelineEvent_1aec7c801878d12b42520bd9cdcdece33c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aec7c801878d12b42520bd9cdcdece33c"></a>

Gets the value of Float14_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat14`](#structFRHAPI__MatchTimelineEvent_1a961a2942c08e6daed1a941126a2cf01c)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a961a2942c08e6daed1a941126a2cf01c"></a>

Gets the value of Float14_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat14`](#structFRHAPI__MatchTimelineEvent_1a1f79deb668270af8ac45e26694491d02)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a1f79deb668270af8ac45e26694491d02"></a>

Fills OutValue with the value of Float14_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat14OrNull`](#structFRHAPI__MatchTimelineEvent_1a127a5021a81d440f0f32c2902b3f3830)`()` <a id="structFRHAPI__MatchTimelineEvent_1a127a5021a81d440f0f32c2902b3f3830"></a>

Returns a pointer to Float14_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat14OrNull`](#structFRHAPI__MatchTimelineEvent_1ac909ab0eeaf29fcb4d067bc6e0e64fae)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac909ab0eeaf29fcb4d067bc6e0e64fae"></a>

Returns a pointer to Float14_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat14`](#structFRHAPI__MatchTimelineEvent_1a459a92cf39033f532712b0932a1e55e8)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a459a92cf39033f532712b0932a1e55e8"></a>

Sets the value of Float14_Optional and also sets Float14_IsSet to true.

#### `public inline void `[`SetFloat14`](#structFRHAPI__MatchTimelineEvent_1ac16a5701145e09d5af8b0ed76be183ed)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ac16a5701145e09d5af8b0ed76be183ed"></a>

Sets the value of Float14_Optional and also sets Float14_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat14`](#structFRHAPI__MatchTimelineEvent_1a4d1cbebb1dedf001a8f5cdbcb80a7e1a)`()` <a id="structFRHAPI__MatchTimelineEvent_1a4d1cbebb1dedf001a8f5cdbcb80a7e1a"></a>

Clears the value of Float14_Optional and sets Float14_IsSet to false.

#### `public inline bool `[`IsFloat14Set`](#structFRHAPI__MatchTimelineEvent_1a2a6673b57d1c4e461bfc8ce2c02d28d9)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2a6673b57d1c4e461bfc8ce2c02d28d9"></a>

Checks whether Float14_Optional has been set.

#### `public inline void `[`SetFloat14ToNull`](#structFRHAPI__MatchTimelineEvent_1ac8aa01db90dc2ec5745306855247f2c9)`()` <a id="structFRHAPI__MatchTimelineEvent_1ac8aa01db90dc2ec5745306855247f2c9"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat14Null`](#structFRHAPI__MatchTimelineEvent_1a8025f14196161df21e7588d33f633a9a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8025f14196161df21e7588d33f633a9a"></a>

Checks whether Float14_Optional is set to null.

#### `public inline float & `[`GetFloat15`](#structFRHAPI__MatchTimelineEvent_1a817e801d4e3b32c9f75b71bee02abbd7)`()` <a id="structFRHAPI__MatchTimelineEvent_1a817e801d4e3b32c9f75b71bee02abbd7"></a>

Gets the value of Float15_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat15`](#structFRHAPI__MatchTimelineEvent_1a2e34ed219337d0feab6db928fa181317)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a2e34ed219337d0feab6db928fa181317"></a>

Gets the value of Float15_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat15`](#structFRHAPI__MatchTimelineEvent_1af06f82d2bf69c4327882b0f0e3a16d22)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1af06f82d2bf69c4327882b0f0e3a16d22"></a>

Gets the value of Float15_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat15`](#structFRHAPI__MatchTimelineEvent_1a86e1516ab019582a9677261a8bb1e256)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a86e1516ab019582a9677261a8bb1e256"></a>

Fills OutValue with the value of Float15_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat15OrNull`](#structFRHAPI__MatchTimelineEvent_1a9bf73f1b54450340802bc2d7ebc5396f)`()` <a id="structFRHAPI__MatchTimelineEvent_1a9bf73f1b54450340802bc2d7ebc5396f"></a>

Returns a pointer to Float15_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat15OrNull`](#structFRHAPI__MatchTimelineEvent_1acc188217e9b1347af22603cbc015b68a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1acc188217e9b1347af22603cbc015b68a"></a>

Returns a pointer to Float15_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat15`](#structFRHAPI__MatchTimelineEvent_1ae4883005f3d0519d168df7dbbee4d60d)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ae4883005f3d0519d168df7dbbee4d60d"></a>

Sets the value of Float15_Optional and also sets Float15_IsSet to true.

#### `public inline void `[`SetFloat15`](#structFRHAPI__MatchTimelineEvent_1aa08eca875eab60abecc6b71ccb777de9)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aa08eca875eab60abecc6b71ccb777de9"></a>

Sets the value of Float15_Optional and also sets Float15_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat15`](#structFRHAPI__MatchTimelineEvent_1a95cbd961ed5844874543c765c28f409f)`()` <a id="structFRHAPI__MatchTimelineEvent_1a95cbd961ed5844874543c765c28f409f"></a>

Clears the value of Float15_Optional and sets Float15_IsSet to false.

#### `public inline bool `[`IsFloat15Set`](#structFRHAPI__MatchTimelineEvent_1a9fa82b6e9762409321e3d5a401a99820)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a9fa82b6e9762409321e3d5a401a99820"></a>

Checks whether Float15_Optional has been set.

#### `public inline void `[`SetFloat15ToNull`](#structFRHAPI__MatchTimelineEvent_1a5bdcad6315df90f37b01ce2b5ac07d28)`()` <a id="structFRHAPI__MatchTimelineEvent_1a5bdcad6315df90f37b01ce2b5ac07d28"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat15Null`](#structFRHAPI__MatchTimelineEvent_1ab5e9049fe1c59245e31022c104c19e09)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab5e9049fe1c59245e31022c104c19e09"></a>

Checks whether Float15_Optional is set to null.

#### `public inline float & `[`GetFloat16`](#structFRHAPI__MatchTimelineEvent_1a4383b40ee587cad0bab4ea03518aae66)`()` <a id="structFRHAPI__MatchTimelineEvent_1a4383b40ee587cad0bab4ea03518aae66"></a>

Gets the value of Float16_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat16`](#structFRHAPI__MatchTimelineEvent_1af3e8a74e5927c441595a6d43a743fccb)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af3e8a74e5927c441595a6d43a743fccb"></a>

Gets the value of Float16_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat16`](#structFRHAPI__MatchTimelineEvent_1a063169752c7b1995236a330acf159a5b)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a063169752c7b1995236a330acf159a5b"></a>

Gets the value of Float16_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat16`](#structFRHAPI__MatchTimelineEvent_1a867b47d224ba1d13314ee21ea6402016)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a867b47d224ba1d13314ee21ea6402016"></a>

Fills OutValue with the value of Float16_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat16OrNull`](#structFRHAPI__MatchTimelineEvent_1a612bb827a3d87f04fc72ddc2c738e5c1)`()` <a id="structFRHAPI__MatchTimelineEvent_1a612bb827a3d87f04fc72ddc2c738e5c1"></a>

Returns a pointer to Float16_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat16OrNull`](#structFRHAPI__MatchTimelineEvent_1a74c99764a3d913d7926cb884576968d5)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a74c99764a3d913d7926cb884576968d5"></a>

Returns a pointer to Float16_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat16`](#structFRHAPI__MatchTimelineEvent_1a71b4cd20f2dfed2c1c21d99296a98b7e)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a71b4cd20f2dfed2c1c21d99296a98b7e"></a>

Sets the value of Float16_Optional and also sets Float16_IsSet to true.

#### `public inline void `[`SetFloat16`](#structFRHAPI__MatchTimelineEvent_1ae5a2bbd88c229b60579251e5a56363b1)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ae5a2bbd88c229b60579251e5a56363b1"></a>

Sets the value of Float16_Optional and also sets Float16_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat16`](#structFRHAPI__MatchTimelineEvent_1ae2822ad89d397688758c3ac05d28755a)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae2822ad89d397688758c3ac05d28755a"></a>

Clears the value of Float16_Optional and sets Float16_IsSet to false.

#### `public inline bool `[`IsFloat16Set`](#structFRHAPI__MatchTimelineEvent_1a579149c0ea183c1dc669bcbb312dae4c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a579149c0ea183c1dc669bcbb312dae4c"></a>

Checks whether Float16_Optional has been set.

#### `public inline void `[`SetFloat16ToNull`](#structFRHAPI__MatchTimelineEvent_1a73a5f953bc3564ccc0b313a7f11a97ed)`()` <a id="structFRHAPI__MatchTimelineEvent_1a73a5f953bc3564ccc0b313a7f11a97ed"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat16Null`](#structFRHAPI__MatchTimelineEvent_1aad8dcdfd9e90c0aeb6782029830accd8)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aad8dcdfd9e90c0aeb6782029830accd8"></a>

Checks whether Float16_Optional is set to null.

#### `public inline float & `[`GetFloat17`](#structFRHAPI__MatchTimelineEvent_1a2d75948a8424d3570c164b87b5a7b70c)`()` <a id="structFRHAPI__MatchTimelineEvent_1a2d75948a8424d3570c164b87b5a7b70c"></a>

Gets the value of Float17_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat17`](#structFRHAPI__MatchTimelineEvent_1a4e263b3301d9a91eee1029581c4f2f61)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4e263b3301d9a91eee1029581c4f2f61"></a>

Gets the value of Float17_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat17`](#structFRHAPI__MatchTimelineEvent_1ac41a2692d9858bee09a8b6a456b881db)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ac41a2692d9858bee09a8b6a456b881db"></a>

Gets the value of Float17_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat17`](#structFRHAPI__MatchTimelineEvent_1aabec71c02574cd50fb879201b86a2245)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1aabec71c02574cd50fb879201b86a2245"></a>

Fills OutValue with the value of Float17_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat17OrNull`](#structFRHAPI__MatchTimelineEvent_1a8b40f212137d24c949fd1480a39aa8ea)`()` <a id="structFRHAPI__MatchTimelineEvent_1a8b40f212137d24c949fd1480a39aa8ea"></a>

Returns a pointer to Float17_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat17OrNull`](#structFRHAPI__MatchTimelineEvent_1aad94caeda3d2eaf7554a33867ebbc55d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aad94caeda3d2eaf7554a33867ebbc55d"></a>

Returns a pointer to Float17_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat17`](#structFRHAPI__MatchTimelineEvent_1a8e11c4456d410c40c5722dd2c4797adc)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a8e11c4456d410c40c5722dd2c4797adc"></a>

Sets the value of Float17_Optional and also sets Float17_IsSet to true.

#### `public inline void `[`SetFloat17`](#structFRHAPI__MatchTimelineEvent_1aa5a9d4974558ffb906d133aa8341396f)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aa5a9d4974558ffb906d133aa8341396f"></a>

Sets the value of Float17_Optional and also sets Float17_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat17`](#structFRHAPI__MatchTimelineEvent_1a3afcea167068f4db78f363be41ed3501)`()` <a id="structFRHAPI__MatchTimelineEvent_1a3afcea167068f4db78f363be41ed3501"></a>

Clears the value of Float17_Optional and sets Float17_IsSet to false.

#### `public inline bool `[`IsFloat17Set`](#structFRHAPI__MatchTimelineEvent_1ac0050ebfb99885d36f1d3f8541ffd717)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac0050ebfb99885d36f1d3f8541ffd717"></a>

Checks whether Float17_Optional has been set.

#### `public inline void `[`SetFloat17ToNull`](#structFRHAPI__MatchTimelineEvent_1ab1737559904a1a339998fdfca55fb225)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab1737559904a1a339998fdfca55fb225"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat17Null`](#structFRHAPI__MatchTimelineEvent_1ade5fc33641d85dcce4707b539feae1cf)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ade5fc33641d85dcce4707b539feae1cf"></a>

Checks whether Float17_Optional is set to null.

#### `public inline float & `[`GetFloat18`](#structFRHAPI__MatchTimelineEvent_1a0471703fc3967c91c80901e4c68885a0)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0471703fc3967c91c80901e4c68885a0"></a>

Gets the value of Float18_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat18`](#structFRHAPI__MatchTimelineEvent_1a8a78352c44e19e356e178585dcb3952a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8a78352c44e19e356e178585dcb3952a"></a>

Gets the value of Float18_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat18`](#structFRHAPI__MatchTimelineEvent_1ae398b98e36786d6c8dd29d91fb151173)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ae398b98e36786d6c8dd29d91fb151173"></a>

Gets the value of Float18_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat18`](#structFRHAPI__MatchTimelineEvent_1a81544a4c027aff603c7cc7ad9f21b182)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a81544a4c027aff603c7cc7ad9f21b182"></a>

Fills OutValue with the value of Float18_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat18OrNull`](#structFRHAPI__MatchTimelineEvent_1a4b8bbfd08730cbbe20791b308c8e1733)`()` <a id="structFRHAPI__MatchTimelineEvent_1a4b8bbfd08730cbbe20791b308c8e1733"></a>

Returns a pointer to Float18_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat18OrNull`](#structFRHAPI__MatchTimelineEvent_1a29272680ce16f252c494dbefa46bac40)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a29272680ce16f252c494dbefa46bac40"></a>

Returns a pointer to Float18_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat18`](#structFRHAPI__MatchTimelineEvent_1a841ca042e8b3f3351a9b6998fcdb7c79)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a841ca042e8b3f3351a9b6998fcdb7c79"></a>

Sets the value of Float18_Optional and also sets Float18_IsSet to true.

#### `public inline void `[`SetFloat18`](#structFRHAPI__MatchTimelineEvent_1affbff30baa996b8685300a59ccf1dfb4)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1affbff30baa996b8685300a59ccf1dfb4"></a>

Sets the value of Float18_Optional and also sets Float18_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat18`](#structFRHAPI__MatchTimelineEvent_1a13668e4ed92e971aefe9bac4f7f472f2)`()` <a id="structFRHAPI__MatchTimelineEvent_1a13668e4ed92e971aefe9bac4f7f472f2"></a>

Clears the value of Float18_Optional and sets Float18_IsSet to false.

#### `public inline bool `[`IsFloat18Set`](#structFRHAPI__MatchTimelineEvent_1a9fc1630274c2b67b4e47d500419eb2da)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a9fc1630274c2b67b4e47d500419eb2da"></a>

Checks whether Float18_Optional has been set.

#### `public inline void `[`SetFloat18ToNull`](#structFRHAPI__MatchTimelineEvent_1a740ef1b517fa083a3907ce56f0ac1442)`()` <a id="structFRHAPI__MatchTimelineEvent_1a740ef1b517fa083a3907ce56f0ac1442"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat18Null`](#structFRHAPI__MatchTimelineEvent_1af41d22189d2caaf88a450f85551d285c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af41d22189d2caaf88a450f85551d285c"></a>

Checks whether Float18_Optional is set to null.

#### `public inline float & `[`GetFloat19`](#structFRHAPI__MatchTimelineEvent_1ab9980a8133f16ba93631d5d0b9d43719)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab9980a8133f16ba93631d5d0b9d43719"></a>

Gets the value of Float19_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat19`](#structFRHAPI__MatchTimelineEvent_1ab3b4407572a6d6f3fc7087d5c78cdb61)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab3b4407572a6d6f3fc7087d5c78cdb61"></a>

Gets the value of Float19_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat19`](#structFRHAPI__MatchTimelineEvent_1a794a954ee79f7777b367440c1b8c77a0)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a794a954ee79f7777b367440c1b8c77a0"></a>

Gets the value of Float19_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat19`](#structFRHAPI__MatchTimelineEvent_1ac69d1fac4468fe91f7d20613e75cbfe0)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ac69d1fac4468fe91f7d20613e75cbfe0"></a>

Fills OutValue with the value of Float19_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat19OrNull`](#structFRHAPI__MatchTimelineEvent_1a8d553cb0a11fd75b19a98ce8d42d60a0)`()` <a id="structFRHAPI__MatchTimelineEvent_1a8d553cb0a11fd75b19a98ce8d42d60a0"></a>

Returns a pointer to Float19_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat19OrNull`](#structFRHAPI__MatchTimelineEvent_1ac4b47d450f28d04f44469f21e6ea9c06)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac4b47d450f28d04f44469f21e6ea9c06"></a>

Returns a pointer to Float19_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat19`](#structFRHAPI__MatchTimelineEvent_1aad1b05b75ec32127d7a6ccc55f2d9809)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aad1b05b75ec32127d7a6ccc55f2d9809"></a>

Sets the value of Float19_Optional and also sets Float19_IsSet to true.

#### `public inline void `[`SetFloat19`](#structFRHAPI__MatchTimelineEvent_1ad70e3774951fd132f0753ab24006aae5)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ad70e3774951fd132f0753ab24006aae5"></a>

Sets the value of Float19_Optional and also sets Float19_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat19`](#structFRHAPI__MatchTimelineEvent_1ac4cefa49a48eb25140cb4b9bde94b684)`()` <a id="structFRHAPI__MatchTimelineEvent_1ac4cefa49a48eb25140cb4b9bde94b684"></a>

Clears the value of Float19_Optional and sets Float19_IsSet to false.

#### `public inline bool `[`IsFloat19Set`](#structFRHAPI__MatchTimelineEvent_1a56ba57b2b033641192933547ae445435)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a56ba57b2b033641192933547ae445435"></a>

Checks whether Float19_Optional has been set.

#### `public inline void `[`SetFloat19ToNull`](#structFRHAPI__MatchTimelineEvent_1a338a090355f96b84f15bf80d9df81441)`()` <a id="structFRHAPI__MatchTimelineEvent_1a338a090355f96b84f15bf80d9df81441"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat19Null`](#structFRHAPI__MatchTimelineEvent_1a3895a1e11da9bcd3383dff5c10aaf5be)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a3895a1e11da9bcd3383dff5c10aaf5be"></a>

Checks whether Float19_Optional is set to null.

#### `public inline float & `[`GetFloat20`](#structFRHAPI__MatchTimelineEvent_1aae2b66b841244f27f1b990811130ba9f)`()` <a id="structFRHAPI__MatchTimelineEvent_1aae2b66b841244f27f1b990811130ba9f"></a>

Gets the value of Float20_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat20`](#structFRHAPI__MatchTimelineEvent_1a991cccf1e2bb8c5897c6b3e7eccb2af4)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a991cccf1e2bb8c5897c6b3e7eccb2af4"></a>

Gets the value of Float20_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat20`](#structFRHAPI__MatchTimelineEvent_1a1a6322718ae5e1d36bb5d5fb163a9678)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a1a6322718ae5e1d36bb5d5fb163a9678"></a>

Gets the value of Float20_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat20`](#structFRHAPI__MatchTimelineEvent_1a347f6b8c56d4dbeb7a367978c27c5ebd)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a347f6b8c56d4dbeb7a367978c27c5ebd"></a>

Fills OutValue with the value of Float20_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat20OrNull`](#structFRHAPI__MatchTimelineEvent_1a1fc840e7c470fbbb47d4c815992e0011)`()` <a id="structFRHAPI__MatchTimelineEvent_1a1fc840e7c470fbbb47d4c815992e0011"></a>

Returns a pointer to Float20_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat20OrNull`](#structFRHAPI__MatchTimelineEvent_1a76b9d85da6d8a34cba64e30a5eca01ba)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a76b9d85da6d8a34cba64e30a5eca01ba"></a>

Returns a pointer to Float20_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat20`](#structFRHAPI__MatchTimelineEvent_1aad51b930dd4bb9db41edadb0aa038d83)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aad51b930dd4bb9db41edadb0aa038d83"></a>

Sets the value of Float20_Optional and also sets Float20_IsSet to true.

#### `public inline void `[`SetFloat20`](#structFRHAPI__MatchTimelineEvent_1a61ffaf398308d48f37720dbc4c3e8c51)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a61ffaf398308d48f37720dbc4c3e8c51"></a>

Sets the value of Float20_Optional and also sets Float20_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat20`](#structFRHAPI__MatchTimelineEvent_1abd7db75886ebb78555c2c4f7d8a2084b)`()` <a id="structFRHAPI__MatchTimelineEvent_1abd7db75886ebb78555c2c4f7d8a2084b"></a>

Clears the value of Float20_Optional and sets Float20_IsSet to false.

#### `public inline bool `[`IsFloat20Set`](#structFRHAPI__MatchTimelineEvent_1a4824a3cae9b4d80ac773b9774c74ccc7)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4824a3cae9b4d80ac773b9774c74ccc7"></a>

Checks whether Float20_Optional has been set.

#### `public inline void `[`SetFloat20ToNull`](#structFRHAPI__MatchTimelineEvent_1a1a6aa7a503cac5561435b6d1a063b78e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a1a6aa7a503cac5561435b6d1a063b78e"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat20Null`](#structFRHAPI__MatchTimelineEvent_1a1b65bf76300d884273131ab68425ce0b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1b65bf76300d884273131ab68425ce0b"></a>

Checks whether Float20_Optional is set to null.

#### `public inline float & `[`GetFloat21`](#structFRHAPI__MatchTimelineEvent_1a2e6451d298383402d81dd6428a001409)`()` <a id="structFRHAPI__MatchTimelineEvent_1a2e6451d298383402d81dd6428a001409"></a>

Gets the value of Float21_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat21`](#structFRHAPI__MatchTimelineEvent_1a8ede594d0e1e8be0f22915ba23b089ca)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8ede594d0e1e8be0f22915ba23b089ca"></a>

Gets the value of Float21_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat21`](#structFRHAPI__MatchTimelineEvent_1adae55712d525e8a613d3e674a6c6fb2a)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1adae55712d525e8a613d3e674a6c6fb2a"></a>

Gets the value of Float21_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat21`](#structFRHAPI__MatchTimelineEvent_1af47bb936556681a8d9ec3f87b4b78e8f)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1af47bb936556681a8d9ec3f87b4b78e8f"></a>

Fills OutValue with the value of Float21_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat21OrNull`](#structFRHAPI__MatchTimelineEvent_1a2ee5047039a854f16c7fda47863ecd58)`()` <a id="structFRHAPI__MatchTimelineEvent_1a2ee5047039a854f16c7fda47863ecd58"></a>

Returns a pointer to Float21_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat21OrNull`](#structFRHAPI__MatchTimelineEvent_1a1f130d29ce1f81270237a834144eec11)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1f130d29ce1f81270237a834144eec11"></a>

Returns a pointer to Float21_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat21`](#structFRHAPI__MatchTimelineEvent_1afde7f1dc062631436f94450fe1e1cb6b)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1afde7f1dc062631436f94450fe1e1cb6b"></a>

Sets the value of Float21_Optional and also sets Float21_IsSet to true.

#### `public inline void `[`SetFloat21`](#structFRHAPI__MatchTimelineEvent_1a657fe7e87e4d87cbda8b4db24c841424)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a657fe7e87e4d87cbda8b4db24c841424"></a>

Sets the value of Float21_Optional and also sets Float21_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat21`](#structFRHAPI__MatchTimelineEvent_1a25279aa95d5c53a7d6015d9a67c73890)`()` <a id="structFRHAPI__MatchTimelineEvent_1a25279aa95d5c53a7d6015d9a67c73890"></a>

Clears the value of Float21_Optional and sets Float21_IsSet to false.

#### `public inline bool `[`IsFloat21Set`](#structFRHAPI__MatchTimelineEvent_1a633f7f904f9a0189897232b5dc8762c6)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a633f7f904f9a0189897232b5dc8762c6"></a>

Checks whether Float21_Optional has been set.

#### `public inline void `[`SetFloat21ToNull`](#structFRHAPI__MatchTimelineEvent_1aab28cd1c52d5b2921f728bc80ad38095)`()` <a id="structFRHAPI__MatchTimelineEvent_1aab28cd1c52d5b2921f728bc80ad38095"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat21Null`](#structFRHAPI__MatchTimelineEvent_1a87ba7df88cb2b01ec326c2ce2c3d55d0)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a87ba7df88cb2b01ec326c2ce2c3d55d0"></a>

Checks whether Float21_Optional is set to null.

#### `public inline float & `[`GetFloat22`](#structFRHAPI__MatchTimelineEvent_1ab6593994bed9323816ef93f0a576b932)`()` <a id="structFRHAPI__MatchTimelineEvent_1ab6593994bed9323816ef93f0a576b932"></a>

Gets the value of Float22_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat22`](#structFRHAPI__MatchTimelineEvent_1af9bf06c4906faeb5d8a3995cfde50dc2)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af9bf06c4906faeb5d8a3995cfde50dc2"></a>

Gets the value of Float22_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat22`](#structFRHAPI__MatchTimelineEvent_1a8effb252168f8274515fb8dd204b12ac)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a8effb252168f8274515fb8dd204b12ac"></a>

Gets the value of Float22_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat22`](#structFRHAPI__MatchTimelineEvent_1a396d5e5f4dff0e5609382933d9cd069e)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a396d5e5f4dff0e5609382933d9cd069e"></a>

Fills OutValue with the value of Float22_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat22OrNull`](#structFRHAPI__MatchTimelineEvent_1a11d2e2de752b5c6a7a571a9572fc09b3)`()` <a id="structFRHAPI__MatchTimelineEvent_1a11d2e2de752b5c6a7a571a9572fc09b3"></a>

Returns a pointer to Float22_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat22OrNull`](#structFRHAPI__MatchTimelineEvent_1a92139adeb87068d19c72cb6a3dd6a09d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a92139adeb87068d19c72cb6a3dd6a09d"></a>

Returns a pointer to Float22_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat22`](#structFRHAPI__MatchTimelineEvent_1af61a2c5048244a54043852f9ce79855b)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1af61a2c5048244a54043852f9ce79855b"></a>

Sets the value of Float22_Optional and also sets Float22_IsSet to true.

#### `public inline void `[`SetFloat22`](#structFRHAPI__MatchTimelineEvent_1ac9945c697b2800af5816872037565999)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ac9945c697b2800af5816872037565999"></a>

Sets the value of Float22_Optional and also sets Float22_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat22`](#structFRHAPI__MatchTimelineEvent_1a4ab567b768919cdecc0438c98a536818)`()` <a id="structFRHAPI__MatchTimelineEvent_1a4ab567b768919cdecc0438c98a536818"></a>

Clears the value of Float22_Optional and sets Float22_IsSet to false.

#### `public inline bool `[`IsFloat22Set`](#structFRHAPI__MatchTimelineEvent_1af5c2dd018c7ca1596beeee6659c2d10f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af5c2dd018c7ca1596beeee6659c2d10f"></a>

Checks whether Float22_Optional has been set.

#### `public inline void `[`SetFloat22ToNull`](#structFRHAPI__MatchTimelineEvent_1a40e558387ce784b0ab4e0428ffcc102a)`()` <a id="structFRHAPI__MatchTimelineEvent_1a40e558387ce784b0ab4e0428ffcc102a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat22Null`](#structFRHAPI__MatchTimelineEvent_1a8607539302135b93e0e88209bdc4d545)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8607539302135b93e0e88209bdc4d545"></a>

Checks whether Float22_Optional is set to null.

#### `public inline float & `[`GetFloat23`](#structFRHAPI__MatchTimelineEvent_1a4c2841b2bc868d9c4660a49492875205)`()` <a id="structFRHAPI__MatchTimelineEvent_1a4c2841b2bc868d9c4660a49492875205"></a>

Gets the value of Float23_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat23`](#structFRHAPI__MatchTimelineEvent_1a7c7e9c93ba234e8047db30ccba225d20)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7c7e9c93ba234e8047db30ccba225d20"></a>

Gets the value of Float23_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat23`](#structFRHAPI__MatchTimelineEvent_1a5b1c56c15ac5b1e9f87796b697164dd9)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a5b1c56c15ac5b1e9f87796b697164dd9"></a>

Gets the value of Float23_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat23`](#structFRHAPI__MatchTimelineEvent_1a817803006891068f010bc3effa7a50bf)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a817803006891068f010bc3effa7a50bf"></a>

Fills OutValue with the value of Float23_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat23OrNull`](#structFRHAPI__MatchTimelineEvent_1afb4ba801d325440d51c0100f01f3260f)`()` <a id="structFRHAPI__MatchTimelineEvent_1afb4ba801d325440d51c0100f01f3260f"></a>

Returns a pointer to Float23_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat23OrNull`](#structFRHAPI__MatchTimelineEvent_1ab75aee0fd1d5cace1765e16a018a05f8)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab75aee0fd1d5cace1765e16a018a05f8"></a>

Returns a pointer to Float23_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat23`](#structFRHAPI__MatchTimelineEvent_1a26aab86e2f21a23553552d49f7fdb479)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a26aab86e2f21a23553552d49f7fdb479"></a>

Sets the value of Float23_Optional and also sets Float23_IsSet to true.

#### `public inline void `[`SetFloat23`](#structFRHAPI__MatchTimelineEvent_1aaa23959ef89d5fa76ff0629a4678fbad)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aaa23959ef89d5fa76ff0629a4678fbad"></a>

Sets the value of Float23_Optional and also sets Float23_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat23`](#structFRHAPI__MatchTimelineEvent_1addca41364844317f29bbf7876b41f41d)`()` <a id="structFRHAPI__MatchTimelineEvent_1addca41364844317f29bbf7876b41f41d"></a>

Clears the value of Float23_Optional and sets Float23_IsSet to false.

#### `public inline bool `[`IsFloat23Set`](#structFRHAPI__MatchTimelineEvent_1a001968e5b2774452c4531bffab84eff8)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a001968e5b2774452c4531bffab84eff8"></a>

Checks whether Float23_Optional has been set.

#### `public inline void `[`SetFloat23ToNull`](#structFRHAPI__MatchTimelineEvent_1a41f09092f6ef2f98c3c239db46bcc73f)`()` <a id="structFRHAPI__MatchTimelineEvent_1a41f09092f6ef2f98c3c239db46bcc73f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat23Null`](#structFRHAPI__MatchTimelineEvent_1a9bf30ad4ee76e65ad4b941fc3d0dcd04)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a9bf30ad4ee76e65ad4b941fc3d0dcd04"></a>

Checks whether Float23_Optional is set to null.

#### `public inline float & `[`GetFloat24`](#structFRHAPI__MatchTimelineEvent_1adb9f9776c4e4de3fe5b8bb1a2876fafc)`()` <a id="structFRHAPI__MatchTimelineEvent_1adb9f9776c4e4de3fe5b8bb1a2876fafc"></a>

Gets the value of Float24_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat24`](#structFRHAPI__MatchTimelineEvent_1a56b22ae984a573880aa7394e6335e6ef)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a56b22ae984a573880aa7394e6335e6ef"></a>

Gets the value of Float24_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat24`](#structFRHAPI__MatchTimelineEvent_1a3959231255f69370a3c6385c476d236e)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a3959231255f69370a3c6385c476d236e"></a>

Gets the value of Float24_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat24`](#structFRHAPI__MatchTimelineEvent_1a34fc1f7acc23b0dd3c94939e56e0ecba)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a34fc1f7acc23b0dd3c94939e56e0ecba"></a>

Fills OutValue with the value of Float24_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat24OrNull`](#structFRHAPI__MatchTimelineEvent_1a7f46c80822df265d5980e50528620298)`()` <a id="structFRHAPI__MatchTimelineEvent_1a7f46c80822df265d5980e50528620298"></a>

Returns a pointer to Float24_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat24OrNull`](#structFRHAPI__MatchTimelineEvent_1a7db03428d124886f19f7a48dd7868280)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7db03428d124886f19f7a48dd7868280"></a>

Returns a pointer to Float24_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat24`](#structFRHAPI__MatchTimelineEvent_1a8ea35612c9106c0f4d35684bb9312e3e)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a8ea35612c9106c0f4d35684bb9312e3e"></a>

Sets the value of Float24_Optional and also sets Float24_IsSet to true.

#### `public inline void `[`SetFloat24`](#structFRHAPI__MatchTimelineEvent_1a523ebd4e1aa52d1bbb0a3c775cb1b334)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a523ebd4e1aa52d1bbb0a3c775cb1b334"></a>

Sets the value of Float24_Optional and also sets Float24_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat24`](#structFRHAPI__MatchTimelineEvent_1acfbd6596c1c76a9e0b14caa47d1c4042)`()` <a id="structFRHAPI__MatchTimelineEvent_1acfbd6596c1c76a9e0b14caa47d1c4042"></a>

Clears the value of Float24_Optional and sets Float24_IsSet to false.

#### `public inline bool `[`IsFloat24Set`](#structFRHAPI__MatchTimelineEvent_1ab5d24e62d146894147d54e76942cf43d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab5d24e62d146894147d54e76942cf43d"></a>

Checks whether Float24_Optional has been set.

#### `public inline void `[`SetFloat24ToNull`](#structFRHAPI__MatchTimelineEvent_1abf95c49191cc448320c673e8408ea542)`()` <a id="structFRHAPI__MatchTimelineEvent_1abf95c49191cc448320c673e8408ea542"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat24Null`](#structFRHAPI__MatchTimelineEvent_1a6fd19d0998791cacbfdc326a6d5d0172)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a6fd19d0998791cacbfdc326a6d5d0172"></a>

Checks whether Float24_Optional is set to null.

#### `public inline float & `[`GetFloat25`](#structFRHAPI__MatchTimelineEvent_1a1e570f3396f4e7081d7038493f6d6b6e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a1e570f3396f4e7081d7038493f6d6b6e"></a>

Gets the value of Float25_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat25`](#structFRHAPI__MatchTimelineEvent_1a36a883b7069adf970707703939460aa4)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a36a883b7069adf970707703939460aa4"></a>

Gets the value of Float25_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat25`](#structFRHAPI__MatchTimelineEvent_1a368a9484f352e3a79813b87fc9c0233a)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a368a9484f352e3a79813b87fc9c0233a"></a>

Gets the value of Float25_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat25`](#structFRHAPI__MatchTimelineEvent_1affc785efe4d9b4014f2a987d00333ab9)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1affc785efe4d9b4014f2a987d00333ab9"></a>

Fills OutValue with the value of Float25_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat25OrNull`](#structFRHAPI__MatchTimelineEvent_1ae7197de2b894596afdc9ca717b42e1cd)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae7197de2b894596afdc9ca717b42e1cd"></a>

Returns a pointer to Float25_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat25OrNull`](#structFRHAPI__MatchTimelineEvent_1a73ed1e36b8bbafa51da7e1abbc8a5fac)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a73ed1e36b8bbafa51da7e1abbc8a5fac"></a>

Returns a pointer to Float25_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat25`](#structFRHAPI__MatchTimelineEvent_1a7ffa66942624fc7e5fab8c592938f4f3)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a7ffa66942624fc7e5fab8c592938f4f3"></a>

Sets the value of Float25_Optional and also sets Float25_IsSet to true.

#### `public inline void `[`SetFloat25`](#structFRHAPI__MatchTimelineEvent_1aed9a44d09fda7a7c7a30288f2ffc5023)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1aed9a44d09fda7a7c7a30288f2ffc5023"></a>

Sets the value of Float25_Optional and also sets Float25_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat25`](#structFRHAPI__MatchTimelineEvent_1ad0ef559b64a49ecf49e4e38053a9f3b9)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad0ef559b64a49ecf49e4e38053a9f3b9"></a>

Clears the value of Float25_Optional and sets Float25_IsSet to false.

#### `public inline bool `[`IsFloat25Set`](#structFRHAPI__MatchTimelineEvent_1aec0d4c840b85e0b80405ce8d4528bac8)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aec0d4c840b85e0b80405ce8d4528bac8"></a>

Checks whether Float25_Optional has been set.

#### `public inline void `[`SetFloat25ToNull`](#structFRHAPI__MatchTimelineEvent_1a80e8f3ec239804fdd1e3e034cecdbd19)`()` <a id="structFRHAPI__MatchTimelineEvent_1a80e8f3ec239804fdd1e3e034cecdbd19"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat25Null`](#structFRHAPI__MatchTimelineEvent_1a8d34eccc767e76bd583e0dae91c8689a)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a8d34eccc767e76bd583e0dae91c8689a"></a>

Checks whether Float25_Optional is set to null.

#### `public inline float & `[`GetFloat26`](#structFRHAPI__MatchTimelineEvent_1a718af30269b354d6bb5ef8ad4ee0a369)`()` <a id="structFRHAPI__MatchTimelineEvent_1a718af30269b354d6bb5ef8ad4ee0a369"></a>

Gets the value of Float26_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat26`](#structFRHAPI__MatchTimelineEvent_1aa244ef916b552c955f9f3b0b4dc41441)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aa244ef916b552c955f9f3b0b4dc41441"></a>

Gets the value of Float26_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat26`](#structFRHAPI__MatchTimelineEvent_1a91373b737460ecf4e7062231b3ae9614)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a91373b737460ecf4e7062231b3ae9614"></a>

Gets the value of Float26_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat26`](#structFRHAPI__MatchTimelineEvent_1ad879e3f5abc843b2185acdfb24e84d7f)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ad879e3f5abc843b2185acdfb24e84d7f"></a>

Fills OutValue with the value of Float26_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat26OrNull`](#structFRHAPI__MatchTimelineEvent_1a63ab0690787085ada874d7188f57bc74)`()` <a id="structFRHAPI__MatchTimelineEvent_1a63ab0690787085ada874d7188f57bc74"></a>

Returns a pointer to Float26_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat26OrNull`](#structFRHAPI__MatchTimelineEvent_1a1cbbdb757980822527b2b093318fb18d)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a1cbbdb757980822527b2b093318fb18d"></a>

Returns a pointer to Float26_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat26`](#structFRHAPI__MatchTimelineEvent_1a6f0510312915b8ec26f815fe4da9972a)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a6f0510312915b8ec26f815fe4da9972a"></a>

Sets the value of Float26_Optional and also sets Float26_IsSet to true.

#### `public inline void `[`SetFloat26`](#structFRHAPI__MatchTimelineEvent_1ac528e23856609d66516332eef2cefdd9)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ac528e23856609d66516332eef2cefdd9"></a>

Sets the value of Float26_Optional and also sets Float26_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat26`](#structFRHAPI__MatchTimelineEvent_1a1dc23f3fc8c3809b10b863ee46012606)`()` <a id="structFRHAPI__MatchTimelineEvent_1a1dc23f3fc8c3809b10b863ee46012606"></a>

Clears the value of Float26_Optional and sets Float26_IsSet to false.

#### `public inline bool `[`IsFloat26Set`](#structFRHAPI__MatchTimelineEvent_1a4edcf2118e3dc2a104f0179ffc7c67a3)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4edcf2118e3dc2a104f0179ffc7c67a3"></a>

Checks whether Float26_Optional has been set.

#### `public inline void `[`SetFloat26ToNull`](#structFRHAPI__MatchTimelineEvent_1a4b40645421f74eb72f88a4eb5566291b)`()` <a id="structFRHAPI__MatchTimelineEvent_1a4b40645421f74eb72f88a4eb5566291b"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat26Null`](#structFRHAPI__MatchTimelineEvent_1ab029e23cbdac71f3c48b1abd586e6c19)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ab029e23cbdac71f3c48b1abd586e6c19"></a>

Checks whether Float26_Optional is set to null.

#### `public inline float & `[`GetFloat27`](#structFRHAPI__MatchTimelineEvent_1a4913752bcfd4426918cc28ad5d3d99d9)`()` <a id="structFRHAPI__MatchTimelineEvent_1a4913752bcfd4426918cc28ad5d3d99d9"></a>

Gets the value of Float27_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat27`](#structFRHAPI__MatchTimelineEvent_1a259eafe910ae197300722b57ab8a72cf)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a259eafe910ae197300722b57ab8a72cf"></a>

Gets the value of Float27_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat27`](#structFRHAPI__MatchTimelineEvent_1ab721771e86d1a919d328194b2e463af6)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1ab721771e86d1a919d328194b2e463af6"></a>

Gets the value of Float27_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat27`](#structFRHAPI__MatchTimelineEvent_1a38d2b6dad516b48c8a71eba9d46f8907)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a38d2b6dad516b48c8a71eba9d46f8907"></a>

Fills OutValue with the value of Float27_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat27OrNull`](#structFRHAPI__MatchTimelineEvent_1a1601d2d5db1e4671568a6cef38e71487)`()` <a id="structFRHAPI__MatchTimelineEvent_1a1601d2d5db1e4671568a6cef38e71487"></a>

Returns a pointer to Float27_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat27OrNull`](#structFRHAPI__MatchTimelineEvent_1adaa3d752fc88c0de3fb25496f4f4f9e7)`() const` <a id="structFRHAPI__MatchTimelineEvent_1adaa3d752fc88c0de3fb25496f4f4f9e7"></a>

Returns a pointer to Float27_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat27`](#structFRHAPI__MatchTimelineEvent_1a6da54a4599c56ab77dac28a51ff40601)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a6da54a4599c56ab77dac28a51ff40601"></a>

Sets the value of Float27_Optional and also sets Float27_IsSet to true.

#### `public inline void `[`SetFloat27`](#structFRHAPI__MatchTimelineEvent_1ab44ac88ee2f909c297f37887d2479103)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1ab44ac88ee2f909c297f37887d2479103"></a>

Sets the value of Float27_Optional and also sets Float27_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat27`](#structFRHAPI__MatchTimelineEvent_1aef407076a594db9a4bf5147ed55c87f6)`()` <a id="structFRHAPI__MatchTimelineEvent_1aef407076a594db9a4bf5147ed55c87f6"></a>

Clears the value of Float27_Optional and sets Float27_IsSet to false.

#### `public inline bool `[`IsFloat27Set`](#structFRHAPI__MatchTimelineEvent_1a4be2a23653b7eaa449079309482db812)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4be2a23653b7eaa449079309482db812"></a>

Checks whether Float27_Optional has been set.

#### `public inline void `[`SetFloat27ToNull`](#structFRHAPI__MatchTimelineEvent_1a087a46abcaf996dcb871c2ad0d9f703f)`()` <a id="structFRHAPI__MatchTimelineEvent_1a087a46abcaf996dcb871c2ad0d9f703f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat27Null`](#structFRHAPI__MatchTimelineEvent_1adb9b4cfbd582cbf40cc44d2677c46c31)`() const` <a id="structFRHAPI__MatchTimelineEvent_1adb9b4cfbd582cbf40cc44d2677c46c31"></a>

Checks whether Float27_Optional is set to null.

#### `public inline float & `[`GetFloat28`](#structFRHAPI__MatchTimelineEvent_1a12f5389c71249e33a5df122392a0ca7d)`()` <a id="structFRHAPI__MatchTimelineEvent_1a12f5389c71249e33a5df122392a0ca7d"></a>

Gets the value of Float28_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat28`](#structFRHAPI__MatchTimelineEvent_1a9fd9beebb6f958d66af4f6ece242efbf)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a9fd9beebb6f958d66af4f6ece242efbf"></a>

Gets the value of Float28_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat28`](#structFRHAPI__MatchTimelineEvent_1a80b4e0b073c89ac575a870443f0f64c4)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a80b4e0b073c89ac575a870443f0f64c4"></a>

Gets the value of Float28_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat28`](#structFRHAPI__MatchTimelineEvent_1abc9aca9ea1330ad1172a2c48f4de25b6)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1abc9aca9ea1330ad1172a2c48f4de25b6"></a>

Fills OutValue with the value of Float28_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat28OrNull`](#structFRHAPI__MatchTimelineEvent_1a165233ff43d7bba5200458f10d8988a4)`()` <a id="structFRHAPI__MatchTimelineEvent_1a165233ff43d7bba5200458f10d8988a4"></a>

Returns a pointer to Float28_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat28OrNull`](#structFRHAPI__MatchTimelineEvent_1aca7193795c372a0a25f24d7413ccbe75)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aca7193795c372a0a25f24d7413ccbe75"></a>

Returns a pointer to Float28_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat28`](#structFRHAPI__MatchTimelineEvent_1a6e990dd48a64258744e7e6efdfb6140a)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a6e990dd48a64258744e7e6efdfb6140a"></a>

Sets the value of Float28_Optional and also sets Float28_IsSet to true.

#### `public inline void `[`SetFloat28`](#structFRHAPI__MatchTimelineEvent_1a85379d37eada31695b6d6d5bd3f69565)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a85379d37eada31695b6d6d5bd3f69565"></a>

Sets the value of Float28_Optional and also sets Float28_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat28`](#structFRHAPI__MatchTimelineEvent_1af470f8108241acbc4d94a54fb679b63f)`()` <a id="structFRHAPI__MatchTimelineEvent_1af470f8108241acbc4d94a54fb679b63f"></a>

Clears the value of Float28_Optional and sets Float28_IsSet to false.

#### `public inline bool `[`IsFloat28Set`](#structFRHAPI__MatchTimelineEvent_1a0a88a8db8f3124dbe65d090bca1799d7)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0a88a8db8f3124dbe65d090bca1799d7"></a>

Checks whether Float28_Optional has been set.

#### `public inline void `[`SetFloat28ToNull`](#structFRHAPI__MatchTimelineEvent_1ae76415777fddf8cd1aec5a6429c24b31)`()` <a id="structFRHAPI__MatchTimelineEvent_1ae76415777fddf8cd1aec5a6429c24b31"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat28Null`](#structFRHAPI__MatchTimelineEvent_1a719a6dac8629ca4d4511347dbb457028)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a719a6dac8629ca4d4511347dbb457028"></a>

Checks whether Float28_Optional is set to null.

#### `public inline float & `[`GetFloat29`](#structFRHAPI__MatchTimelineEvent_1a98e0167ab37eb47bc7222be47760e135)`()` <a id="structFRHAPI__MatchTimelineEvent_1a98e0167ab37eb47bc7222be47760e135"></a>

Gets the value of Float29_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat29`](#structFRHAPI__MatchTimelineEvent_1a4be8eddcc9a057257aacc230e4d6ea3f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a4be8eddcc9a057257aacc230e4d6ea3f"></a>

Gets the value of Float29_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat29`](#structFRHAPI__MatchTimelineEvent_1a98d10c1ae6519a84cf79fcbee4e91483)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a98d10c1ae6519a84cf79fcbee4e91483"></a>

Gets the value of Float29_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat29`](#structFRHAPI__MatchTimelineEvent_1a54dbd021031d5e3157f71fc1e832a21e)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a54dbd021031d5e3157f71fc1e832a21e"></a>

Fills OutValue with the value of Float29_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat29OrNull`](#structFRHAPI__MatchTimelineEvent_1a303509acf04a2647cdba8291e71d92bb)`()` <a id="structFRHAPI__MatchTimelineEvent_1a303509acf04a2647cdba8291e71d92bb"></a>

Returns a pointer to Float29_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat29OrNull`](#structFRHAPI__MatchTimelineEvent_1a816cc2801bf1654ad28b68dcd30dc16b)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a816cc2801bf1654ad28b68dcd30dc16b"></a>

Returns a pointer to Float29_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat29`](#structFRHAPI__MatchTimelineEvent_1a7bbeff6c6de3cad73254b386c3d19e42)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a7bbeff6c6de3cad73254b386c3d19e42"></a>

Sets the value of Float29_Optional and also sets Float29_IsSet to true.

#### `public inline void `[`SetFloat29`](#structFRHAPI__MatchTimelineEvent_1a487070f98dead2179161776bc394715d)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a487070f98dead2179161776bc394715d"></a>

Sets the value of Float29_Optional and also sets Float29_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat29`](#structFRHAPI__MatchTimelineEvent_1a99ae5a405a44e2cd1efc5b216a47133e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a99ae5a405a44e2cd1efc5b216a47133e"></a>

Clears the value of Float29_Optional and sets Float29_IsSet to false.

#### `public inline bool `[`IsFloat29Set`](#structFRHAPI__MatchTimelineEvent_1a59af41ea580edb183fccc1f06e65c4a3)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a59af41ea580edb183fccc1f06e65c4a3"></a>

Checks whether Float29_Optional has been set.

#### `public inline void `[`SetFloat29ToNull`](#structFRHAPI__MatchTimelineEvent_1a549d746bfb88ca0cce627d1b99944eea)`()` <a id="structFRHAPI__MatchTimelineEvent_1a549d746bfb88ca0cce627d1b99944eea"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat29Null`](#structFRHAPI__MatchTimelineEvent_1a93f22f1c469f2ec29273e81c4dbbfeb7)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a93f22f1c469f2ec29273e81c4dbbfeb7"></a>

Checks whether Float29_Optional is set to null.

#### `public inline float & `[`GetFloat30`](#structFRHAPI__MatchTimelineEvent_1af2219347e76d7b053b1123b360dff211)`()` <a id="structFRHAPI__MatchTimelineEvent_1af2219347e76d7b053b1123b360dff211"></a>

Gets the value of Float30_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat30`](#structFRHAPI__MatchTimelineEvent_1a7c5777a33f6f20165b6bcfeed2087136)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a7c5777a33f6f20165b6bcfeed2087136"></a>

Gets the value of Float30_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat30`](#structFRHAPI__MatchTimelineEvent_1a81fbd11c5a094fffb6dc13cd62d67fbb)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a81fbd11c5a094fffb6dc13cd62d67fbb"></a>

Gets the value of Float30_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat30`](#structFRHAPI__MatchTimelineEvent_1a07b35492ceee5b01721af1a794061976)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a07b35492ceee5b01721af1a794061976"></a>

Fills OutValue with the value of Float30_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat30OrNull`](#structFRHAPI__MatchTimelineEvent_1a74981728bb50e55058e041cbf886f93a)`()` <a id="structFRHAPI__MatchTimelineEvent_1a74981728bb50e55058e041cbf886f93a"></a>

Returns a pointer to Float30_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat30OrNull`](#structFRHAPI__MatchTimelineEvent_1a0da2b259dffc97f4901b8c1ad336193c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a0da2b259dffc97f4901b8c1ad336193c"></a>

Returns a pointer to Float30_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat30`](#structFRHAPI__MatchTimelineEvent_1a4e6f42ad136d5a9f2d5e2bdefaca368d)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a4e6f42ad136d5a9f2d5e2bdefaca368d"></a>

Sets the value of Float30_Optional and also sets Float30_IsSet to true.

#### `public inline void `[`SetFloat30`](#structFRHAPI__MatchTimelineEvent_1a59228c1df847c4a6bc937add914b5531)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a59228c1df847c4a6bc937add914b5531"></a>

Sets the value of Float30_Optional and also sets Float30_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat30`](#structFRHAPI__MatchTimelineEvent_1a65a9b4b9a9d5f7367e4514f80acf034d)`()` <a id="structFRHAPI__MatchTimelineEvent_1a65a9b4b9a9d5f7367e4514f80acf034d"></a>

Clears the value of Float30_Optional and sets Float30_IsSet to false.

#### `public inline bool `[`IsFloat30Set`](#structFRHAPI__MatchTimelineEvent_1af7466ed540377d858e95b606f4d82aca)`() const` <a id="structFRHAPI__MatchTimelineEvent_1af7466ed540377d858e95b606f4d82aca"></a>

Checks whether Float30_Optional has been set.

#### `public inline void `[`SetFloat30ToNull`](#structFRHAPI__MatchTimelineEvent_1a885f3a6157e7c1935ef01bbda8a2db54)`()` <a id="structFRHAPI__MatchTimelineEvent_1a885f3a6157e7c1935ef01bbda8a2db54"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat30Null`](#structFRHAPI__MatchTimelineEvent_1a883810611bc664cff251f72778923362)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a883810611bc664cff251f72778923362"></a>

Checks whether Float30_Optional is set to null.

#### `public inline float & `[`GetFloat31`](#structFRHAPI__MatchTimelineEvent_1a936db28560cef7f2ffcfadc81c728d66)`()` <a id="structFRHAPI__MatchTimelineEvent_1a936db28560cef7f2ffcfadc81c728d66"></a>

Gets the value of Float31_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat31`](#structFRHAPI__MatchTimelineEvent_1ac71145e7f775cf1ff88fb00792eb085f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ac71145e7f775cf1ff88fb00792eb085f"></a>

Gets the value of Float31_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat31`](#structFRHAPI__MatchTimelineEvent_1a9062144b23289afac2b735c96ca67d66)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a9062144b23289afac2b735c96ca67d66"></a>

Gets the value of Float31_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat31`](#structFRHAPI__MatchTimelineEvent_1a56391cb9ebb3fdec5d644e485297697c)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a56391cb9ebb3fdec5d644e485297697c"></a>

Fills OutValue with the value of Float31_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat31OrNull`](#structFRHAPI__MatchTimelineEvent_1ad32647c884dae832587b21b8b8bb2a13)`()` <a id="structFRHAPI__MatchTimelineEvent_1ad32647c884dae832587b21b8b8bb2a13"></a>

Returns a pointer to Float31_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat31OrNull`](#structFRHAPI__MatchTimelineEvent_1ad1ba1e2b854dc8625a197c23b11f740e)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ad1ba1e2b854dc8625a197c23b11f740e"></a>

Returns a pointer to Float31_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat31`](#structFRHAPI__MatchTimelineEvent_1a96867ff0912edc8121651723ebe23ca1)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a96867ff0912edc8121651723ebe23ca1"></a>

Sets the value of Float31_Optional and also sets Float31_IsSet to true.

#### `public inline void `[`SetFloat31`](#structFRHAPI__MatchTimelineEvent_1a4da7dfe961bef04ff171e2672093f598)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a4da7dfe961bef04ff171e2672093f598"></a>

Sets the value of Float31_Optional and also sets Float31_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat31`](#structFRHAPI__MatchTimelineEvent_1adc7d52028f3d22df1a0879a7cb17cf6d)`()` <a id="structFRHAPI__MatchTimelineEvent_1adc7d52028f3d22df1a0879a7cb17cf6d"></a>

Clears the value of Float31_Optional and sets Float31_IsSet to false.

#### `public inline bool `[`IsFloat31Set`](#structFRHAPI__MatchTimelineEvent_1ae43daea505603da2a2e76dc74672af3c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ae43daea505603da2a2e76dc74672af3c"></a>

Checks whether Float31_Optional has been set.

#### `public inline void `[`SetFloat31ToNull`](#structFRHAPI__MatchTimelineEvent_1a0c0872fde65df80a846100e74a903440)`()` <a id="structFRHAPI__MatchTimelineEvent_1a0c0872fde65df80a846100e74a903440"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat31Null`](#structFRHAPI__MatchTimelineEvent_1a048091031b60838eabe2c3aa90edb260)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a048091031b60838eabe2c3aa90edb260"></a>

Checks whether Float31_Optional is set to null.

#### `public inline float & `[`GetFloat32`](#structFRHAPI__MatchTimelineEvent_1a6817fd1e617bb4d141ca0b6d432d4091)`()` <a id="structFRHAPI__MatchTimelineEvent_1a6817fd1e617bb4d141ca0b6d432d4091"></a>

Gets the value of Float32_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat32`](#structFRHAPI__MatchTimelineEvent_1ae8d42a0494c410a5f1b1b2b21a9d6e17)`() const` <a id="structFRHAPI__MatchTimelineEvent_1ae8d42a0494c410a5f1b1b2b21a9d6e17"></a>

Gets the value of Float32_Optional, regardless of it having been set.

#### `public inline const float & `[`GetFloat32`](#structFRHAPI__MatchTimelineEvent_1a598c1f2a3ef792e0166e125e0185c9fb)`(const float & DefaultValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a598c1f2a3ef792e0166e125e0185c9fb"></a>

Gets the value of Float32_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFloat32`](#structFRHAPI__MatchTimelineEvent_1a9740888356a9c9b042bc106dbd2131b3)`(float & OutValue) const` <a id="structFRHAPI__MatchTimelineEvent_1a9740888356a9c9b042bc106dbd2131b3"></a>

Fills OutValue with the value of Float32_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetFloat32OrNull`](#structFRHAPI__MatchTimelineEvent_1aa36def4c27124f57810937fd01db172e)`()` <a id="structFRHAPI__MatchTimelineEvent_1aa36def4c27124f57810937fd01db172e"></a>

Returns a pointer to Float32_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetFloat32OrNull`](#structFRHAPI__MatchTimelineEvent_1a5bf4e3aa79e7bbfb15328199bd9a7e2f)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5bf4e3aa79e7bbfb15328199bd9a7e2f"></a>

Returns a pointer to Float32_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFloat32`](#structFRHAPI__MatchTimelineEvent_1a00eae461865f7620ed9ac9f0202e2dff)`(const float & NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a00eae461865f7620ed9ac9f0202e2dff"></a>

Sets the value of Float32_Optional and also sets Float32_IsSet to true.

#### `public inline void `[`SetFloat32`](#structFRHAPI__MatchTimelineEvent_1a59689f6eb625bccae946a23387b4e093)`(float && NewValue)` <a id="structFRHAPI__MatchTimelineEvent_1a59689f6eb625bccae946a23387b4e093"></a>

Sets the value of Float32_Optional and also sets Float32_IsSet to true using move semantics.

#### `public inline void `[`ClearFloat32`](#structFRHAPI__MatchTimelineEvent_1a3cf53593ce4a8de18b9e21cfe5d32495)`()` <a id="structFRHAPI__MatchTimelineEvent_1a3cf53593ce4a8de18b9e21cfe5d32495"></a>

Clears the value of Float32_Optional and sets Float32_IsSet to false.

#### `public inline bool `[`IsFloat32Set`](#structFRHAPI__MatchTimelineEvent_1a5d4b0b3ce5c9ea7c339d82b43b41f8f2)`() const` <a id="structFRHAPI__MatchTimelineEvent_1a5d4b0b3ce5c9ea7c339d82b43b41f8f2"></a>

Checks whether Float32_Optional has been set.

#### `public inline void `[`SetFloat32ToNull`](#structFRHAPI__MatchTimelineEvent_1a41a98adca3cc78b910260723c185671e)`()` <a id="structFRHAPI__MatchTimelineEvent_1a41a98adca3cc78b910260723c185671e"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFloat32Null`](#structFRHAPI__MatchTimelineEvent_1aed1c40ac7824c8b22c885c9c40af414c)`() const` <a id="structFRHAPI__MatchTimelineEvent_1aed1c40ac7824c8b22c885c9c40af414c"></a>

Checks whether Float32_Optional is set to null.

