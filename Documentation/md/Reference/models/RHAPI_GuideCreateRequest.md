---
title: RHAPI_GuideCreateRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_GuideCreateRequest`](#structFRHAPI__GuideCreateRequest) | 

## struct `FRHAPI_GuideCreateRequest` <a id="structFRHAPI__GuideCreateRequest"></a>

```
struct FRHAPI_GuideCreateRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`GuideType`](#structFRHAPI__GuideCreateRequest_1a4d16a9d6f5b4edea993a8b1a24d482e0) | 
`public FString `[`Language`](#structFRHAPI__GuideCreateRequest_1a1d41dda65e85f69d6dcb5a0b74856ff0) | 
`public FString `[`GameVersion`](#structFRHAPI__GuideCreateRequest_1a84489f8596f9197877b70a8dd50ceda1) | Version this guide was created for.
`public FString `[`Name`](#structFRHAPI__GuideCreateRequest_1a5e36f90bddef437d86106c89ba160371) | 
`public FString `[`ShortDesc_Optional`](#structFRHAPI__GuideCreateRequest_1ac1c2736e890bf9986cfcfdc9d5284e8b) | 
`public bool `[`ShortDesc_IsSet`](#structFRHAPI__GuideCreateRequest_1ad8b37bca56de0a43334873dea728c872) | true if ShortDesc_Optional has been set to a value
`public bool `[`ShortDesc_IsNull`](#structFRHAPI__GuideCreateRequest_1a67a523efd8f22003796325c4771c91b4) | true if ShortDesc_Optional has been explicitly set to null
`public int32 `[`V_Optional`](#structFRHAPI__GuideCreateRequest_1a10da806376db08a48a59d9b0e1c8ada4) | Game-specific guide version. Meant to allow the layout/format of the guides to change over time.
`public bool `[`V_IsSet`](#structFRHAPI__GuideCreateRequest_1ae0c30783dfb1d2b9112530b24b8aa221) | true if V_Optional has been set to a value
`public int32 `[`PromotionPriority_Optional`](#structFRHAPI__GuideCreateRequest_1a03c91da7df6fea21388b2f2f37ec49b7) | Promotion priority of this guide in searches.
`public bool `[`PromotionPriority_IsSet`](#structFRHAPI__GuideCreateRequest_1a976aa2d76d7c384550989a5758ad95e1) | true if PromotionPriority_Optional has been set to a value
`public FString `[`Ref1_Optional`](#structFRHAPI__GuideCreateRequest_1ad8ac80169576e974c4da07f0a19fa6f0) | 
`public bool `[`Ref1_IsSet`](#structFRHAPI__GuideCreateRequest_1a232d1aeb1940decc37dcd6c2d42d3a27) | true if Ref1_Optional has been set to a value
`public bool `[`Ref1_IsNull`](#structFRHAPI__GuideCreateRequest_1adf61ec1036be173782c7f78091a042a3) | true if Ref1_Optional has been explicitly set to null
`public FString `[`Ref2_Optional`](#structFRHAPI__GuideCreateRequest_1aa4ad9511c0362b36a20ad98659bde420) | 
`public bool `[`Ref2_IsSet`](#structFRHAPI__GuideCreateRequest_1a71dd74015f655df48516615b343e5ddd) | true if Ref2_Optional has been set to a value
`public bool `[`Ref2_IsNull`](#structFRHAPI__GuideCreateRequest_1aacd8539bc56f803c058b88f70ae376b8) | true if Ref2_Optional has been explicitly set to null
`public FString `[`Ref3_Optional`](#structFRHAPI__GuideCreateRequest_1a6e782f2c1a14bca7bcb6fb908ed056f1) | 
`public bool `[`Ref3_IsSet`](#structFRHAPI__GuideCreateRequest_1ac8829a4eda1dadee1b7636da0fa2e663) | true if Ref3_Optional has been set to a value
`public bool `[`Ref3_IsNull`](#structFRHAPI__GuideCreateRequest_1aadbc0b1b73070692d021d4c6c3c704fa) | true if Ref3_Optional has been explicitly set to null
`public FString `[`Ref4_Optional`](#structFRHAPI__GuideCreateRequest_1af5180ccf631bc0190c249fd300253114) | 
`public bool `[`Ref4_IsSet`](#structFRHAPI__GuideCreateRequest_1aed96595f923ba3ab3476c964857fefcb) | true if Ref4_Optional has been set to a value
`public bool `[`Ref4_IsNull`](#structFRHAPI__GuideCreateRequest_1a746349b812a154705fd6024cb7b27490) | true if Ref4_Optional has been explicitly set to null
`public FString `[`Ref5_Optional`](#structFRHAPI__GuideCreateRequest_1a7dc89a9a51ecfcd73a266d635ac49a6e) | 
`public bool `[`Ref5_IsSet`](#structFRHAPI__GuideCreateRequest_1af004a5c0b90b4b2b5b53c41dbac9d731) | true if Ref5_Optional has been set to a value
`public bool `[`Ref5_IsNull`](#structFRHAPI__GuideCreateRequest_1a3c38b1d0719a4a03b43a2e4217cc4df4) | true if Ref5_Optional has been explicitly set to null
`public FString `[`Ref6_Optional`](#structFRHAPI__GuideCreateRequest_1a389e25e90b38788e5e9f0b154f9442f9) | 
`public bool `[`Ref6_IsSet`](#structFRHAPI__GuideCreateRequest_1a3152e430f8aa20d94c31c278c0806997) | true if Ref6_Optional has been set to a value
`public bool `[`Ref6_IsNull`](#structFRHAPI__GuideCreateRequest_1a1f72b23095bef10174603dc1f55a718c) | true if Ref6_Optional has been explicitly set to null
`public FString `[`Ref7_Optional`](#structFRHAPI__GuideCreateRequest_1a67ba1504a43f272ca94d703e8b9e37f7) | 
`public bool `[`Ref7_IsSet`](#structFRHAPI__GuideCreateRequest_1ab0cb9cda17d5e3b3ee215defa1f9b377) | true if Ref7_Optional has been set to a value
`public bool `[`Ref7_IsNull`](#structFRHAPI__GuideCreateRequest_1a8399b21509114ec6cb674c51d1413adc) | true if Ref7_Optional has been explicitly set to null
`public FString `[`Ref8_Optional`](#structFRHAPI__GuideCreateRequest_1a5923a090a5e22c5d5bc5cf240ae2c85c) | 
`public bool `[`Ref8_IsSet`](#structFRHAPI__GuideCreateRequest_1af08be4e5f36e8921ec1a0399a31a9eba) | true if Ref8_Optional has been set to a value
`public bool `[`Ref8_IsNull`](#structFRHAPI__GuideCreateRequest_1a04c356f0e319f60cc153cdef4ae16390) | true if Ref8_Optional has been explicitly set to null
`public FString `[`Ref9_Optional`](#structFRHAPI__GuideCreateRequest_1a99bf1844c5813ebb1f0a0eef9b33e976) | 
`public bool `[`Ref9_IsSet`](#structFRHAPI__GuideCreateRequest_1ac2494af28b449078d83745df558c0812) | true if Ref9_Optional has been set to a value
`public bool `[`Ref9_IsNull`](#structFRHAPI__GuideCreateRequest_1a32e778e1d6afceac40acfb12797763b9) | true if Ref9_Optional has been explicitly set to null
`public FString `[`Ref10_Optional`](#structFRHAPI__GuideCreateRequest_1a57219db4b456af9ef5e404cae5fdc259) | 
`public bool `[`Ref10_IsSet`](#structFRHAPI__GuideCreateRequest_1a1a34b811e086b5b7a3b9b37124b3e936) | true if Ref10_Optional has been set to a value
`public bool `[`Ref10_IsNull`](#structFRHAPI__GuideCreateRequest_1a07b7f43b28cbc41a6e60ebccce2cc026) | true if Ref10_Optional has been explicitly set to null
`public FString `[`Ref11_Optional`](#structFRHAPI__GuideCreateRequest_1aa478c867e068bc846d2756183fce065e) | 
`public bool `[`Ref11_IsSet`](#structFRHAPI__GuideCreateRequest_1a58134d8f07ef32996148014dc35f2162) | true if Ref11_Optional has been set to a value
`public bool `[`Ref11_IsNull`](#structFRHAPI__GuideCreateRequest_1a5a454d74b2580d52f2420af73c95337e) | true if Ref11_Optional has been explicitly set to null
`public FString `[`Ref12_Optional`](#structFRHAPI__GuideCreateRequest_1a4de6fb6f851f41e3a0873062d94c581c) | 
`public bool `[`Ref12_IsSet`](#structFRHAPI__GuideCreateRequest_1ac2b51d5101e9bb19a958194340042052) | true if Ref12_Optional has been set to a value
`public bool `[`Ref12_IsNull`](#structFRHAPI__GuideCreateRequest_1a9c1dabbc52ab29f986c26e355d4fba76) | true if Ref12_Optional has been explicitly set to null
`public FString `[`Ref13_Optional`](#structFRHAPI__GuideCreateRequest_1ae10f5d19ef1a5ff71a01490655cc4e34) | 
`public bool `[`Ref13_IsSet`](#structFRHAPI__GuideCreateRequest_1ac547ff0f557b704fc4afe589f1fe7770) | true if Ref13_Optional has been set to a value
`public bool `[`Ref13_IsNull`](#structFRHAPI__GuideCreateRequest_1abe3abb5f2a04b99e85adb37084ea5b5c) | true if Ref13_Optional has been explicitly set to null
`public FString `[`Ref14_Optional`](#structFRHAPI__GuideCreateRequest_1aaf530f797b578eb61fb967ea6cf9f13c) | 
`public bool `[`Ref14_IsSet`](#structFRHAPI__GuideCreateRequest_1ab53614addd3dba6f8ed5082fda0b07c7) | true if Ref14_Optional has been set to a value
`public bool `[`Ref14_IsNull`](#structFRHAPI__GuideCreateRequest_1a4eecbf3d32214792e193cdc31d629f32) | true if Ref14_Optional has been explicitly set to null
`public FString `[`Ref15_Optional`](#structFRHAPI__GuideCreateRequest_1ab47cb2d1009a271ba141ed00573a2897) | 
`public bool `[`Ref15_IsSet`](#structFRHAPI__GuideCreateRequest_1a266d96442b778bad6f93613adc179105) | true if Ref15_Optional has been set to a value
`public bool `[`Ref15_IsNull`](#structFRHAPI__GuideCreateRequest_1a7d23b8cc7efa1e00775d88702af1bceb) | true if Ref15_Optional has been explicitly set to null
`public FString `[`Ref16_Optional`](#structFRHAPI__GuideCreateRequest_1a138dc2fa5ab359e1bcfd4f18e660c1b5) | 
`public bool `[`Ref16_IsSet`](#structFRHAPI__GuideCreateRequest_1a467ad04dde172cb37215994b12ff441a) | true if Ref16_Optional has been set to a value
`public bool `[`Ref16_IsNull`](#structFRHAPI__GuideCreateRequest_1ab975f3882da3f7975b91344c1254f2cd) | true if Ref16_Optional has been explicitly set to null
`public FString `[`Ref17_Optional`](#structFRHAPI__GuideCreateRequest_1a04173c18b82320cf4c1b59a5796713fa) | 
`public bool `[`Ref17_IsSet`](#structFRHAPI__GuideCreateRequest_1a2040d810dbbf0e1e346236597f329945) | true if Ref17_Optional has been set to a value
`public bool `[`Ref17_IsNull`](#structFRHAPI__GuideCreateRequest_1a77b64eb4a44b30eb1aa66d0b9f551250) | true if Ref17_Optional has been explicitly set to null
`public FString `[`Ref18_Optional`](#structFRHAPI__GuideCreateRequest_1a4285738f3e1299350aabb04b0f6ffa47) | 
`public bool `[`Ref18_IsSet`](#structFRHAPI__GuideCreateRequest_1a833e843bac2607803629ff1bd95d3a61) | true if Ref18_Optional has been set to a value
`public bool `[`Ref18_IsNull`](#structFRHAPI__GuideCreateRequest_1adc3e8e012d1ecf3f65e54d3a02c3dc86) | true if Ref18_Optional has been explicitly set to null
`public FString `[`Ref19_Optional`](#structFRHAPI__GuideCreateRequest_1a1ada11121e5f13a90d405b17a3f89b25) | 
`public bool `[`Ref19_IsSet`](#structFRHAPI__GuideCreateRequest_1aee8db93af092ef8a4ba5004c6b4e1048) | true if Ref19_Optional has been set to a value
`public bool `[`Ref19_IsNull`](#structFRHAPI__GuideCreateRequest_1a7da7e336ded6020737de862810068636) | true if Ref19_Optional has been explicitly set to null
`public FString `[`Ref20_Optional`](#structFRHAPI__GuideCreateRequest_1ac7153d34bf6bf5c9a7eb5bc0247e7418) | 
`public bool `[`Ref20_IsSet`](#structFRHAPI__GuideCreateRequest_1af61aadd4b2fcc79f34f9ce1f596ffa3b) | true if Ref20_Optional has been set to a value
`public bool `[`Ref20_IsNull`](#structFRHAPI__GuideCreateRequest_1aeebb61d348c15e2af1bb50ce894bfd72) | true if Ref20_Optional has been explicitly set to null
`public FString `[`Ref21_Optional`](#structFRHAPI__GuideCreateRequest_1a67f73ca6e4f5421aded159b0babc1571) | 
`public bool `[`Ref21_IsSet`](#structFRHAPI__GuideCreateRequest_1af16757c7b928aed5e5f60c4d91374620) | true if Ref21_Optional has been set to a value
`public bool `[`Ref21_IsNull`](#structFRHAPI__GuideCreateRequest_1a841a6933511ae6859b98a5e9c71ad9f0) | true if Ref21_Optional has been explicitly set to null
`public FString `[`Ref22_Optional`](#structFRHAPI__GuideCreateRequest_1aed3e9a9124f800be8d9d45aea13a0137) | 
`public bool `[`Ref22_IsSet`](#structFRHAPI__GuideCreateRequest_1aaa521221a300d7c6b772c0e30643e1f9) | true if Ref22_Optional has been set to a value
`public bool `[`Ref22_IsNull`](#structFRHAPI__GuideCreateRequest_1a9a2516b25eba93be66a37480542292a3) | true if Ref22_Optional has been explicitly set to null
`public FString `[`Ref23_Optional`](#structFRHAPI__GuideCreateRequest_1a23ad7793fbaccfcc4e522d9a84e8a2f1) | 
`public bool `[`Ref23_IsSet`](#structFRHAPI__GuideCreateRequest_1ac69ccb70fd52834297eadfce6c39d6f0) | true if Ref23_Optional has been set to a value
`public bool `[`Ref23_IsNull`](#structFRHAPI__GuideCreateRequest_1a7c367946883e6bd27bfa3d97c5cc8ed3) | true if Ref23_Optional has been explicitly set to null
`public FString `[`Ref24_Optional`](#structFRHAPI__GuideCreateRequest_1aa12ef3cb7169ea9a9fe8604d3b26abb5) | 
`public bool `[`Ref24_IsSet`](#structFRHAPI__GuideCreateRequest_1a5eb636acfb4233af5e6dc57737a0473a) | true if Ref24_Optional has been set to a value
`public bool `[`Ref24_IsNull`](#structFRHAPI__GuideCreateRequest_1a723ea3698573e52e2fd58bb1cfcb7e6f) | true if Ref24_Optional has been explicitly set to null
`public FString `[`Ref25_Optional`](#structFRHAPI__GuideCreateRequest_1ab238c0d9aae17fb51031b80e76db0734) | 
`public bool `[`Ref25_IsSet`](#structFRHAPI__GuideCreateRequest_1a4ab55740cb048324e3ae71e729343dff) | true if Ref25_Optional has been set to a value
`public bool `[`Ref25_IsNull`](#structFRHAPI__GuideCreateRequest_1ac1f634a969bc1b55990cd9f02e028c5b) | true if Ref25_Optional has been explicitly set to null
`public FString `[`Ref26_Optional`](#structFRHAPI__GuideCreateRequest_1a30c2e50da480d582ef5d9d6b92369c54) | 
`public bool `[`Ref26_IsSet`](#structFRHAPI__GuideCreateRequest_1a1988b7c93774e13f6d5816e3e60138da) | true if Ref26_Optional has been set to a value
`public bool `[`Ref26_IsNull`](#structFRHAPI__GuideCreateRequest_1a04be63c30e801ded8e8ef7ed654d0eb2) | true if Ref26_Optional has been explicitly set to null
`public FString `[`Ref27_Optional`](#structFRHAPI__GuideCreateRequest_1a27467e3ff42617fe5695267ea1970504) | 
`public bool `[`Ref27_IsSet`](#structFRHAPI__GuideCreateRequest_1ab7aefbcbb3f9d670982d95272252b71b) | true if Ref27_Optional has been set to a value
`public bool `[`Ref27_IsNull`](#structFRHAPI__GuideCreateRequest_1a21e7183cb1e6471738bc558cbb60274b) | true if Ref27_Optional has been explicitly set to null
`public FString `[`Ref28_Optional`](#structFRHAPI__GuideCreateRequest_1a0c2f1afb659bba4551600615187e11c1) | 
`public bool `[`Ref28_IsSet`](#structFRHAPI__GuideCreateRequest_1ac3486d805581a3b922c484af14b7e7f8) | true if Ref28_Optional has been set to a value
`public bool `[`Ref28_IsNull`](#structFRHAPI__GuideCreateRequest_1ae65b76b0bb1317a01d17c720d1f5ec06) | true if Ref28_Optional has been explicitly set to null
`public FString `[`Ref29_Optional`](#structFRHAPI__GuideCreateRequest_1adda349eca91bd67a5e3fef875cda5f47) | 
`public bool `[`Ref29_IsSet`](#structFRHAPI__GuideCreateRequest_1a5b2210fe665de5f1b631b1042aab7c90) | true if Ref29_Optional has been set to a value
`public bool `[`Ref29_IsNull`](#structFRHAPI__GuideCreateRequest_1afaed0d0d1a8729e1ce9f17582417b2fa) | true if Ref29_Optional has been explicitly set to null
`public FString `[`Ref30_Optional`](#structFRHAPI__GuideCreateRequest_1a60a82a0a8f68c888cbcf8d4558cce08f) | 
`public bool `[`Ref30_IsSet`](#structFRHAPI__GuideCreateRequest_1a855436cb64e7a44b519ebadda97d9ab3) | true if Ref30_Optional has been set to a value
`public bool `[`Ref30_IsNull`](#structFRHAPI__GuideCreateRequest_1aefc38fa5e5057adf5092c82ec56ecbcf) | true if Ref30_Optional has been explicitly set to null
`public FString `[`Ref31_Optional`](#structFRHAPI__GuideCreateRequest_1aa70d201ba5eab9ffb53c27731b8d0093) | 
`public bool `[`Ref31_IsSet`](#structFRHAPI__GuideCreateRequest_1a86f6ed625f816d18ac8cbac5c0c34d76) | true if Ref31_Optional has been set to a value
`public bool `[`Ref31_IsNull`](#structFRHAPI__GuideCreateRequest_1a9228b8be6faab658d99397d21ca21ee9) | true if Ref31_Optional has been explicitly set to null
`public FString `[`Ref32_Optional`](#structFRHAPI__GuideCreateRequest_1a2a043957ac66d2607e4253b40d10ed87) | 
`public bool `[`Ref32_IsSet`](#structFRHAPI__GuideCreateRequest_1aed825aaabb539ba82d9caf19e8f7e799) | true if Ref32_Optional has been set to a value
`public bool `[`Ref32_IsNull`](#structFRHAPI__GuideCreateRequest_1a7c5e7294931fe71dbf12ee1f57eaecf1) | true if Ref32_Optional has been explicitly set to null
`public ERHAPI_GuideEntityType `[`OwnerEntityType_Optional`](#structFRHAPI__GuideCreateRequest_1a458bc81ce5e2035f298b4a1f6951e93a) | 
`public bool `[`OwnerEntityType_IsSet`](#structFRHAPI__GuideCreateRequest_1a9830dd90fe7e13ad964b62e7b2a48833) | true if OwnerEntityType_Optional has been set to a value
`public bool `[`OwnerEntityType_IsNull`](#structFRHAPI__GuideCreateRequest_1a0007d4d27d8ca9e70d72d263e72f57fc) | true if OwnerEntityType_Optional has been explicitly set to null
`public FString `[`OwnerEntityId_Optional`](#structFRHAPI__GuideCreateRequest_1a85c66df1baae6f47f99e68ff2bb488d0) | 
`public bool `[`OwnerEntityId_IsSet`](#structFRHAPI__GuideCreateRequest_1a2963f937ce0db42e623c037f1101efa7) | true if OwnerEntityId_Optional has been set to a value
`public bool `[`OwnerEntityId_IsNull`](#structFRHAPI__GuideCreateRequest_1a51dcab32118e5cf5a6f5fd724135a704) | true if OwnerEntityId_Optional has been explicitly set to null
`public FString `[`Content_Optional`](#structFRHAPI__GuideCreateRequest_1a3bdb62abc23d2ef9ec1e8ebe4e4821d0) | 
`public bool `[`Content_IsSet`](#structFRHAPI__GuideCreateRequest_1a9a7543e3b4e05e856d8f1df39d0a41e4) | true if Content_Optional has been set to a value
`public bool `[`Content_IsNull`](#structFRHAPI__GuideCreateRequest_1ad3733c1263fb377ea3be6781ab4bf101) | true if Content_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > `[`Sections_Optional`](#structFRHAPI__GuideCreateRequest_1a66626c31e075945ee600dfd7cc3c309d) | 
`public bool `[`Sections_IsSet`](#structFRHAPI__GuideCreateRequest_1ae26342c95e7c635466aeb1c290c6897d) | true if Sections_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__GuideCreateRequest_1a5dbe6a6bfc3a648f8740619654a7be49)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__GuideCreateRequest_1aca0e0807afd3877a23ce4de502aa1fcd)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetGuideType`](#structFRHAPI__GuideCreateRequest_1a0c866cd3f0d76d1e7477a6f5c1547178)`()` | Gets the value of GuideType.
`public inline FORCEINLINE const FString & `[`GetGuideType`](#structFRHAPI__GuideCreateRequest_1ab5bcf473b3ea8901581fc3fb7d358831)`() const` | Gets the value of GuideType.
`public inline FORCEINLINE void `[`SetGuideType`](#structFRHAPI__GuideCreateRequest_1a8b5eb1bf42c16652fcf867ba7742e46b)`(const FString & NewValue)` | Sets the value of GuideType.
`public inline FORCEINLINE void `[`SetGuideType`](#structFRHAPI__GuideCreateRequest_1a5f66dbb2b51d79fff65553daedf349e8)`(FString && NewValue)` | Sets the value of GuideType using move semantics.
`public inline FORCEINLINE FString & `[`GetLanguage`](#structFRHAPI__GuideCreateRequest_1a6d2fe119ac20a5f73bd1e67bf3543894)`()` | Gets the value of Language.
`public inline FORCEINLINE const FString & `[`GetLanguage`](#structFRHAPI__GuideCreateRequest_1af176317a6893c5a79520132fb3f035cf)`() const` | Gets the value of Language.
`public inline FORCEINLINE void `[`SetLanguage`](#structFRHAPI__GuideCreateRequest_1ae8e710f5094b5896a7f025c052e01353)`(const FString & NewValue)` | Sets the value of Language.
`public inline FORCEINLINE void `[`SetLanguage`](#structFRHAPI__GuideCreateRequest_1a26f3303c2717a4bdc9ada43f77865a22)`(FString && NewValue)` | Sets the value of Language using move semantics.
`public inline FORCEINLINE FString & `[`GetGameVersion`](#structFRHAPI__GuideCreateRequest_1a68808049a090a78261485565984d6eb3)`()` | Gets the value of GameVersion.
`public inline FORCEINLINE const FString & `[`GetGameVersion`](#structFRHAPI__GuideCreateRequest_1aa46564c9fbfe12d7ec31e5f870491938)`() const` | Gets the value of GameVersion.
`public inline FORCEINLINE void `[`SetGameVersion`](#structFRHAPI__GuideCreateRequest_1a0cebcc5ff4da925f650402ea1d033196)`(const FString & NewValue)` | Sets the value of GameVersion.
`public inline FORCEINLINE void `[`SetGameVersion`](#structFRHAPI__GuideCreateRequest_1aa1daee814adf44cde0d8b8de030e1488)`(FString && NewValue)` | Sets the value of GameVersion using move semantics.
`public inline FORCEINLINE FString & `[`GetName`](#structFRHAPI__GuideCreateRequest_1a15874a7f4df6235d52a0ea6d3f1fc922)`()` | Gets the value of Name.
`public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__GuideCreateRequest_1a5eccc330965ada620ccfa6efc2ec76eb)`() const` | Gets the value of Name.
`public inline FORCEINLINE void `[`SetName`](#structFRHAPI__GuideCreateRequest_1aeae1c236abf7db1ac4901beb86534ebd)`(const FString & NewValue)` | Sets the value of Name.
`public inline FORCEINLINE void `[`SetName`](#structFRHAPI__GuideCreateRequest_1ab4d266876035d110d0918643437b7617)`(FString && NewValue)` | Sets the value of Name using move semantics.
`public inline FORCEINLINE FString & `[`GetShortDesc`](#structFRHAPI__GuideCreateRequest_1a0a9adfb1ff7437acac615124ef8c702a)`()` | Gets the value of ShortDesc_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetShortDesc`](#structFRHAPI__GuideCreateRequest_1a6ef65510b31aa004c58811c60ea92d72)`() const` | Gets the value of ShortDesc_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetShortDesc`](#structFRHAPI__GuideCreateRequest_1a0d15cb9798b69db55f94991f7c347b40)`(const FString & DefaultValue) const` | Gets the value of ShortDesc_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetShortDesc`](#structFRHAPI__GuideCreateRequest_1a977d172cb50bb353f7bf9bcbf7eafd81)`(FString & OutValue) const` | Fills OutValue with the value of ShortDesc_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetShortDescOrNull`](#structFRHAPI__GuideCreateRequest_1a3df1b19974550484a23a50810a59dafe)`()` | Returns a pointer to ShortDesc_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetShortDescOrNull`](#structFRHAPI__GuideCreateRequest_1a45c5a057ada80f4dff359847d263e3dd)`() const` | Returns a pointer to ShortDesc_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetShortDesc`](#structFRHAPI__GuideCreateRequest_1a4bf152b95b8ce6f5e1c8d0fc124b6307)`(const FString & NewValue)` | Sets the value of ShortDesc_Optional and also sets ShortDesc_IsSet to true.
`public inline FORCEINLINE void `[`SetShortDesc`](#structFRHAPI__GuideCreateRequest_1a7f722d6509dc7622d76f2e7a01f57e76)`(FString && NewValue)` | Sets the value of ShortDesc_Optional and also sets ShortDesc_IsSet to true using move semantics.
`public inline void `[`ClearShortDesc`](#structFRHAPI__GuideCreateRequest_1abb2dcbba06cb661d752fd1d55c23e886)`()` | Clears the value of ShortDesc_Optional and sets ShortDesc_IsSet to false.
`public inline FORCEINLINE void `[`SetShortDescToNull`](#structFRHAPI__GuideCreateRequest_1a8c80cbe05d91b6a13f426bddb18142a2)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsShortDescNull`](#structFRHAPI__GuideCreateRequest_1af2ec04ace7419cc049f0cd5e4b9035b4)`() const` | Checks whether ShortDesc_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetV`](#structFRHAPI__GuideCreateRequest_1a2a536ec7f053192156a7affc122b3e45)`()` | Gets the value of V_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetV`](#structFRHAPI__GuideCreateRequest_1a022ee74b8e39733cb6bd0b31a8f57a90)`() const` | Gets the value of V_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetV`](#structFRHAPI__GuideCreateRequest_1a1ad4c72b224148ab161b45a9dcc35a91)`(const int32 & DefaultValue) const` | Gets the value of V_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetV`](#structFRHAPI__GuideCreateRequest_1a289f7ecf3dd17a059c5ada7381cc0872)`(int32 & OutValue) const` | Fills OutValue with the value of V_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetVOrNull`](#structFRHAPI__GuideCreateRequest_1a2c006c6cdba8c293ae4fbd686d5a09df)`()` | Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetVOrNull`](#structFRHAPI__GuideCreateRequest_1aec36020ec04ed56b2f948733a3eebcd8)`() const` | Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetV`](#structFRHAPI__GuideCreateRequest_1a921a610078d44b84ea67d2877286c698)`(const int32 & NewValue)` | Sets the value of V_Optional and also sets V_IsSet to true.
`public inline FORCEINLINE void `[`SetV`](#structFRHAPI__GuideCreateRequest_1afc9cce39c49283b324c6849516309adc)`(int32 && NewValue)` | Sets the value of V_Optional and also sets V_IsSet to true using move semantics.
`public inline void `[`ClearV`](#structFRHAPI__GuideCreateRequest_1a0c3a1ff7787f482fa10ad60ddde3ea38)`()` | Clears the value of V_Optional and sets V_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_V`](#structFRHAPI__GuideCreateRequest_1a4ef3a835c6393e2cdd8b918df5d69d93)`()` | Returns the default value of V.
`public inline FORCEINLINE int32 & `[`GetPromotionPriority`](#structFRHAPI__GuideCreateRequest_1a4e65366801b70ed51107ca4fef9d4f2d)`()` | Gets the value of PromotionPriority_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPromotionPriority`](#structFRHAPI__GuideCreateRequest_1a644a8d09e3b964d654d63d7518ba8499)`() const` | Gets the value of PromotionPriority_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPromotionPriority`](#structFRHAPI__GuideCreateRequest_1a8b89f0c0efd183a77eafc5f22011898a)`(const int32 & DefaultValue) const` | Gets the value of PromotionPriority_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPromotionPriority`](#structFRHAPI__GuideCreateRequest_1ada52523a1e758cc6154c8f5515c6368d)`(int32 & OutValue) const` | Fills OutValue with the value of PromotionPriority_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPromotionPriorityOrNull`](#structFRHAPI__GuideCreateRequest_1a8fd62f50957fb0aebb897df4dee29830)`()` | Returns a pointer to PromotionPriority_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPromotionPriorityOrNull`](#structFRHAPI__GuideCreateRequest_1a99cedae572592954c45ef78b19abff89)`() const` | Returns a pointer to PromotionPriority_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPromotionPriority`](#structFRHAPI__GuideCreateRequest_1a74c6e6efad827bc0b47195ea5f8142f4)`(const int32 & NewValue)` | Sets the value of PromotionPriority_Optional and also sets PromotionPriority_IsSet to true.
`public inline FORCEINLINE void `[`SetPromotionPriority`](#structFRHAPI__GuideCreateRequest_1a7c424595f6676b945980bf0f32c4715f)`(int32 && NewValue)` | Sets the value of PromotionPriority_Optional and also sets PromotionPriority_IsSet to true using move semantics.
`public inline void `[`ClearPromotionPriority`](#structFRHAPI__GuideCreateRequest_1ac6c1f7f982ca9f5e2ea5f18c51b64c71)`()` | Clears the value of PromotionPriority_Optional and sets PromotionPriority_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PromotionPriority`](#structFRHAPI__GuideCreateRequest_1adb97633768deb0abc101b67c1ae8c3e6)`()` | Returns the default value of PromotionPriority.
`public inline FORCEINLINE FString & `[`GetRef1`](#structFRHAPI__GuideCreateRequest_1ae7aeea0c0e7929df8b125ac069166f83)`()` | Gets the value of Ref1_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef1`](#structFRHAPI__GuideCreateRequest_1abde50b9dce2ae8c8edde4c2b6a8129ff)`() const` | Gets the value of Ref1_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef1`](#structFRHAPI__GuideCreateRequest_1a75ade097618d5ef01dd532c8024ae4ec)`(const FString & DefaultValue) const` | Gets the value of Ref1_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef1`](#structFRHAPI__GuideCreateRequest_1aab851e5535c90c1e0fd454ce0350e056)`(FString & OutValue) const` | Fills OutValue with the value of Ref1_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef1OrNull`](#structFRHAPI__GuideCreateRequest_1af184cc0465c15e1af83079c818605b17)`()` | Returns a pointer to Ref1_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef1OrNull`](#structFRHAPI__GuideCreateRequest_1a574255a50a95be3f736c93f85b8d8983)`() const` | Returns a pointer to Ref1_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef1`](#structFRHAPI__GuideCreateRequest_1aa9266fbf23a55ba35ada24ba636c96ea)`(const FString & NewValue)` | Sets the value of Ref1_Optional and also sets Ref1_IsSet to true.
`public inline FORCEINLINE void `[`SetRef1`](#structFRHAPI__GuideCreateRequest_1a4ff5a59be81c56389a6a9336ce0a8eac)`(FString && NewValue)` | Sets the value of Ref1_Optional and also sets Ref1_IsSet to true using move semantics.
`public inline void `[`ClearRef1`](#structFRHAPI__GuideCreateRequest_1a863d330e30ef472c25008c77a0c3ec60)`()` | Clears the value of Ref1_Optional and sets Ref1_IsSet to false.
`public inline FORCEINLINE void `[`SetRef1ToNull`](#structFRHAPI__GuideCreateRequest_1a281fb3c22c8c113513fd0636eec0cd9f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef1Null`](#structFRHAPI__GuideCreateRequest_1a8957293d7c1ab03f674a06fa74bf0046)`() const` | Checks whether Ref1_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef2`](#structFRHAPI__GuideCreateRequest_1aba3f8f2e314c01e6ee490dbe1ecc5b4b)`()` | Gets the value of Ref2_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef2`](#structFRHAPI__GuideCreateRequest_1aa75e0f4e71d96e46d3cf7886e46184eb)`() const` | Gets the value of Ref2_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef2`](#structFRHAPI__GuideCreateRequest_1a1cf8870ccdb2f6b50345628911dd8adf)`(const FString & DefaultValue) const` | Gets the value of Ref2_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef2`](#structFRHAPI__GuideCreateRequest_1a0b3eb50687f8f07de00120df683b70ba)`(FString & OutValue) const` | Fills OutValue with the value of Ref2_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef2OrNull`](#structFRHAPI__GuideCreateRequest_1a4f95d167cdd527017d3907c542530e04)`()` | Returns a pointer to Ref2_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef2OrNull`](#structFRHAPI__GuideCreateRequest_1a90710aa1b289085cdb49346d9238b7ec)`() const` | Returns a pointer to Ref2_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef2`](#structFRHAPI__GuideCreateRequest_1aebe7b7e6b476dfb472219873ea2e860c)`(const FString & NewValue)` | Sets the value of Ref2_Optional and also sets Ref2_IsSet to true.
`public inline FORCEINLINE void `[`SetRef2`](#structFRHAPI__GuideCreateRequest_1adc55409c6c1e3a3db9940122790df44a)`(FString && NewValue)` | Sets the value of Ref2_Optional and also sets Ref2_IsSet to true using move semantics.
`public inline void `[`ClearRef2`](#structFRHAPI__GuideCreateRequest_1ac51dd28e44c83d288483780cf5fafb58)`()` | Clears the value of Ref2_Optional and sets Ref2_IsSet to false.
`public inline FORCEINLINE void `[`SetRef2ToNull`](#structFRHAPI__GuideCreateRequest_1a065909223cf0d3ddcfdbf25f0fcf4225)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef2Null`](#structFRHAPI__GuideCreateRequest_1a16b68ea94a6e747a1c1931ae82106bd5)`() const` | Checks whether Ref2_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef3`](#structFRHAPI__GuideCreateRequest_1af22b53ecb8bd8f617417506d63425f08)`()` | Gets the value of Ref3_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef3`](#structFRHAPI__GuideCreateRequest_1a07fd39703b5260ef26da7b4ee9033c13)`() const` | Gets the value of Ref3_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef3`](#structFRHAPI__GuideCreateRequest_1a44965d6428a7596702e1150e63269e19)`(const FString & DefaultValue) const` | Gets the value of Ref3_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef3`](#structFRHAPI__GuideCreateRequest_1a4e4e66ce3ff5381439eccf179fe68b40)`(FString & OutValue) const` | Fills OutValue with the value of Ref3_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef3OrNull`](#structFRHAPI__GuideCreateRequest_1a071e9934b651e7d8d586e93047ef9b65)`()` | Returns a pointer to Ref3_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef3OrNull`](#structFRHAPI__GuideCreateRequest_1a0877c488b733b69f6840055696a7ef0f)`() const` | Returns a pointer to Ref3_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef3`](#structFRHAPI__GuideCreateRequest_1a82c9dd9bd1de3e6b1f8b11652ad58806)`(const FString & NewValue)` | Sets the value of Ref3_Optional and also sets Ref3_IsSet to true.
`public inline FORCEINLINE void `[`SetRef3`](#structFRHAPI__GuideCreateRequest_1a95c78e1bcb5b010d2d2f260ce21b94fe)`(FString && NewValue)` | Sets the value of Ref3_Optional and also sets Ref3_IsSet to true using move semantics.
`public inline void `[`ClearRef3`](#structFRHAPI__GuideCreateRequest_1a73c21d912368793b5a00251e54dd9f43)`()` | Clears the value of Ref3_Optional and sets Ref3_IsSet to false.
`public inline FORCEINLINE void `[`SetRef3ToNull`](#structFRHAPI__GuideCreateRequest_1a477b3e2f1794c3f644f61e9011ae5fba)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef3Null`](#structFRHAPI__GuideCreateRequest_1a96e8aa9acdad5c17527e2364d04e1f14)`() const` | Checks whether Ref3_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef4`](#structFRHAPI__GuideCreateRequest_1aa4c67d7f956717c58399510e2568477f)`()` | Gets the value of Ref4_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef4`](#structFRHAPI__GuideCreateRequest_1a698d1600e44dd7392e333fa146f6a0f5)`() const` | Gets the value of Ref4_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef4`](#structFRHAPI__GuideCreateRequest_1ad16dbbdd60d299c3f3d4b112b2314e94)`(const FString & DefaultValue) const` | Gets the value of Ref4_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef4`](#structFRHAPI__GuideCreateRequest_1a28a3359bde897b6d22e2d9007fbb5315)`(FString & OutValue) const` | Fills OutValue with the value of Ref4_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef4OrNull`](#structFRHAPI__GuideCreateRequest_1a963ffdc111a5b67a41274915dfd7b4c7)`()` | Returns a pointer to Ref4_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef4OrNull`](#structFRHAPI__GuideCreateRequest_1ab2c82b0cecaf7b20c54bc5801e5312ce)`() const` | Returns a pointer to Ref4_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef4`](#structFRHAPI__GuideCreateRequest_1a5302f502c8c71d2fc1a0b8a403a9e621)`(const FString & NewValue)` | Sets the value of Ref4_Optional and also sets Ref4_IsSet to true.
`public inline FORCEINLINE void `[`SetRef4`](#structFRHAPI__GuideCreateRequest_1ad57b4dc0f22479e6cf9cca641a9111d2)`(FString && NewValue)` | Sets the value of Ref4_Optional and also sets Ref4_IsSet to true using move semantics.
`public inline void `[`ClearRef4`](#structFRHAPI__GuideCreateRequest_1a9b310d9eb62c602d98c6e7453bf24efc)`()` | Clears the value of Ref4_Optional and sets Ref4_IsSet to false.
`public inline FORCEINLINE void `[`SetRef4ToNull`](#structFRHAPI__GuideCreateRequest_1a22b754a21b789e9e33400f91fdddb70f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef4Null`](#structFRHAPI__GuideCreateRequest_1aef369116f6762c72272e0e8ee7094ca8)`() const` | Checks whether Ref4_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef5`](#structFRHAPI__GuideCreateRequest_1a39953b5e22254b430929709415907525)`()` | Gets the value of Ref5_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef5`](#structFRHAPI__GuideCreateRequest_1a4281fe2bc8722e1bcbe585edbffee799)`() const` | Gets the value of Ref5_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef5`](#structFRHAPI__GuideCreateRequest_1a1664248d1f3aaec0471fa01e5c9bf074)`(const FString & DefaultValue) const` | Gets the value of Ref5_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef5`](#structFRHAPI__GuideCreateRequest_1a5519754c3752924f17a9295beec07631)`(FString & OutValue) const` | Fills OutValue with the value of Ref5_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef5OrNull`](#structFRHAPI__GuideCreateRequest_1a05b54649b560494ab164329bf2d445c6)`()` | Returns a pointer to Ref5_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef5OrNull`](#structFRHAPI__GuideCreateRequest_1afeb0fb9d989c4ac3c55098a9955b9ed8)`() const` | Returns a pointer to Ref5_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef5`](#structFRHAPI__GuideCreateRequest_1a947742e76e42d2ef50535d56ff4f03c4)`(const FString & NewValue)` | Sets the value of Ref5_Optional and also sets Ref5_IsSet to true.
`public inline FORCEINLINE void `[`SetRef5`](#structFRHAPI__GuideCreateRequest_1a5bfdf52c3106a0904ef4d73a7cfddf80)`(FString && NewValue)` | Sets the value of Ref5_Optional and also sets Ref5_IsSet to true using move semantics.
`public inline void `[`ClearRef5`](#structFRHAPI__GuideCreateRequest_1a76119eb3c93851b05ef2fd80677448b3)`()` | Clears the value of Ref5_Optional and sets Ref5_IsSet to false.
`public inline FORCEINLINE void `[`SetRef5ToNull`](#structFRHAPI__GuideCreateRequest_1a142232c510641c3caaed45f6e6813ed9)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef5Null`](#structFRHAPI__GuideCreateRequest_1a87ac698e4940085881cb2db6ee541e33)`() const` | Checks whether Ref5_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef6`](#structFRHAPI__GuideCreateRequest_1a6ad5403033a1fe287a536b682e21d8bb)`()` | Gets the value of Ref6_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef6`](#structFRHAPI__GuideCreateRequest_1ab9b890c0fca45c2f2ae0adff690677a2)`() const` | Gets the value of Ref6_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef6`](#structFRHAPI__GuideCreateRequest_1ad36ac55cb8f13441968accf9698b0117)`(const FString & DefaultValue) const` | Gets the value of Ref6_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef6`](#structFRHAPI__GuideCreateRequest_1a45572c60c18f99c0b152fd2b605d76e5)`(FString & OutValue) const` | Fills OutValue with the value of Ref6_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef6OrNull`](#structFRHAPI__GuideCreateRequest_1ac53e745c25f533766b44b3fbe1cad1d5)`()` | Returns a pointer to Ref6_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef6OrNull`](#structFRHAPI__GuideCreateRequest_1abf6176216ced054d388f83ae1fe7e535)`() const` | Returns a pointer to Ref6_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef6`](#structFRHAPI__GuideCreateRequest_1a31934ec1aaa3eb8b91f2f64bf7487120)`(const FString & NewValue)` | Sets the value of Ref6_Optional and also sets Ref6_IsSet to true.
`public inline FORCEINLINE void `[`SetRef6`](#structFRHAPI__GuideCreateRequest_1a318a16d1d480eb1c746f94725cf59035)`(FString && NewValue)` | Sets the value of Ref6_Optional and also sets Ref6_IsSet to true using move semantics.
`public inline void `[`ClearRef6`](#structFRHAPI__GuideCreateRequest_1a7cec06bebbde2eaed7b4c24212509069)`()` | Clears the value of Ref6_Optional and sets Ref6_IsSet to false.
`public inline FORCEINLINE void `[`SetRef6ToNull`](#structFRHAPI__GuideCreateRequest_1aaf2036c4d06d4622a4ef7c26e1c9c8ea)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef6Null`](#structFRHAPI__GuideCreateRequest_1a1fd557979f01b57181c800b91074fcde)`() const` | Checks whether Ref6_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef7`](#structFRHAPI__GuideCreateRequest_1a995b1e668ec31196608b5785f05fb161)`()` | Gets the value of Ref7_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef7`](#structFRHAPI__GuideCreateRequest_1a1ffcdec82cb28be612dd240b5dafe79e)`() const` | Gets the value of Ref7_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef7`](#structFRHAPI__GuideCreateRequest_1a4d6edec7f24e5d04ba2cbc82b45280e4)`(const FString & DefaultValue) const` | Gets the value of Ref7_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef7`](#structFRHAPI__GuideCreateRequest_1a6c38ba553ff2117688447139bb35f6ab)`(FString & OutValue) const` | Fills OutValue with the value of Ref7_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef7OrNull`](#structFRHAPI__GuideCreateRequest_1aca7842ea6daf3a87fc65b12b8bf6a170)`()` | Returns a pointer to Ref7_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef7OrNull`](#structFRHAPI__GuideCreateRequest_1af8c5c8f8fab2cdd676b2f8087cbdb3c4)`() const` | Returns a pointer to Ref7_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef7`](#structFRHAPI__GuideCreateRequest_1a0b8901a41cea71c95133823b9c6d1050)`(const FString & NewValue)` | Sets the value of Ref7_Optional and also sets Ref7_IsSet to true.
`public inline FORCEINLINE void `[`SetRef7`](#structFRHAPI__GuideCreateRequest_1a44cd2a9870bce32821b898a5d2695827)`(FString && NewValue)` | Sets the value of Ref7_Optional and also sets Ref7_IsSet to true using move semantics.
`public inline void `[`ClearRef7`](#structFRHAPI__GuideCreateRequest_1ad524f548749d030382ffc4678d3b752a)`()` | Clears the value of Ref7_Optional and sets Ref7_IsSet to false.
`public inline FORCEINLINE void `[`SetRef7ToNull`](#structFRHAPI__GuideCreateRequest_1a9d7639a0ddd8015cdfe0569218b94d83)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef7Null`](#structFRHAPI__GuideCreateRequest_1ad26dd25af0ec4a4da29da3b9b1867332)`() const` | Checks whether Ref7_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef8`](#structFRHAPI__GuideCreateRequest_1a1ad2c675078c42f944c9e42c460718fc)`()` | Gets the value of Ref8_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef8`](#structFRHAPI__GuideCreateRequest_1a43ebed5ccaa1f6616d359f1f283b1629)`() const` | Gets the value of Ref8_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef8`](#structFRHAPI__GuideCreateRequest_1a5cbc462d7d35b15e1edd6b3fbcdd9f91)`(const FString & DefaultValue) const` | Gets the value of Ref8_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef8`](#structFRHAPI__GuideCreateRequest_1a6c05b299c6e510ddbcff1cf712588c2d)`(FString & OutValue) const` | Fills OutValue with the value of Ref8_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef8OrNull`](#structFRHAPI__GuideCreateRequest_1acb1f3f59cd25b6218f13a963ee39b2f6)`()` | Returns a pointer to Ref8_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef8OrNull`](#structFRHAPI__GuideCreateRequest_1ac489c0930b7ba458036007c542f0beb9)`() const` | Returns a pointer to Ref8_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef8`](#structFRHAPI__GuideCreateRequest_1ab4f7fb419815a7b2ec6b226846ad3d64)`(const FString & NewValue)` | Sets the value of Ref8_Optional and also sets Ref8_IsSet to true.
`public inline FORCEINLINE void `[`SetRef8`](#structFRHAPI__GuideCreateRequest_1aeb9eefb2b74e7673d1a0963f2b328b17)`(FString && NewValue)` | Sets the value of Ref8_Optional and also sets Ref8_IsSet to true using move semantics.
`public inline void `[`ClearRef8`](#structFRHAPI__GuideCreateRequest_1ab216b6e96522ab5254be97a24c434791)`()` | Clears the value of Ref8_Optional and sets Ref8_IsSet to false.
`public inline FORCEINLINE void `[`SetRef8ToNull`](#structFRHAPI__GuideCreateRequest_1a3fce21e60649e500d23eb843e1a07885)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef8Null`](#structFRHAPI__GuideCreateRequest_1a1cdaa09568ba2a3849c2c6f635a32116)`() const` | Checks whether Ref8_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef9`](#structFRHAPI__GuideCreateRequest_1ae143fba67bb0325f3cc72a2e9dc2376f)`()` | Gets the value of Ref9_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef9`](#structFRHAPI__GuideCreateRequest_1a686761cf749cd29b3f44724830176cae)`() const` | Gets the value of Ref9_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef9`](#structFRHAPI__GuideCreateRequest_1a361695ab20e1a8e9083b840ae8b9065b)`(const FString & DefaultValue) const` | Gets the value of Ref9_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef9`](#structFRHAPI__GuideCreateRequest_1ad79ced44e39d6ead89af8efe37f63d9f)`(FString & OutValue) const` | Fills OutValue with the value of Ref9_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef9OrNull`](#structFRHAPI__GuideCreateRequest_1a9df815f6f95ebd8e23f57a76391dc8eb)`()` | Returns a pointer to Ref9_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef9OrNull`](#structFRHAPI__GuideCreateRequest_1a22c53d9de75fbe1ba97e10729d3d7d20)`() const` | Returns a pointer to Ref9_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef9`](#structFRHAPI__GuideCreateRequest_1aaf46c1fe183e155f7beaaab6560af3dc)`(const FString & NewValue)` | Sets the value of Ref9_Optional and also sets Ref9_IsSet to true.
`public inline FORCEINLINE void `[`SetRef9`](#structFRHAPI__GuideCreateRequest_1a54e1af6cdafdf585149cb7931be35bf1)`(FString && NewValue)` | Sets the value of Ref9_Optional and also sets Ref9_IsSet to true using move semantics.
`public inline void `[`ClearRef9`](#structFRHAPI__GuideCreateRequest_1a5fd01d34b1d10a0dbf28b1df8887ad87)`()` | Clears the value of Ref9_Optional and sets Ref9_IsSet to false.
`public inline FORCEINLINE void `[`SetRef9ToNull`](#structFRHAPI__GuideCreateRequest_1a3e8f3ba0d0269f52deab6f2d42adfc7a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef9Null`](#structFRHAPI__GuideCreateRequest_1a880b270a74762f229bccc76887d746bc)`() const` | Checks whether Ref9_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef10`](#structFRHAPI__GuideCreateRequest_1a968cd58a0326458961b5b37c666339ef)`()` | Gets the value of Ref10_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef10`](#structFRHAPI__GuideCreateRequest_1a1b8cd220505ef9859099c3846f78854c)`() const` | Gets the value of Ref10_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef10`](#structFRHAPI__GuideCreateRequest_1acaffaa75c942efdfcd226272c507fa1f)`(const FString & DefaultValue) const` | Gets the value of Ref10_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef10`](#structFRHAPI__GuideCreateRequest_1a92bce578a8588f9aa5fea1bd7e719961)`(FString & OutValue) const` | Fills OutValue with the value of Ref10_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef10OrNull`](#structFRHAPI__GuideCreateRequest_1aec6eb16e370d86a1b050c1819257005e)`()` | Returns a pointer to Ref10_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef10OrNull`](#structFRHAPI__GuideCreateRequest_1ae6c15c0835e6b7064f62cf5cbae53977)`() const` | Returns a pointer to Ref10_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef10`](#structFRHAPI__GuideCreateRequest_1a265f05208872ae22f337dd38cf91a358)`(const FString & NewValue)` | Sets the value of Ref10_Optional and also sets Ref10_IsSet to true.
`public inline FORCEINLINE void `[`SetRef10`](#structFRHAPI__GuideCreateRequest_1acde5ace6b7e04e6721d3687839896fa0)`(FString && NewValue)` | Sets the value of Ref10_Optional and also sets Ref10_IsSet to true using move semantics.
`public inline void `[`ClearRef10`](#structFRHAPI__GuideCreateRequest_1a3c8a350c82b2e08d1e1eef6769235f23)`()` | Clears the value of Ref10_Optional and sets Ref10_IsSet to false.
`public inline FORCEINLINE void `[`SetRef10ToNull`](#structFRHAPI__GuideCreateRequest_1a116741ab6a61ef47772a71e03f25628a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef10Null`](#structFRHAPI__GuideCreateRequest_1a8ad16e31268ee87b898c5cdb9e508025)`() const` | Checks whether Ref10_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef11`](#structFRHAPI__GuideCreateRequest_1a47948689ea2ffba76f12e1025ddd8620)`()` | Gets the value of Ref11_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef11`](#structFRHAPI__GuideCreateRequest_1a9a15e796c35470ad9b81aa7117ea3ab8)`() const` | Gets the value of Ref11_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef11`](#structFRHAPI__GuideCreateRequest_1a6c33be9f34a74d31650d63d751653cd5)`(const FString & DefaultValue) const` | Gets the value of Ref11_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef11`](#structFRHAPI__GuideCreateRequest_1ae13154350e17baf22160a0667acbf818)`(FString & OutValue) const` | Fills OutValue with the value of Ref11_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef11OrNull`](#structFRHAPI__GuideCreateRequest_1a833751758344c6941a9649b8414c724a)`()` | Returns a pointer to Ref11_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef11OrNull`](#structFRHAPI__GuideCreateRequest_1afa72fe01621620bd1c03c6c3f1bdd9c8)`() const` | Returns a pointer to Ref11_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef11`](#structFRHAPI__GuideCreateRequest_1ac255cecf9fb5ee2aa9b04daf4d119334)`(const FString & NewValue)` | Sets the value of Ref11_Optional and also sets Ref11_IsSet to true.
`public inline FORCEINLINE void `[`SetRef11`](#structFRHAPI__GuideCreateRequest_1a6c2d7add9d3882863a2e122a8c3fd883)`(FString && NewValue)` | Sets the value of Ref11_Optional and also sets Ref11_IsSet to true using move semantics.
`public inline void `[`ClearRef11`](#structFRHAPI__GuideCreateRequest_1afa82348237f73ddb103b92239e2a9f3b)`()` | Clears the value of Ref11_Optional and sets Ref11_IsSet to false.
`public inline FORCEINLINE void `[`SetRef11ToNull`](#structFRHAPI__GuideCreateRequest_1a961cefdec92eea2b58e2164071afc6f4)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef11Null`](#structFRHAPI__GuideCreateRequest_1a16fc2cdee09f78522f5e7a554bca786f)`() const` | Checks whether Ref11_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef12`](#structFRHAPI__GuideCreateRequest_1a368f00dac4c8b65557debcf2043c764e)`()` | Gets the value of Ref12_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef12`](#structFRHAPI__GuideCreateRequest_1a19c9d76df5f0d554196e3c667e94f64f)`() const` | Gets the value of Ref12_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef12`](#structFRHAPI__GuideCreateRequest_1ae49bdff24f23543a5593682b0a5adac5)`(const FString & DefaultValue) const` | Gets the value of Ref12_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef12`](#structFRHAPI__GuideCreateRequest_1a1164316c4dc2025faada240c2fbef74e)`(FString & OutValue) const` | Fills OutValue with the value of Ref12_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef12OrNull`](#structFRHAPI__GuideCreateRequest_1a17fbeb029f4af2f335c74acd623ba940)`()` | Returns a pointer to Ref12_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef12OrNull`](#structFRHAPI__GuideCreateRequest_1a6171786b69dcf3a59c3c84648ad3d25c)`() const` | Returns a pointer to Ref12_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef12`](#structFRHAPI__GuideCreateRequest_1a34e65861250f69c7e1541faa98472051)`(const FString & NewValue)` | Sets the value of Ref12_Optional and also sets Ref12_IsSet to true.
`public inline FORCEINLINE void `[`SetRef12`](#structFRHAPI__GuideCreateRequest_1a36e698f7881c9315b3c478b236d2bba1)`(FString && NewValue)` | Sets the value of Ref12_Optional and also sets Ref12_IsSet to true using move semantics.
`public inline void `[`ClearRef12`](#structFRHAPI__GuideCreateRequest_1a5e7118407253cdc3dbcf0dab6925560b)`()` | Clears the value of Ref12_Optional and sets Ref12_IsSet to false.
`public inline FORCEINLINE void `[`SetRef12ToNull`](#structFRHAPI__GuideCreateRequest_1acd7c8e6d772473b526d63813a094ac9e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef12Null`](#structFRHAPI__GuideCreateRequest_1a2f6a5a2183c3d08a9d97f36765ee2f18)`() const` | Checks whether Ref12_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef13`](#structFRHAPI__GuideCreateRequest_1a945049d8a9a4a000978d06b9c8237b9e)`()` | Gets the value of Ref13_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef13`](#structFRHAPI__GuideCreateRequest_1a2e1e2418d7d40c8b6a3cbc1fd53aa3e5)`() const` | Gets the value of Ref13_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef13`](#structFRHAPI__GuideCreateRequest_1af0dd3963d5b97e1bc7656e998321cd57)`(const FString & DefaultValue) const` | Gets the value of Ref13_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef13`](#structFRHAPI__GuideCreateRequest_1a685d5e73bd678dbe9e184d1808a7e8cb)`(FString & OutValue) const` | Fills OutValue with the value of Ref13_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef13OrNull`](#structFRHAPI__GuideCreateRequest_1add3a89658949ff1017a405b76e7f5761)`()` | Returns a pointer to Ref13_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef13OrNull`](#structFRHAPI__GuideCreateRequest_1a036a8428db9010a0a8ab0371ebf2c34e)`() const` | Returns a pointer to Ref13_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef13`](#structFRHAPI__GuideCreateRequest_1a2fd3cdfc673e6f63332d83288032d25f)`(const FString & NewValue)` | Sets the value of Ref13_Optional and also sets Ref13_IsSet to true.
`public inline FORCEINLINE void `[`SetRef13`](#structFRHAPI__GuideCreateRequest_1a2295cb07f27bd8723f06172a84a013a4)`(FString && NewValue)` | Sets the value of Ref13_Optional and also sets Ref13_IsSet to true using move semantics.
`public inline void `[`ClearRef13`](#structFRHAPI__GuideCreateRequest_1a3d2e63fe1fc774129b37b6b3319f3dd2)`()` | Clears the value of Ref13_Optional and sets Ref13_IsSet to false.
`public inline FORCEINLINE void `[`SetRef13ToNull`](#structFRHAPI__GuideCreateRequest_1a14104e1ef033edee5483af5c66a835fb)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef13Null`](#structFRHAPI__GuideCreateRequest_1a3b443623f515f63c0d4d867834a2ebca)`() const` | Checks whether Ref13_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef14`](#structFRHAPI__GuideCreateRequest_1a2864d5ef1c0adb1dc4c9213f5146ce36)`()` | Gets the value of Ref14_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef14`](#structFRHAPI__GuideCreateRequest_1a534f226cb93211c41d03e9800213596a)`() const` | Gets the value of Ref14_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef14`](#structFRHAPI__GuideCreateRequest_1a89d74b9221f5c28b9a93d9f0c788c00d)`(const FString & DefaultValue) const` | Gets the value of Ref14_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef14`](#structFRHAPI__GuideCreateRequest_1acca5ec9d431a8a534726e928efa134c5)`(FString & OutValue) const` | Fills OutValue with the value of Ref14_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef14OrNull`](#structFRHAPI__GuideCreateRequest_1abca38cd71ada03dcefa002bffbb9ee7e)`()` | Returns a pointer to Ref14_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef14OrNull`](#structFRHAPI__GuideCreateRequest_1a363f0ba2b82ddea348320c936ca3cffb)`() const` | Returns a pointer to Ref14_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef14`](#structFRHAPI__GuideCreateRequest_1aea58c843a1ffc8c6b3f05848365529de)`(const FString & NewValue)` | Sets the value of Ref14_Optional and also sets Ref14_IsSet to true.
`public inline FORCEINLINE void `[`SetRef14`](#structFRHAPI__GuideCreateRequest_1a26d70ee0ad270a1c016b216c3f2202e2)`(FString && NewValue)` | Sets the value of Ref14_Optional and also sets Ref14_IsSet to true using move semantics.
`public inline void `[`ClearRef14`](#structFRHAPI__GuideCreateRequest_1acd9f9317a369ed4d448798792b058f4c)`()` | Clears the value of Ref14_Optional and sets Ref14_IsSet to false.
`public inline FORCEINLINE void `[`SetRef14ToNull`](#structFRHAPI__GuideCreateRequest_1a6a7ed0aa25a5f74fbfe330dd3c85a41b)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef14Null`](#structFRHAPI__GuideCreateRequest_1a38d7b5e0ad7b410f85893a0086c2d314)`() const` | Checks whether Ref14_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef15`](#structFRHAPI__GuideCreateRequest_1a86ac14c283c1429011b65078769f3d71)`()` | Gets the value of Ref15_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef15`](#structFRHAPI__GuideCreateRequest_1a5f328d3af0d8ed0d669aea6d67f1e47d)`() const` | Gets the value of Ref15_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef15`](#structFRHAPI__GuideCreateRequest_1aaf25c75eaf2b6d82cf6c555732adbe44)`(const FString & DefaultValue) const` | Gets the value of Ref15_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef15`](#structFRHAPI__GuideCreateRequest_1acd89249a8c4334f10fb07ddfac19fd9b)`(FString & OutValue) const` | Fills OutValue with the value of Ref15_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef15OrNull`](#structFRHAPI__GuideCreateRequest_1a975425012c765b221507c8e97c2f5455)`()` | Returns a pointer to Ref15_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef15OrNull`](#structFRHAPI__GuideCreateRequest_1a119b21d243980e530317effb8d772158)`() const` | Returns a pointer to Ref15_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef15`](#structFRHAPI__GuideCreateRequest_1a4a90d2478000497c5a291d041683afc2)`(const FString & NewValue)` | Sets the value of Ref15_Optional and also sets Ref15_IsSet to true.
`public inline FORCEINLINE void `[`SetRef15`](#structFRHAPI__GuideCreateRequest_1a4950f1fadaf649461d27fcd831c4ff4f)`(FString && NewValue)` | Sets the value of Ref15_Optional and also sets Ref15_IsSet to true using move semantics.
`public inline void `[`ClearRef15`](#structFRHAPI__GuideCreateRequest_1a05939d5de6250797b4b210adbffd5d0a)`()` | Clears the value of Ref15_Optional and sets Ref15_IsSet to false.
`public inline FORCEINLINE void `[`SetRef15ToNull`](#structFRHAPI__GuideCreateRequest_1acf0bf3a25462187075dd9791922c4117)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef15Null`](#structFRHAPI__GuideCreateRequest_1a44b349cfda84893c5e44fbf815fda2d5)`() const` | Checks whether Ref15_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef16`](#structFRHAPI__GuideCreateRequest_1a10538d2e1595211abe68b39ee522785d)`()` | Gets the value of Ref16_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef16`](#structFRHAPI__GuideCreateRequest_1a33ab6260c40dec2e72336fb78d67a5c6)`() const` | Gets the value of Ref16_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef16`](#structFRHAPI__GuideCreateRequest_1a5561317c5d4a877f3fc5ee2b50115c24)`(const FString & DefaultValue) const` | Gets the value of Ref16_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef16`](#structFRHAPI__GuideCreateRequest_1a189384d98897404163ffce2a520372a7)`(FString & OutValue) const` | Fills OutValue with the value of Ref16_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef16OrNull`](#structFRHAPI__GuideCreateRequest_1aed3a4d0199a3938e5420d20ae498d2fd)`()` | Returns a pointer to Ref16_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef16OrNull`](#structFRHAPI__GuideCreateRequest_1a4b39aa49f446567dc742dc1251d6c222)`() const` | Returns a pointer to Ref16_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef16`](#structFRHAPI__GuideCreateRequest_1a3f1e7d198f2e61f623a832db92a87af5)`(const FString & NewValue)` | Sets the value of Ref16_Optional and also sets Ref16_IsSet to true.
`public inline FORCEINLINE void `[`SetRef16`](#structFRHAPI__GuideCreateRequest_1a177d8b0cb88663a96ff0fe9bf0d726b1)`(FString && NewValue)` | Sets the value of Ref16_Optional and also sets Ref16_IsSet to true using move semantics.
`public inline void `[`ClearRef16`](#structFRHAPI__GuideCreateRequest_1a6bdc5b737644f5044babe9953e815f94)`()` | Clears the value of Ref16_Optional and sets Ref16_IsSet to false.
`public inline FORCEINLINE void `[`SetRef16ToNull`](#structFRHAPI__GuideCreateRequest_1a128d74713f91d3d253b6d8611f6e4cd0)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef16Null`](#structFRHAPI__GuideCreateRequest_1ade1c2004d178635dde6fde955e3dfeae)`() const` | Checks whether Ref16_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef17`](#structFRHAPI__GuideCreateRequest_1a2461959069b3003d34a2be59ef370fdd)`()` | Gets the value of Ref17_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef17`](#structFRHAPI__GuideCreateRequest_1add7a10e0d145ef92e7db85a71829c5d8)`() const` | Gets the value of Ref17_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef17`](#structFRHAPI__GuideCreateRequest_1a416b8839777ccb73b2a6eef7a20fd796)`(const FString & DefaultValue) const` | Gets the value of Ref17_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef17`](#structFRHAPI__GuideCreateRequest_1a95b517c5034073b3e75c65f3dbbf2dae)`(FString & OutValue) const` | Fills OutValue with the value of Ref17_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef17OrNull`](#structFRHAPI__GuideCreateRequest_1aa3ac902f26d97383f53bc85120d7eaa3)`()` | Returns a pointer to Ref17_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef17OrNull`](#structFRHAPI__GuideCreateRequest_1a214e93a4f29a026d7f5197f3fdf846a3)`() const` | Returns a pointer to Ref17_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef17`](#structFRHAPI__GuideCreateRequest_1ad031936bfe52d61140a1638cc21cb79b)`(const FString & NewValue)` | Sets the value of Ref17_Optional and also sets Ref17_IsSet to true.
`public inline FORCEINLINE void `[`SetRef17`](#structFRHAPI__GuideCreateRequest_1a5ed6327298b5b93a4e7efd44c8fea9f0)`(FString && NewValue)` | Sets the value of Ref17_Optional and also sets Ref17_IsSet to true using move semantics.
`public inline void `[`ClearRef17`](#structFRHAPI__GuideCreateRequest_1a05e3d6a430a9f480ec9e9a06b1e8a962)`()` | Clears the value of Ref17_Optional and sets Ref17_IsSet to false.
`public inline FORCEINLINE void `[`SetRef17ToNull`](#structFRHAPI__GuideCreateRequest_1a826ff7dac46737b6d13cb7c1c83ddb61)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef17Null`](#structFRHAPI__GuideCreateRequest_1ad4e0f105a5dc607e4ac121c4cdee3240)`() const` | Checks whether Ref17_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef18`](#structFRHAPI__GuideCreateRequest_1a0adc3a74c8613121838616d4e617ab9c)`()` | Gets the value of Ref18_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef18`](#structFRHAPI__GuideCreateRequest_1acf880cbbe20a01c20d10ced645d45a39)`() const` | Gets the value of Ref18_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef18`](#structFRHAPI__GuideCreateRequest_1a3443cc731bbf009bedf1c107d67e9a72)`(const FString & DefaultValue) const` | Gets the value of Ref18_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef18`](#structFRHAPI__GuideCreateRequest_1a7cd970e80565084a206f6baadbb34048)`(FString & OutValue) const` | Fills OutValue with the value of Ref18_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef18OrNull`](#structFRHAPI__GuideCreateRequest_1a2a6283ed73fa1e873dbd9bfc92d9b66d)`()` | Returns a pointer to Ref18_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef18OrNull`](#structFRHAPI__GuideCreateRequest_1adf953454bbab67488edf259ca64f62dc)`() const` | Returns a pointer to Ref18_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef18`](#structFRHAPI__GuideCreateRequest_1a5c81b69031ad754b65344f5794b8c5c2)`(const FString & NewValue)` | Sets the value of Ref18_Optional and also sets Ref18_IsSet to true.
`public inline FORCEINLINE void `[`SetRef18`](#structFRHAPI__GuideCreateRequest_1a78cb655c5c12cdd5220f3d2959c40aab)`(FString && NewValue)` | Sets the value of Ref18_Optional and also sets Ref18_IsSet to true using move semantics.
`public inline void `[`ClearRef18`](#structFRHAPI__GuideCreateRequest_1a933a2e0359070d2eb50bc65cd8f49396)`()` | Clears the value of Ref18_Optional and sets Ref18_IsSet to false.
`public inline FORCEINLINE void `[`SetRef18ToNull`](#structFRHAPI__GuideCreateRequest_1aeaef7663eed3365fd478440e86ac7650)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef18Null`](#structFRHAPI__GuideCreateRequest_1ac609b0b2b96a1c2c2f86c460ec000404)`() const` | Checks whether Ref18_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef19`](#structFRHAPI__GuideCreateRequest_1a9ff6ddc54d4538c8013c7cbf4fa011d7)`()` | Gets the value of Ref19_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef19`](#structFRHAPI__GuideCreateRequest_1ab8ee367aa29cc2aa2144e68afe9ce23b)`() const` | Gets the value of Ref19_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef19`](#structFRHAPI__GuideCreateRequest_1a8f86f9ba4f80733357b7ad75006ec917)`(const FString & DefaultValue) const` | Gets the value of Ref19_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef19`](#structFRHAPI__GuideCreateRequest_1a59bb052eea09c31527d052bccdc423fb)`(FString & OutValue) const` | Fills OutValue with the value of Ref19_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef19OrNull`](#structFRHAPI__GuideCreateRequest_1a42ca3b554d1c5e5e6109c10fe12e0f82)`()` | Returns a pointer to Ref19_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef19OrNull`](#structFRHAPI__GuideCreateRequest_1a1ede0567b7636141d249a576749d9a50)`() const` | Returns a pointer to Ref19_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef19`](#structFRHAPI__GuideCreateRequest_1a556315d7c8b19c15c8b587ce4ac26472)`(const FString & NewValue)` | Sets the value of Ref19_Optional and also sets Ref19_IsSet to true.
`public inline FORCEINLINE void `[`SetRef19`](#structFRHAPI__GuideCreateRequest_1a1c7c871c20ed700de8a75a36a08b1c4f)`(FString && NewValue)` | Sets the value of Ref19_Optional and also sets Ref19_IsSet to true using move semantics.
`public inline void `[`ClearRef19`](#structFRHAPI__GuideCreateRequest_1a7d67c219a57c3a69ab8b1d259971c2ae)`()` | Clears the value of Ref19_Optional and sets Ref19_IsSet to false.
`public inline FORCEINLINE void `[`SetRef19ToNull`](#structFRHAPI__GuideCreateRequest_1aa20f4e6359eaa42f9c3653ba7b385f51)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef19Null`](#structFRHAPI__GuideCreateRequest_1a48e195fa830b7011b77e5696ec3619b2)`() const` | Checks whether Ref19_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef20`](#structFRHAPI__GuideCreateRequest_1aa5127046360b7d7ac0733ea4ad42a82a)`()` | Gets the value of Ref20_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef20`](#structFRHAPI__GuideCreateRequest_1a9c17e33470d01585d7b92c4a1fe3e829)`() const` | Gets the value of Ref20_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef20`](#structFRHAPI__GuideCreateRequest_1a64a5b0143ca3592b8d8bf1fa6b042be9)`(const FString & DefaultValue) const` | Gets the value of Ref20_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef20`](#structFRHAPI__GuideCreateRequest_1a72312fd00cbfc2e2da491201cc6b3294)`(FString & OutValue) const` | Fills OutValue with the value of Ref20_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef20OrNull`](#structFRHAPI__GuideCreateRequest_1aabfef322bf4cb1080d7d7318dab7cbf8)`()` | Returns a pointer to Ref20_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef20OrNull`](#structFRHAPI__GuideCreateRequest_1a4bda9585a59273ae2f6122512e35409a)`() const` | Returns a pointer to Ref20_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef20`](#structFRHAPI__GuideCreateRequest_1a6ae0b4ce02f5db8af67b4a97c1ac045f)`(const FString & NewValue)` | Sets the value of Ref20_Optional and also sets Ref20_IsSet to true.
`public inline FORCEINLINE void `[`SetRef20`](#structFRHAPI__GuideCreateRequest_1a6422842aa13233dd7835212c6ea59d7c)`(FString && NewValue)` | Sets the value of Ref20_Optional and also sets Ref20_IsSet to true using move semantics.
`public inline void `[`ClearRef20`](#structFRHAPI__GuideCreateRequest_1afc9241612aa41f4fed73f76e290c3051)`()` | Clears the value of Ref20_Optional and sets Ref20_IsSet to false.
`public inline FORCEINLINE void `[`SetRef20ToNull`](#structFRHAPI__GuideCreateRequest_1a9b22c33f310a7def8058f22163b1c583)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef20Null`](#structFRHAPI__GuideCreateRequest_1aec08f5463404c44230f7bf76eba116c5)`() const` | Checks whether Ref20_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef21`](#structFRHAPI__GuideCreateRequest_1a6a0c1a01a4f1fac9052779fd80481e74)`()` | Gets the value of Ref21_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef21`](#structFRHAPI__GuideCreateRequest_1a9a73d5899a901b1f96a7bf4bd6c8de3c)`() const` | Gets the value of Ref21_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef21`](#structFRHAPI__GuideCreateRequest_1ab59acf5cf4a97eb93b3e1674e99c7789)`(const FString & DefaultValue) const` | Gets the value of Ref21_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef21`](#structFRHAPI__GuideCreateRequest_1a2b6d86997c6da5ddbe7f7143f3ac43ad)`(FString & OutValue) const` | Fills OutValue with the value of Ref21_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef21OrNull`](#structFRHAPI__GuideCreateRequest_1ad21d8abd4bd7d116ccf2a05ca87a563a)`()` | Returns a pointer to Ref21_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef21OrNull`](#structFRHAPI__GuideCreateRequest_1a355ac79789757d19963062333eb93065)`() const` | Returns a pointer to Ref21_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef21`](#structFRHAPI__GuideCreateRequest_1a91aaa9f59f1dcf9846160b83a2b083c7)`(const FString & NewValue)` | Sets the value of Ref21_Optional and also sets Ref21_IsSet to true.
`public inline FORCEINLINE void `[`SetRef21`](#structFRHAPI__GuideCreateRequest_1a9ce0687bbde4598d535ebb2fe3fca56e)`(FString && NewValue)` | Sets the value of Ref21_Optional and also sets Ref21_IsSet to true using move semantics.
`public inline void `[`ClearRef21`](#structFRHAPI__GuideCreateRequest_1ae092694d87e5afca8e062b1093c7fc1d)`()` | Clears the value of Ref21_Optional and sets Ref21_IsSet to false.
`public inline FORCEINLINE void `[`SetRef21ToNull`](#structFRHAPI__GuideCreateRequest_1a85489822d0d8e8e31b7d8879c1355936)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef21Null`](#structFRHAPI__GuideCreateRequest_1a0c074dc8452fe8eb86d2735d6078145b)`() const` | Checks whether Ref21_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef22`](#structFRHAPI__GuideCreateRequest_1a195fef2b5cf9399f466af6607161137c)`()` | Gets the value of Ref22_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef22`](#structFRHAPI__GuideCreateRequest_1aa5dbf14ffd97a432d3ac89a2b49d86a4)`() const` | Gets the value of Ref22_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef22`](#structFRHAPI__GuideCreateRequest_1aa5d01b6af619d6655e7d1ec50e1ba80d)`(const FString & DefaultValue) const` | Gets the value of Ref22_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef22`](#structFRHAPI__GuideCreateRequest_1a169c6416ad73fce3289af21dddbd9ebd)`(FString & OutValue) const` | Fills OutValue with the value of Ref22_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef22OrNull`](#structFRHAPI__GuideCreateRequest_1a796956eafb730746d6f874f56e05890f)`()` | Returns a pointer to Ref22_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef22OrNull`](#structFRHAPI__GuideCreateRequest_1ab1ebb476ff9ac5630aee6b6a00d0f412)`() const` | Returns a pointer to Ref22_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef22`](#structFRHAPI__GuideCreateRequest_1a961225dadee8740972b8c6e18d6c8807)`(const FString & NewValue)` | Sets the value of Ref22_Optional and also sets Ref22_IsSet to true.
`public inline FORCEINLINE void `[`SetRef22`](#structFRHAPI__GuideCreateRequest_1a6a5ed4914a06dd35a77cd09819b42298)`(FString && NewValue)` | Sets the value of Ref22_Optional and also sets Ref22_IsSet to true using move semantics.
`public inline void `[`ClearRef22`](#structFRHAPI__GuideCreateRequest_1ad3ef5de86ffcfb56ec9e044a50b7d954)`()` | Clears the value of Ref22_Optional and sets Ref22_IsSet to false.
`public inline FORCEINLINE void `[`SetRef22ToNull`](#structFRHAPI__GuideCreateRequest_1a36970dce59e90389fdfa41bcb07ca5d6)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef22Null`](#structFRHAPI__GuideCreateRequest_1ae0ef78dcc47f1cf5ee64c315be225538)`() const` | Checks whether Ref22_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef23`](#structFRHAPI__GuideCreateRequest_1a95386222d0b814a8a74a543f8d2cc5ed)`()` | Gets the value of Ref23_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef23`](#structFRHAPI__GuideCreateRequest_1a1d3abde2d8133fbb3ed269a63cea47f9)`() const` | Gets the value of Ref23_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef23`](#structFRHAPI__GuideCreateRequest_1a191c4519286be7ff72cb0ee40c2b582d)`(const FString & DefaultValue) const` | Gets the value of Ref23_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef23`](#structFRHAPI__GuideCreateRequest_1afa0d2c5ae2e46323c8d9859d5b983928)`(FString & OutValue) const` | Fills OutValue with the value of Ref23_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef23OrNull`](#structFRHAPI__GuideCreateRequest_1a74e85efc8797b1be8dbdd5c35015b94e)`()` | Returns a pointer to Ref23_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef23OrNull`](#structFRHAPI__GuideCreateRequest_1a551bf59f1a935371ffbf759a6b5e6caf)`() const` | Returns a pointer to Ref23_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef23`](#structFRHAPI__GuideCreateRequest_1ab504c218921436ae399a6d6b995d1a05)`(const FString & NewValue)` | Sets the value of Ref23_Optional and also sets Ref23_IsSet to true.
`public inline FORCEINLINE void `[`SetRef23`](#structFRHAPI__GuideCreateRequest_1a2ab8d1f437e73f4c819d8de78a63ee97)`(FString && NewValue)` | Sets the value of Ref23_Optional and also sets Ref23_IsSet to true using move semantics.
`public inline void `[`ClearRef23`](#structFRHAPI__GuideCreateRequest_1ab4a7977a29464f79d456f6f36b091a2f)`()` | Clears the value of Ref23_Optional and sets Ref23_IsSet to false.
`public inline FORCEINLINE void `[`SetRef23ToNull`](#structFRHAPI__GuideCreateRequest_1a82bdb594b753bd807f3acf92afbe9885)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef23Null`](#structFRHAPI__GuideCreateRequest_1a9d193eaa1cccddcf046dbe805ae7fbf4)`() const` | Checks whether Ref23_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef24`](#structFRHAPI__GuideCreateRequest_1a136e7c48cfc01d1311e7b601977d6311)`()` | Gets the value of Ref24_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef24`](#structFRHAPI__GuideCreateRequest_1a45b17b0fef0eefc00ae962073f2b7be6)`() const` | Gets the value of Ref24_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef24`](#structFRHAPI__GuideCreateRequest_1a2935a0cea853006e2d1392d19ef009a8)`(const FString & DefaultValue) const` | Gets the value of Ref24_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef24`](#structFRHAPI__GuideCreateRequest_1ac944d2ad9911e8af6c39c76ed48c9b36)`(FString & OutValue) const` | Fills OutValue with the value of Ref24_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef24OrNull`](#structFRHAPI__GuideCreateRequest_1a603740d19036c4ead5c964c193fbe147)`()` | Returns a pointer to Ref24_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef24OrNull`](#structFRHAPI__GuideCreateRequest_1a906d7ac0da09fb290f74974bc3842eac)`() const` | Returns a pointer to Ref24_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef24`](#structFRHAPI__GuideCreateRequest_1a1f243c8ac560e21e6cb242a06710d3ca)`(const FString & NewValue)` | Sets the value of Ref24_Optional and also sets Ref24_IsSet to true.
`public inline FORCEINLINE void `[`SetRef24`](#structFRHAPI__GuideCreateRequest_1a1391fd36cb6999a193ca185002cb2d56)`(FString && NewValue)` | Sets the value of Ref24_Optional and also sets Ref24_IsSet to true using move semantics.
`public inline void `[`ClearRef24`](#structFRHAPI__GuideCreateRequest_1a309ae2ee65782d4b2f3bb5e4720a9eb9)`()` | Clears the value of Ref24_Optional and sets Ref24_IsSet to false.
`public inline FORCEINLINE void `[`SetRef24ToNull`](#structFRHAPI__GuideCreateRequest_1ac01a1a4aecfed461d59042b7e6f5de65)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef24Null`](#structFRHAPI__GuideCreateRequest_1a2cbf948f4b188e8bd55f96ec42d7760f)`() const` | Checks whether Ref24_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef25`](#structFRHAPI__GuideCreateRequest_1a92b47d45db85b486bc91b0934c35679a)`()` | Gets the value of Ref25_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef25`](#structFRHAPI__GuideCreateRequest_1a977fea97c91d70e6d2df03f3eed1414a)`() const` | Gets the value of Ref25_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef25`](#structFRHAPI__GuideCreateRequest_1a9f55188efcedc924f35e0ce33ecf0930)`(const FString & DefaultValue) const` | Gets the value of Ref25_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef25`](#structFRHAPI__GuideCreateRequest_1a19290585ad4b04e142635aae5cdadb7d)`(FString & OutValue) const` | Fills OutValue with the value of Ref25_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef25OrNull`](#structFRHAPI__GuideCreateRequest_1ab5aaee7bef9bf10d9349419f1ffca71a)`()` | Returns a pointer to Ref25_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef25OrNull`](#structFRHAPI__GuideCreateRequest_1ab03cfc19f8d986a8f02bf879f20b9d49)`() const` | Returns a pointer to Ref25_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef25`](#structFRHAPI__GuideCreateRequest_1a39124ff0b792c615d159b9284e133f9f)`(const FString & NewValue)` | Sets the value of Ref25_Optional and also sets Ref25_IsSet to true.
`public inline FORCEINLINE void `[`SetRef25`](#structFRHAPI__GuideCreateRequest_1a9a06d9c63dad620dc19b0badf61c7f56)`(FString && NewValue)` | Sets the value of Ref25_Optional and also sets Ref25_IsSet to true using move semantics.
`public inline void `[`ClearRef25`](#structFRHAPI__GuideCreateRequest_1a6a53b870e5cdfc61ffd40ac99b3af8d6)`()` | Clears the value of Ref25_Optional and sets Ref25_IsSet to false.
`public inline FORCEINLINE void `[`SetRef25ToNull`](#structFRHAPI__GuideCreateRequest_1a467ac2014e0c8655cc0105b65fb8c67a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef25Null`](#structFRHAPI__GuideCreateRequest_1a8d20a9332d41d4e8f645d73dac73766f)`() const` | Checks whether Ref25_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef26`](#structFRHAPI__GuideCreateRequest_1a21c3fdfaff12e511fcfb8d396abedd7d)`()` | Gets the value of Ref26_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef26`](#structFRHAPI__GuideCreateRequest_1ac8f33bee2b209a913ff4eab1e4f80287)`() const` | Gets the value of Ref26_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef26`](#structFRHAPI__GuideCreateRequest_1ae5dc657524b096f6aeb0124d3166d55b)`(const FString & DefaultValue) const` | Gets the value of Ref26_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef26`](#structFRHAPI__GuideCreateRequest_1a4b955ff189ca37f73c643003b1530cc8)`(FString & OutValue) const` | Fills OutValue with the value of Ref26_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef26OrNull`](#structFRHAPI__GuideCreateRequest_1afdeb8676c2e58bd08b4e7de4e4ea14ba)`()` | Returns a pointer to Ref26_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef26OrNull`](#structFRHAPI__GuideCreateRequest_1ac8110187709a847e90667eb5719264d9)`() const` | Returns a pointer to Ref26_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef26`](#structFRHAPI__GuideCreateRequest_1ac0d339cb7c7889ba14cc1b7386c57ea1)`(const FString & NewValue)` | Sets the value of Ref26_Optional and also sets Ref26_IsSet to true.
`public inline FORCEINLINE void `[`SetRef26`](#structFRHAPI__GuideCreateRequest_1a39b2997a6ea0cff8b71da1dce47c2f34)`(FString && NewValue)` | Sets the value of Ref26_Optional and also sets Ref26_IsSet to true using move semantics.
`public inline void `[`ClearRef26`](#structFRHAPI__GuideCreateRequest_1a71658eb35d971b62d3f28208670a9417)`()` | Clears the value of Ref26_Optional and sets Ref26_IsSet to false.
`public inline FORCEINLINE void `[`SetRef26ToNull`](#structFRHAPI__GuideCreateRequest_1a06bce88a6ceafaeb13655e60f802d835)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef26Null`](#structFRHAPI__GuideCreateRequest_1aea5690eea4e4f94d9296d6a88003e6a0)`() const` | Checks whether Ref26_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef27`](#structFRHAPI__GuideCreateRequest_1a90fa757516b33065473a63fe6257e917)`()` | Gets the value of Ref27_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef27`](#structFRHAPI__GuideCreateRequest_1ae517f80cac0a931d8a2b8f872663c30d)`() const` | Gets the value of Ref27_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef27`](#structFRHAPI__GuideCreateRequest_1af884da248befe187b6538a5724cf33d8)`(const FString & DefaultValue) const` | Gets the value of Ref27_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef27`](#structFRHAPI__GuideCreateRequest_1a9e13c1e111811d8099dcc1a39e8758d0)`(FString & OutValue) const` | Fills OutValue with the value of Ref27_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef27OrNull`](#structFRHAPI__GuideCreateRequest_1a282777f96a5a32e6cfdb2b28ed2d071e)`()` | Returns a pointer to Ref27_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef27OrNull`](#structFRHAPI__GuideCreateRequest_1ab4233d0779830e6df2e41dd775e1e5f8)`() const` | Returns a pointer to Ref27_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef27`](#structFRHAPI__GuideCreateRequest_1af665202e4dbf08a5d5d02944c8e1d926)`(const FString & NewValue)` | Sets the value of Ref27_Optional and also sets Ref27_IsSet to true.
`public inline FORCEINLINE void `[`SetRef27`](#structFRHAPI__GuideCreateRequest_1a33c37ff3cee588245b1c54059ebd60b4)`(FString && NewValue)` | Sets the value of Ref27_Optional and also sets Ref27_IsSet to true using move semantics.
`public inline void `[`ClearRef27`](#structFRHAPI__GuideCreateRequest_1a4421b3996d95385aca2d739d96dcca1d)`()` | Clears the value of Ref27_Optional and sets Ref27_IsSet to false.
`public inline FORCEINLINE void `[`SetRef27ToNull`](#structFRHAPI__GuideCreateRequest_1a4dc5bcbb975b5bbde46b5afbc68a0e92)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef27Null`](#structFRHAPI__GuideCreateRequest_1a98fbe14f8d8c4a701996cc54d9aeaf2b)`() const` | Checks whether Ref27_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef28`](#structFRHAPI__GuideCreateRequest_1a9d37a27b676eb0d0e08e4a53e530795e)`()` | Gets the value of Ref28_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef28`](#structFRHAPI__GuideCreateRequest_1a3e5179b310db7b24d1a888b0d87225f0)`() const` | Gets the value of Ref28_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef28`](#structFRHAPI__GuideCreateRequest_1adeb6b93e17ccee739f2ac3981b372f0e)`(const FString & DefaultValue) const` | Gets the value of Ref28_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef28`](#structFRHAPI__GuideCreateRequest_1abd423baa18547385e6d8886bd3fd1b62)`(FString & OutValue) const` | Fills OutValue with the value of Ref28_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef28OrNull`](#structFRHAPI__GuideCreateRequest_1a9564c25f0d9adfcdcf9723673cecd181)`()` | Returns a pointer to Ref28_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef28OrNull`](#structFRHAPI__GuideCreateRequest_1a09eb23886c41b634e2ff0d161bdde5cf)`() const` | Returns a pointer to Ref28_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef28`](#structFRHAPI__GuideCreateRequest_1a12329b06184121f5616377d66a00f039)`(const FString & NewValue)` | Sets the value of Ref28_Optional and also sets Ref28_IsSet to true.
`public inline FORCEINLINE void `[`SetRef28`](#structFRHAPI__GuideCreateRequest_1a5a2c4f7e75fabdf441f4b3122e03e789)`(FString && NewValue)` | Sets the value of Ref28_Optional and also sets Ref28_IsSet to true using move semantics.
`public inline void `[`ClearRef28`](#structFRHAPI__GuideCreateRequest_1a7adb4986ee45d8f911eddd734390bd3d)`()` | Clears the value of Ref28_Optional and sets Ref28_IsSet to false.
`public inline FORCEINLINE void `[`SetRef28ToNull`](#structFRHAPI__GuideCreateRequest_1a4c3789970035eb58965bc7cad2ddf02c)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef28Null`](#structFRHAPI__GuideCreateRequest_1a1ba17dc47dbf5ffe05d9de762f41bc55)`() const` | Checks whether Ref28_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef29`](#structFRHAPI__GuideCreateRequest_1ab23490a5253b4d1a4206162cb785ab79)`()` | Gets the value of Ref29_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef29`](#structFRHAPI__GuideCreateRequest_1a0e71a4bd8c54b7efa8535ff9e6e5cba1)`() const` | Gets the value of Ref29_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef29`](#structFRHAPI__GuideCreateRequest_1a75126a8ec18a6a8c6aca2948d0e8b691)`(const FString & DefaultValue) const` | Gets the value of Ref29_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef29`](#structFRHAPI__GuideCreateRequest_1a166f016bb5e64c4f513c491fac03583a)`(FString & OutValue) const` | Fills OutValue with the value of Ref29_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef29OrNull`](#structFRHAPI__GuideCreateRequest_1a66dfa358f749e0c6abb145f11e941e66)`()` | Returns a pointer to Ref29_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef29OrNull`](#structFRHAPI__GuideCreateRequest_1a612c50a6dbb7c22a483527297286ccae)`() const` | Returns a pointer to Ref29_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef29`](#structFRHAPI__GuideCreateRequest_1a00e7f99e5275325a986b7d94c2c81767)`(const FString & NewValue)` | Sets the value of Ref29_Optional and also sets Ref29_IsSet to true.
`public inline FORCEINLINE void `[`SetRef29`](#structFRHAPI__GuideCreateRequest_1abdde5010266f9f136968c110e932b958)`(FString && NewValue)` | Sets the value of Ref29_Optional and also sets Ref29_IsSet to true using move semantics.
`public inline void `[`ClearRef29`](#structFRHAPI__GuideCreateRequest_1ac3d9a10ff42d498ee058bcdb5765b359)`()` | Clears the value of Ref29_Optional and sets Ref29_IsSet to false.
`public inline FORCEINLINE void `[`SetRef29ToNull`](#structFRHAPI__GuideCreateRequest_1ae236c379043030458dbc26b5f88f87ed)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef29Null`](#structFRHAPI__GuideCreateRequest_1a6431719bfdaaec325153c8292f3af5d2)`() const` | Checks whether Ref29_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef30`](#structFRHAPI__GuideCreateRequest_1ac597072a7ea439a2549a2fe4e470d906)`()` | Gets the value of Ref30_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef30`](#structFRHAPI__GuideCreateRequest_1ae802bddf199edc6faf8456cd9840ddf8)`() const` | Gets the value of Ref30_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef30`](#structFRHAPI__GuideCreateRequest_1a97ca4f71c622513f55018e1df3706882)`(const FString & DefaultValue) const` | Gets the value of Ref30_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef30`](#structFRHAPI__GuideCreateRequest_1a4b21b132ac0afc2e09dd8d85ebe98c1d)`(FString & OutValue) const` | Fills OutValue with the value of Ref30_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef30OrNull`](#structFRHAPI__GuideCreateRequest_1a72e69e5fa81ca47bee6cd60c7dd8971b)`()` | Returns a pointer to Ref30_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef30OrNull`](#structFRHAPI__GuideCreateRequest_1a1ec6464c7b699916b493034376196d67)`() const` | Returns a pointer to Ref30_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef30`](#structFRHAPI__GuideCreateRequest_1adfd50702be684e3d1a23add32c61750e)`(const FString & NewValue)` | Sets the value of Ref30_Optional and also sets Ref30_IsSet to true.
`public inline FORCEINLINE void `[`SetRef30`](#structFRHAPI__GuideCreateRequest_1ababb9bc57666c6c9fe420bb030e37c44)`(FString && NewValue)` | Sets the value of Ref30_Optional and also sets Ref30_IsSet to true using move semantics.
`public inline void `[`ClearRef30`](#structFRHAPI__GuideCreateRequest_1ae1dc353c7df90d6ffceca6c5e565a49e)`()` | Clears the value of Ref30_Optional and sets Ref30_IsSet to false.
`public inline FORCEINLINE void `[`SetRef30ToNull`](#structFRHAPI__GuideCreateRequest_1a3609ab6b960f125e1abbf27cabce23dd)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef30Null`](#structFRHAPI__GuideCreateRequest_1aae2148048d96c3a421853ad97491b8f4)`() const` | Checks whether Ref30_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef31`](#structFRHAPI__GuideCreateRequest_1af5e9cdf0180840c1bfc8619a96a1f957)`()` | Gets the value of Ref31_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef31`](#structFRHAPI__GuideCreateRequest_1a4d7a8b5f83223e04a879ebdacdce4f35)`() const` | Gets the value of Ref31_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef31`](#structFRHAPI__GuideCreateRequest_1ab596140093281a2760d9e40fb2561bc8)`(const FString & DefaultValue) const` | Gets the value of Ref31_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef31`](#structFRHAPI__GuideCreateRequest_1afc97a7e5cc958655af75d8e7d7e66ea4)`(FString & OutValue) const` | Fills OutValue with the value of Ref31_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef31OrNull`](#structFRHAPI__GuideCreateRequest_1a813a57a1b0ceb7cf0a694fcfda254327)`()` | Returns a pointer to Ref31_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef31OrNull`](#structFRHAPI__GuideCreateRequest_1a29496a91255151a574893688729f3568)`() const` | Returns a pointer to Ref31_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef31`](#structFRHAPI__GuideCreateRequest_1a52a7be422b18c6ee4dafbd17bcd5e544)`(const FString & NewValue)` | Sets the value of Ref31_Optional and also sets Ref31_IsSet to true.
`public inline FORCEINLINE void `[`SetRef31`](#structFRHAPI__GuideCreateRequest_1af0ec5214ff8b6f4db114d0b676a7c1a5)`(FString && NewValue)` | Sets the value of Ref31_Optional and also sets Ref31_IsSet to true using move semantics.
`public inline void `[`ClearRef31`](#structFRHAPI__GuideCreateRequest_1a74aca5e1cd67ff516f7284bbbffb3fbd)`()` | Clears the value of Ref31_Optional and sets Ref31_IsSet to false.
`public inline FORCEINLINE void `[`SetRef31ToNull`](#structFRHAPI__GuideCreateRequest_1a318f03ca11693979fed1de67039fa8ff)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef31Null`](#structFRHAPI__GuideCreateRequest_1ac5b7aa9dbd274857dcf137184685a727)`() const` | Checks whether Ref31_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetRef32`](#structFRHAPI__GuideCreateRequest_1ac5981228e0b6e08a048ade313959c6eb)`()` | Gets the value of Ref32_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef32`](#structFRHAPI__GuideCreateRequest_1a359c71f9e6440dca98da2cb748c70028)`() const` | Gets the value of Ref32_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRef32`](#structFRHAPI__GuideCreateRequest_1a7289639c2eedc754a29bcd344076bfdd)`(const FString & DefaultValue) const` | Gets the value of Ref32_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRef32`](#structFRHAPI__GuideCreateRequest_1a8d978388021a20ac5429535f3a67ed6a)`(FString & OutValue) const` | Fills OutValue with the value of Ref32_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRef32OrNull`](#structFRHAPI__GuideCreateRequest_1a27350808507bab8202a6be7d4179d341)`()` | Returns a pointer to Ref32_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRef32OrNull`](#structFRHAPI__GuideCreateRequest_1a6a0c9253aa1ff9f7df4d34296113bbf0)`() const` | Returns a pointer to Ref32_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRef32`](#structFRHAPI__GuideCreateRequest_1a73332ae6ffc3fd5fac76b51c7fc773d4)`(const FString & NewValue)` | Sets the value of Ref32_Optional and also sets Ref32_IsSet to true.
`public inline FORCEINLINE void `[`SetRef32`](#structFRHAPI__GuideCreateRequest_1a8dcfdff3284e3c58dc1d8faf9a55975d)`(FString && NewValue)` | Sets the value of Ref32_Optional and also sets Ref32_IsSet to true using move semantics.
`public inline void `[`ClearRef32`](#structFRHAPI__GuideCreateRequest_1ac5e80cb563d46ae1d08f11be0935c1b1)`()` | Clears the value of Ref32_Optional and sets Ref32_IsSet to false.
`public inline FORCEINLINE void `[`SetRef32ToNull`](#structFRHAPI__GuideCreateRequest_1ae909021d66371b8d330e3d35c12971c8)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsRef32Null`](#structFRHAPI__GuideCreateRequest_1a26ee3793cbbff9639bf788dc1066aaf1)`() const` | Checks whether Ref32_Optional is set to null.
`public inline FORCEINLINE ERHAPI_GuideEntityType & `[`GetOwnerEntityType`](#structFRHAPI__GuideCreateRequest_1a2ed2375f957e3a28a124e0a47d737ad0)`()` | Gets the value of OwnerEntityType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_GuideEntityType & `[`GetOwnerEntityType`](#structFRHAPI__GuideCreateRequest_1a309449e39d856ff27e38faa08da74cea)`() const` | Gets the value of OwnerEntityType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_GuideEntityType & `[`GetOwnerEntityType`](#structFRHAPI__GuideCreateRequest_1a3db4672d0dde5aeb122a37a674ec38b0)`(const ERHAPI_GuideEntityType & DefaultValue) const` | Gets the value of OwnerEntityType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOwnerEntityType`](#structFRHAPI__GuideCreateRequest_1ae35bcc2c6697e8df4dc13376ff0b7c7e)`(ERHAPI_GuideEntityType & OutValue) const` | Fills OutValue with the value of OwnerEntityType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_GuideEntityType * `[`GetOwnerEntityTypeOrNull`](#structFRHAPI__GuideCreateRequest_1ae1033470afee5b0a5d63c65cff5c7a19)`()` | Returns a pointer to OwnerEntityType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_GuideEntityType * `[`GetOwnerEntityTypeOrNull`](#structFRHAPI__GuideCreateRequest_1ade0b76ee59b1c422d56b6c3e7b11b89f)`() const` | Returns a pointer to OwnerEntityType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOwnerEntityType`](#structFRHAPI__GuideCreateRequest_1ad8596ef963e239d7c66bfe82e3b07575)`(const ERHAPI_GuideEntityType & NewValue)` | Sets the value of OwnerEntityType_Optional and also sets OwnerEntityType_IsSet to true.
`public inline FORCEINLINE void `[`SetOwnerEntityType`](#structFRHAPI__GuideCreateRequest_1a89efde0c6cb94fd08a5d58941c735248)`(ERHAPI_GuideEntityType && NewValue)` | Sets the value of OwnerEntityType_Optional and also sets OwnerEntityType_IsSet to true using move semantics.
`public inline void `[`ClearOwnerEntityType`](#structFRHAPI__GuideCreateRequest_1a90b64c42f70bd95a58404b80e5af50a8)`()` | Clears the value of OwnerEntityType_Optional and sets OwnerEntityType_IsSet to false.
`public inline FORCEINLINE void `[`SetOwnerEntityTypeToNull`](#structFRHAPI__GuideCreateRequest_1ac4388d66d525ba1458a0e91cb336c8dd)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsOwnerEntityTypeNull`](#structFRHAPI__GuideCreateRequest_1a2f22e24ceca7e85753675001d4047e02)`() const` | Checks whether OwnerEntityType_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetOwnerEntityId`](#structFRHAPI__GuideCreateRequest_1ac0e3dbe65493ae1db5145ef5ad752a1d)`()` | Gets the value of OwnerEntityId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOwnerEntityId`](#structFRHAPI__GuideCreateRequest_1a47a0ff6a2279f50137dff1bd4ce41c78)`() const` | Gets the value of OwnerEntityId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOwnerEntityId`](#structFRHAPI__GuideCreateRequest_1aba5973663b6ce9fd9efb7eb37a22a3ae)`(const FString & DefaultValue) const` | Gets the value of OwnerEntityId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOwnerEntityId`](#structFRHAPI__GuideCreateRequest_1a04991800f0d8126ee6463cb25fa45b02)`(FString & OutValue) const` | Fills OutValue with the value of OwnerEntityId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetOwnerEntityIdOrNull`](#structFRHAPI__GuideCreateRequest_1aac88ebe68ea5f9ac64d7591afe54c4dc)`()` | Returns a pointer to OwnerEntityId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetOwnerEntityIdOrNull`](#structFRHAPI__GuideCreateRequest_1a88a9d6009eacc5350ebd9aed8faaefd1)`() const` | Returns a pointer to OwnerEntityId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOwnerEntityId`](#structFRHAPI__GuideCreateRequest_1afd9b64bbdf2056babb4c954dfec9b2ae)`(const FString & NewValue)` | Sets the value of OwnerEntityId_Optional and also sets OwnerEntityId_IsSet to true.
`public inline FORCEINLINE void `[`SetOwnerEntityId`](#structFRHAPI__GuideCreateRequest_1a93f37884665bddd6ae4cd5bb4ffcf8b0)`(FString && NewValue)` | Sets the value of OwnerEntityId_Optional and also sets OwnerEntityId_IsSet to true using move semantics.
`public inline void `[`ClearOwnerEntityId`](#structFRHAPI__GuideCreateRequest_1ac2e91ef60aea7a665e42d3a4ed773dae)`()` | Clears the value of OwnerEntityId_Optional and sets OwnerEntityId_IsSet to false.
`public inline FORCEINLINE void `[`SetOwnerEntityIdToNull`](#structFRHAPI__GuideCreateRequest_1a72deec495daabf2b8283f727347bb405)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsOwnerEntityIdNull`](#structFRHAPI__GuideCreateRequest_1a1549bba293d57973d51cc9289f38902c)`() const` | Checks whether OwnerEntityId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetContent`](#structFRHAPI__GuideCreateRequest_1ab21fbe4982ae845d299c9e28c4bc81b5)`()` | Gets the value of Content_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetContent`](#structFRHAPI__GuideCreateRequest_1aebb2ad10d611263d42a52d0e02878557)`() const` | Gets the value of Content_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetContent`](#structFRHAPI__GuideCreateRequest_1a949375cdba8f1f2f13d35c38aa9ae6df)`(const FString & DefaultValue) const` | Gets the value of Content_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetContent`](#structFRHAPI__GuideCreateRequest_1a053552de751f816b68ba07e621d13860)`(FString & OutValue) const` | Fills OutValue with the value of Content_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetContentOrNull`](#structFRHAPI__GuideCreateRequest_1a321605a48619a8ae7fd43ba5711ab90a)`()` | Returns a pointer to Content_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetContentOrNull`](#structFRHAPI__GuideCreateRequest_1a71e02fde6d96468af4286fb9c8fa85a7)`() const` | Returns a pointer to Content_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetContent`](#structFRHAPI__GuideCreateRequest_1adf598b3e30e06207aca647df087f083e)`(const FString & NewValue)` | Sets the value of Content_Optional and also sets Content_IsSet to true.
`public inline FORCEINLINE void `[`SetContent`](#structFRHAPI__GuideCreateRequest_1a429b7f29999ba3aefbca8f4f99ecdb85)`(FString && NewValue)` | Sets the value of Content_Optional and also sets Content_IsSet to true using move semantics.
`public inline void `[`ClearContent`](#structFRHAPI__GuideCreateRequest_1a56f9d94c43a7efe13fa66135a6431a95)`()` | Clears the value of Content_Optional and sets Content_IsSet to false.
`public inline FORCEINLINE void `[`SetContentToNull`](#structFRHAPI__GuideCreateRequest_1a488867c37247ce131a9df8e9f1a9813a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsContentNull`](#structFRHAPI__GuideCreateRequest_1a22101e94647e32ee24bf07851690e3d6)`() const` | Checks whether Content_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > & `[`GetSections`](#structFRHAPI__GuideCreateRequest_1a3ee9346ec13cb74aea629c7a4979be47)`()` | Gets the value of Sections_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > & `[`GetSections`](#structFRHAPI__GuideCreateRequest_1a4b72098c8b4502c8910e6ff1c7cbc189)`() const` | Gets the value of Sections_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > & `[`GetSections`](#structFRHAPI__GuideCreateRequest_1a65419929e316bc5d3e4b4bd2c1e71576)`(const TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > & DefaultValue) const` | Gets the value of Sections_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSections`](#structFRHAPI__GuideCreateRequest_1a774bfa09fa1f90df8e6d10fb6c837af3)`(TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > & OutValue) const` | Fills OutValue with the value of Sections_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > * `[`GetSectionsOrNull`](#structFRHAPI__GuideCreateRequest_1a0aa6928e6723837add7ef99629d1828e)`()` | Returns a pointer to Sections_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > * `[`GetSectionsOrNull`](#structFRHAPI__GuideCreateRequest_1a6f83a89e9ff3ca913449fd3365a05108)`() const` | Returns a pointer to Sections_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSections`](#structFRHAPI__GuideCreateRequest_1a63d387da93b146f02ee67918a9e5f470)`(const TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > & NewValue)` | Sets the value of Sections_Optional and also sets Sections_IsSet to true.
`public inline FORCEINLINE void `[`SetSections`](#structFRHAPI__GuideCreateRequest_1ad86a35a02493d12a92e51f9aa7b29259)`(TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > && NewValue)` | Sets the value of Sections_Optional and also sets Sections_IsSet to true using move semantics.
`public inline void `[`ClearSections`](#structFRHAPI__GuideCreateRequest_1a23dcb4f40f3dcd8ed029216f13710475)`()` | Clears the value of Sections_Optional and sets Sections_IsSet to false.

### Members

#### `public FString `[`GuideType`](#structFRHAPI__GuideCreateRequest_1a4d16a9d6f5b4edea993a8b1a24d482e0) <a id="structFRHAPI__GuideCreateRequest_1a4d16a9d6f5b4edea993a8b1a24d482e0"></a>

#### `public FString `[`Language`](#structFRHAPI__GuideCreateRequest_1a1d41dda65e85f69d6dcb5a0b74856ff0) <a id="structFRHAPI__GuideCreateRequest_1a1d41dda65e85f69d6dcb5a0b74856ff0"></a>

#### `public FString `[`GameVersion`](#structFRHAPI__GuideCreateRequest_1a84489f8596f9197877b70a8dd50ceda1) <a id="structFRHAPI__GuideCreateRequest_1a84489f8596f9197877b70a8dd50ceda1"></a>

Version this guide was created for.

#### `public FString `[`Name`](#structFRHAPI__GuideCreateRequest_1a5e36f90bddef437d86106c89ba160371) <a id="structFRHAPI__GuideCreateRequest_1a5e36f90bddef437d86106c89ba160371"></a>

#### `public FString `[`ShortDesc_Optional`](#structFRHAPI__GuideCreateRequest_1ac1c2736e890bf9986cfcfdc9d5284e8b) <a id="structFRHAPI__GuideCreateRequest_1ac1c2736e890bf9986cfcfdc9d5284e8b"></a>

#### `public bool `[`ShortDesc_IsSet`](#structFRHAPI__GuideCreateRequest_1ad8b37bca56de0a43334873dea728c872) <a id="structFRHAPI__GuideCreateRequest_1ad8b37bca56de0a43334873dea728c872"></a>

true if ShortDesc_Optional has been set to a value

#### `public bool `[`ShortDesc_IsNull`](#structFRHAPI__GuideCreateRequest_1a67a523efd8f22003796325c4771c91b4) <a id="structFRHAPI__GuideCreateRequest_1a67a523efd8f22003796325c4771c91b4"></a>

true if ShortDesc_Optional has been explicitly set to null

#### `public int32 `[`V_Optional`](#structFRHAPI__GuideCreateRequest_1a10da806376db08a48a59d9b0e1c8ada4) <a id="structFRHAPI__GuideCreateRequest_1a10da806376db08a48a59d9b0e1c8ada4"></a>

Game-specific guide version. Meant to allow the layout/format of the guides to change over time.

#### `public bool `[`V_IsSet`](#structFRHAPI__GuideCreateRequest_1ae0c30783dfb1d2b9112530b24b8aa221) <a id="structFRHAPI__GuideCreateRequest_1ae0c30783dfb1d2b9112530b24b8aa221"></a>

true if V_Optional has been set to a value

#### `public int32 `[`PromotionPriority_Optional`](#structFRHAPI__GuideCreateRequest_1a03c91da7df6fea21388b2f2f37ec49b7) <a id="structFRHAPI__GuideCreateRequest_1a03c91da7df6fea21388b2f2f37ec49b7"></a>

Promotion priority of this guide in searches.

#### `public bool `[`PromotionPriority_IsSet`](#structFRHAPI__GuideCreateRequest_1a976aa2d76d7c384550989a5758ad95e1) <a id="structFRHAPI__GuideCreateRequest_1a976aa2d76d7c384550989a5758ad95e1"></a>

true if PromotionPriority_Optional has been set to a value

#### `public FString `[`Ref1_Optional`](#structFRHAPI__GuideCreateRequest_1ad8ac80169576e974c4da07f0a19fa6f0) <a id="structFRHAPI__GuideCreateRequest_1ad8ac80169576e974c4da07f0a19fa6f0"></a>

#### `public bool `[`Ref1_IsSet`](#structFRHAPI__GuideCreateRequest_1a232d1aeb1940decc37dcd6c2d42d3a27) <a id="structFRHAPI__GuideCreateRequest_1a232d1aeb1940decc37dcd6c2d42d3a27"></a>

true if Ref1_Optional has been set to a value

#### `public bool `[`Ref1_IsNull`](#structFRHAPI__GuideCreateRequest_1adf61ec1036be173782c7f78091a042a3) <a id="structFRHAPI__GuideCreateRequest_1adf61ec1036be173782c7f78091a042a3"></a>

true if Ref1_Optional has been explicitly set to null

#### `public FString `[`Ref2_Optional`](#structFRHAPI__GuideCreateRequest_1aa4ad9511c0362b36a20ad98659bde420) <a id="structFRHAPI__GuideCreateRequest_1aa4ad9511c0362b36a20ad98659bde420"></a>

#### `public bool `[`Ref2_IsSet`](#structFRHAPI__GuideCreateRequest_1a71dd74015f655df48516615b343e5ddd) <a id="structFRHAPI__GuideCreateRequest_1a71dd74015f655df48516615b343e5ddd"></a>

true if Ref2_Optional has been set to a value

#### `public bool `[`Ref2_IsNull`](#structFRHAPI__GuideCreateRequest_1aacd8539bc56f803c058b88f70ae376b8) <a id="structFRHAPI__GuideCreateRequest_1aacd8539bc56f803c058b88f70ae376b8"></a>

true if Ref2_Optional has been explicitly set to null

#### `public FString `[`Ref3_Optional`](#structFRHAPI__GuideCreateRequest_1a6e782f2c1a14bca7bcb6fb908ed056f1) <a id="structFRHAPI__GuideCreateRequest_1a6e782f2c1a14bca7bcb6fb908ed056f1"></a>

#### `public bool `[`Ref3_IsSet`](#structFRHAPI__GuideCreateRequest_1ac8829a4eda1dadee1b7636da0fa2e663) <a id="structFRHAPI__GuideCreateRequest_1ac8829a4eda1dadee1b7636da0fa2e663"></a>

true if Ref3_Optional has been set to a value

#### `public bool `[`Ref3_IsNull`](#structFRHAPI__GuideCreateRequest_1aadbc0b1b73070692d021d4c6c3c704fa) <a id="structFRHAPI__GuideCreateRequest_1aadbc0b1b73070692d021d4c6c3c704fa"></a>

true if Ref3_Optional has been explicitly set to null

#### `public FString `[`Ref4_Optional`](#structFRHAPI__GuideCreateRequest_1af5180ccf631bc0190c249fd300253114) <a id="structFRHAPI__GuideCreateRequest_1af5180ccf631bc0190c249fd300253114"></a>

#### `public bool `[`Ref4_IsSet`](#structFRHAPI__GuideCreateRequest_1aed96595f923ba3ab3476c964857fefcb) <a id="structFRHAPI__GuideCreateRequest_1aed96595f923ba3ab3476c964857fefcb"></a>

true if Ref4_Optional has been set to a value

#### `public bool `[`Ref4_IsNull`](#structFRHAPI__GuideCreateRequest_1a746349b812a154705fd6024cb7b27490) <a id="structFRHAPI__GuideCreateRequest_1a746349b812a154705fd6024cb7b27490"></a>

true if Ref4_Optional has been explicitly set to null

#### `public FString `[`Ref5_Optional`](#structFRHAPI__GuideCreateRequest_1a7dc89a9a51ecfcd73a266d635ac49a6e) <a id="structFRHAPI__GuideCreateRequest_1a7dc89a9a51ecfcd73a266d635ac49a6e"></a>

#### `public bool `[`Ref5_IsSet`](#structFRHAPI__GuideCreateRequest_1af004a5c0b90b4b2b5b53c41dbac9d731) <a id="structFRHAPI__GuideCreateRequest_1af004a5c0b90b4b2b5b53c41dbac9d731"></a>

true if Ref5_Optional has been set to a value

#### `public bool `[`Ref5_IsNull`](#structFRHAPI__GuideCreateRequest_1a3c38b1d0719a4a03b43a2e4217cc4df4) <a id="structFRHAPI__GuideCreateRequest_1a3c38b1d0719a4a03b43a2e4217cc4df4"></a>

true if Ref5_Optional has been explicitly set to null

#### `public FString `[`Ref6_Optional`](#structFRHAPI__GuideCreateRequest_1a389e25e90b38788e5e9f0b154f9442f9) <a id="structFRHAPI__GuideCreateRequest_1a389e25e90b38788e5e9f0b154f9442f9"></a>

#### `public bool `[`Ref6_IsSet`](#structFRHAPI__GuideCreateRequest_1a3152e430f8aa20d94c31c278c0806997) <a id="structFRHAPI__GuideCreateRequest_1a3152e430f8aa20d94c31c278c0806997"></a>

true if Ref6_Optional has been set to a value

#### `public bool `[`Ref6_IsNull`](#structFRHAPI__GuideCreateRequest_1a1f72b23095bef10174603dc1f55a718c) <a id="structFRHAPI__GuideCreateRequest_1a1f72b23095bef10174603dc1f55a718c"></a>

true if Ref6_Optional has been explicitly set to null

#### `public FString `[`Ref7_Optional`](#structFRHAPI__GuideCreateRequest_1a67ba1504a43f272ca94d703e8b9e37f7) <a id="structFRHAPI__GuideCreateRequest_1a67ba1504a43f272ca94d703e8b9e37f7"></a>

#### `public bool `[`Ref7_IsSet`](#structFRHAPI__GuideCreateRequest_1ab0cb9cda17d5e3b3ee215defa1f9b377) <a id="structFRHAPI__GuideCreateRequest_1ab0cb9cda17d5e3b3ee215defa1f9b377"></a>

true if Ref7_Optional has been set to a value

#### `public bool `[`Ref7_IsNull`](#structFRHAPI__GuideCreateRequest_1a8399b21509114ec6cb674c51d1413adc) <a id="structFRHAPI__GuideCreateRequest_1a8399b21509114ec6cb674c51d1413adc"></a>

true if Ref7_Optional has been explicitly set to null

#### `public FString `[`Ref8_Optional`](#structFRHAPI__GuideCreateRequest_1a5923a090a5e22c5d5bc5cf240ae2c85c) <a id="structFRHAPI__GuideCreateRequest_1a5923a090a5e22c5d5bc5cf240ae2c85c"></a>

#### `public bool `[`Ref8_IsSet`](#structFRHAPI__GuideCreateRequest_1af08be4e5f36e8921ec1a0399a31a9eba) <a id="structFRHAPI__GuideCreateRequest_1af08be4e5f36e8921ec1a0399a31a9eba"></a>

true if Ref8_Optional has been set to a value

#### `public bool `[`Ref8_IsNull`](#structFRHAPI__GuideCreateRequest_1a04c356f0e319f60cc153cdef4ae16390) <a id="structFRHAPI__GuideCreateRequest_1a04c356f0e319f60cc153cdef4ae16390"></a>

true if Ref8_Optional has been explicitly set to null

#### `public FString `[`Ref9_Optional`](#structFRHAPI__GuideCreateRequest_1a99bf1844c5813ebb1f0a0eef9b33e976) <a id="structFRHAPI__GuideCreateRequest_1a99bf1844c5813ebb1f0a0eef9b33e976"></a>

#### `public bool `[`Ref9_IsSet`](#structFRHAPI__GuideCreateRequest_1ac2494af28b449078d83745df558c0812) <a id="structFRHAPI__GuideCreateRequest_1ac2494af28b449078d83745df558c0812"></a>

true if Ref9_Optional has been set to a value

#### `public bool `[`Ref9_IsNull`](#structFRHAPI__GuideCreateRequest_1a32e778e1d6afceac40acfb12797763b9) <a id="structFRHAPI__GuideCreateRequest_1a32e778e1d6afceac40acfb12797763b9"></a>

true if Ref9_Optional has been explicitly set to null

#### `public FString `[`Ref10_Optional`](#structFRHAPI__GuideCreateRequest_1a57219db4b456af9ef5e404cae5fdc259) <a id="structFRHAPI__GuideCreateRequest_1a57219db4b456af9ef5e404cae5fdc259"></a>

#### `public bool `[`Ref10_IsSet`](#structFRHAPI__GuideCreateRequest_1a1a34b811e086b5b7a3b9b37124b3e936) <a id="structFRHAPI__GuideCreateRequest_1a1a34b811e086b5b7a3b9b37124b3e936"></a>

true if Ref10_Optional has been set to a value

#### `public bool `[`Ref10_IsNull`](#structFRHAPI__GuideCreateRequest_1a07b7f43b28cbc41a6e60ebccce2cc026) <a id="structFRHAPI__GuideCreateRequest_1a07b7f43b28cbc41a6e60ebccce2cc026"></a>

true if Ref10_Optional has been explicitly set to null

#### `public FString `[`Ref11_Optional`](#structFRHAPI__GuideCreateRequest_1aa478c867e068bc846d2756183fce065e) <a id="structFRHAPI__GuideCreateRequest_1aa478c867e068bc846d2756183fce065e"></a>

#### `public bool `[`Ref11_IsSet`](#structFRHAPI__GuideCreateRequest_1a58134d8f07ef32996148014dc35f2162) <a id="structFRHAPI__GuideCreateRequest_1a58134d8f07ef32996148014dc35f2162"></a>

true if Ref11_Optional has been set to a value

#### `public bool `[`Ref11_IsNull`](#structFRHAPI__GuideCreateRequest_1a5a454d74b2580d52f2420af73c95337e) <a id="structFRHAPI__GuideCreateRequest_1a5a454d74b2580d52f2420af73c95337e"></a>

true if Ref11_Optional has been explicitly set to null

#### `public FString `[`Ref12_Optional`](#structFRHAPI__GuideCreateRequest_1a4de6fb6f851f41e3a0873062d94c581c) <a id="structFRHAPI__GuideCreateRequest_1a4de6fb6f851f41e3a0873062d94c581c"></a>

#### `public bool `[`Ref12_IsSet`](#structFRHAPI__GuideCreateRequest_1ac2b51d5101e9bb19a958194340042052) <a id="structFRHAPI__GuideCreateRequest_1ac2b51d5101e9bb19a958194340042052"></a>

true if Ref12_Optional has been set to a value

#### `public bool `[`Ref12_IsNull`](#structFRHAPI__GuideCreateRequest_1a9c1dabbc52ab29f986c26e355d4fba76) <a id="structFRHAPI__GuideCreateRequest_1a9c1dabbc52ab29f986c26e355d4fba76"></a>

true if Ref12_Optional has been explicitly set to null

#### `public FString `[`Ref13_Optional`](#structFRHAPI__GuideCreateRequest_1ae10f5d19ef1a5ff71a01490655cc4e34) <a id="structFRHAPI__GuideCreateRequest_1ae10f5d19ef1a5ff71a01490655cc4e34"></a>

#### `public bool `[`Ref13_IsSet`](#structFRHAPI__GuideCreateRequest_1ac547ff0f557b704fc4afe589f1fe7770) <a id="structFRHAPI__GuideCreateRequest_1ac547ff0f557b704fc4afe589f1fe7770"></a>

true if Ref13_Optional has been set to a value

#### `public bool `[`Ref13_IsNull`](#structFRHAPI__GuideCreateRequest_1abe3abb5f2a04b99e85adb37084ea5b5c) <a id="structFRHAPI__GuideCreateRequest_1abe3abb5f2a04b99e85adb37084ea5b5c"></a>

true if Ref13_Optional has been explicitly set to null

#### `public FString `[`Ref14_Optional`](#structFRHAPI__GuideCreateRequest_1aaf530f797b578eb61fb967ea6cf9f13c) <a id="structFRHAPI__GuideCreateRequest_1aaf530f797b578eb61fb967ea6cf9f13c"></a>

#### `public bool `[`Ref14_IsSet`](#structFRHAPI__GuideCreateRequest_1ab53614addd3dba6f8ed5082fda0b07c7) <a id="structFRHAPI__GuideCreateRequest_1ab53614addd3dba6f8ed5082fda0b07c7"></a>

true if Ref14_Optional has been set to a value

#### `public bool `[`Ref14_IsNull`](#structFRHAPI__GuideCreateRequest_1a4eecbf3d32214792e193cdc31d629f32) <a id="structFRHAPI__GuideCreateRequest_1a4eecbf3d32214792e193cdc31d629f32"></a>

true if Ref14_Optional has been explicitly set to null

#### `public FString `[`Ref15_Optional`](#structFRHAPI__GuideCreateRequest_1ab47cb2d1009a271ba141ed00573a2897) <a id="structFRHAPI__GuideCreateRequest_1ab47cb2d1009a271ba141ed00573a2897"></a>

#### `public bool `[`Ref15_IsSet`](#structFRHAPI__GuideCreateRequest_1a266d96442b778bad6f93613adc179105) <a id="structFRHAPI__GuideCreateRequest_1a266d96442b778bad6f93613adc179105"></a>

true if Ref15_Optional has been set to a value

#### `public bool `[`Ref15_IsNull`](#structFRHAPI__GuideCreateRequest_1a7d23b8cc7efa1e00775d88702af1bceb) <a id="structFRHAPI__GuideCreateRequest_1a7d23b8cc7efa1e00775d88702af1bceb"></a>

true if Ref15_Optional has been explicitly set to null

#### `public FString `[`Ref16_Optional`](#structFRHAPI__GuideCreateRequest_1a138dc2fa5ab359e1bcfd4f18e660c1b5) <a id="structFRHAPI__GuideCreateRequest_1a138dc2fa5ab359e1bcfd4f18e660c1b5"></a>

#### `public bool `[`Ref16_IsSet`](#structFRHAPI__GuideCreateRequest_1a467ad04dde172cb37215994b12ff441a) <a id="structFRHAPI__GuideCreateRequest_1a467ad04dde172cb37215994b12ff441a"></a>

true if Ref16_Optional has been set to a value

#### `public bool `[`Ref16_IsNull`](#structFRHAPI__GuideCreateRequest_1ab975f3882da3f7975b91344c1254f2cd) <a id="structFRHAPI__GuideCreateRequest_1ab975f3882da3f7975b91344c1254f2cd"></a>

true if Ref16_Optional has been explicitly set to null

#### `public FString `[`Ref17_Optional`](#structFRHAPI__GuideCreateRequest_1a04173c18b82320cf4c1b59a5796713fa) <a id="structFRHAPI__GuideCreateRequest_1a04173c18b82320cf4c1b59a5796713fa"></a>

#### `public bool `[`Ref17_IsSet`](#structFRHAPI__GuideCreateRequest_1a2040d810dbbf0e1e346236597f329945) <a id="structFRHAPI__GuideCreateRequest_1a2040d810dbbf0e1e346236597f329945"></a>

true if Ref17_Optional has been set to a value

#### `public bool `[`Ref17_IsNull`](#structFRHAPI__GuideCreateRequest_1a77b64eb4a44b30eb1aa66d0b9f551250) <a id="structFRHAPI__GuideCreateRequest_1a77b64eb4a44b30eb1aa66d0b9f551250"></a>

true if Ref17_Optional has been explicitly set to null

#### `public FString `[`Ref18_Optional`](#structFRHAPI__GuideCreateRequest_1a4285738f3e1299350aabb04b0f6ffa47) <a id="structFRHAPI__GuideCreateRequest_1a4285738f3e1299350aabb04b0f6ffa47"></a>

#### `public bool `[`Ref18_IsSet`](#structFRHAPI__GuideCreateRequest_1a833e843bac2607803629ff1bd95d3a61) <a id="structFRHAPI__GuideCreateRequest_1a833e843bac2607803629ff1bd95d3a61"></a>

true if Ref18_Optional has been set to a value

#### `public bool `[`Ref18_IsNull`](#structFRHAPI__GuideCreateRequest_1adc3e8e012d1ecf3f65e54d3a02c3dc86) <a id="structFRHAPI__GuideCreateRequest_1adc3e8e012d1ecf3f65e54d3a02c3dc86"></a>

true if Ref18_Optional has been explicitly set to null

#### `public FString `[`Ref19_Optional`](#structFRHAPI__GuideCreateRequest_1a1ada11121e5f13a90d405b17a3f89b25) <a id="structFRHAPI__GuideCreateRequest_1a1ada11121e5f13a90d405b17a3f89b25"></a>

#### `public bool `[`Ref19_IsSet`](#structFRHAPI__GuideCreateRequest_1aee8db93af092ef8a4ba5004c6b4e1048) <a id="structFRHAPI__GuideCreateRequest_1aee8db93af092ef8a4ba5004c6b4e1048"></a>

true if Ref19_Optional has been set to a value

#### `public bool `[`Ref19_IsNull`](#structFRHAPI__GuideCreateRequest_1a7da7e336ded6020737de862810068636) <a id="structFRHAPI__GuideCreateRequest_1a7da7e336ded6020737de862810068636"></a>

true if Ref19_Optional has been explicitly set to null

#### `public FString `[`Ref20_Optional`](#structFRHAPI__GuideCreateRequest_1ac7153d34bf6bf5c9a7eb5bc0247e7418) <a id="structFRHAPI__GuideCreateRequest_1ac7153d34bf6bf5c9a7eb5bc0247e7418"></a>

#### `public bool `[`Ref20_IsSet`](#structFRHAPI__GuideCreateRequest_1af61aadd4b2fcc79f34f9ce1f596ffa3b) <a id="structFRHAPI__GuideCreateRequest_1af61aadd4b2fcc79f34f9ce1f596ffa3b"></a>

true if Ref20_Optional has been set to a value

#### `public bool `[`Ref20_IsNull`](#structFRHAPI__GuideCreateRequest_1aeebb61d348c15e2af1bb50ce894bfd72) <a id="structFRHAPI__GuideCreateRequest_1aeebb61d348c15e2af1bb50ce894bfd72"></a>

true if Ref20_Optional has been explicitly set to null

#### `public FString `[`Ref21_Optional`](#structFRHAPI__GuideCreateRequest_1a67f73ca6e4f5421aded159b0babc1571) <a id="structFRHAPI__GuideCreateRequest_1a67f73ca6e4f5421aded159b0babc1571"></a>

#### `public bool `[`Ref21_IsSet`](#structFRHAPI__GuideCreateRequest_1af16757c7b928aed5e5f60c4d91374620) <a id="structFRHAPI__GuideCreateRequest_1af16757c7b928aed5e5f60c4d91374620"></a>

true if Ref21_Optional has been set to a value

#### `public bool `[`Ref21_IsNull`](#structFRHAPI__GuideCreateRequest_1a841a6933511ae6859b98a5e9c71ad9f0) <a id="structFRHAPI__GuideCreateRequest_1a841a6933511ae6859b98a5e9c71ad9f0"></a>

true if Ref21_Optional has been explicitly set to null

#### `public FString `[`Ref22_Optional`](#structFRHAPI__GuideCreateRequest_1aed3e9a9124f800be8d9d45aea13a0137) <a id="structFRHAPI__GuideCreateRequest_1aed3e9a9124f800be8d9d45aea13a0137"></a>

#### `public bool `[`Ref22_IsSet`](#structFRHAPI__GuideCreateRequest_1aaa521221a300d7c6b772c0e30643e1f9) <a id="structFRHAPI__GuideCreateRequest_1aaa521221a300d7c6b772c0e30643e1f9"></a>

true if Ref22_Optional has been set to a value

#### `public bool `[`Ref22_IsNull`](#structFRHAPI__GuideCreateRequest_1a9a2516b25eba93be66a37480542292a3) <a id="structFRHAPI__GuideCreateRequest_1a9a2516b25eba93be66a37480542292a3"></a>

true if Ref22_Optional has been explicitly set to null

#### `public FString `[`Ref23_Optional`](#structFRHAPI__GuideCreateRequest_1a23ad7793fbaccfcc4e522d9a84e8a2f1) <a id="structFRHAPI__GuideCreateRequest_1a23ad7793fbaccfcc4e522d9a84e8a2f1"></a>

#### `public bool `[`Ref23_IsSet`](#structFRHAPI__GuideCreateRequest_1ac69ccb70fd52834297eadfce6c39d6f0) <a id="structFRHAPI__GuideCreateRequest_1ac69ccb70fd52834297eadfce6c39d6f0"></a>

true if Ref23_Optional has been set to a value

#### `public bool `[`Ref23_IsNull`](#structFRHAPI__GuideCreateRequest_1a7c367946883e6bd27bfa3d97c5cc8ed3) <a id="structFRHAPI__GuideCreateRequest_1a7c367946883e6bd27bfa3d97c5cc8ed3"></a>

true if Ref23_Optional has been explicitly set to null

#### `public FString `[`Ref24_Optional`](#structFRHAPI__GuideCreateRequest_1aa12ef3cb7169ea9a9fe8604d3b26abb5) <a id="structFRHAPI__GuideCreateRequest_1aa12ef3cb7169ea9a9fe8604d3b26abb5"></a>

#### `public bool `[`Ref24_IsSet`](#structFRHAPI__GuideCreateRequest_1a5eb636acfb4233af5e6dc57737a0473a) <a id="structFRHAPI__GuideCreateRequest_1a5eb636acfb4233af5e6dc57737a0473a"></a>

true if Ref24_Optional has been set to a value

#### `public bool `[`Ref24_IsNull`](#structFRHAPI__GuideCreateRequest_1a723ea3698573e52e2fd58bb1cfcb7e6f) <a id="structFRHAPI__GuideCreateRequest_1a723ea3698573e52e2fd58bb1cfcb7e6f"></a>

true if Ref24_Optional has been explicitly set to null

#### `public FString `[`Ref25_Optional`](#structFRHAPI__GuideCreateRequest_1ab238c0d9aae17fb51031b80e76db0734) <a id="structFRHAPI__GuideCreateRequest_1ab238c0d9aae17fb51031b80e76db0734"></a>

#### `public bool `[`Ref25_IsSet`](#structFRHAPI__GuideCreateRequest_1a4ab55740cb048324e3ae71e729343dff) <a id="structFRHAPI__GuideCreateRequest_1a4ab55740cb048324e3ae71e729343dff"></a>

true if Ref25_Optional has been set to a value

#### `public bool `[`Ref25_IsNull`](#structFRHAPI__GuideCreateRequest_1ac1f634a969bc1b55990cd9f02e028c5b) <a id="structFRHAPI__GuideCreateRequest_1ac1f634a969bc1b55990cd9f02e028c5b"></a>

true if Ref25_Optional has been explicitly set to null

#### `public FString `[`Ref26_Optional`](#structFRHAPI__GuideCreateRequest_1a30c2e50da480d582ef5d9d6b92369c54) <a id="structFRHAPI__GuideCreateRequest_1a30c2e50da480d582ef5d9d6b92369c54"></a>

#### `public bool `[`Ref26_IsSet`](#structFRHAPI__GuideCreateRequest_1a1988b7c93774e13f6d5816e3e60138da) <a id="structFRHAPI__GuideCreateRequest_1a1988b7c93774e13f6d5816e3e60138da"></a>

true if Ref26_Optional has been set to a value

#### `public bool `[`Ref26_IsNull`](#structFRHAPI__GuideCreateRequest_1a04be63c30e801ded8e8ef7ed654d0eb2) <a id="structFRHAPI__GuideCreateRequest_1a04be63c30e801ded8e8ef7ed654d0eb2"></a>

true if Ref26_Optional has been explicitly set to null

#### `public FString `[`Ref27_Optional`](#structFRHAPI__GuideCreateRequest_1a27467e3ff42617fe5695267ea1970504) <a id="structFRHAPI__GuideCreateRequest_1a27467e3ff42617fe5695267ea1970504"></a>

#### `public bool `[`Ref27_IsSet`](#structFRHAPI__GuideCreateRequest_1ab7aefbcbb3f9d670982d95272252b71b) <a id="structFRHAPI__GuideCreateRequest_1ab7aefbcbb3f9d670982d95272252b71b"></a>

true if Ref27_Optional has been set to a value

#### `public bool `[`Ref27_IsNull`](#structFRHAPI__GuideCreateRequest_1a21e7183cb1e6471738bc558cbb60274b) <a id="structFRHAPI__GuideCreateRequest_1a21e7183cb1e6471738bc558cbb60274b"></a>

true if Ref27_Optional has been explicitly set to null

#### `public FString `[`Ref28_Optional`](#structFRHAPI__GuideCreateRequest_1a0c2f1afb659bba4551600615187e11c1) <a id="structFRHAPI__GuideCreateRequest_1a0c2f1afb659bba4551600615187e11c1"></a>

#### `public bool `[`Ref28_IsSet`](#structFRHAPI__GuideCreateRequest_1ac3486d805581a3b922c484af14b7e7f8) <a id="structFRHAPI__GuideCreateRequest_1ac3486d805581a3b922c484af14b7e7f8"></a>

true if Ref28_Optional has been set to a value

#### `public bool `[`Ref28_IsNull`](#structFRHAPI__GuideCreateRequest_1ae65b76b0bb1317a01d17c720d1f5ec06) <a id="structFRHAPI__GuideCreateRequest_1ae65b76b0bb1317a01d17c720d1f5ec06"></a>

true if Ref28_Optional has been explicitly set to null

#### `public FString `[`Ref29_Optional`](#structFRHAPI__GuideCreateRequest_1adda349eca91bd67a5e3fef875cda5f47) <a id="structFRHAPI__GuideCreateRequest_1adda349eca91bd67a5e3fef875cda5f47"></a>

#### `public bool `[`Ref29_IsSet`](#structFRHAPI__GuideCreateRequest_1a5b2210fe665de5f1b631b1042aab7c90) <a id="structFRHAPI__GuideCreateRequest_1a5b2210fe665de5f1b631b1042aab7c90"></a>

true if Ref29_Optional has been set to a value

#### `public bool `[`Ref29_IsNull`](#structFRHAPI__GuideCreateRequest_1afaed0d0d1a8729e1ce9f17582417b2fa) <a id="structFRHAPI__GuideCreateRequest_1afaed0d0d1a8729e1ce9f17582417b2fa"></a>

true if Ref29_Optional has been explicitly set to null

#### `public FString `[`Ref30_Optional`](#structFRHAPI__GuideCreateRequest_1a60a82a0a8f68c888cbcf8d4558cce08f) <a id="structFRHAPI__GuideCreateRequest_1a60a82a0a8f68c888cbcf8d4558cce08f"></a>

#### `public bool `[`Ref30_IsSet`](#structFRHAPI__GuideCreateRequest_1a855436cb64e7a44b519ebadda97d9ab3) <a id="structFRHAPI__GuideCreateRequest_1a855436cb64e7a44b519ebadda97d9ab3"></a>

true if Ref30_Optional has been set to a value

#### `public bool `[`Ref30_IsNull`](#structFRHAPI__GuideCreateRequest_1aefc38fa5e5057adf5092c82ec56ecbcf) <a id="structFRHAPI__GuideCreateRequest_1aefc38fa5e5057adf5092c82ec56ecbcf"></a>

true if Ref30_Optional has been explicitly set to null

#### `public FString `[`Ref31_Optional`](#structFRHAPI__GuideCreateRequest_1aa70d201ba5eab9ffb53c27731b8d0093) <a id="structFRHAPI__GuideCreateRequest_1aa70d201ba5eab9ffb53c27731b8d0093"></a>

#### `public bool `[`Ref31_IsSet`](#structFRHAPI__GuideCreateRequest_1a86f6ed625f816d18ac8cbac5c0c34d76) <a id="structFRHAPI__GuideCreateRequest_1a86f6ed625f816d18ac8cbac5c0c34d76"></a>

true if Ref31_Optional has been set to a value

#### `public bool `[`Ref31_IsNull`](#structFRHAPI__GuideCreateRequest_1a9228b8be6faab658d99397d21ca21ee9) <a id="structFRHAPI__GuideCreateRequest_1a9228b8be6faab658d99397d21ca21ee9"></a>

true if Ref31_Optional has been explicitly set to null

#### `public FString `[`Ref32_Optional`](#structFRHAPI__GuideCreateRequest_1a2a043957ac66d2607e4253b40d10ed87) <a id="structFRHAPI__GuideCreateRequest_1a2a043957ac66d2607e4253b40d10ed87"></a>

#### `public bool `[`Ref32_IsSet`](#structFRHAPI__GuideCreateRequest_1aed825aaabb539ba82d9caf19e8f7e799) <a id="structFRHAPI__GuideCreateRequest_1aed825aaabb539ba82d9caf19e8f7e799"></a>

true if Ref32_Optional has been set to a value

#### `public bool `[`Ref32_IsNull`](#structFRHAPI__GuideCreateRequest_1a7c5e7294931fe71dbf12ee1f57eaecf1) <a id="structFRHAPI__GuideCreateRequest_1a7c5e7294931fe71dbf12ee1f57eaecf1"></a>

true if Ref32_Optional has been explicitly set to null

#### `public ERHAPI_GuideEntityType `[`OwnerEntityType_Optional`](#structFRHAPI__GuideCreateRequest_1a458bc81ce5e2035f298b4a1f6951e93a) <a id="structFRHAPI__GuideCreateRequest_1a458bc81ce5e2035f298b4a1f6951e93a"></a>

#### `public bool `[`OwnerEntityType_IsSet`](#structFRHAPI__GuideCreateRequest_1a9830dd90fe7e13ad964b62e7b2a48833) <a id="structFRHAPI__GuideCreateRequest_1a9830dd90fe7e13ad964b62e7b2a48833"></a>

true if OwnerEntityType_Optional has been set to a value

#### `public bool `[`OwnerEntityType_IsNull`](#structFRHAPI__GuideCreateRequest_1a0007d4d27d8ca9e70d72d263e72f57fc) <a id="structFRHAPI__GuideCreateRequest_1a0007d4d27d8ca9e70d72d263e72f57fc"></a>

true if OwnerEntityType_Optional has been explicitly set to null

#### `public FString `[`OwnerEntityId_Optional`](#structFRHAPI__GuideCreateRequest_1a85c66df1baae6f47f99e68ff2bb488d0) <a id="structFRHAPI__GuideCreateRequest_1a85c66df1baae6f47f99e68ff2bb488d0"></a>

#### `public bool `[`OwnerEntityId_IsSet`](#structFRHAPI__GuideCreateRequest_1a2963f937ce0db42e623c037f1101efa7) <a id="structFRHAPI__GuideCreateRequest_1a2963f937ce0db42e623c037f1101efa7"></a>

true if OwnerEntityId_Optional has been set to a value

#### `public bool `[`OwnerEntityId_IsNull`](#structFRHAPI__GuideCreateRequest_1a51dcab32118e5cf5a6f5fd724135a704) <a id="structFRHAPI__GuideCreateRequest_1a51dcab32118e5cf5a6f5fd724135a704"></a>

true if OwnerEntityId_Optional has been explicitly set to null

#### `public FString `[`Content_Optional`](#structFRHAPI__GuideCreateRequest_1a3bdb62abc23d2ef9ec1e8ebe4e4821d0) <a id="structFRHAPI__GuideCreateRequest_1a3bdb62abc23d2ef9ec1e8ebe4e4821d0"></a>

#### `public bool `[`Content_IsSet`](#structFRHAPI__GuideCreateRequest_1a9a7543e3b4e05e856d8f1df39d0a41e4) <a id="structFRHAPI__GuideCreateRequest_1a9a7543e3b4e05e856d8f1df39d0a41e4"></a>

true if Content_Optional has been set to a value

#### `public bool `[`Content_IsNull`](#structFRHAPI__GuideCreateRequest_1ad3733c1263fb377ea3be6781ab4bf101) <a id="structFRHAPI__GuideCreateRequest_1ad3733c1263fb377ea3be6781ab4bf101"></a>

true if Content_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > `[`Sections_Optional`](#structFRHAPI__GuideCreateRequest_1a66626c31e075945ee600dfd7cc3c309d) <a id="structFRHAPI__GuideCreateRequest_1a66626c31e075945ee600dfd7cc3c309d"></a>

#### `public bool `[`Sections_IsSet`](#structFRHAPI__GuideCreateRequest_1ae26342c95e7c635466aeb1c290c6897d) <a id="structFRHAPI__GuideCreateRequest_1ae26342c95e7c635466aeb1c290c6897d"></a>

true if Sections_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__GuideCreateRequest_1a5dbe6a6bfc3a648f8740619654a7be49)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__GuideCreateRequest_1a5dbe6a6bfc3a648f8740619654a7be49"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__GuideCreateRequest_1aca0e0807afd3877a23ce4de502aa1fcd)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__GuideCreateRequest_1aca0e0807afd3877a23ce4de502aa1fcd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetGuideType`](#structFRHAPI__GuideCreateRequest_1a0c866cd3f0d76d1e7477a6f5c1547178)`()` <a id="structFRHAPI__GuideCreateRequest_1a0c866cd3f0d76d1e7477a6f5c1547178"></a>

Gets the value of GuideType.

#### `public inline FORCEINLINE const FString & `[`GetGuideType`](#structFRHAPI__GuideCreateRequest_1ab5bcf473b3ea8901581fc3fb7d358831)`() const` <a id="structFRHAPI__GuideCreateRequest_1ab5bcf473b3ea8901581fc3fb7d358831"></a>

Gets the value of GuideType.

#### `public inline FORCEINLINE void `[`SetGuideType`](#structFRHAPI__GuideCreateRequest_1a8b5eb1bf42c16652fcf867ba7742e46b)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a8b5eb1bf42c16652fcf867ba7742e46b"></a>

Sets the value of GuideType.

#### `public inline FORCEINLINE void `[`SetGuideType`](#structFRHAPI__GuideCreateRequest_1a5f66dbb2b51d79fff65553daedf349e8)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a5f66dbb2b51d79fff65553daedf349e8"></a>

Sets the value of GuideType using move semantics.

#### `public inline FORCEINLINE FString & `[`GetLanguage`](#structFRHAPI__GuideCreateRequest_1a6d2fe119ac20a5f73bd1e67bf3543894)`()` <a id="structFRHAPI__GuideCreateRequest_1a6d2fe119ac20a5f73bd1e67bf3543894"></a>

Gets the value of Language.

#### `public inline FORCEINLINE const FString & `[`GetLanguage`](#structFRHAPI__GuideCreateRequest_1af176317a6893c5a79520132fb3f035cf)`() const` <a id="structFRHAPI__GuideCreateRequest_1af176317a6893c5a79520132fb3f035cf"></a>

Gets the value of Language.

#### `public inline FORCEINLINE void `[`SetLanguage`](#structFRHAPI__GuideCreateRequest_1ae8e710f5094b5896a7f025c052e01353)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1ae8e710f5094b5896a7f025c052e01353"></a>

Sets the value of Language.

#### `public inline FORCEINLINE void `[`SetLanguage`](#structFRHAPI__GuideCreateRequest_1a26f3303c2717a4bdc9ada43f77865a22)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a26f3303c2717a4bdc9ada43f77865a22"></a>

Sets the value of Language using move semantics.

#### `public inline FORCEINLINE FString & `[`GetGameVersion`](#structFRHAPI__GuideCreateRequest_1a68808049a090a78261485565984d6eb3)`()` <a id="structFRHAPI__GuideCreateRequest_1a68808049a090a78261485565984d6eb3"></a>

Gets the value of GameVersion.

#### `public inline FORCEINLINE const FString & `[`GetGameVersion`](#structFRHAPI__GuideCreateRequest_1aa46564c9fbfe12d7ec31e5f870491938)`() const` <a id="structFRHAPI__GuideCreateRequest_1aa46564c9fbfe12d7ec31e5f870491938"></a>

Gets the value of GameVersion.

#### `public inline FORCEINLINE void `[`SetGameVersion`](#structFRHAPI__GuideCreateRequest_1a0cebcc5ff4da925f650402ea1d033196)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a0cebcc5ff4da925f650402ea1d033196"></a>

Sets the value of GameVersion.

#### `public inline FORCEINLINE void `[`SetGameVersion`](#structFRHAPI__GuideCreateRequest_1aa1daee814adf44cde0d8b8de030e1488)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1aa1daee814adf44cde0d8b8de030e1488"></a>

Sets the value of GameVersion using move semantics.

#### `public inline FORCEINLINE FString & `[`GetName`](#structFRHAPI__GuideCreateRequest_1a15874a7f4df6235d52a0ea6d3f1fc922)`()` <a id="structFRHAPI__GuideCreateRequest_1a15874a7f4df6235d52a0ea6d3f1fc922"></a>

Gets the value of Name.

#### `public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__GuideCreateRequest_1a5eccc330965ada620ccfa6efc2ec76eb)`() const` <a id="structFRHAPI__GuideCreateRequest_1a5eccc330965ada620ccfa6efc2ec76eb"></a>

Gets the value of Name.

#### `public inline FORCEINLINE void `[`SetName`](#structFRHAPI__GuideCreateRequest_1aeae1c236abf7db1ac4901beb86534ebd)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1aeae1c236abf7db1ac4901beb86534ebd"></a>

Sets the value of Name.

#### `public inline FORCEINLINE void `[`SetName`](#structFRHAPI__GuideCreateRequest_1ab4d266876035d110d0918643437b7617)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1ab4d266876035d110d0918643437b7617"></a>

Sets the value of Name using move semantics.

#### `public inline FORCEINLINE FString & `[`GetShortDesc`](#structFRHAPI__GuideCreateRequest_1a0a9adfb1ff7437acac615124ef8c702a)`()` <a id="structFRHAPI__GuideCreateRequest_1a0a9adfb1ff7437acac615124ef8c702a"></a>

Gets the value of ShortDesc_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetShortDesc`](#structFRHAPI__GuideCreateRequest_1a6ef65510b31aa004c58811c60ea92d72)`() const` <a id="structFRHAPI__GuideCreateRequest_1a6ef65510b31aa004c58811c60ea92d72"></a>

Gets the value of ShortDesc_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetShortDesc`](#structFRHAPI__GuideCreateRequest_1a0d15cb9798b69db55f94991f7c347b40)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a0d15cb9798b69db55f94991f7c347b40"></a>

Gets the value of ShortDesc_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetShortDesc`](#structFRHAPI__GuideCreateRequest_1a977d172cb50bb353f7bf9bcbf7eafd81)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a977d172cb50bb353f7bf9bcbf7eafd81"></a>

Fills OutValue with the value of ShortDesc_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetShortDescOrNull`](#structFRHAPI__GuideCreateRequest_1a3df1b19974550484a23a50810a59dafe)`()` <a id="structFRHAPI__GuideCreateRequest_1a3df1b19974550484a23a50810a59dafe"></a>

Returns a pointer to ShortDesc_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetShortDescOrNull`](#structFRHAPI__GuideCreateRequest_1a45c5a057ada80f4dff359847d263e3dd)`() const` <a id="structFRHAPI__GuideCreateRequest_1a45c5a057ada80f4dff359847d263e3dd"></a>

Returns a pointer to ShortDesc_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetShortDesc`](#structFRHAPI__GuideCreateRequest_1a4bf152b95b8ce6f5e1c8d0fc124b6307)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a4bf152b95b8ce6f5e1c8d0fc124b6307"></a>

Sets the value of ShortDesc_Optional and also sets ShortDesc_IsSet to true.

#### `public inline FORCEINLINE void `[`SetShortDesc`](#structFRHAPI__GuideCreateRequest_1a7f722d6509dc7622d76f2e7a01f57e76)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a7f722d6509dc7622d76f2e7a01f57e76"></a>

Sets the value of ShortDesc_Optional and also sets ShortDesc_IsSet to true using move semantics.

#### `public inline void `[`ClearShortDesc`](#structFRHAPI__GuideCreateRequest_1abb2dcbba06cb661d752fd1d55c23e886)`()` <a id="structFRHAPI__GuideCreateRequest_1abb2dcbba06cb661d752fd1d55c23e886"></a>

Clears the value of ShortDesc_Optional and sets ShortDesc_IsSet to false.

#### `public inline FORCEINLINE void `[`SetShortDescToNull`](#structFRHAPI__GuideCreateRequest_1a8c80cbe05d91b6a13f426bddb18142a2)`()` <a id="structFRHAPI__GuideCreateRequest_1a8c80cbe05d91b6a13f426bddb18142a2"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsShortDescNull`](#structFRHAPI__GuideCreateRequest_1af2ec04ace7419cc049f0cd5e4b9035b4)`() const` <a id="structFRHAPI__GuideCreateRequest_1af2ec04ace7419cc049f0cd5e4b9035b4"></a>

Checks whether ShortDesc_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetV`](#structFRHAPI__GuideCreateRequest_1a2a536ec7f053192156a7affc122b3e45)`()` <a id="structFRHAPI__GuideCreateRequest_1a2a536ec7f053192156a7affc122b3e45"></a>

Gets the value of V_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetV`](#structFRHAPI__GuideCreateRequest_1a022ee74b8e39733cb6bd0b31a8f57a90)`() const` <a id="structFRHAPI__GuideCreateRequest_1a022ee74b8e39733cb6bd0b31a8f57a90"></a>

Gets the value of V_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetV`](#structFRHAPI__GuideCreateRequest_1a1ad4c72b224148ab161b45a9dcc35a91)`(const int32 & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a1ad4c72b224148ab161b45a9dcc35a91"></a>

Gets the value of V_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetV`](#structFRHAPI__GuideCreateRequest_1a289f7ecf3dd17a059c5ada7381cc0872)`(int32 & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a289f7ecf3dd17a059c5ada7381cc0872"></a>

Fills OutValue with the value of V_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetVOrNull`](#structFRHAPI__GuideCreateRequest_1a2c006c6cdba8c293ae4fbd686d5a09df)`()` <a id="structFRHAPI__GuideCreateRequest_1a2c006c6cdba8c293ae4fbd686d5a09df"></a>

Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetVOrNull`](#structFRHAPI__GuideCreateRequest_1aec36020ec04ed56b2f948733a3eebcd8)`() const` <a id="structFRHAPI__GuideCreateRequest_1aec36020ec04ed56b2f948733a3eebcd8"></a>

Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetV`](#structFRHAPI__GuideCreateRequest_1a921a610078d44b84ea67d2877286c698)`(const int32 & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a921a610078d44b84ea67d2877286c698"></a>

Sets the value of V_Optional and also sets V_IsSet to true.

#### `public inline FORCEINLINE void `[`SetV`](#structFRHAPI__GuideCreateRequest_1afc9cce39c49283b324c6849516309adc)`(int32 && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1afc9cce39c49283b324c6849516309adc"></a>

Sets the value of V_Optional and also sets V_IsSet to true using move semantics.

#### `public inline void `[`ClearV`](#structFRHAPI__GuideCreateRequest_1a0c3a1ff7787f482fa10ad60ddde3ea38)`()` <a id="structFRHAPI__GuideCreateRequest_1a0c3a1ff7787f482fa10ad60ddde3ea38"></a>

Clears the value of V_Optional and sets V_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_V`](#structFRHAPI__GuideCreateRequest_1a4ef3a835c6393e2cdd8b918df5d69d93)`()` <a id="structFRHAPI__GuideCreateRequest_1a4ef3a835c6393e2cdd8b918df5d69d93"></a>

Returns the default value of V.

#### `public inline FORCEINLINE int32 & `[`GetPromotionPriority`](#structFRHAPI__GuideCreateRequest_1a4e65366801b70ed51107ca4fef9d4f2d)`()` <a id="structFRHAPI__GuideCreateRequest_1a4e65366801b70ed51107ca4fef9d4f2d"></a>

Gets the value of PromotionPriority_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPromotionPriority`](#structFRHAPI__GuideCreateRequest_1a644a8d09e3b964d654d63d7518ba8499)`() const` <a id="structFRHAPI__GuideCreateRequest_1a644a8d09e3b964d654d63d7518ba8499"></a>

Gets the value of PromotionPriority_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPromotionPriority`](#structFRHAPI__GuideCreateRequest_1a8b89f0c0efd183a77eafc5f22011898a)`(const int32 & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a8b89f0c0efd183a77eafc5f22011898a"></a>

Gets the value of PromotionPriority_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPromotionPriority`](#structFRHAPI__GuideCreateRequest_1ada52523a1e758cc6154c8f5515c6368d)`(int32 & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1ada52523a1e758cc6154c8f5515c6368d"></a>

Fills OutValue with the value of PromotionPriority_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPromotionPriorityOrNull`](#structFRHAPI__GuideCreateRequest_1a8fd62f50957fb0aebb897df4dee29830)`()` <a id="structFRHAPI__GuideCreateRequest_1a8fd62f50957fb0aebb897df4dee29830"></a>

Returns a pointer to PromotionPriority_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPromotionPriorityOrNull`](#structFRHAPI__GuideCreateRequest_1a99cedae572592954c45ef78b19abff89)`() const` <a id="structFRHAPI__GuideCreateRequest_1a99cedae572592954c45ef78b19abff89"></a>

Returns a pointer to PromotionPriority_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPromotionPriority`](#structFRHAPI__GuideCreateRequest_1a74c6e6efad827bc0b47195ea5f8142f4)`(const int32 & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a74c6e6efad827bc0b47195ea5f8142f4"></a>

Sets the value of PromotionPriority_Optional and also sets PromotionPriority_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPromotionPriority`](#structFRHAPI__GuideCreateRequest_1a7c424595f6676b945980bf0f32c4715f)`(int32 && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a7c424595f6676b945980bf0f32c4715f"></a>

Sets the value of PromotionPriority_Optional and also sets PromotionPriority_IsSet to true using move semantics.

#### `public inline void `[`ClearPromotionPriority`](#structFRHAPI__GuideCreateRequest_1ac6c1f7f982ca9f5e2ea5f18c51b64c71)`()` <a id="structFRHAPI__GuideCreateRequest_1ac6c1f7f982ca9f5e2ea5f18c51b64c71"></a>

Clears the value of PromotionPriority_Optional and sets PromotionPriority_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PromotionPriority`](#structFRHAPI__GuideCreateRequest_1adb97633768deb0abc101b67c1ae8c3e6)`()` <a id="structFRHAPI__GuideCreateRequest_1adb97633768deb0abc101b67c1ae8c3e6"></a>

Returns the default value of PromotionPriority.

#### `public inline FORCEINLINE FString & `[`GetRef1`](#structFRHAPI__GuideCreateRequest_1ae7aeea0c0e7929df8b125ac069166f83)`()` <a id="structFRHAPI__GuideCreateRequest_1ae7aeea0c0e7929df8b125ac069166f83"></a>

Gets the value of Ref1_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef1`](#structFRHAPI__GuideCreateRequest_1abde50b9dce2ae8c8edde4c2b6a8129ff)`() const` <a id="structFRHAPI__GuideCreateRequest_1abde50b9dce2ae8c8edde4c2b6a8129ff"></a>

Gets the value of Ref1_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef1`](#structFRHAPI__GuideCreateRequest_1a75ade097618d5ef01dd532c8024ae4ec)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a75ade097618d5ef01dd532c8024ae4ec"></a>

Gets the value of Ref1_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef1`](#structFRHAPI__GuideCreateRequest_1aab851e5535c90c1e0fd454ce0350e056)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1aab851e5535c90c1e0fd454ce0350e056"></a>

Fills OutValue with the value of Ref1_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef1OrNull`](#structFRHAPI__GuideCreateRequest_1af184cc0465c15e1af83079c818605b17)`()` <a id="structFRHAPI__GuideCreateRequest_1af184cc0465c15e1af83079c818605b17"></a>

Returns a pointer to Ref1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef1OrNull`](#structFRHAPI__GuideCreateRequest_1a574255a50a95be3f736c93f85b8d8983)`() const` <a id="structFRHAPI__GuideCreateRequest_1a574255a50a95be3f736c93f85b8d8983"></a>

Returns a pointer to Ref1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef1`](#structFRHAPI__GuideCreateRequest_1aa9266fbf23a55ba35ada24ba636c96ea)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1aa9266fbf23a55ba35ada24ba636c96ea"></a>

Sets the value of Ref1_Optional and also sets Ref1_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef1`](#structFRHAPI__GuideCreateRequest_1a4ff5a59be81c56389a6a9336ce0a8eac)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a4ff5a59be81c56389a6a9336ce0a8eac"></a>

Sets the value of Ref1_Optional and also sets Ref1_IsSet to true using move semantics.

#### `public inline void `[`ClearRef1`](#structFRHAPI__GuideCreateRequest_1a863d330e30ef472c25008c77a0c3ec60)`()` <a id="structFRHAPI__GuideCreateRequest_1a863d330e30ef472c25008c77a0c3ec60"></a>

Clears the value of Ref1_Optional and sets Ref1_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef1ToNull`](#structFRHAPI__GuideCreateRequest_1a281fb3c22c8c113513fd0636eec0cd9f)`()` <a id="structFRHAPI__GuideCreateRequest_1a281fb3c22c8c113513fd0636eec0cd9f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef1Null`](#structFRHAPI__GuideCreateRequest_1a8957293d7c1ab03f674a06fa74bf0046)`() const` <a id="structFRHAPI__GuideCreateRequest_1a8957293d7c1ab03f674a06fa74bf0046"></a>

Checks whether Ref1_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef2`](#structFRHAPI__GuideCreateRequest_1aba3f8f2e314c01e6ee490dbe1ecc5b4b)`()` <a id="structFRHAPI__GuideCreateRequest_1aba3f8f2e314c01e6ee490dbe1ecc5b4b"></a>

Gets the value of Ref2_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef2`](#structFRHAPI__GuideCreateRequest_1aa75e0f4e71d96e46d3cf7886e46184eb)`() const` <a id="structFRHAPI__GuideCreateRequest_1aa75e0f4e71d96e46d3cf7886e46184eb"></a>

Gets the value of Ref2_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef2`](#structFRHAPI__GuideCreateRequest_1a1cf8870ccdb2f6b50345628911dd8adf)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a1cf8870ccdb2f6b50345628911dd8adf"></a>

Gets the value of Ref2_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef2`](#structFRHAPI__GuideCreateRequest_1a0b3eb50687f8f07de00120df683b70ba)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a0b3eb50687f8f07de00120df683b70ba"></a>

Fills OutValue with the value of Ref2_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef2OrNull`](#structFRHAPI__GuideCreateRequest_1a4f95d167cdd527017d3907c542530e04)`()` <a id="structFRHAPI__GuideCreateRequest_1a4f95d167cdd527017d3907c542530e04"></a>

Returns a pointer to Ref2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef2OrNull`](#structFRHAPI__GuideCreateRequest_1a90710aa1b289085cdb49346d9238b7ec)`() const` <a id="structFRHAPI__GuideCreateRequest_1a90710aa1b289085cdb49346d9238b7ec"></a>

Returns a pointer to Ref2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef2`](#structFRHAPI__GuideCreateRequest_1aebe7b7e6b476dfb472219873ea2e860c)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1aebe7b7e6b476dfb472219873ea2e860c"></a>

Sets the value of Ref2_Optional and also sets Ref2_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef2`](#structFRHAPI__GuideCreateRequest_1adc55409c6c1e3a3db9940122790df44a)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1adc55409c6c1e3a3db9940122790df44a"></a>

Sets the value of Ref2_Optional and also sets Ref2_IsSet to true using move semantics.

#### `public inline void `[`ClearRef2`](#structFRHAPI__GuideCreateRequest_1ac51dd28e44c83d288483780cf5fafb58)`()` <a id="structFRHAPI__GuideCreateRequest_1ac51dd28e44c83d288483780cf5fafb58"></a>

Clears the value of Ref2_Optional and sets Ref2_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef2ToNull`](#structFRHAPI__GuideCreateRequest_1a065909223cf0d3ddcfdbf25f0fcf4225)`()` <a id="structFRHAPI__GuideCreateRequest_1a065909223cf0d3ddcfdbf25f0fcf4225"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef2Null`](#structFRHAPI__GuideCreateRequest_1a16b68ea94a6e747a1c1931ae82106bd5)`() const` <a id="structFRHAPI__GuideCreateRequest_1a16b68ea94a6e747a1c1931ae82106bd5"></a>

Checks whether Ref2_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef3`](#structFRHAPI__GuideCreateRequest_1af22b53ecb8bd8f617417506d63425f08)`()` <a id="structFRHAPI__GuideCreateRequest_1af22b53ecb8bd8f617417506d63425f08"></a>

Gets the value of Ref3_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef3`](#structFRHAPI__GuideCreateRequest_1a07fd39703b5260ef26da7b4ee9033c13)`() const` <a id="structFRHAPI__GuideCreateRequest_1a07fd39703b5260ef26da7b4ee9033c13"></a>

Gets the value of Ref3_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef3`](#structFRHAPI__GuideCreateRequest_1a44965d6428a7596702e1150e63269e19)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a44965d6428a7596702e1150e63269e19"></a>

Gets the value of Ref3_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef3`](#structFRHAPI__GuideCreateRequest_1a4e4e66ce3ff5381439eccf179fe68b40)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a4e4e66ce3ff5381439eccf179fe68b40"></a>

Fills OutValue with the value of Ref3_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef3OrNull`](#structFRHAPI__GuideCreateRequest_1a071e9934b651e7d8d586e93047ef9b65)`()` <a id="structFRHAPI__GuideCreateRequest_1a071e9934b651e7d8d586e93047ef9b65"></a>

Returns a pointer to Ref3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef3OrNull`](#structFRHAPI__GuideCreateRequest_1a0877c488b733b69f6840055696a7ef0f)`() const` <a id="structFRHAPI__GuideCreateRequest_1a0877c488b733b69f6840055696a7ef0f"></a>

Returns a pointer to Ref3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef3`](#structFRHAPI__GuideCreateRequest_1a82c9dd9bd1de3e6b1f8b11652ad58806)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a82c9dd9bd1de3e6b1f8b11652ad58806"></a>

Sets the value of Ref3_Optional and also sets Ref3_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef3`](#structFRHAPI__GuideCreateRequest_1a95c78e1bcb5b010d2d2f260ce21b94fe)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a95c78e1bcb5b010d2d2f260ce21b94fe"></a>

Sets the value of Ref3_Optional and also sets Ref3_IsSet to true using move semantics.

#### `public inline void `[`ClearRef3`](#structFRHAPI__GuideCreateRequest_1a73c21d912368793b5a00251e54dd9f43)`()` <a id="structFRHAPI__GuideCreateRequest_1a73c21d912368793b5a00251e54dd9f43"></a>

Clears the value of Ref3_Optional and sets Ref3_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef3ToNull`](#structFRHAPI__GuideCreateRequest_1a477b3e2f1794c3f644f61e9011ae5fba)`()` <a id="structFRHAPI__GuideCreateRequest_1a477b3e2f1794c3f644f61e9011ae5fba"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef3Null`](#structFRHAPI__GuideCreateRequest_1a96e8aa9acdad5c17527e2364d04e1f14)`() const` <a id="structFRHAPI__GuideCreateRequest_1a96e8aa9acdad5c17527e2364d04e1f14"></a>

Checks whether Ref3_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef4`](#structFRHAPI__GuideCreateRequest_1aa4c67d7f956717c58399510e2568477f)`()` <a id="structFRHAPI__GuideCreateRequest_1aa4c67d7f956717c58399510e2568477f"></a>

Gets the value of Ref4_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef4`](#structFRHAPI__GuideCreateRequest_1a698d1600e44dd7392e333fa146f6a0f5)`() const` <a id="structFRHAPI__GuideCreateRequest_1a698d1600e44dd7392e333fa146f6a0f5"></a>

Gets the value of Ref4_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef4`](#structFRHAPI__GuideCreateRequest_1ad16dbbdd60d299c3f3d4b112b2314e94)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1ad16dbbdd60d299c3f3d4b112b2314e94"></a>

Gets the value of Ref4_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef4`](#structFRHAPI__GuideCreateRequest_1a28a3359bde897b6d22e2d9007fbb5315)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a28a3359bde897b6d22e2d9007fbb5315"></a>

Fills OutValue with the value of Ref4_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef4OrNull`](#structFRHAPI__GuideCreateRequest_1a963ffdc111a5b67a41274915dfd7b4c7)`()` <a id="structFRHAPI__GuideCreateRequest_1a963ffdc111a5b67a41274915dfd7b4c7"></a>

Returns a pointer to Ref4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef4OrNull`](#structFRHAPI__GuideCreateRequest_1ab2c82b0cecaf7b20c54bc5801e5312ce)`() const` <a id="structFRHAPI__GuideCreateRequest_1ab2c82b0cecaf7b20c54bc5801e5312ce"></a>

Returns a pointer to Ref4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef4`](#structFRHAPI__GuideCreateRequest_1a5302f502c8c71d2fc1a0b8a403a9e621)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a5302f502c8c71d2fc1a0b8a403a9e621"></a>

Sets the value of Ref4_Optional and also sets Ref4_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef4`](#structFRHAPI__GuideCreateRequest_1ad57b4dc0f22479e6cf9cca641a9111d2)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1ad57b4dc0f22479e6cf9cca641a9111d2"></a>

Sets the value of Ref4_Optional and also sets Ref4_IsSet to true using move semantics.

#### `public inline void `[`ClearRef4`](#structFRHAPI__GuideCreateRequest_1a9b310d9eb62c602d98c6e7453bf24efc)`()` <a id="structFRHAPI__GuideCreateRequest_1a9b310d9eb62c602d98c6e7453bf24efc"></a>

Clears the value of Ref4_Optional and sets Ref4_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef4ToNull`](#structFRHAPI__GuideCreateRequest_1a22b754a21b789e9e33400f91fdddb70f)`()` <a id="structFRHAPI__GuideCreateRequest_1a22b754a21b789e9e33400f91fdddb70f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef4Null`](#structFRHAPI__GuideCreateRequest_1aef369116f6762c72272e0e8ee7094ca8)`() const` <a id="structFRHAPI__GuideCreateRequest_1aef369116f6762c72272e0e8ee7094ca8"></a>

Checks whether Ref4_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef5`](#structFRHAPI__GuideCreateRequest_1a39953b5e22254b430929709415907525)`()` <a id="structFRHAPI__GuideCreateRequest_1a39953b5e22254b430929709415907525"></a>

Gets the value of Ref5_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef5`](#structFRHAPI__GuideCreateRequest_1a4281fe2bc8722e1bcbe585edbffee799)`() const` <a id="structFRHAPI__GuideCreateRequest_1a4281fe2bc8722e1bcbe585edbffee799"></a>

Gets the value of Ref5_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef5`](#structFRHAPI__GuideCreateRequest_1a1664248d1f3aaec0471fa01e5c9bf074)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a1664248d1f3aaec0471fa01e5c9bf074"></a>

Gets the value of Ref5_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef5`](#structFRHAPI__GuideCreateRequest_1a5519754c3752924f17a9295beec07631)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a5519754c3752924f17a9295beec07631"></a>

Fills OutValue with the value of Ref5_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef5OrNull`](#structFRHAPI__GuideCreateRequest_1a05b54649b560494ab164329bf2d445c6)`()` <a id="structFRHAPI__GuideCreateRequest_1a05b54649b560494ab164329bf2d445c6"></a>

Returns a pointer to Ref5_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef5OrNull`](#structFRHAPI__GuideCreateRequest_1afeb0fb9d989c4ac3c55098a9955b9ed8)`() const` <a id="structFRHAPI__GuideCreateRequest_1afeb0fb9d989c4ac3c55098a9955b9ed8"></a>

Returns a pointer to Ref5_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef5`](#structFRHAPI__GuideCreateRequest_1a947742e76e42d2ef50535d56ff4f03c4)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a947742e76e42d2ef50535d56ff4f03c4"></a>

Sets the value of Ref5_Optional and also sets Ref5_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef5`](#structFRHAPI__GuideCreateRequest_1a5bfdf52c3106a0904ef4d73a7cfddf80)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a5bfdf52c3106a0904ef4d73a7cfddf80"></a>

Sets the value of Ref5_Optional and also sets Ref5_IsSet to true using move semantics.

#### `public inline void `[`ClearRef5`](#structFRHAPI__GuideCreateRequest_1a76119eb3c93851b05ef2fd80677448b3)`()` <a id="structFRHAPI__GuideCreateRequest_1a76119eb3c93851b05ef2fd80677448b3"></a>

Clears the value of Ref5_Optional and sets Ref5_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef5ToNull`](#structFRHAPI__GuideCreateRequest_1a142232c510641c3caaed45f6e6813ed9)`()` <a id="structFRHAPI__GuideCreateRequest_1a142232c510641c3caaed45f6e6813ed9"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef5Null`](#structFRHAPI__GuideCreateRequest_1a87ac698e4940085881cb2db6ee541e33)`() const` <a id="structFRHAPI__GuideCreateRequest_1a87ac698e4940085881cb2db6ee541e33"></a>

Checks whether Ref5_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef6`](#structFRHAPI__GuideCreateRequest_1a6ad5403033a1fe287a536b682e21d8bb)`()` <a id="structFRHAPI__GuideCreateRequest_1a6ad5403033a1fe287a536b682e21d8bb"></a>

Gets the value of Ref6_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef6`](#structFRHAPI__GuideCreateRequest_1ab9b890c0fca45c2f2ae0adff690677a2)`() const` <a id="structFRHAPI__GuideCreateRequest_1ab9b890c0fca45c2f2ae0adff690677a2"></a>

Gets the value of Ref6_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef6`](#structFRHAPI__GuideCreateRequest_1ad36ac55cb8f13441968accf9698b0117)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1ad36ac55cb8f13441968accf9698b0117"></a>

Gets the value of Ref6_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef6`](#structFRHAPI__GuideCreateRequest_1a45572c60c18f99c0b152fd2b605d76e5)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a45572c60c18f99c0b152fd2b605d76e5"></a>

Fills OutValue with the value of Ref6_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef6OrNull`](#structFRHAPI__GuideCreateRequest_1ac53e745c25f533766b44b3fbe1cad1d5)`()` <a id="structFRHAPI__GuideCreateRequest_1ac53e745c25f533766b44b3fbe1cad1d5"></a>

Returns a pointer to Ref6_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef6OrNull`](#structFRHAPI__GuideCreateRequest_1abf6176216ced054d388f83ae1fe7e535)`() const` <a id="structFRHAPI__GuideCreateRequest_1abf6176216ced054d388f83ae1fe7e535"></a>

Returns a pointer to Ref6_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef6`](#structFRHAPI__GuideCreateRequest_1a31934ec1aaa3eb8b91f2f64bf7487120)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a31934ec1aaa3eb8b91f2f64bf7487120"></a>

Sets the value of Ref6_Optional and also sets Ref6_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef6`](#structFRHAPI__GuideCreateRequest_1a318a16d1d480eb1c746f94725cf59035)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a318a16d1d480eb1c746f94725cf59035"></a>

Sets the value of Ref6_Optional and also sets Ref6_IsSet to true using move semantics.

#### `public inline void `[`ClearRef6`](#structFRHAPI__GuideCreateRequest_1a7cec06bebbde2eaed7b4c24212509069)`()` <a id="structFRHAPI__GuideCreateRequest_1a7cec06bebbde2eaed7b4c24212509069"></a>

Clears the value of Ref6_Optional and sets Ref6_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef6ToNull`](#structFRHAPI__GuideCreateRequest_1aaf2036c4d06d4622a4ef7c26e1c9c8ea)`()` <a id="structFRHAPI__GuideCreateRequest_1aaf2036c4d06d4622a4ef7c26e1c9c8ea"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef6Null`](#structFRHAPI__GuideCreateRequest_1a1fd557979f01b57181c800b91074fcde)`() const` <a id="structFRHAPI__GuideCreateRequest_1a1fd557979f01b57181c800b91074fcde"></a>

Checks whether Ref6_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef7`](#structFRHAPI__GuideCreateRequest_1a995b1e668ec31196608b5785f05fb161)`()` <a id="structFRHAPI__GuideCreateRequest_1a995b1e668ec31196608b5785f05fb161"></a>

Gets the value of Ref7_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef7`](#structFRHAPI__GuideCreateRequest_1a1ffcdec82cb28be612dd240b5dafe79e)`() const` <a id="structFRHAPI__GuideCreateRequest_1a1ffcdec82cb28be612dd240b5dafe79e"></a>

Gets the value of Ref7_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef7`](#structFRHAPI__GuideCreateRequest_1a4d6edec7f24e5d04ba2cbc82b45280e4)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a4d6edec7f24e5d04ba2cbc82b45280e4"></a>

Gets the value of Ref7_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef7`](#structFRHAPI__GuideCreateRequest_1a6c38ba553ff2117688447139bb35f6ab)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a6c38ba553ff2117688447139bb35f6ab"></a>

Fills OutValue with the value of Ref7_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef7OrNull`](#structFRHAPI__GuideCreateRequest_1aca7842ea6daf3a87fc65b12b8bf6a170)`()` <a id="structFRHAPI__GuideCreateRequest_1aca7842ea6daf3a87fc65b12b8bf6a170"></a>

Returns a pointer to Ref7_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef7OrNull`](#structFRHAPI__GuideCreateRequest_1af8c5c8f8fab2cdd676b2f8087cbdb3c4)`() const` <a id="structFRHAPI__GuideCreateRequest_1af8c5c8f8fab2cdd676b2f8087cbdb3c4"></a>

Returns a pointer to Ref7_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef7`](#structFRHAPI__GuideCreateRequest_1a0b8901a41cea71c95133823b9c6d1050)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a0b8901a41cea71c95133823b9c6d1050"></a>

Sets the value of Ref7_Optional and also sets Ref7_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef7`](#structFRHAPI__GuideCreateRequest_1a44cd2a9870bce32821b898a5d2695827)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a44cd2a9870bce32821b898a5d2695827"></a>

Sets the value of Ref7_Optional and also sets Ref7_IsSet to true using move semantics.

#### `public inline void `[`ClearRef7`](#structFRHAPI__GuideCreateRequest_1ad524f548749d030382ffc4678d3b752a)`()` <a id="structFRHAPI__GuideCreateRequest_1ad524f548749d030382ffc4678d3b752a"></a>

Clears the value of Ref7_Optional and sets Ref7_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef7ToNull`](#structFRHAPI__GuideCreateRequest_1a9d7639a0ddd8015cdfe0569218b94d83)`()` <a id="structFRHAPI__GuideCreateRequest_1a9d7639a0ddd8015cdfe0569218b94d83"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef7Null`](#structFRHAPI__GuideCreateRequest_1ad26dd25af0ec4a4da29da3b9b1867332)`() const` <a id="structFRHAPI__GuideCreateRequest_1ad26dd25af0ec4a4da29da3b9b1867332"></a>

Checks whether Ref7_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef8`](#structFRHAPI__GuideCreateRequest_1a1ad2c675078c42f944c9e42c460718fc)`()` <a id="structFRHAPI__GuideCreateRequest_1a1ad2c675078c42f944c9e42c460718fc"></a>

Gets the value of Ref8_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef8`](#structFRHAPI__GuideCreateRequest_1a43ebed5ccaa1f6616d359f1f283b1629)`() const` <a id="structFRHAPI__GuideCreateRequest_1a43ebed5ccaa1f6616d359f1f283b1629"></a>

Gets the value of Ref8_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef8`](#structFRHAPI__GuideCreateRequest_1a5cbc462d7d35b15e1edd6b3fbcdd9f91)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a5cbc462d7d35b15e1edd6b3fbcdd9f91"></a>

Gets the value of Ref8_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef8`](#structFRHAPI__GuideCreateRequest_1a6c05b299c6e510ddbcff1cf712588c2d)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a6c05b299c6e510ddbcff1cf712588c2d"></a>

Fills OutValue with the value of Ref8_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef8OrNull`](#structFRHAPI__GuideCreateRequest_1acb1f3f59cd25b6218f13a963ee39b2f6)`()` <a id="structFRHAPI__GuideCreateRequest_1acb1f3f59cd25b6218f13a963ee39b2f6"></a>

Returns a pointer to Ref8_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef8OrNull`](#structFRHAPI__GuideCreateRequest_1ac489c0930b7ba458036007c542f0beb9)`() const` <a id="structFRHAPI__GuideCreateRequest_1ac489c0930b7ba458036007c542f0beb9"></a>

Returns a pointer to Ref8_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef8`](#structFRHAPI__GuideCreateRequest_1ab4f7fb419815a7b2ec6b226846ad3d64)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1ab4f7fb419815a7b2ec6b226846ad3d64"></a>

Sets the value of Ref8_Optional and also sets Ref8_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef8`](#structFRHAPI__GuideCreateRequest_1aeb9eefb2b74e7673d1a0963f2b328b17)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1aeb9eefb2b74e7673d1a0963f2b328b17"></a>

Sets the value of Ref8_Optional and also sets Ref8_IsSet to true using move semantics.

#### `public inline void `[`ClearRef8`](#structFRHAPI__GuideCreateRequest_1ab216b6e96522ab5254be97a24c434791)`()` <a id="structFRHAPI__GuideCreateRequest_1ab216b6e96522ab5254be97a24c434791"></a>

Clears the value of Ref8_Optional and sets Ref8_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef8ToNull`](#structFRHAPI__GuideCreateRequest_1a3fce21e60649e500d23eb843e1a07885)`()` <a id="structFRHAPI__GuideCreateRequest_1a3fce21e60649e500d23eb843e1a07885"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef8Null`](#structFRHAPI__GuideCreateRequest_1a1cdaa09568ba2a3849c2c6f635a32116)`() const` <a id="structFRHAPI__GuideCreateRequest_1a1cdaa09568ba2a3849c2c6f635a32116"></a>

Checks whether Ref8_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef9`](#structFRHAPI__GuideCreateRequest_1ae143fba67bb0325f3cc72a2e9dc2376f)`()` <a id="structFRHAPI__GuideCreateRequest_1ae143fba67bb0325f3cc72a2e9dc2376f"></a>

Gets the value of Ref9_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef9`](#structFRHAPI__GuideCreateRequest_1a686761cf749cd29b3f44724830176cae)`() const` <a id="structFRHAPI__GuideCreateRequest_1a686761cf749cd29b3f44724830176cae"></a>

Gets the value of Ref9_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef9`](#structFRHAPI__GuideCreateRequest_1a361695ab20e1a8e9083b840ae8b9065b)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a361695ab20e1a8e9083b840ae8b9065b"></a>

Gets the value of Ref9_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef9`](#structFRHAPI__GuideCreateRequest_1ad79ced44e39d6ead89af8efe37f63d9f)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1ad79ced44e39d6ead89af8efe37f63d9f"></a>

Fills OutValue with the value of Ref9_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef9OrNull`](#structFRHAPI__GuideCreateRequest_1a9df815f6f95ebd8e23f57a76391dc8eb)`()` <a id="structFRHAPI__GuideCreateRequest_1a9df815f6f95ebd8e23f57a76391dc8eb"></a>

Returns a pointer to Ref9_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef9OrNull`](#structFRHAPI__GuideCreateRequest_1a22c53d9de75fbe1ba97e10729d3d7d20)`() const` <a id="structFRHAPI__GuideCreateRequest_1a22c53d9de75fbe1ba97e10729d3d7d20"></a>

Returns a pointer to Ref9_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef9`](#structFRHAPI__GuideCreateRequest_1aaf46c1fe183e155f7beaaab6560af3dc)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1aaf46c1fe183e155f7beaaab6560af3dc"></a>

Sets the value of Ref9_Optional and also sets Ref9_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef9`](#structFRHAPI__GuideCreateRequest_1a54e1af6cdafdf585149cb7931be35bf1)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a54e1af6cdafdf585149cb7931be35bf1"></a>

Sets the value of Ref9_Optional and also sets Ref9_IsSet to true using move semantics.

#### `public inline void `[`ClearRef9`](#structFRHAPI__GuideCreateRequest_1a5fd01d34b1d10a0dbf28b1df8887ad87)`()` <a id="structFRHAPI__GuideCreateRequest_1a5fd01d34b1d10a0dbf28b1df8887ad87"></a>

Clears the value of Ref9_Optional and sets Ref9_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef9ToNull`](#structFRHAPI__GuideCreateRequest_1a3e8f3ba0d0269f52deab6f2d42adfc7a)`()` <a id="structFRHAPI__GuideCreateRequest_1a3e8f3ba0d0269f52deab6f2d42adfc7a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef9Null`](#structFRHAPI__GuideCreateRequest_1a880b270a74762f229bccc76887d746bc)`() const` <a id="structFRHAPI__GuideCreateRequest_1a880b270a74762f229bccc76887d746bc"></a>

Checks whether Ref9_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef10`](#structFRHAPI__GuideCreateRequest_1a968cd58a0326458961b5b37c666339ef)`()` <a id="structFRHAPI__GuideCreateRequest_1a968cd58a0326458961b5b37c666339ef"></a>

Gets the value of Ref10_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef10`](#structFRHAPI__GuideCreateRequest_1a1b8cd220505ef9859099c3846f78854c)`() const` <a id="structFRHAPI__GuideCreateRequest_1a1b8cd220505ef9859099c3846f78854c"></a>

Gets the value of Ref10_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef10`](#structFRHAPI__GuideCreateRequest_1acaffaa75c942efdfcd226272c507fa1f)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1acaffaa75c942efdfcd226272c507fa1f"></a>

Gets the value of Ref10_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef10`](#structFRHAPI__GuideCreateRequest_1a92bce578a8588f9aa5fea1bd7e719961)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a92bce578a8588f9aa5fea1bd7e719961"></a>

Fills OutValue with the value of Ref10_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef10OrNull`](#structFRHAPI__GuideCreateRequest_1aec6eb16e370d86a1b050c1819257005e)`()` <a id="structFRHAPI__GuideCreateRequest_1aec6eb16e370d86a1b050c1819257005e"></a>

Returns a pointer to Ref10_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef10OrNull`](#structFRHAPI__GuideCreateRequest_1ae6c15c0835e6b7064f62cf5cbae53977)`() const` <a id="structFRHAPI__GuideCreateRequest_1ae6c15c0835e6b7064f62cf5cbae53977"></a>

Returns a pointer to Ref10_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef10`](#structFRHAPI__GuideCreateRequest_1a265f05208872ae22f337dd38cf91a358)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a265f05208872ae22f337dd38cf91a358"></a>

Sets the value of Ref10_Optional and also sets Ref10_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef10`](#structFRHAPI__GuideCreateRequest_1acde5ace6b7e04e6721d3687839896fa0)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1acde5ace6b7e04e6721d3687839896fa0"></a>

Sets the value of Ref10_Optional and also sets Ref10_IsSet to true using move semantics.

#### `public inline void `[`ClearRef10`](#structFRHAPI__GuideCreateRequest_1a3c8a350c82b2e08d1e1eef6769235f23)`()` <a id="structFRHAPI__GuideCreateRequest_1a3c8a350c82b2e08d1e1eef6769235f23"></a>

Clears the value of Ref10_Optional and sets Ref10_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef10ToNull`](#structFRHAPI__GuideCreateRequest_1a116741ab6a61ef47772a71e03f25628a)`()` <a id="structFRHAPI__GuideCreateRequest_1a116741ab6a61ef47772a71e03f25628a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef10Null`](#structFRHAPI__GuideCreateRequest_1a8ad16e31268ee87b898c5cdb9e508025)`() const` <a id="structFRHAPI__GuideCreateRequest_1a8ad16e31268ee87b898c5cdb9e508025"></a>

Checks whether Ref10_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef11`](#structFRHAPI__GuideCreateRequest_1a47948689ea2ffba76f12e1025ddd8620)`()` <a id="structFRHAPI__GuideCreateRequest_1a47948689ea2ffba76f12e1025ddd8620"></a>

Gets the value of Ref11_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef11`](#structFRHAPI__GuideCreateRequest_1a9a15e796c35470ad9b81aa7117ea3ab8)`() const` <a id="structFRHAPI__GuideCreateRequest_1a9a15e796c35470ad9b81aa7117ea3ab8"></a>

Gets the value of Ref11_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef11`](#structFRHAPI__GuideCreateRequest_1a6c33be9f34a74d31650d63d751653cd5)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a6c33be9f34a74d31650d63d751653cd5"></a>

Gets the value of Ref11_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef11`](#structFRHAPI__GuideCreateRequest_1ae13154350e17baf22160a0667acbf818)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1ae13154350e17baf22160a0667acbf818"></a>

Fills OutValue with the value of Ref11_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef11OrNull`](#structFRHAPI__GuideCreateRequest_1a833751758344c6941a9649b8414c724a)`()` <a id="structFRHAPI__GuideCreateRequest_1a833751758344c6941a9649b8414c724a"></a>

Returns a pointer to Ref11_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef11OrNull`](#structFRHAPI__GuideCreateRequest_1afa72fe01621620bd1c03c6c3f1bdd9c8)`() const` <a id="structFRHAPI__GuideCreateRequest_1afa72fe01621620bd1c03c6c3f1bdd9c8"></a>

Returns a pointer to Ref11_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef11`](#structFRHAPI__GuideCreateRequest_1ac255cecf9fb5ee2aa9b04daf4d119334)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1ac255cecf9fb5ee2aa9b04daf4d119334"></a>

Sets the value of Ref11_Optional and also sets Ref11_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef11`](#structFRHAPI__GuideCreateRequest_1a6c2d7add9d3882863a2e122a8c3fd883)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a6c2d7add9d3882863a2e122a8c3fd883"></a>

Sets the value of Ref11_Optional and also sets Ref11_IsSet to true using move semantics.

#### `public inline void `[`ClearRef11`](#structFRHAPI__GuideCreateRequest_1afa82348237f73ddb103b92239e2a9f3b)`()` <a id="structFRHAPI__GuideCreateRequest_1afa82348237f73ddb103b92239e2a9f3b"></a>

Clears the value of Ref11_Optional and sets Ref11_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef11ToNull`](#structFRHAPI__GuideCreateRequest_1a961cefdec92eea2b58e2164071afc6f4)`()` <a id="structFRHAPI__GuideCreateRequest_1a961cefdec92eea2b58e2164071afc6f4"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef11Null`](#structFRHAPI__GuideCreateRequest_1a16fc2cdee09f78522f5e7a554bca786f)`() const` <a id="structFRHAPI__GuideCreateRequest_1a16fc2cdee09f78522f5e7a554bca786f"></a>

Checks whether Ref11_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef12`](#structFRHAPI__GuideCreateRequest_1a368f00dac4c8b65557debcf2043c764e)`()` <a id="structFRHAPI__GuideCreateRequest_1a368f00dac4c8b65557debcf2043c764e"></a>

Gets the value of Ref12_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef12`](#structFRHAPI__GuideCreateRequest_1a19c9d76df5f0d554196e3c667e94f64f)`() const` <a id="structFRHAPI__GuideCreateRequest_1a19c9d76df5f0d554196e3c667e94f64f"></a>

Gets the value of Ref12_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef12`](#structFRHAPI__GuideCreateRequest_1ae49bdff24f23543a5593682b0a5adac5)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1ae49bdff24f23543a5593682b0a5adac5"></a>

Gets the value of Ref12_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef12`](#structFRHAPI__GuideCreateRequest_1a1164316c4dc2025faada240c2fbef74e)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a1164316c4dc2025faada240c2fbef74e"></a>

Fills OutValue with the value of Ref12_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef12OrNull`](#structFRHAPI__GuideCreateRequest_1a17fbeb029f4af2f335c74acd623ba940)`()` <a id="structFRHAPI__GuideCreateRequest_1a17fbeb029f4af2f335c74acd623ba940"></a>

Returns a pointer to Ref12_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef12OrNull`](#structFRHAPI__GuideCreateRequest_1a6171786b69dcf3a59c3c84648ad3d25c)`() const` <a id="structFRHAPI__GuideCreateRequest_1a6171786b69dcf3a59c3c84648ad3d25c"></a>

Returns a pointer to Ref12_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef12`](#structFRHAPI__GuideCreateRequest_1a34e65861250f69c7e1541faa98472051)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a34e65861250f69c7e1541faa98472051"></a>

Sets the value of Ref12_Optional and also sets Ref12_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef12`](#structFRHAPI__GuideCreateRequest_1a36e698f7881c9315b3c478b236d2bba1)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a36e698f7881c9315b3c478b236d2bba1"></a>

Sets the value of Ref12_Optional and also sets Ref12_IsSet to true using move semantics.

#### `public inline void `[`ClearRef12`](#structFRHAPI__GuideCreateRequest_1a5e7118407253cdc3dbcf0dab6925560b)`()` <a id="structFRHAPI__GuideCreateRequest_1a5e7118407253cdc3dbcf0dab6925560b"></a>

Clears the value of Ref12_Optional and sets Ref12_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef12ToNull`](#structFRHAPI__GuideCreateRequest_1acd7c8e6d772473b526d63813a094ac9e)`()` <a id="structFRHAPI__GuideCreateRequest_1acd7c8e6d772473b526d63813a094ac9e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef12Null`](#structFRHAPI__GuideCreateRequest_1a2f6a5a2183c3d08a9d97f36765ee2f18)`() const` <a id="structFRHAPI__GuideCreateRequest_1a2f6a5a2183c3d08a9d97f36765ee2f18"></a>

Checks whether Ref12_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef13`](#structFRHAPI__GuideCreateRequest_1a945049d8a9a4a000978d06b9c8237b9e)`()` <a id="structFRHAPI__GuideCreateRequest_1a945049d8a9a4a000978d06b9c8237b9e"></a>

Gets the value of Ref13_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef13`](#structFRHAPI__GuideCreateRequest_1a2e1e2418d7d40c8b6a3cbc1fd53aa3e5)`() const` <a id="structFRHAPI__GuideCreateRequest_1a2e1e2418d7d40c8b6a3cbc1fd53aa3e5"></a>

Gets the value of Ref13_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef13`](#structFRHAPI__GuideCreateRequest_1af0dd3963d5b97e1bc7656e998321cd57)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1af0dd3963d5b97e1bc7656e998321cd57"></a>

Gets the value of Ref13_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef13`](#structFRHAPI__GuideCreateRequest_1a685d5e73bd678dbe9e184d1808a7e8cb)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a685d5e73bd678dbe9e184d1808a7e8cb"></a>

Fills OutValue with the value of Ref13_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef13OrNull`](#structFRHAPI__GuideCreateRequest_1add3a89658949ff1017a405b76e7f5761)`()` <a id="structFRHAPI__GuideCreateRequest_1add3a89658949ff1017a405b76e7f5761"></a>

Returns a pointer to Ref13_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef13OrNull`](#structFRHAPI__GuideCreateRequest_1a036a8428db9010a0a8ab0371ebf2c34e)`() const` <a id="structFRHAPI__GuideCreateRequest_1a036a8428db9010a0a8ab0371ebf2c34e"></a>

Returns a pointer to Ref13_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef13`](#structFRHAPI__GuideCreateRequest_1a2fd3cdfc673e6f63332d83288032d25f)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a2fd3cdfc673e6f63332d83288032d25f"></a>

Sets the value of Ref13_Optional and also sets Ref13_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef13`](#structFRHAPI__GuideCreateRequest_1a2295cb07f27bd8723f06172a84a013a4)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a2295cb07f27bd8723f06172a84a013a4"></a>

Sets the value of Ref13_Optional and also sets Ref13_IsSet to true using move semantics.

#### `public inline void `[`ClearRef13`](#structFRHAPI__GuideCreateRequest_1a3d2e63fe1fc774129b37b6b3319f3dd2)`()` <a id="structFRHAPI__GuideCreateRequest_1a3d2e63fe1fc774129b37b6b3319f3dd2"></a>

Clears the value of Ref13_Optional and sets Ref13_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef13ToNull`](#structFRHAPI__GuideCreateRequest_1a14104e1ef033edee5483af5c66a835fb)`()` <a id="structFRHAPI__GuideCreateRequest_1a14104e1ef033edee5483af5c66a835fb"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef13Null`](#structFRHAPI__GuideCreateRequest_1a3b443623f515f63c0d4d867834a2ebca)`() const` <a id="structFRHAPI__GuideCreateRequest_1a3b443623f515f63c0d4d867834a2ebca"></a>

Checks whether Ref13_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef14`](#structFRHAPI__GuideCreateRequest_1a2864d5ef1c0adb1dc4c9213f5146ce36)`()` <a id="structFRHAPI__GuideCreateRequest_1a2864d5ef1c0adb1dc4c9213f5146ce36"></a>

Gets the value of Ref14_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef14`](#structFRHAPI__GuideCreateRequest_1a534f226cb93211c41d03e9800213596a)`() const` <a id="structFRHAPI__GuideCreateRequest_1a534f226cb93211c41d03e9800213596a"></a>

Gets the value of Ref14_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef14`](#structFRHAPI__GuideCreateRequest_1a89d74b9221f5c28b9a93d9f0c788c00d)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a89d74b9221f5c28b9a93d9f0c788c00d"></a>

Gets the value of Ref14_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef14`](#structFRHAPI__GuideCreateRequest_1acca5ec9d431a8a534726e928efa134c5)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1acca5ec9d431a8a534726e928efa134c5"></a>

Fills OutValue with the value of Ref14_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef14OrNull`](#structFRHAPI__GuideCreateRequest_1abca38cd71ada03dcefa002bffbb9ee7e)`()` <a id="structFRHAPI__GuideCreateRequest_1abca38cd71ada03dcefa002bffbb9ee7e"></a>

Returns a pointer to Ref14_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef14OrNull`](#structFRHAPI__GuideCreateRequest_1a363f0ba2b82ddea348320c936ca3cffb)`() const` <a id="structFRHAPI__GuideCreateRequest_1a363f0ba2b82ddea348320c936ca3cffb"></a>

Returns a pointer to Ref14_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef14`](#structFRHAPI__GuideCreateRequest_1aea58c843a1ffc8c6b3f05848365529de)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1aea58c843a1ffc8c6b3f05848365529de"></a>

Sets the value of Ref14_Optional and also sets Ref14_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef14`](#structFRHAPI__GuideCreateRequest_1a26d70ee0ad270a1c016b216c3f2202e2)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a26d70ee0ad270a1c016b216c3f2202e2"></a>

Sets the value of Ref14_Optional and also sets Ref14_IsSet to true using move semantics.

#### `public inline void `[`ClearRef14`](#structFRHAPI__GuideCreateRequest_1acd9f9317a369ed4d448798792b058f4c)`()` <a id="structFRHAPI__GuideCreateRequest_1acd9f9317a369ed4d448798792b058f4c"></a>

Clears the value of Ref14_Optional and sets Ref14_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef14ToNull`](#structFRHAPI__GuideCreateRequest_1a6a7ed0aa25a5f74fbfe330dd3c85a41b)`()` <a id="structFRHAPI__GuideCreateRequest_1a6a7ed0aa25a5f74fbfe330dd3c85a41b"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef14Null`](#structFRHAPI__GuideCreateRequest_1a38d7b5e0ad7b410f85893a0086c2d314)`() const` <a id="structFRHAPI__GuideCreateRequest_1a38d7b5e0ad7b410f85893a0086c2d314"></a>

Checks whether Ref14_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef15`](#structFRHAPI__GuideCreateRequest_1a86ac14c283c1429011b65078769f3d71)`()` <a id="structFRHAPI__GuideCreateRequest_1a86ac14c283c1429011b65078769f3d71"></a>

Gets the value of Ref15_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef15`](#structFRHAPI__GuideCreateRequest_1a5f328d3af0d8ed0d669aea6d67f1e47d)`() const` <a id="structFRHAPI__GuideCreateRequest_1a5f328d3af0d8ed0d669aea6d67f1e47d"></a>

Gets the value of Ref15_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef15`](#structFRHAPI__GuideCreateRequest_1aaf25c75eaf2b6d82cf6c555732adbe44)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1aaf25c75eaf2b6d82cf6c555732adbe44"></a>

Gets the value of Ref15_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef15`](#structFRHAPI__GuideCreateRequest_1acd89249a8c4334f10fb07ddfac19fd9b)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1acd89249a8c4334f10fb07ddfac19fd9b"></a>

Fills OutValue with the value of Ref15_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef15OrNull`](#structFRHAPI__GuideCreateRequest_1a975425012c765b221507c8e97c2f5455)`()` <a id="structFRHAPI__GuideCreateRequest_1a975425012c765b221507c8e97c2f5455"></a>

Returns a pointer to Ref15_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef15OrNull`](#structFRHAPI__GuideCreateRequest_1a119b21d243980e530317effb8d772158)`() const` <a id="structFRHAPI__GuideCreateRequest_1a119b21d243980e530317effb8d772158"></a>

Returns a pointer to Ref15_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef15`](#structFRHAPI__GuideCreateRequest_1a4a90d2478000497c5a291d041683afc2)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a4a90d2478000497c5a291d041683afc2"></a>

Sets the value of Ref15_Optional and also sets Ref15_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef15`](#structFRHAPI__GuideCreateRequest_1a4950f1fadaf649461d27fcd831c4ff4f)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a4950f1fadaf649461d27fcd831c4ff4f"></a>

Sets the value of Ref15_Optional and also sets Ref15_IsSet to true using move semantics.

#### `public inline void `[`ClearRef15`](#structFRHAPI__GuideCreateRequest_1a05939d5de6250797b4b210adbffd5d0a)`()` <a id="structFRHAPI__GuideCreateRequest_1a05939d5de6250797b4b210adbffd5d0a"></a>

Clears the value of Ref15_Optional and sets Ref15_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef15ToNull`](#structFRHAPI__GuideCreateRequest_1acf0bf3a25462187075dd9791922c4117)`()` <a id="structFRHAPI__GuideCreateRequest_1acf0bf3a25462187075dd9791922c4117"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef15Null`](#structFRHAPI__GuideCreateRequest_1a44b349cfda84893c5e44fbf815fda2d5)`() const` <a id="structFRHAPI__GuideCreateRequest_1a44b349cfda84893c5e44fbf815fda2d5"></a>

Checks whether Ref15_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef16`](#structFRHAPI__GuideCreateRequest_1a10538d2e1595211abe68b39ee522785d)`()` <a id="structFRHAPI__GuideCreateRequest_1a10538d2e1595211abe68b39ee522785d"></a>

Gets the value of Ref16_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef16`](#structFRHAPI__GuideCreateRequest_1a33ab6260c40dec2e72336fb78d67a5c6)`() const` <a id="structFRHAPI__GuideCreateRequest_1a33ab6260c40dec2e72336fb78d67a5c6"></a>

Gets the value of Ref16_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef16`](#structFRHAPI__GuideCreateRequest_1a5561317c5d4a877f3fc5ee2b50115c24)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a5561317c5d4a877f3fc5ee2b50115c24"></a>

Gets the value of Ref16_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef16`](#structFRHAPI__GuideCreateRequest_1a189384d98897404163ffce2a520372a7)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a189384d98897404163ffce2a520372a7"></a>

Fills OutValue with the value of Ref16_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef16OrNull`](#structFRHAPI__GuideCreateRequest_1aed3a4d0199a3938e5420d20ae498d2fd)`()` <a id="structFRHAPI__GuideCreateRequest_1aed3a4d0199a3938e5420d20ae498d2fd"></a>

Returns a pointer to Ref16_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef16OrNull`](#structFRHAPI__GuideCreateRequest_1a4b39aa49f446567dc742dc1251d6c222)`() const` <a id="structFRHAPI__GuideCreateRequest_1a4b39aa49f446567dc742dc1251d6c222"></a>

Returns a pointer to Ref16_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef16`](#structFRHAPI__GuideCreateRequest_1a3f1e7d198f2e61f623a832db92a87af5)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a3f1e7d198f2e61f623a832db92a87af5"></a>

Sets the value of Ref16_Optional and also sets Ref16_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef16`](#structFRHAPI__GuideCreateRequest_1a177d8b0cb88663a96ff0fe9bf0d726b1)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a177d8b0cb88663a96ff0fe9bf0d726b1"></a>

Sets the value of Ref16_Optional and also sets Ref16_IsSet to true using move semantics.

#### `public inline void `[`ClearRef16`](#structFRHAPI__GuideCreateRequest_1a6bdc5b737644f5044babe9953e815f94)`()` <a id="structFRHAPI__GuideCreateRequest_1a6bdc5b737644f5044babe9953e815f94"></a>

Clears the value of Ref16_Optional and sets Ref16_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef16ToNull`](#structFRHAPI__GuideCreateRequest_1a128d74713f91d3d253b6d8611f6e4cd0)`()` <a id="structFRHAPI__GuideCreateRequest_1a128d74713f91d3d253b6d8611f6e4cd0"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef16Null`](#structFRHAPI__GuideCreateRequest_1ade1c2004d178635dde6fde955e3dfeae)`() const` <a id="structFRHAPI__GuideCreateRequest_1ade1c2004d178635dde6fde955e3dfeae"></a>

Checks whether Ref16_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef17`](#structFRHAPI__GuideCreateRequest_1a2461959069b3003d34a2be59ef370fdd)`()` <a id="structFRHAPI__GuideCreateRequest_1a2461959069b3003d34a2be59ef370fdd"></a>

Gets the value of Ref17_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef17`](#structFRHAPI__GuideCreateRequest_1add7a10e0d145ef92e7db85a71829c5d8)`() const` <a id="structFRHAPI__GuideCreateRequest_1add7a10e0d145ef92e7db85a71829c5d8"></a>

Gets the value of Ref17_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef17`](#structFRHAPI__GuideCreateRequest_1a416b8839777ccb73b2a6eef7a20fd796)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a416b8839777ccb73b2a6eef7a20fd796"></a>

Gets the value of Ref17_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef17`](#structFRHAPI__GuideCreateRequest_1a95b517c5034073b3e75c65f3dbbf2dae)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a95b517c5034073b3e75c65f3dbbf2dae"></a>

Fills OutValue with the value of Ref17_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef17OrNull`](#structFRHAPI__GuideCreateRequest_1aa3ac902f26d97383f53bc85120d7eaa3)`()` <a id="structFRHAPI__GuideCreateRequest_1aa3ac902f26d97383f53bc85120d7eaa3"></a>

Returns a pointer to Ref17_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef17OrNull`](#structFRHAPI__GuideCreateRequest_1a214e93a4f29a026d7f5197f3fdf846a3)`() const` <a id="structFRHAPI__GuideCreateRequest_1a214e93a4f29a026d7f5197f3fdf846a3"></a>

Returns a pointer to Ref17_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef17`](#structFRHAPI__GuideCreateRequest_1ad031936bfe52d61140a1638cc21cb79b)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1ad031936bfe52d61140a1638cc21cb79b"></a>

Sets the value of Ref17_Optional and also sets Ref17_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef17`](#structFRHAPI__GuideCreateRequest_1a5ed6327298b5b93a4e7efd44c8fea9f0)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a5ed6327298b5b93a4e7efd44c8fea9f0"></a>

Sets the value of Ref17_Optional and also sets Ref17_IsSet to true using move semantics.

#### `public inline void `[`ClearRef17`](#structFRHAPI__GuideCreateRequest_1a05e3d6a430a9f480ec9e9a06b1e8a962)`()` <a id="structFRHAPI__GuideCreateRequest_1a05e3d6a430a9f480ec9e9a06b1e8a962"></a>

Clears the value of Ref17_Optional and sets Ref17_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef17ToNull`](#structFRHAPI__GuideCreateRequest_1a826ff7dac46737b6d13cb7c1c83ddb61)`()` <a id="structFRHAPI__GuideCreateRequest_1a826ff7dac46737b6d13cb7c1c83ddb61"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef17Null`](#structFRHAPI__GuideCreateRequest_1ad4e0f105a5dc607e4ac121c4cdee3240)`() const` <a id="structFRHAPI__GuideCreateRequest_1ad4e0f105a5dc607e4ac121c4cdee3240"></a>

Checks whether Ref17_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef18`](#structFRHAPI__GuideCreateRequest_1a0adc3a74c8613121838616d4e617ab9c)`()` <a id="structFRHAPI__GuideCreateRequest_1a0adc3a74c8613121838616d4e617ab9c"></a>

Gets the value of Ref18_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef18`](#structFRHAPI__GuideCreateRequest_1acf880cbbe20a01c20d10ced645d45a39)`() const` <a id="structFRHAPI__GuideCreateRequest_1acf880cbbe20a01c20d10ced645d45a39"></a>

Gets the value of Ref18_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef18`](#structFRHAPI__GuideCreateRequest_1a3443cc731bbf009bedf1c107d67e9a72)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a3443cc731bbf009bedf1c107d67e9a72"></a>

Gets the value of Ref18_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef18`](#structFRHAPI__GuideCreateRequest_1a7cd970e80565084a206f6baadbb34048)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a7cd970e80565084a206f6baadbb34048"></a>

Fills OutValue with the value of Ref18_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef18OrNull`](#structFRHAPI__GuideCreateRequest_1a2a6283ed73fa1e873dbd9bfc92d9b66d)`()` <a id="structFRHAPI__GuideCreateRequest_1a2a6283ed73fa1e873dbd9bfc92d9b66d"></a>

Returns a pointer to Ref18_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef18OrNull`](#structFRHAPI__GuideCreateRequest_1adf953454bbab67488edf259ca64f62dc)`() const` <a id="structFRHAPI__GuideCreateRequest_1adf953454bbab67488edf259ca64f62dc"></a>

Returns a pointer to Ref18_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef18`](#structFRHAPI__GuideCreateRequest_1a5c81b69031ad754b65344f5794b8c5c2)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a5c81b69031ad754b65344f5794b8c5c2"></a>

Sets the value of Ref18_Optional and also sets Ref18_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef18`](#structFRHAPI__GuideCreateRequest_1a78cb655c5c12cdd5220f3d2959c40aab)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a78cb655c5c12cdd5220f3d2959c40aab"></a>

Sets the value of Ref18_Optional and also sets Ref18_IsSet to true using move semantics.

#### `public inline void `[`ClearRef18`](#structFRHAPI__GuideCreateRequest_1a933a2e0359070d2eb50bc65cd8f49396)`()` <a id="structFRHAPI__GuideCreateRequest_1a933a2e0359070d2eb50bc65cd8f49396"></a>

Clears the value of Ref18_Optional and sets Ref18_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef18ToNull`](#structFRHAPI__GuideCreateRequest_1aeaef7663eed3365fd478440e86ac7650)`()` <a id="structFRHAPI__GuideCreateRequest_1aeaef7663eed3365fd478440e86ac7650"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef18Null`](#structFRHAPI__GuideCreateRequest_1ac609b0b2b96a1c2c2f86c460ec000404)`() const` <a id="structFRHAPI__GuideCreateRequest_1ac609b0b2b96a1c2c2f86c460ec000404"></a>

Checks whether Ref18_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef19`](#structFRHAPI__GuideCreateRequest_1a9ff6ddc54d4538c8013c7cbf4fa011d7)`()` <a id="structFRHAPI__GuideCreateRequest_1a9ff6ddc54d4538c8013c7cbf4fa011d7"></a>

Gets the value of Ref19_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef19`](#structFRHAPI__GuideCreateRequest_1ab8ee367aa29cc2aa2144e68afe9ce23b)`() const` <a id="structFRHAPI__GuideCreateRequest_1ab8ee367aa29cc2aa2144e68afe9ce23b"></a>

Gets the value of Ref19_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef19`](#structFRHAPI__GuideCreateRequest_1a8f86f9ba4f80733357b7ad75006ec917)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a8f86f9ba4f80733357b7ad75006ec917"></a>

Gets the value of Ref19_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef19`](#structFRHAPI__GuideCreateRequest_1a59bb052eea09c31527d052bccdc423fb)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a59bb052eea09c31527d052bccdc423fb"></a>

Fills OutValue with the value of Ref19_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef19OrNull`](#structFRHAPI__GuideCreateRequest_1a42ca3b554d1c5e5e6109c10fe12e0f82)`()` <a id="structFRHAPI__GuideCreateRequest_1a42ca3b554d1c5e5e6109c10fe12e0f82"></a>

Returns a pointer to Ref19_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef19OrNull`](#structFRHAPI__GuideCreateRequest_1a1ede0567b7636141d249a576749d9a50)`() const` <a id="structFRHAPI__GuideCreateRequest_1a1ede0567b7636141d249a576749d9a50"></a>

Returns a pointer to Ref19_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef19`](#structFRHAPI__GuideCreateRequest_1a556315d7c8b19c15c8b587ce4ac26472)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a556315d7c8b19c15c8b587ce4ac26472"></a>

Sets the value of Ref19_Optional and also sets Ref19_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef19`](#structFRHAPI__GuideCreateRequest_1a1c7c871c20ed700de8a75a36a08b1c4f)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a1c7c871c20ed700de8a75a36a08b1c4f"></a>

Sets the value of Ref19_Optional and also sets Ref19_IsSet to true using move semantics.

#### `public inline void `[`ClearRef19`](#structFRHAPI__GuideCreateRequest_1a7d67c219a57c3a69ab8b1d259971c2ae)`()` <a id="structFRHAPI__GuideCreateRequest_1a7d67c219a57c3a69ab8b1d259971c2ae"></a>

Clears the value of Ref19_Optional and sets Ref19_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef19ToNull`](#structFRHAPI__GuideCreateRequest_1aa20f4e6359eaa42f9c3653ba7b385f51)`()` <a id="structFRHAPI__GuideCreateRequest_1aa20f4e6359eaa42f9c3653ba7b385f51"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef19Null`](#structFRHAPI__GuideCreateRequest_1a48e195fa830b7011b77e5696ec3619b2)`() const` <a id="structFRHAPI__GuideCreateRequest_1a48e195fa830b7011b77e5696ec3619b2"></a>

Checks whether Ref19_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef20`](#structFRHAPI__GuideCreateRequest_1aa5127046360b7d7ac0733ea4ad42a82a)`()` <a id="structFRHAPI__GuideCreateRequest_1aa5127046360b7d7ac0733ea4ad42a82a"></a>

Gets the value of Ref20_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef20`](#structFRHAPI__GuideCreateRequest_1a9c17e33470d01585d7b92c4a1fe3e829)`() const` <a id="structFRHAPI__GuideCreateRequest_1a9c17e33470d01585d7b92c4a1fe3e829"></a>

Gets the value of Ref20_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef20`](#structFRHAPI__GuideCreateRequest_1a64a5b0143ca3592b8d8bf1fa6b042be9)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a64a5b0143ca3592b8d8bf1fa6b042be9"></a>

Gets the value of Ref20_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef20`](#structFRHAPI__GuideCreateRequest_1a72312fd00cbfc2e2da491201cc6b3294)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a72312fd00cbfc2e2da491201cc6b3294"></a>

Fills OutValue with the value of Ref20_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef20OrNull`](#structFRHAPI__GuideCreateRequest_1aabfef322bf4cb1080d7d7318dab7cbf8)`()` <a id="structFRHAPI__GuideCreateRequest_1aabfef322bf4cb1080d7d7318dab7cbf8"></a>

Returns a pointer to Ref20_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef20OrNull`](#structFRHAPI__GuideCreateRequest_1a4bda9585a59273ae2f6122512e35409a)`() const` <a id="structFRHAPI__GuideCreateRequest_1a4bda9585a59273ae2f6122512e35409a"></a>

Returns a pointer to Ref20_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef20`](#structFRHAPI__GuideCreateRequest_1a6ae0b4ce02f5db8af67b4a97c1ac045f)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a6ae0b4ce02f5db8af67b4a97c1ac045f"></a>

Sets the value of Ref20_Optional and also sets Ref20_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef20`](#structFRHAPI__GuideCreateRequest_1a6422842aa13233dd7835212c6ea59d7c)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a6422842aa13233dd7835212c6ea59d7c"></a>

Sets the value of Ref20_Optional and also sets Ref20_IsSet to true using move semantics.

#### `public inline void `[`ClearRef20`](#structFRHAPI__GuideCreateRequest_1afc9241612aa41f4fed73f76e290c3051)`()` <a id="structFRHAPI__GuideCreateRequest_1afc9241612aa41f4fed73f76e290c3051"></a>

Clears the value of Ref20_Optional and sets Ref20_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef20ToNull`](#structFRHAPI__GuideCreateRequest_1a9b22c33f310a7def8058f22163b1c583)`()` <a id="structFRHAPI__GuideCreateRequest_1a9b22c33f310a7def8058f22163b1c583"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef20Null`](#structFRHAPI__GuideCreateRequest_1aec08f5463404c44230f7bf76eba116c5)`() const` <a id="structFRHAPI__GuideCreateRequest_1aec08f5463404c44230f7bf76eba116c5"></a>

Checks whether Ref20_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef21`](#structFRHAPI__GuideCreateRequest_1a6a0c1a01a4f1fac9052779fd80481e74)`()` <a id="structFRHAPI__GuideCreateRequest_1a6a0c1a01a4f1fac9052779fd80481e74"></a>

Gets the value of Ref21_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef21`](#structFRHAPI__GuideCreateRequest_1a9a73d5899a901b1f96a7bf4bd6c8de3c)`() const` <a id="structFRHAPI__GuideCreateRequest_1a9a73d5899a901b1f96a7bf4bd6c8de3c"></a>

Gets the value of Ref21_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef21`](#structFRHAPI__GuideCreateRequest_1ab59acf5cf4a97eb93b3e1674e99c7789)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1ab59acf5cf4a97eb93b3e1674e99c7789"></a>

Gets the value of Ref21_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef21`](#structFRHAPI__GuideCreateRequest_1a2b6d86997c6da5ddbe7f7143f3ac43ad)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a2b6d86997c6da5ddbe7f7143f3ac43ad"></a>

Fills OutValue with the value of Ref21_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef21OrNull`](#structFRHAPI__GuideCreateRequest_1ad21d8abd4bd7d116ccf2a05ca87a563a)`()` <a id="structFRHAPI__GuideCreateRequest_1ad21d8abd4bd7d116ccf2a05ca87a563a"></a>

Returns a pointer to Ref21_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef21OrNull`](#structFRHAPI__GuideCreateRequest_1a355ac79789757d19963062333eb93065)`() const` <a id="structFRHAPI__GuideCreateRequest_1a355ac79789757d19963062333eb93065"></a>

Returns a pointer to Ref21_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef21`](#structFRHAPI__GuideCreateRequest_1a91aaa9f59f1dcf9846160b83a2b083c7)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a91aaa9f59f1dcf9846160b83a2b083c7"></a>

Sets the value of Ref21_Optional and also sets Ref21_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef21`](#structFRHAPI__GuideCreateRequest_1a9ce0687bbde4598d535ebb2fe3fca56e)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a9ce0687bbde4598d535ebb2fe3fca56e"></a>

Sets the value of Ref21_Optional and also sets Ref21_IsSet to true using move semantics.

#### `public inline void `[`ClearRef21`](#structFRHAPI__GuideCreateRequest_1ae092694d87e5afca8e062b1093c7fc1d)`()` <a id="structFRHAPI__GuideCreateRequest_1ae092694d87e5afca8e062b1093c7fc1d"></a>

Clears the value of Ref21_Optional and sets Ref21_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef21ToNull`](#structFRHAPI__GuideCreateRequest_1a85489822d0d8e8e31b7d8879c1355936)`()` <a id="structFRHAPI__GuideCreateRequest_1a85489822d0d8e8e31b7d8879c1355936"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef21Null`](#structFRHAPI__GuideCreateRequest_1a0c074dc8452fe8eb86d2735d6078145b)`() const` <a id="structFRHAPI__GuideCreateRequest_1a0c074dc8452fe8eb86d2735d6078145b"></a>

Checks whether Ref21_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef22`](#structFRHAPI__GuideCreateRequest_1a195fef2b5cf9399f466af6607161137c)`()` <a id="structFRHAPI__GuideCreateRequest_1a195fef2b5cf9399f466af6607161137c"></a>

Gets the value of Ref22_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef22`](#structFRHAPI__GuideCreateRequest_1aa5dbf14ffd97a432d3ac89a2b49d86a4)`() const` <a id="structFRHAPI__GuideCreateRequest_1aa5dbf14ffd97a432d3ac89a2b49d86a4"></a>

Gets the value of Ref22_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef22`](#structFRHAPI__GuideCreateRequest_1aa5d01b6af619d6655e7d1ec50e1ba80d)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1aa5d01b6af619d6655e7d1ec50e1ba80d"></a>

Gets the value of Ref22_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef22`](#structFRHAPI__GuideCreateRequest_1a169c6416ad73fce3289af21dddbd9ebd)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a169c6416ad73fce3289af21dddbd9ebd"></a>

Fills OutValue with the value of Ref22_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef22OrNull`](#structFRHAPI__GuideCreateRequest_1a796956eafb730746d6f874f56e05890f)`()` <a id="structFRHAPI__GuideCreateRequest_1a796956eafb730746d6f874f56e05890f"></a>

Returns a pointer to Ref22_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef22OrNull`](#structFRHAPI__GuideCreateRequest_1ab1ebb476ff9ac5630aee6b6a00d0f412)`() const` <a id="structFRHAPI__GuideCreateRequest_1ab1ebb476ff9ac5630aee6b6a00d0f412"></a>

Returns a pointer to Ref22_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef22`](#structFRHAPI__GuideCreateRequest_1a961225dadee8740972b8c6e18d6c8807)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a961225dadee8740972b8c6e18d6c8807"></a>

Sets the value of Ref22_Optional and also sets Ref22_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef22`](#structFRHAPI__GuideCreateRequest_1a6a5ed4914a06dd35a77cd09819b42298)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a6a5ed4914a06dd35a77cd09819b42298"></a>

Sets the value of Ref22_Optional and also sets Ref22_IsSet to true using move semantics.

#### `public inline void `[`ClearRef22`](#structFRHAPI__GuideCreateRequest_1ad3ef5de86ffcfb56ec9e044a50b7d954)`()` <a id="structFRHAPI__GuideCreateRequest_1ad3ef5de86ffcfb56ec9e044a50b7d954"></a>

Clears the value of Ref22_Optional and sets Ref22_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef22ToNull`](#structFRHAPI__GuideCreateRequest_1a36970dce59e90389fdfa41bcb07ca5d6)`()` <a id="structFRHAPI__GuideCreateRequest_1a36970dce59e90389fdfa41bcb07ca5d6"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef22Null`](#structFRHAPI__GuideCreateRequest_1ae0ef78dcc47f1cf5ee64c315be225538)`() const` <a id="structFRHAPI__GuideCreateRequest_1ae0ef78dcc47f1cf5ee64c315be225538"></a>

Checks whether Ref22_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef23`](#structFRHAPI__GuideCreateRequest_1a95386222d0b814a8a74a543f8d2cc5ed)`()` <a id="structFRHAPI__GuideCreateRequest_1a95386222d0b814a8a74a543f8d2cc5ed"></a>

Gets the value of Ref23_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef23`](#structFRHAPI__GuideCreateRequest_1a1d3abde2d8133fbb3ed269a63cea47f9)`() const` <a id="structFRHAPI__GuideCreateRequest_1a1d3abde2d8133fbb3ed269a63cea47f9"></a>

Gets the value of Ref23_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef23`](#structFRHAPI__GuideCreateRequest_1a191c4519286be7ff72cb0ee40c2b582d)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a191c4519286be7ff72cb0ee40c2b582d"></a>

Gets the value of Ref23_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef23`](#structFRHAPI__GuideCreateRequest_1afa0d2c5ae2e46323c8d9859d5b983928)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1afa0d2c5ae2e46323c8d9859d5b983928"></a>

Fills OutValue with the value of Ref23_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef23OrNull`](#structFRHAPI__GuideCreateRequest_1a74e85efc8797b1be8dbdd5c35015b94e)`()` <a id="structFRHAPI__GuideCreateRequest_1a74e85efc8797b1be8dbdd5c35015b94e"></a>

Returns a pointer to Ref23_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef23OrNull`](#structFRHAPI__GuideCreateRequest_1a551bf59f1a935371ffbf759a6b5e6caf)`() const` <a id="structFRHAPI__GuideCreateRequest_1a551bf59f1a935371ffbf759a6b5e6caf"></a>

Returns a pointer to Ref23_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef23`](#structFRHAPI__GuideCreateRequest_1ab504c218921436ae399a6d6b995d1a05)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1ab504c218921436ae399a6d6b995d1a05"></a>

Sets the value of Ref23_Optional and also sets Ref23_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef23`](#structFRHAPI__GuideCreateRequest_1a2ab8d1f437e73f4c819d8de78a63ee97)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a2ab8d1f437e73f4c819d8de78a63ee97"></a>

Sets the value of Ref23_Optional and also sets Ref23_IsSet to true using move semantics.

#### `public inline void `[`ClearRef23`](#structFRHAPI__GuideCreateRequest_1ab4a7977a29464f79d456f6f36b091a2f)`()` <a id="structFRHAPI__GuideCreateRequest_1ab4a7977a29464f79d456f6f36b091a2f"></a>

Clears the value of Ref23_Optional and sets Ref23_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef23ToNull`](#structFRHAPI__GuideCreateRequest_1a82bdb594b753bd807f3acf92afbe9885)`()` <a id="structFRHAPI__GuideCreateRequest_1a82bdb594b753bd807f3acf92afbe9885"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef23Null`](#structFRHAPI__GuideCreateRequest_1a9d193eaa1cccddcf046dbe805ae7fbf4)`() const` <a id="structFRHAPI__GuideCreateRequest_1a9d193eaa1cccddcf046dbe805ae7fbf4"></a>

Checks whether Ref23_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef24`](#structFRHAPI__GuideCreateRequest_1a136e7c48cfc01d1311e7b601977d6311)`()` <a id="structFRHAPI__GuideCreateRequest_1a136e7c48cfc01d1311e7b601977d6311"></a>

Gets the value of Ref24_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef24`](#structFRHAPI__GuideCreateRequest_1a45b17b0fef0eefc00ae962073f2b7be6)`() const` <a id="structFRHAPI__GuideCreateRequest_1a45b17b0fef0eefc00ae962073f2b7be6"></a>

Gets the value of Ref24_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef24`](#structFRHAPI__GuideCreateRequest_1a2935a0cea853006e2d1392d19ef009a8)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a2935a0cea853006e2d1392d19ef009a8"></a>

Gets the value of Ref24_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef24`](#structFRHAPI__GuideCreateRequest_1ac944d2ad9911e8af6c39c76ed48c9b36)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1ac944d2ad9911e8af6c39c76ed48c9b36"></a>

Fills OutValue with the value of Ref24_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef24OrNull`](#structFRHAPI__GuideCreateRequest_1a603740d19036c4ead5c964c193fbe147)`()` <a id="structFRHAPI__GuideCreateRequest_1a603740d19036c4ead5c964c193fbe147"></a>

Returns a pointer to Ref24_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef24OrNull`](#structFRHAPI__GuideCreateRequest_1a906d7ac0da09fb290f74974bc3842eac)`() const` <a id="structFRHAPI__GuideCreateRequest_1a906d7ac0da09fb290f74974bc3842eac"></a>

Returns a pointer to Ref24_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef24`](#structFRHAPI__GuideCreateRequest_1a1f243c8ac560e21e6cb242a06710d3ca)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a1f243c8ac560e21e6cb242a06710d3ca"></a>

Sets the value of Ref24_Optional and also sets Ref24_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef24`](#structFRHAPI__GuideCreateRequest_1a1391fd36cb6999a193ca185002cb2d56)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a1391fd36cb6999a193ca185002cb2d56"></a>

Sets the value of Ref24_Optional and also sets Ref24_IsSet to true using move semantics.

#### `public inline void `[`ClearRef24`](#structFRHAPI__GuideCreateRequest_1a309ae2ee65782d4b2f3bb5e4720a9eb9)`()` <a id="structFRHAPI__GuideCreateRequest_1a309ae2ee65782d4b2f3bb5e4720a9eb9"></a>

Clears the value of Ref24_Optional and sets Ref24_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef24ToNull`](#structFRHAPI__GuideCreateRequest_1ac01a1a4aecfed461d59042b7e6f5de65)`()` <a id="structFRHAPI__GuideCreateRequest_1ac01a1a4aecfed461d59042b7e6f5de65"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef24Null`](#structFRHAPI__GuideCreateRequest_1a2cbf948f4b188e8bd55f96ec42d7760f)`() const` <a id="structFRHAPI__GuideCreateRequest_1a2cbf948f4b188e8bd55f96ec42d7760f"></a>

Checks whether Ref24_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef25`](#structFRHAPI__GuideCreateRequest_1a92b47d45db85b486bc91b0934c35679a)`()` <a id="structFRHAPI__GuideCreateRequest_1a92b47d45db85b486bc91b0934c35679a"></a>

Gets the value of Ref25_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef25`](#structFRHAPI__GuideCreateRequest_1a977fea97c91d70e6d2df03f3eed1414a)`() const` <a id="structFRHAPI__GuideCreateRequest_1a977fea97c91d70e6d2df03f3eed1414a"></a>

Gets the value of Ref25_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef25`](#structFRHAPI__GuideCreateRequest_1a9f55188efcedc924f35e0ce33ecf0930)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a9f55188efcedc924f35e0ce33ecf0930"></a>

Gets the value of Ref25_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef25`](#structFRHAPI__GuideCreateRequest_1a19290585ad4b04e142635aae5cdadb7d)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a19290585ad4b04e142635aae5cdadb7d"></a>

Fills OutValue with the value of Ref25_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef25OrNull`](#structFRHAPI__GuideCreateRequest_1ab5aaee7bef9bf10d9349419f1ffca71a)`()` <a id="structFRHAPI__GuideCreateRequest_1ab5aaee7bef9bf10d9349419f1ffca71a"></a>

Returns a pointer to Ref25_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef25OrNull`](#structFRHAPI__GuideCreateRequest_1ab03cfc19f8d986a8f02bf879f20b9d49)`() const` <a id="structFRHAPI__GuideCreateRequest_1ab03cfc19f8d986a8f02bf879f20b9d49"></a>

Returns a pointer to Ref25_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef25`](#structFRHAPI__GuideCreateRequest_1a39124ff0b792c615d159b9284e133f9f)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a39124ff0b792c615d159b9284e133f9f"></a>

Sets the value of Ref25_Optional and also sets Ref25_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef25`](#structFRHAPI__GuideCreateRequest_1a9a06d9c63dad620dc19b0badf61c7f56)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a9a06d9c63dad620dc19b0badf61c7f56"></a>

Sets the value of Ref25_Optional and also sets Ref25_IsSet to true using move semantics.

#### `public inline void `[`ClearRef25`](#structFRHAPI__GuideCreateRequest_1a6a53b870e5cdfc61ffd40ac99b3af8d6)`()` <a id="structFRHAPI__GuideCreateRequest_1a6a53b870e5cdfc61ffd40ac99b3af8d6"></a>

Clears the value of Ref25_Optional and sets Ref25_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef25ToNull`](#structFRHAPI__GuideCreateRequest_1a467ac2014e0c8655cc0105b65fb8c67a)`()` <a id="structFRHAPI__GuideCreateRequest_1a467ac2014e0c8655cc0105b65fb8c67a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef25Null`](#structFRHAPI__GuideCreateRequest_1a8d20a9332d41d4e8f645d73dac73766f)`() const` <a id="structFRHAPI__GuideCreateRequest_1a8d20a9332d41d4e8f645d73dac73766f"></a>

Checks whether Ref25_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef26`](#structFRHAPI__GuideCreateRequest_1a21c3fdfaff12e511fcfb8d396abedd7d)`()` <a id="structFRHAPI__GuideCreateRequest_1a21c3fdfaff12e511fcfb8d396abedd7d"></a>

Gets the value of Ref26_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef26`](#structFRHAPI__GuideCreateRequest_1ac8f33bee2b209a913ff4eab1e4f80287)`() const` <a id="structFRHAPI__GuideCreateRequest_1ac8f33bee2b209a913ff4eab1e4f80287"></a>

Gets the value of Ref26_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef26`](#structFRHAPI__GuideCreateRequest_1ae5dc657524b096f6aeb0124d3166d55b)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1ae5dc657524b096f6aeb0124d3166d55b"></a>

Gets the value of Ref26_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef26`](#structFRHAPI__GuideCreateRequest_1a4b955ff189ca37f73c643003b1530cc8)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a4b955ff189ca37f73c643003b1530cc8"></a>

Fills OutValue with the value of Ref26_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef26OrNull`](#structFRHAPI__GuideCreateRequest_1afdeb8676c2e58bd08b4e7de4e4ea14ba)`()` <a id="structFRHAPI__GuideCreateRequest_1afdeb8676c2e58bd08b4e7de4e4ea14ba"></a>

Returns a pointer to Ref26_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef26OrNull`](#structFRHAPI__GuideCreateRequest_1ac8110187709a847e90667eb5719264d9)`() const` <a id="structFRHAPI__GuideCreateRequest_1ac8110187709a847e90667eb5719264d9"></a>

Returns a pointer to Ref26_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef26`](#structFRHAPI__GuideCreateRequest_1ac0d339cb7c7889ba14cc1b7386c57ea1)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1ac0d339cb7c7889ba14cc1b7386c57ea1"></a>

Sets the value of Ref26_Optional and also sets Ref26_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef26`](#structFRHAPI__GuideCreateRequest_1a39b2997a6ea0cff8b71da1dce47c2f34)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a39b2997a6ea0cff8b71da1dce47c2f34"></a>

Sets the value of Ref26_Optional and also sets Ref26_IsSet to true using move semantics.

#### `public inline void `[`ClearRef26`](#structFRHAPI__GuideCreateRequest_1a71658eb35d971b62d3f28208670a9417)`()` <a id="structFRHAPI__GuideCreateRequest_1a71658eb35d971b62d3f28208670a9417"></a>

Clears the value of Ref26_Optional and sets Ref26_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef26ToNull`](#structFRHAPI__GuideCreateRequest_1a06bce88a6ceafaeb13655e60f802d835)`()` <a id="structFRHAPI__GuideCreateRequest_1a06bce88a6ceafaeb13655e60f802d835"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef26Null`](#structFRHAPI__GuideCreateRequest_1aea5690eea4e4f94d9296d6a88003e6a0)`() const` <a id="structFRHAPI__GuideCreateRequest_1aea5690eea4e4f94d9296d6a88003e6a0"></a>

Checks whether Ref26_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef27`](#structFRHAPI__GuideCreateRequest_1a90fa757516b33065473a63fe6257e917)`()` <a id="structFRHAPI__GuideCreateRequest_1a90fa757516b33065473a63fe6257e917"></a>

Gets the value of Ref27_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef27`](#structFRHAPI__GuideCreateRequest_1ae517f80cac0a931d8a2b8f872663c30d)`() const` <a id="structFRHAPI__GuideCreateRequest_1ae517f80cac0a931d8a2b8f872663c30d"></a>

Gets the value of Ref27_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef27`](#structFRHAPI__GuideCreateRequest_1af884da248befe187b6538a5724cf33d8)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1af884da248befe187b6538a5724cf33d8"></a>

Gets the value of Ref27_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef27`](#structFRHAPI__GuideCreateRequest_1a9e13c1e111811d8099dcc1a39e8758d0)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a9e13c1e111811d8099dcc1a39e8758d0"></a>

Fills OutValue with the value of Ref27_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef27OrNull`](#structFRHAPI__GuideCreateRequest_1a282777f96a5a32e6cfdb2b28ed2d071e)`()` <a id="structFRHAPI__GuideCreateRequest_1a282777f96a5a32e6cfdb2b28ed2d071e"></a>

Returns a pointer to Ref27_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef27OrNull`](#structFRHAPI__GuideCreateRequest_1ab4233d0779830e6df2e41dd775e1e5f8)`() const` <a id="structFRHAPI__GuideCreateRequest_1ab4233d0779830e6df2e41dd775e1e5f8"></a>

Returns a pointer to Ref27_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef27`](#structFRHAPI__GuideCreateRequest_1af665202e4dbf08a5d5d02944c8e1d926)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1af665202e4dbf08a5d5d02944c8e1d926"></a>

Sets the value of Ref27_Optional and also sets Ref27_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef27`](#structFRHAPI__GuideCreateRequest_1a33c37ff3cee588245b1c54059ebd60b4)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a33c37ff3cee588245b1c54059ebd60b4"></a>

Sets the value of Ref27_Optional and also sets Ref27_IsSet to true using move semantics.

#### `public inline void `[`ClearRef27`](#structFRHAPI__GuideCreateRequest_1a4421b3996d95385aca2d739d96dcca1d)`()` <a id="structFRHAPI__GuideCreateRequest_1a4421b3996d95385aca2d739d96dcca1d"></a>

Clears the value of Ref27_Optional and sets Ref27_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef27ToNull`](#structFRHAPI__GuideCreateRequest_1a4dc5bcbb975b5bbde46b5afbc68a0e92)`()` <a id="structFRHAPI__GuideCreateRequest_1a4dc5bcbb975b5bbde46b5afbc68a0e92"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef27Null`](#structFRHAPI__GuideCreateRequest_1a98fbe14f8d8c4a701996cc54d9aeaf2b)`() const` <a id="structFRHAPI__GuideCreateRequest_1a98fbe14f8d8c4a701996cc54d9aeaf2b"></a>

Checks whether Ref27_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef28`](#structFRHAPI__GuideCreateRequest_1a9d37a27b676eb0d0e08e4a53e530795e)`()` <a id="structFRHAPI__GuideCreateRequest_1a9d37a27b676eb0d0e08e4a53e530795e"></a>

Gets the value of Ref28_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef28`](#structFRHAPI__GuideCreateRequest_1a3e5179b310db7b24d1a888b0d87225f0)`() const` <a id="structFRHAPI__GuideCreateRequest_1a3e5179b310db7b24d1a888b0d87225f0"></a>

Gets the value of Ref28_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef28`](#structFRHAPI__GuideCreateRequest_1adeb6b93e17ccee739f2ac3981b372f0e)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1adeb6b93e17ccee739f2ac3981b372f0e"></a>

Gets the value of Ref28_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef28`](#structFRHAPI__GuideCreateRequest_1abd423baa18547385e6d8886bd3fd1b62)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1abd423baa18547385e6d8886bd3fd1b62"></a>

Fills OutValue with the value of Ref28_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef28OrNull`](#structFRHAPI__GuideCreateRequest_1a9564c25f0d9adfcdcf9723673cecd181)`()` <a id="structFRHAPI__GuideCreateRequest_1a9564c25f0d9adfcdcf9723673cecd181"></a>

Returns a pointer to Ref28_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef28OrNull`](#structFRHAPI__GuideCreateRequest_1a09eb23886c41b634e2ff0d161bdde5cf)`() const` <a id="structFRHAPI__GuideCreateRequest_1a09eb23886c41b634e2ff0d161bdde5cf"></a>

Returns a pointer to Ref28_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef28`](#structFRHAPI__GuideCreateRequest_1a12329b06184121f5616377d66a00f039)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a12329b06184121f5616377d66a00f039"></a>

Sets the value of Ref28_Optional and also sets Ref28_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef28`](#structFRHAPI__GuideCreateRequest_1a5a2c4f7e75fabdf441f4b3122e03e789)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a5a2c4f7e75fabdf441f4b3122e03e789"></a>

Sets the value of Ref28_Optional and also sets Ref28_IsSet to true using move semantics.

#### `public inline void `[`ClearRef28`](#structFRHAPI__GuideCreateRequest_1a7adb4986ee45d8f911eddd734390bd3d)`()` <a id="structFRHAPI__GuideCreateRequest_1a7adb4986ee45d8f911eddd734390bd3d"></a>

Clears the value of Ref28_Optional and sets Ref28_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef28ToNull`](#structFRHAPI__GuideCreateRequest_1a4c3789970035eb58965bc7cad2ddf02c)`()` <a id="structFRHAPI__GuideCreateRequest_1a4c3789970035eb58965bc7cad2ddf02c"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef28Null`](#structFRHAPI__GuideCreateRequest_1a1ba17dc47dbf5ffe05d9de762f41bc55)`() const` <a id="structFRHAPI__GuideCreateRequest_1a1ba17dc47dbf5ffe05d9de762f41bc55"></a>

Checks whether Ref28_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef29`](#structFRHAPI__GuideCreateRequest_1ab23490a5253b4d1a4206162cb785ab79)`()` <a id="structFRHAPI__GuideCreateRequest_1ab23490a5253b4d1a4206162cb785ab79"></a>

Gets the value of Ref29_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef29`](#structFRHAPI__GuideCreateRequest_1a0e71a4bd8c54b7efa8535ff9e6e5cba1)`() const` <a id="structFRHAPI__GuideCreateRequest_1a0e71a4bd8c54b7efa8535ff9e6e5cba1"></a>

Gets the value of Ref29_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef29`](#structFRHAPI__GuideCreateRequest_1a75126a8ec18a6a8c6aca2948d0e8b691)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a75126a8ec18a6a8c6aca2948d0e8b691"></a>

Gets the value of Ref29_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef29`](#structFRHAPI__GuideCreateRequest_1a166f016bb5e64c4f513c491fac03583a)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a166f016bb5e64c4f513c491fac03583a"></a>

Fills OutValue with the value of Ref29_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef29OrNull`](#structFRHAPI__GuideCreateRequest_1a66dfa358f749e0c6abb145f11e941e66)`()` <a id="structFRHAPI__GuideCreateRequest_1a66dfa358f749e0c6abb145f11e941e66"></a>

Returns a pointer to Ref29_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef29OrNull`](#structFRHAPI__GuideCreateRequest_1a612c50a6dbb7c22a483527297286ccae)`() const` <a id="structFRHAPI__GuideCreateRequest_1a612c50a6dbb7c22a483527297286ccae"></a>

Returns a pointer to Ref29_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef29`](#structFRHAPI__GuideCreateRequest_1a00e7f99e5275325a986b7d94c2c81767)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a00e7f99e5275325a986b7d94c2c81767"></a>

Sets the value of Ref29_Optional and also sets Ref29_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef29`](#structFRHAPI__GuideCreateRequest_1abdde5010266f9f136968c110e932b958)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1abdde5010266f9f136968c110e932b958"></a>

Sets the value of Ref29_Optional and also sets Ref29_IsSet to true using move semantics.

#### `public inline void `[`ClearRef29`](#structFRHAPI__GuideCreateRequest_1ac3d9a10ff42d498ee058bcdb5765b359)`()` <a id="structFRHAPI__GuideCreateRequest_1ac3d9a10ff42d498ee058bcdb5765b359"></a>

Clears the value of Ref29_Optional and sets Ref29_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef29ToNull`](#structFRHAPI__GuideCreateRequest_1ae236c379043030458dbc26b5f88f87ed)`()` <a id="structFRHAPI__GuideCreateRequest_1ae236c379043030458dbc26b5f88f87ed"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef29Null`](#structFRHAPI__GuideCreateRequest_1a6431719bfdaaec325153c8292f3af5d2)`() const` <a id="structFRHAPI__GuideCreateRequest_1a6431719bfdaaec325153c8292f3af5d2"></a>

Checks whether Ref29_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef30`](#structFRHAPI__GuideCreateRequest_1ac597072a7ea439a2549a2fe4e470d906)`()` <a id="structFRHAPI__GuideCreateRequest_1ac597072a7ea439a2549a2fe4e470d906"></a>

Gets the value of Ref30_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef30`](#structFRHAPI__GuideCreateRequest_1ae802bddf199edc6faf8456cd9840ddf8)`() const` <a id="structFRHAPI__GuideCreateRequest_1ae802bddf199edc6faf8456cd9840ddf8"></a>

Gets the value of Ref30_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef30`](#structFRHAPI__GuideCreateRequest_1a97ca4f71c622513f55018e1df3706882)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a97ca4f71c622513f55018e1df3706882"></a>

Gets the value of Ref30_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef30`](#structFRHAPI__GuideCreateRequest_1a4b21b132ac0afc2e09dd8d85ebe98c1d)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a4b21b132ac0afc2e09dd8d85ebe98c1d"></a>

Fills OutValue with the value of Ref30_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef30OrNull`](#structFRHAPI__GuideCreateRequest_1a72e69e5fa81ca47bee6cd60c7dd8971b)`()` <a id="structFRHAPI__GuideCreateRequest_1a72e69e5fa81ca47bee6cd60c7dd8971b"></a>

Returns a pointer to Ref30_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef30OrNull`](#structFRHAPI__GuideCreateRequest_1a1ec6464c7b699916b493034376196d67)`() const` <a id="structFRHAPI__GuideCreateRequest_1a1ec6464c7b699916b493034376196d67"></a>

Returns a pointer to Ref30_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef30`](#structFRHAPI__GuideCreateRequest_1adfd50702be684e3d1a23add32c61750e)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1adfd50702be684e3d1a23add32c61750e"></a>

Sets the value of Ref30_Optional and also sets Ref30_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef30`](#structFRHAPI__GuideCreateRequest_1ababb9bc57666c6c9fe420bb030e37c44)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1ababb9bc57666c6c9fe420bb030e37c44"></a>

Sets the value of Ref30_Optional and also sets Ref30_IsSet to true using move semantics.

#### `public inline void `[`ClearRef30`](#structFRHAPI__GuideCreateRequest_1ae1dc353c7df90d6ffceca6c5e565a49e)`()` <a id="structFRHAPI__GuideCreateRequest_1ae1dc353c7df90d6ffceca6c5e565a49e"></a>

Clears the value of Ref30_Optional and sets Ref30_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef30ToNull`](#structFRHAPI__GuideCreateRequest_1a3609ab6b960f125e1abbf27cabce23dd)`()` <a id="structFRHAPI__GuideCreateRequest_1a3609ab6b960f125e1abbf27cabce23dd"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef30Null`](#structFRHAPI__GuideCreateRequest_1aae2148048d96c3a421853ad97491b8f4)`() const` <a id="structFRHAPI__GuideCreateRequest_1aae2148048d96c3a421853ad97491b8f4"></a>

Checks whether Ref30_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef31`](#structFRHAPI__GuideCreateRequest_1af5e9cdf0180840c1bfc8619a96a1f957)`()` <a id="structFRHAPI__GuideCreateRequest_1af5e9cdf0180840c1bfc8619a96a1f957"></a>

Gets the value of Ref31_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef31`](#structFRHAPI__GuideCreateRequest_1a4d7a8b5f83223e04a879ebdacdce4f35)`() const` <a id="structFRHAPI__GuideCreateRequest_1a4d7a8b5f83223e04a879ebdacdce4f35"></a>

Gets the value of Ref31_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef31`](#structFRHAPI__GuideCreateRequest_1ab596140093281a2760d9e40fb2561bc8)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1ab596140093281a2760d9e40fb2561bc8"></a>

Gets the value of Ref31_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef31`](#structFRHAPI__GuideCreateRequest_1afc97a7e5cc958655af75d8e7d7e66ea4)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1afc97a7e5cc958655af75d8e7d7e66ea4"></a>

Fills OutValue with the value of Ref31_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef31OrNull`](#structFRHAPI__GuideCreateRequest_1a813a57a1b0ceb7cf0a694fcfda254327)`()` <a id="structFRHAPI__GuideCreateRequest_1a813a57a1b0ceb7cf0a694fcfda254327"></a>

Returns a pointer to Ref31_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef31OrNull`](#structFRHAPI__GuideCreateRequest_1a29496a91255151a574893688729f3568)`() const` <a id="structFRHAPI__GuideCreateRequest_1a29496a91255151a574893688729f3568"></a>

Returns a pointer to Ref31_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef31`](#structFRHAPI__GuideCreateRequest_1a52a7be422b18c6ee4dafbd17bcd5e544)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a52a7be422b18c6ee4dafbd17bcd5e544"></a>

Sets the value of Ref31_Optional and also sets Ref31_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef31`](#structFRHAPI__GuideCreateRequest_1af0ec5214ff8b6f4db114d0b676a7c1a5)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1af0ec5214ff8b6f4db114d0b676a7c1a5"></a>

Sets the value of Ref31_Optional and also sets Ref31_IsSet to true using move semantics.

#### `public inline void `[`ClearRef31`](#structFRHAPI__GuideCreateRequest_1a74aca5e1cd67ff516f7284bbbffb3fbd)`()` <a id="structFRHAPI__GuideCreateRequest_1a74aca5e1cd67ff516f7284bbbffb3fbd"></a>

Clears the value of Ref31_Optional and sets Ref31_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef31ToNull`](#structFRHAPI__GuideCreateRequest_1a318f03ca11693979fed1de67039fa8ff)`()` <a id="structFRHAPI__GuideCreateRequest_1a318f03ca11693979fed1de67039fa8ff"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef31Null`](#structFRHAPI__GuideCreateRequest_1ac5b7aa9dbd274857dcf137184685a727)`() const` <a id="structFRHAPI__GuideCreateRequest_1ac5b7aa9dbd274857dcf137184685a727"></a>

Checks whether Ref31_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetRef32`](#structFRHAPI__GuideCreateRequest_1ac5981228e0b6e08a048ade313959c6eb)`()` <a id="structFRHAPI__GuideCreateRequest_1ac5981228e0b6e08a048ade313959c6eb"></a>

Gets the value of Ref32_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef32`](#structFRHAPI__GuideCreateRequest_1a359c71f9e6440dca98da2cb748c70028)`() const` <a id="structFRHAPI__GuideCreateRequest_1a359c71f9e6440dca98da2cb748c70028"></a>

Gets the value of Ref32_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRef32`](#structFRHAPI__GuideCreateRequest_1a7289639c2eedc754a29bcd344076bfdd)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a7289639c2eedc754a29bcd344076bfdd"></a>

Gets the value of Ref32_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRef32`](#structFRHAPI__GuideCreateRequest_1a8d978388021a20ac5429535f3a67ed6a)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a8d978388021a20ac5429535f3a67ed6a"></a>

Fills OutValue with the value of Ref32_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRef32OrNull`](#structFRHAPI__GuideCreateRequest_1a27350808507bab8202a6be7d4179d341)`()` <a id="structFRHAPI__GuideCreateRequest_1a27350808507bab8202a6be7d4179d341"></a>

Returns a pointer to Ref32_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRef32OrNull`](#structFRHAPI__GuideCreateRequest_1a6a0c9253aa1ff9f7df4d34296113bbf0)`() const` <a id="structFRHAPI__GuideCreateRequest_1a6a0c9253aa1ff9f7df4d34296113bbf0"></a>

Returns a pointer to Ref32_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRef32`](#structFRHAPI__GuideCreateRequest_1a73332ae6ffc3fd5fac76b51c7fc773d4)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a73332ae6ffc3fd5fac76b51c7fc773d4"></a>

Sets the value of Ref32_Optional and also sets Ref32_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRef32`](#structFRHAPI__GuideCreateRequest_1a8dcfdff3284e3c58dc1d8faf9a55975d)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a8dcfdff3284e3c58dc1d8faf9a55975d"></a>

Sets the value of Ref32_Optional and also sets Ref32_IsSet to true using move semantics.

#### `public inline void `[`ClearRef32`](#structFRHAPI__GuideCreateRequest_1ac5e80cb563d46ae1d08f11be0935c1b1)`()` <a id="structFRHAPI__GuideCreateRequest_1ac5e80cb563d46ae1d08f11be0935c1b1"></a>

Clears the value of Ref32_Optional and sets Ref32_IsSet to false.

#### `public inline FORCEINLINE void `[`SetRef32ToNull`](#structFRHAPI__GuideCreateRequest_1ae909021d66371b8d330e3d35c12971c8)`()` <a id="structFRHAPI__GuideCreateRequest_1ae909021d66371b8d330e3d35c12971c8"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsRef32Null`](#structFRHAPI__GuideCreateRequest_1a26ee3793cbbff9639bf788dc1066aaf1)`() const` <a id="structFRHAPI__GuideCreateRequest_1a26ee3793cbbff9639bf788dc1066aaf1"></a>

Checks whether Ref32_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_GuideEntityType & `[`GetOwnerEntityType`](#structFRHAPI__GuideCreateRequest_1a2ed2375f957e3a28a124e0a47d737ad0)`()` <a id="structFRHAPI__GuideCreateRequest_1a2ed2375f957e3a28a124e0a47d737ad0"></a>

Gets the value of OwnerEntityType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_GuideEntityType & `[`GetOwnerEntityType`](#structFRHAPI__GuideCreateRequest_1a309449e39d856ff27e38faa08da74cea)`() const` <a id="structFRHAPI__GuideCreateRequest_1a309449e39d856ff27e38faa08da74cea"></a>

Gets the value of OwnerEntityType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_GuideEntityType & `[`GetOwnerEntityType`](#structFRHAPI__GuideCreateRequest_1a3db4672d0dde5aeb122a37a674ec38b0)`(const ERHAPI_GuideEntityType & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a3db4672d0dde5aeb122a37a674ec38b0"></a>

Gets the value of OwnerEntityType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOwnerEntityType`](#structFRHAPI__GuideCreateRequest_1ae35bcc2c6697e8df4dc13376ff0b7c7e)`(ERHAPI_GuideEntityType & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1ae35bcc2c6697e8df4dc13376ff0b7c7e"></a>

Fills OutValue with the value of OwnerEntityType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_GuideEntityType * `[`GetOwnerEntityTypeOrNull`](#structFRHAPI__GuideCreateRequest_1ae1033470afee5b0a5d63c65cff5c7a19)`()` <a id="structFRHAPI__GuideCreateRequest_1ae1033470afee5b0a5d63c65cff5c7a19"></a>

Returns a pointer to OwnerEntityType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_GuideEntityType * `[`GetOwnerEntityTypeOrNull`](#structFRHAPI__GuideCreateRequest_1ade0b76ee59b1c422d56b6c3e7b11b89f)`() const` <a id="structFRHAPI__GuideCreateRequest_1ade0b76ee59b1c422d56b6c3e7b11b89f"></a>

Returns a pointer to OwnerEntityType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOwnerEntityType`](#structFRHAPI__GuideCreateRequest_1ad8596ef963e239d7c66bfe82e3b07575)`(const ERHAPI_GuideEntityType & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1ad8596ef963e239d7c66bfe82e3b07575"></a>

Sets the value of OwnerEntityType_Optional and also sets OwnerEntityType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOwnerEntityType`](#structFRHAPI__GuideCreateRequest_1a89efde0c6cb94fd08a5d58941c735248)`(ERHAPI_GuideEntityType && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a89efde0c6cb94fd08a5d58941c735248"></a>

Sets the value of OwnerEntityType_Optional and also sets OwnerEntityType_IsSet to true using move semantics.

#### `public inline void `[`ClearOwnerEntityType`](#structFRHAPI__GuideCreateRequest_1a90b64c42f70bd95a58404b80e5af50a8)`()` <a id="structFRHAPI__GuideCreateRequest_1a90b64c42f70bd95a58404b80e5af50a8"></a>

Clears the value of OwnerEntityType_Optional and sets OwnerEntityType_IsSet to false.

#### `public inline FORCEINLINE void `[`SetOwnerEntityTypeToNull`](#structFRHAPI__GuideCreateRequest_1ac4388d66d525ba1458a0e91cb336c8dd)`()` <a id="structFRHAPI__GuideCreateRequest_1ac4388d66d525ba1458a0e91cb336c8dd"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsOwnerEntityTypeNull`](#structFRHAPI__GuideCreateRequest_1a2f22e24ceca7e85753675001d4047e02)`() const` <a id="structFRHAPI__GuideCreateRequest_1a2f22e24ceca7e85753675001d4047e02"></a>

Checks whether OwnerEntityType_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetOwnerEntityId`](#structFRHAPI__GuideCreateRequest_1ac0e3dbe65493ae1db5145ef5ad752a1d)`()` <a id="structFRHAPI__GuideCreateRequest_1ac0e3dbe65493ae1db5145ef5ad752a1d"></a>

Gets the value of OwnerEntityId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOwnerEntityId`](#structFRHAPI__GuideCreateRequest_1a47a0ff6a2279f50137dff1bd4ce41c78)`() const` <a id="structFRHAPI__GuideCreateRequest_1a47a0ff6a2279f50137dff1bd4ce41c78"></a>

Gets the value of OwnerEntityId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOwnerEntityId`](#structFRHAPI__GuideCreateRequest_1aba5973663b6ce9fd9efb7eb37a22a3ae)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1aba5973663b6ce9fd9efb7eb37a22a3ae"></a>

Gets the value of OwnerEntityId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOwnerEntityId`](#structFRHAPI__GuideCreateRequest_1a04991800f0d8126ee6463cb25fa45b02)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a04991800f0d8126ee6463cb25fa45b02"></a>

Fills OutValue with the value of OwnerEntityId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetOwnerEntityIdOrNull`](#structFRHAPI__GuideCreateRequest_1aac88ebe68ea5f9ac64d7591afe54c4dc)`()` <a id="structFRHAPI__GuideCreateRequest_1aac88ebe68ea5f9ac64d7591afe54c4dc"></a>

Returns a pointer to OwnerEntityId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetOwnerEntityIdOrNull`](#structFRHAPI__GuideCreateRequest_1a88a9d6009eacc5350ebd9aed8faaefd1)`() const` <a id="structFRHAPI__GuideCreateRequest_1a88a9d6009eacc5350ebd9aed8faaefd1"></a>

Returns a pointer to OwnerEntityId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOwnerEntityId`](#structFRHAPI__GuideCreateRequest_1afd9b64bbdf2056babb4c954dfec9b2ae)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1afd9b64bbdf2056babb4c954dfec9b2ae"></a>

Sets the value of OwnerEntityId_Optional and also sets OwnerEntityId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOwnerEntityId`](#structFRHAPI__GuideCreateRequest_1a93f37884665bddd6ae4cd5bb4ffcf8b0)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a93f37884665bddd6ae4cd5bb4ffcf8b0"></a>

Sets the value of OwnerEntityId_Optional and also sets OwnerEntityId_IsSet to true using move semantics.

#### `public inline void `[`ClearOwnerEntityId`](#structFRHAPI__GuideCreateRequest_1ac2e91ef60aea7a665e42d3a4ed773dae)`()` <a id="structFRHAPI__GuideCreateRequest_1ac2e91ef60aea7a665e42d3a4ed773dae"></a>

Clears the value of OwnerEntityId_Optional and sets OwnerEntityId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetOwnerEntityIdToNull`](#structFRHAPI__GuideCreateRequest_1a72deec495daabf2b8283f727347bb405)`()` <a id="structFRHAPI__GuideCreateRequest_1a72deec495daabf2b8283f727347bb405"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsOwnerEntityIdNull`](#structFRHAPI__GuideCreateRequest_1a1549bba293d57973d51cc9289f38902c)`() const` <a id="structFRHAPI__GuideCreateRequest_1a1549bba293d57973d51cc9289f38902c"></a>

Checks whether OwnerEntityId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetContent`](#structFRHAPI__GuideCreateRequest_1ab21fbe4982ae845d299c9e28c4bc81b5)`()` <a id="structFRHAPI__GuideCreateRequest_1ab21fbe4982ae845d299c9e28c4bc81b5"></a>

Gets the value of Content_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetContent`](#structFRHAPI__GuideCreateRequest_1aebb2ad10d611263d42a52d0e02878557)`() const` <a id="structFRHAPI__GuideCreateRequest_1aebb2ad10d611263d42a52d0e02878557"></a>

Gets the value of Content_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetContent`](#structFRHAPI__GuideCreateRequest_1a949375cdba8f1f2f13d35c38aa9ae6df)`(const FString & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a949375cdba8f1f2f13d35c38aa9ae6df"></a>

Gets the value of Content_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetContent`](#structFRHAPI__GuideCreateRequest_1a053552de751f816b68ba07e621d13860)`(FString & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a053552de751f816b68ba07e621d13860"></a>

Fills OutValue with the value of Content_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetContentOrNull`](#structFRHAPI__GuideCreateRequest_1a321605a48619a8ae7fd43ba5711ab90a)`()` <a id="structFRHAPI__GuideCreateRequest_1a321605a48619a8ae7fd43ba5711ab90a"></a>

Returns a pointer to Content_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetContentOrNull`](#structFRHAPI__GuideCreateRequest_1a71e02fde6d96468af4286fb9c8fa85a7)`() const` <a id="structFRHAPI__GuideCreateRequest_1a71e02fde6d96468af4286fb9c8fa85a7"></a>

Returns a pointer to Content_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetContent`](#structFRHAPI__GuideCreateRequest_1adf598b3e30e06207aca647df087f083e)`(const FString & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1adf598b3e30e06207aca647df087f083e"></a>

Sets the value of Content_Optional and also sets Content_IsSet to true.

#### `public inline FORCEINLINE void `[`SetContent`](#structFRHAPI__GuideCreateRequest_1a429b7f29999ba3aefbca8f4f99ecdb85)`(FString && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a429b7f29999ba3aefbca8f4f99ecdb85"></a>

Sets the value of Content_Optional and also sets Content_IsSet to true using move semantics.

#### `public inline void `[`ClearContent`](#structFRHAPI__GuideCreateRequest_1a56f9d94c43a7efe13fa66135a6431a95)`()` <a id="structFRHAPI__GuideCreateRequest_1a56f9d94c43a7efe13fa66135a6431a95"></a>

Clears the value of Content_Optional and sets Content_IsSet to false.

#### `public inline FORCEINLINE void `[`SetContentToNull`](#structFRHAPI__GuideCreateRequest_1a488867c37247ce131a9df8e9f1a9813a)`()` <a id="structFRHAPI__GuideCreateRequest_1a488867c37247ce131a9df8e9f1a9813a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsContentNull`](#structFRHAPI__GuideCreateRequest_1a22101e94647e32ee24bf07851690e3d6)`() const` <a id="structFRHAPI__GuideCreateRequest_1a22101e94647e32ee24bf07851690e3d6"></a>

Checks whether Content_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > & `[`GetSections`](#structFRHAPI__GuideCreateRequest_1a3ee9346ec13cb74aea629c7a4979be47)`()` <a id="structFRHAPI__GuideCreateRequest_1a3ee9346ec13cb74aea629c7a4979be47"></a>

Gets the value of Sections_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > & `[`GetSections`](#structFRHAPI__GuideCreateRequest_1a4b72098c8b4502c8910e6ff1c7cbc189)`() const` <a id="structFRHAPI__GuideCreateRequest_1a4b72098c8b4502c8910e6ff1c7cbc189"></a>

Gets the value of Sections_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > & `[`GetSections`](#structFRHAPI__GuideCreateRequest_1a65419929e316bc5d3e4b4bd2c1e71576)`(const TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > & DefaultValue) const` <a id="structFRHAPI__GuideCreateRequest_1a65419929e316bc5d3e4b4bd2c1e71576"></a>

Gets the value of Sections_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSections`](#structFRHAPI__GuideCreateRequest_1a774bfa09fa1f90df8e6d10fb6c837af3)`(TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > & OutValue) const` <a id="structFRHAPI__GuideCreateRequest_1a774bfa09fa1f90df8e6d10fb6c837af3"></a>

Fills OutValue with the value of Sections_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > * `[`GetSectionsOrNull`](#structFRHAPI__GuideCreateRequest_1a0aa6928e6723837add7ef99629d1828e)`()` <a id="structFRHAPI__GuideCreateRequest_1a0aa6928e6723837add7ef99629d1828e"></a>

Returns a pointer to Sections_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > * `[`GetSectionsOrNull`](#structFRHAPI__GuideCreateRequest_1a6f83a89e9ff3ca913449fd3365a05108)`() const` <a id="structFRHAPI__GuideCreateRequest_1a6f83a89e9ff3ca913449fd3365a05108"></a>

Returns a pointer to Sections_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSections`](#structFRHAPI__GuideCreateRequest_1a63d387da93b146f02ee67918a9e5f470)`(const TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > & NewValue)` <a id="structFRHAPI__GuideCreateRequest_1a63d387da93b146f02ee67918a9e5f470"></a>

Sets the value of Sections_Optional and also sets Sections_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSections`](#structFRHAPI__GuideCreateRequest_1ad86a35a02493d12a92e51f9aa7b29259)`(TArray< `[`FRHAPI_GuideSectionCreate`](RHAPI_GuideSectionCreate.md#structFRHAPI__GuideSectionCreate)` > && NewValue)` <a id="structFRHAPI__GuideCreateRequest_1ad86a35a02493d12a92e51f9aa7b29259"></a>

Sets the value of Sections_Optional and also sets Sections_IsSet to true using move semantics.

#### `public inline void `[`ClearSections`](#structFRHAPI__GuideCreateRequest_1a23dcb4f40f3dcd8ed029216f13710475)`()` <a id="structFRHAPI__GuideCreateRequest_1a23dcb4f40f3dcd8ed029216f13710475"></a>

Clears the value of Sections_Optional and sets Sections_IsSet to false.

