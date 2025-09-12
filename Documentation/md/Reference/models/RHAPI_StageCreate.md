---
title: RHAPI_StageCreate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_StageCreate`](#structFRHAPI__StageCreate) | Fields to create a stage with. NOTE: the fields shared between this and the StageMatchmakeParams are used to determine which matchmaking pool this stage will be placed into.

## struct `FRHAPI_StageCreate` <a id="structFRHAPI__StageCreate"></a>

```
struct FRHAPI_StageCreate
  : public FRHAPI_Model
```

Fields to create a stage with. NOTE: the fields shared between this and the StageMatchmakeParams are used to determine which matchmaking pool this stage will be placed into.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > `[`Blob_Optional`](#structFRHAPI__StageCreate_1a560a954eab886eaa1fbb4783a71ed0ca) | 
`public bool `[`Blob_IsSet`](#structFRHAPI__StageCreate_1ad7af7922d7e0a793ca39f22ef6340713) | true if Blob_Optional has been set to a value
`public FString `[`GameVersion_Optional`](#structFRHAPI__StageCreate_1a5ef5292521809a0fb3ead1c349908d67) | 
`public bool `[`GameVersion_IsSet`](#structFRHAPI__StageCreate_1a819d9c0491915e416f763225dd6cfb56) | true if GameVersion_Optional has been set to a value
`public bool `[`GameVersion_IsNull`](#structFRHAPI__StageCreate_1a7675e79fccaa45cb1c1bc942d38ceba4) | true if GameVersion_Optional has been explicitly set to null
`public FString `[`V_Optional`](#structFRHAPI__StageCreate_1a2ddf1f9a462defa76359de8b942dc4b8) | 
`public bool `[`V_IsSet`](#structFRHAPI__StageCreate_1aad8bfba78cc74e8ec2d3e8f8ee294fa1) | true if V_Optional has been set to a value
`public bool `[`V_IsNull`](#structFRHAPI__StageCreate_1ae2bf240b5bd3bcec4811365faa49ab38) | true if V_Optional has been explicitly set to null
`public FString `[`Type1_Optional`](#structFRHAPI__StageCreate_1aa79726606142ae415d58c7fe3e06e19f) | 
`public bool `[`Type1_IsSet`](#structFRHAPI__StageCreate_1a419ef9b63015d20b849d26bca8e839ad) | true if Type1_Optional has been set to a value
`public bool `[`Type1_IsNull`](#structFRHAPI__StageCreate_1a46df8aca4e511f8706dd921ecf279c4a) | true if Type1_Optional has been explicitly set to null
`public FString `[`Type2_Optional`](#structFRHAPI__StageCreate_1a474b2cf65df69ade64f57513d596ff61) | 
`public bool `[`Type2_IsSet`](#structFRHAPI__StageCreate_1a83ab1520fea2ffce670982fdf1327cf3) | true if Type2_Optional has been set to a value
`public bool `[`Type2_IsNull`](#structFRHAPI__StageCreate_1afd39e399603b106692fec7d84219aa9e) | true if Type2_Optional has been explicitly set to null
`public FString `[`Type3_Optional`](#structFRHAPI__StageCreate_1a2dcbe8e1a790aefc73f5329c6f9e09c0) | 
`public bool `[`Type3_IsSet`](#structFRHAPI__StageCreate_1aaed2ffea7f2f397fa58fc35e3302f080) | true if Type3_Optional has been set to a value
`public bool `[`Type3_IsNull`](#structFRHAPI__StageCreate_1abd13f24496e55b87607b4ba034a62077) | true if Type3_Optional has been explicitly set to null
`public FString `[`Type4_Optional`](#structFRHAPI__StageCreate_1a13edf80d8646871551b93088423ea653) | 
`public bool `[`Type4_IsSet`](#structFRHAPI__StageCreate_1a7e00a0ca2d651bfd93eb936f8dc5bc1a) | true if Type4_Optional has been set to a value
`public bool `[`Type4_IsNull`](#structFRHAPI__StageCreate_1ae25df3109affd10475462fdc1458e953) | true if Type4_Optional has been explicitly set to null
`public int32 `[`Index_Optional`](#structFRHAPI__StageCreate_1abd97aa7d82106f2ba6c55de6fcd5f5e2) | Index of the stage relative to other stages in the match.
`public bool `[`Index_IsSet`](#structFRHAPI__StageCreate_1a60b1f56b4f6e6568c036b384dfb58a69) | true if Index_Optional has been set to a value
`public FString `[`MatchId_Optional`](#structFRHAPI__StageCreate_1a0f856b705fe09447724a6604fa1c8153) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__StageCreate_1afd9708a32fb8110b18dfba90202d272e) | true if MatchId_Optional has been set to a value
`public bool `[`MatchId_IsNull`](#structFRHAPI__StageCreate_1a6605cd705a9d324a10f244b345dfa5e4) | true if MatchId_Optional has been explicitly set to null
`public int32 `[`Stat1_Optional`](#structFRHAPI__StageCreate_1a28c5c565d3c075343fdc9e484fca0631) | 
`public bool `[`Stat1_IsSet`](#structFRHAPI__StageCreate_1a172449d8a32e0de470d32fecdae7294c) | true if Stat1_Optional has been set to a value
`public bool `[`Stat1_IsNull`](#structFRHAPI__StageCreate_1a43763a33298e97fb1cebf4c7c9f9e426) | true if Stat1_Optional has been explicitly set to null
`public int32 `[`Stat2_Optional`](#structFRHAPI__StageCreate_1a7ed35eebea9e36391156108e92112f88) | 
`public bool `[`Stat2_IsSet`](#structFRHAPI__StageCreate_1a7a27717b7dbbcabc7fd0015570c4b16c) | true if Stat2_Optional has been set to a value
`public bool `[`Stat2_IsNull`](#structFRHAPI__StageCreate_1aa30377cbeed860f0648d5273af03e23a) | true if Stat2_Optional has been explicitly set to null
`public int32 `[`Stat3_Optional`](#structFRHAPI__StageCreate_1aa3e73941a1bf5ca2151d709b720cfbd8) | 
`public bool `[`Stat3_IsSet`](#structFRHAPI__StageCreate_1a1df1bdeb7dcd8ac57f17a4afe856d987) | true if Stat3_Optional has been set to a value
`public bool `[`Stat3_IsNull`](#structFRHAPI__StageCreate_1a2c2745f6d50c5ef20d5775fb884cb924) | true if Stat3_Optional has been explicitly set to null
`public int32 `[`Stat4_Optional`](#structFRHAPI__StageCreate_1a461a7923ad60217493e3bbe36ef3f604) | 
`public bool `[`Stat4_IsSet`](#structFRHAPI__StageCreate_1a57f2489e18b030d75d03890dafaaa65e) | true if Stat4_Optional has been set to a value
`public bool `[`Stat4_IsNull`](#structFRHAPI__StageCreate_1aca3fce81b52a105562b878192f981a4b) | true if Stat4_Optional has been explicitly set to null
`public float `[`MmrInternal_Optional`](#structFRHAPI__StageCreate_1a8f5b139fa2dfaaf038e60b17960025a1) | 
`public bool `[`MmrInternal_IsSet`](#structFRHAPI__StageCreate_1aa3da0452c1a1f8805bc47750f7bc785f) | true if MmrInternal_Optional has been set to a value
`public bool `[`MmrInternal_IsNull`](#structFRHAPI__StageCreate_1a3a9a802fdd8ef5a231df9111e761427e) | true if MmrInternal_Optional has been explicitly set to null
`public float `[`MmrVis_Optional`](#structFRHAPI__StageCreate_1aae70d63abf15899ddf0e1bf241a15108) | 
`public bool `[`MmrVis_IsSet`](#structFRHAPI__StageCreate_1ad7777ad38c351a6da193c98bfb0a762e) | true if MmrVis_Optional has been set to a value
`public bool `[`MmrVis_IsNull`](#structFRHAPI__StageCreate_1a2381427744c2c6e33eb52234a176a55b) | true if MmrVis_Optional has been explicitly set to null
`public ERHAPI_StageEntityType `[`OwnerEntityType_Optional`](#structFRHAPI__StageCreate_1a25be6e5e1a316c8fa4b6064d78d2f46b) | 
`public bool `[`OwnerEntityType_IsSet`](#structFRHAPI__StageCreate_1a1dcc3d3895bdacde82855a8a8e6aab3d) | true if OwnerEntityType_Optional has been set to a value
`public bool `[`OwnerEntityType_IsNull`](#structFRHAPI__StageCreate_1ab0953e2601084d7112caf9535147f368) | true if OwnerEntityType_Optional has been explicitly set to null
`public FString `[`OwnerEntityId_Optional`](#structFRHAPI__StageCreate_1a6ad916352a2d22fb59a6e4e08c4e97bb) | 
`public bool `[`OwnerEntityId_IsSet`](#structFRHAPI__StageCreate_1ad3d73bffeb4457df20a60f4a2ed8d9e9) | true if OwnerEntityId_Optional has been set to a value
`public bool `[`OwnerEntityId_IsNull`](#structFRHAPI__StageCreate_1afcc3cd22d211c738ac296ff2aee3f0c7) | true if OwnerEntityId_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__StageCreate_1ace43bf06fa1c306370a59c94b23914a2)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__StageCreate_1a04106cd112738a89a58f8aed21907d52)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetBlob`](#structFRHAPI__StageCreate_1a074b4ed15bf5493d7976394e01b747ea)`()` | Gets the value of Blob_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetBlob`](#structFRHAPI__StageCreate_1a4b48961f0115c2eaf79486cb6c1f64f1)`() const` | Gets the value of Blob_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetBlob`](#structFRHAPI__StageCreate_1a3ae801dd5cf2f0d8af86832f848e40f0)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & DefaultValue) const` | Gets the value of Blob_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetBlob`](#structFRHAPI__StageCreate_1ac450a12deb79f11c56bdf828326aa1b2)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & OutValue) const` | Fills OutValue with the value of Blob_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetBlobOrNull`](#structFRHAPI__StageCreate_1a74030cb9aceccf3752205a679f124731)`()` | Returns a pointer to Blob_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetBlobOrNull`](#structFRHAPI__StageCreate_1a4486a52d4d34fa2720b7735bd57fb0ec)`() const` | Returns a pointer to Blob_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetBlob`](#structFRHAPI__StageCreate_1a6aa9305f83b82365826edaecc2aa5f90)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` | Sets the value of Blob_Optional and also sets Blob_IsSet to true.
`public inline FORCEINLINE void `[`SetBlob`](#structFRHAPI__StageCreate_1a8cc62f0e26ecf114ee3863aa8bf3e0bc)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` | Sets the value of Blob_Optional and also sets Blob_IsSet to true using move semantics.
`public inline void `[`ClearBlob`](#structFRHAPI__StageCreate_1ad010ace4e3c032160131293051a7dc41)`()` | Clears the value of Blob_Optional and sets Blob_IsSet to false.
`public inline FORCEINLINE FString & `[`GetGameVersion`](#structFRHAPI__StageCreate_1ab0de300d882725a0ec97b6af273b997d)`()` | Gets the value of GameVersion_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetGameVersion`](#structFRHAPI__StageCreate_1a23b4e279d8fa8be4b46c12a45a753251)`() const` | Gets the value of GameVersion_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetGameVersion`](#structFRHAPI__StageCreate_1ace2504cb9e3d17f16d92cf7901264888)`(const FString & DefaultValue) const` | Gets the value of GameVersion_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetGameVersion`](#structFRHAPI__StageCreate_1ab41b2da66f3d54aafda797e7b55431e9)`(FString & OutValue) const` | Fills OutValue with the value of GameVersion_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetGameVersionOrNull`](#structFRHAPI__StageCreate_1ac70b36e2e32bf8c63bdf1781c5e8ae7f)`()` | Returns a pointer to GameVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetGameVersionOrNull`](#structFRHAPI__StageCreate_1a8c705a08a5c1029f15ed8ab612bc63f5)`() const` | Returns a pointer to GameVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetGameVersion`](#structFRHAPI__StageCreate_1a1aaa68fed26ea1a00b8a3ada3d1d6cb3)`(const FString & NewValue)` | Sets the value of GameVersion_Optional and also sets GameVersion_IsSet to true.
`public inline FORCEINLINE void `[`SetGameVersion`](#structFRHAPI__StageCreate_1a4e7fe6251fa7f7de0fafa2e06b9f7e61)`(FString && NewValue)` | Sets the value of GameVersion_Optional and also sets GameVersion_IsSet to true using move semantics.
`public inline void `[`ClearGameVersion`](#structFRHAPI__StageCreate_1a2804c069ee1b1bf0bbd6839460dd3d03)`()` | Clears the value of GameVersion_Optional and sets GameVersion_IsSet to false.
`public inline FORCEINLINE void `[`SetGameVersionToNull`](#structFRHAPI__StageCreate_1a803a55a46a95f1c94a749ec7852f51b6)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsGameVersionNull`](#structFRHAPI__StageCreate_1aeae10ea234fbcdcb4eb67372db8dec0a)`() const` | Checks whether GameVersion_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetV`](#structFRHAPI__StageCreate_1affe78ecc3d60c82a99428c7e8682e34a)`()` | Gets the value of V_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetV`](#structFRHAPI__StageCreate_1afc2e3e3096fe103f807713b1ea98368a)`() const` | Gets the value of V_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetV`](#structFRHAPI__StageCreate_1a5634ce8a8ab8374a2876c77b5c81aa1f)`(const FString & DefaultValue) const` | Gets the value of V_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetV`](#structFRHAPI__StageCreate_1a5d5681814e9bfb439b5c5f4f15654beb)`(FString & OutValue) const` | Fills OutValue with the value of V_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetVOrNull`](#structFRHAPI__StageCreate_1aea1217acc558a409d30886c5131af794)`()` | Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetVOrNull`](#structFRHAPI__StageCreate_1abdd797286277a38481918e7d2cb5e346)`() const` | Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetV`](#structFRHAPI__StageCreate_1af2d664734789ea1b84f3a31dbf118821)`(const FString & NewValue)` | Sets the value of V_Optional and also sets V_IsSet to true.
`public inline FORCEINLINE void `[`SetV`](#structFRHAPI__StageCreate_1a749c1ff702f0bb50f209efdec92fba66)`(FString && NewValue)` | Sets the value of V_Optional and also sets V_IsSet to true using move semantics.
`public inline void `[`ClearV`](#structFRHAPI__StageCreate_1a6dff8d3c798aa1fcc7ec92feec11c2e6)`()` | Clears the value of V_Optional and sets V_IsSet to false.
`public inline FORCEINLINE void `[`SetVToNull`](#structFRHAPI__StageCreate_1a9fa8c6ab17caf998bee5b225ff202512)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsVNull`](#structFRHAPI__StageCreate_1af5914fa0a232e1c184afc7300c547086)`() const` | Checks whether V_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetType1`](#structFRHAPI__StageCreate_1af1f213b6b4ea77450d48c0525ed27d9c)`()` | Gets the value of Type1_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType1`](#structFRHAPI__StageCreate_1ac3f252cee37a394943a4e533a7a8567f)`() const` | Gets the value of Type1_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType1`](#structFRHAPI__StageCreate_1a717d7c566ac0fbf1f3ed9eb952ab48c5)`(const FString & DefaultValue) const` | Gets the value of Type1_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType1`](#structFRHAPI__StageCreate_1ac0ee2533d73e2b9bab0ecd2e30fc1e28)`(FString & OutValue) const` | Fills OutValue with the value of Type1_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetType1OrNull`](#structFRHAPI__StageCreate_1ad2e50d0da384d699fbfb6d18308c64c6)`()` | Returns a pointer to Type1_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetType1OrNull`](#structFRHAPI__StageCreate_1a4c0877a3d79d3a2a030b773cfaa1bcad)`() const` | Returns a pointer to Type1_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType1`](#structFRHAPI__StageCreate_1af0ef64b4a7142e1cc0ab6348419dd7bb)`(const FString & NewValue)` | Sets the value of Type1_Optional and also sets Type1_IsSet to true.
`public inline FORCEINLINE void `[`SetType1`](#structFRHAPI__StageCreate_1a1628c93c3bf5e0f4f51c9881091e25d6)`(FString && NewValue)` | Sets the value of Type1_Optional and also sets Type1_IsSet to true using move semantics.
`public inline void `[`ClearType1`](#structFRHAPI__StageCreate_1a67e2e9c6d1e7c9eb4609d19906a152f6)`()` | Clears the value of Type1_Optional and sets Type1_IsSet to false.
`public inline FORCEINLINE void `[`SetType1ToNull`](#structFRHAPI__StageCreate_1aa25dd4e80e71176a7b10d98cd62230b8)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsType1Null`](#structFRHAPI__StageCreate_1ae331c5521a9892632f08a5c7349d2b04)`() const` | Checks whether Type1_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetType2`](#structFRHAPI__StageCreate_1a88acc81576afb61e68c7649331221d00)`()` | Gets the value of Type2_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType2`](#structFRHAPI__StageCreate_1aa5b91546b88e24e9458e350be8a2e961)`() const` | Gets the value of Type2_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType2`](#structFRHAPI__StageCreate_1a87e1757e679ddcb49efd52dd9e2c8482)`(const FString & DefaultValue) const` | Gets the value of Type2_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType2`](#structFRHAPI__StageCreate_1ac51977cb2bd895b5b7f4523840cd9dcd)`(FString & OutValue) const` | Fills OutValue with the value of Type2_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetType2OrNull`](#structFRHAPI__StageCreate_1a5eb5f3a8dbb2d6ee853e1266a89fc0a8)`()` | Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetType2OrNull`](#structFRHAPI__StageCreate_1acd70bfa81bf9b0b32e602f2e9996cbf0)`() const` | Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType2`](#structFRHAPI__StageCreate_1ae4facea87b8d0e11926d53453a8f2984)`(const FString & NewValue)` | Sets the value of Type2_Optional and also sets Type2_IsSet to true.
`public inline FORCEINLINE void `[`SetType2`](#structFRHAPI__StageCreate_1a492903f2212c6396ae3115827bc3fd25)`(FString && NewValue)` | Sets the value of Type2_Optional and also sets Type2_IsSet to true using move semantics.
`public inline void `[`ClearType2`](#structFRHAPI__StageCreate_1a308616c10647bb10ab86fd066ff86400)`()` | Clears the value of Type2_Optional and sets Type2_IsSet to false.
`public inline FORCEINLINE void `[`SetType2ToNull`](#structFRHAPI__StageCreate_1a3a5ba6c0fed5f702e67e905fb38ef046)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsType2Null`](#structFRHAPI__StageCreate_1a8cf48ad1754d01f38a08a0a1c86c55a4)`() const` | Checks whether Type2_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetType3`](#structFRHAPI__StageCreate_1ac379964e962cfd280afd2b82c6496420)`()` | Gets the value of Type3_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType3`](#structFRHAPI__StageCreate_1aaa62adda0b3716c19a3a4ff5782065ac)`() const` | Gets the value of Type3_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType3`](#structFRHAPI__StageCreate_1aadc3fac67f63b5fa4a1bcb59b56d671a)`(const FString & DefaultValue) const` | Gets the value of Type3_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType3`](#structFRHAPI__StageCreate_1aa2ee3ef5b10e8d90c30bb64574bf73f0)`(FString & OutValue) const` | Fills OutValue with the value of Type3_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetType3OrNull`](#structFRHAPI__StageCreate_1a7f9177ba5a85175392a3eef3cee265e7)`()` | Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetType3OrNull`](#structFRHAPI__StageCreate_1a3c8f0e879fb3f5bc746ab23c890c2e28)`() const` | Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType3`](#structFRHAPI__StageCreate_1a8a911180becdf4e0e78f13b26e625e3d)`(const FString & NewValue)` | Sets the value of Type3_Optional and also sets Type3_IsSet to true.
`public inline FORCEINLINE void `[`SetType3`](#structFRHAPI__StageCreate_1aefb08dcf39ace4d28604e90e7c9cff9a)`(FString && NewValue)` | Sets the value of Type3_Optional and also sets Type3_IsSet to true using move semantics.
`public inline void `[`ClearType3`](#structFRHAPI__StageCreate_1ad79c7e97fc663305af3e2a8d19aed056)`()` | Clears the value of Type3_Optional and sets Type3_IsSet to false.
`public inline FORCEINLINE void `[`SetType3ToNull`](#structFRHAPI__StageCreate_1ad5191dafea6c0626e4297889bfc0d9ee)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsType3Null`](#structFRHAPI__StageCreate_1a23995f72ae2beff89a5e2992084fa18e)`() const` | Checks whether Type3_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetType4`](#structFRHAPI__StageCreate_1ac46575c61a2e20c86157b5a5d9c3b3d0)`()` | Gets the value of Type4_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType4`](#structFRHAPI__StageCreate_1a43f1f52e57365a3d834f4933da979855)`() const` | Gets the value of Type4_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType4`](#structFRHAPI__StageCreate_1a63c1b68868ca458bd51eada0287c2324)`(const FString & DefaultValue) const` | Gets the value of Type4_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType4`](#structFRHAPI__StageCreate_1a48f9769ae502e2f414dc8d00cc0a33a6)`(FString & OutValue) const` | Fills OutValue with the value of Type4_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetType4OrNull`](#structFRHAPI__StageCreate_1add27a558f804a1f20420eca3cf68796c)`()` | Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetType4OrNull`](#structFRHAPI__StageCreate_1a661dfc5fe7875f36750e6ed0215f8321)`() const` | Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType4`](#structFRHAPI__StageCreate_1a74113eab9a8dcd80e36c64432d8c2212)`(const FString & NewValue)` | Sets the value of Type4_Optional and also sets Type4_IsSet to true.
`public inline FORCEINLINE void `[`SetType4`](#structFRHAPI__StageCreate_1a824f7cea0666daedc0620ce219bc7a81)`(FString && NewValue)` | Sets the value of Type4_Optional and also sets Type4_IsSet to true using move semantics.
`public inline void `[`ClearType4`](#structFRHAPI__StageCreate_1a8baeb26101ed5138cea1fa264ace3bb1)`()` | Clears the value of Type4_Optional and sets Type4_IsSet to false.
`public inline FORCEINLINE void `[`SetType4ToNull`](#structFRHAPI__StageCreate_1adc89628fac2135c18ab026d9cd597c0a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsType4Null`](#structFRHAPI__StageCreate_1a976abe32b9e4ea7b64036897bdc47e6b)`() const` | Checks whether Type4_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetIndex`](#structFRHAPI__StageCreate_1a74dd8dedd378a96f1deb5ba87639530b)`()` | Gets the value of Index_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetIndex`](#structFRHAPI__StageCreate_1a754a5b5cb8629f8a9913dd645585e7e6)`() const` | Gets the value of Index_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetIndex`](#structFRHAPI__StageCreate_1a2596e5c5ca3ef12c8a0a63449ab7a6a8)`(const int32 & DefaultValue) const` | Gets the value of Index_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIndex`](#structFRHAPI__StageCreate_1a601a25c4f8d9fd4b4f7d133d440b87fc)`(int32 & OutValue) const` | Fills OutValue with the value of Index_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetIndexOrNull`](#structFRHAPI__StageCreate_1a2b1b2671b09bb5b0e4b23c4c81b4985a)`()` | Returns a pointer to Index_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetIndexOrNull`](#structFRHAPI__StageCreate_1a154cff480b9dee536ca50e3a6791f5cb)`() const` | Returns a pointer to Index_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIndex`](#structFRHAPI__StageCreate_1ae92f716062be9d974012acaccdabfa11)`(const int32 & NewValue)` | Sets the value of Index_Optional and also sets Index_IsSet to true.
`public inline FORCEINLINE void `[`SetIndex`](#structFRHAPI__StageCreate_1a8ee2d48c8ddfeaa62300c33e283f2cda)`(int32 && NewValue)` | Sets the value of Index_Optional and also sets Index_IsSet to true using move semantics.
`public inline void `[`ClearIndex`](#structFRHAPI__StageCreate_1a11112b9f0be002b8ee67d700fdb4691e)`()` | Clears the value of Index_Optional and sets Index_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Index`](#structFRHAPI__StageCreate_1a9492f3cf99a71a2509d850f6fe84d127)`()` | Returns the default value of Index.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__StageCreate_1ae44a43d9d93d082f147f34f85a491351)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__StageCreate_1a036d9a09f555dc7ce78b0657ccc64d4f)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__StageCreate_1a0ea33fd0bd1f82dcb25fbb4c1c0b5d82)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__StageCreate_1a34b1e6d8c2e3ce45ad51f5b5e585bb14)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__StageCreate_1a7ac9a577e0a08b9bef58862b091e71df)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__StageCreate_1a225e76b3ff93d8da0c73b3917e097517)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__StageCreate_1ab903df8983b1b9ec7c7c5b2148a9c726)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__StageCreate_1a6840c61b6afc9d3a535d4d65530e4a94)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__StageCreate_1a14323b2e184d71820301f6478152522c)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__StageCreate_1aae60d5fe3e2eca37e9eeaf2dfc23b5c4)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__StageCreate_1aabd0ed7799089cb5816fbf90b85e5eb3)`() const` | Checks whether MatchId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetStat1`](#structFRHAPI__StageCreate_1a745006d674b5fb51a50cb395a1fe3745)`()` | Gets the value of Stat1_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStat1`](#structFRHAPI__StageCreate_1ae99dc58f1ba68439a6321dff2a745299)`() const` | Gets the value of Stat1_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStat1`](#structFRHAPI__StageCreate_1a10b48dc083c7d0b48df386d5cfe8f312)`(const int32 & DefaultValue) const` | Gets the value of Stat1_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStat1`](#structFRHAPI__StageCreate_1a840354571d07f365a5132621e1779f13)`(int32 & OutValue) const` | Fills OutValue with the value of Stat1_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetStat1OrNull`](#structFRHAPI__StageCreate_1a6b105fdd61304ee559b4ef4dd05ff256)`()` | Returns a pointer to Stat1_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetStat1OrNull`](#structFRHAPI__StageCreate_1abbb4b117282a9a81aae13251cfac665a)`() const` | Returns a pointer to Stat1_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStat1`](#structFRHAPI__StageCreate_1a5af3d959e57ee917838b69028fe64f88)`(const int32 & NewValue)` | Sets the value of Stat1_Optional and also sets Stat1_IsSet to true.
`public inline FORCEINLINE void `[`SetStat1`](#structFRHAPI__StageCreate_1addefc82c3788e3d12df82cefc9ace3bc)`(int32 && NewValue)` | Sets the value of Stat1_Optional and also sets Stat1_IsSet to true using move semantics.
`public inline void `[`ClearStat1`](#structFRHAPI__StageCreate_1a3aa8ba188dc364c1bc376810cc918c30)`()` | Clears the value of Stat1_Optional and sets Stat1_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Stat1`](#structFRHAPI__StageCreate_1acff649da0bce18d9640a735bf48faa96)`()` | Returns the default value of Stat1.
`public inline FORCEINLINE void `[`SetStat1ToNull`](#structFRHAPI__StageCreate_1adbb1b90f36f39c075d3a5f633c3e1ad1)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStat1Null`](#structFRHAPI__StageCreate_1a6c175da61dfd62479380c95b7e713bcf)`() const` | Checks whether Stat1_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetStat2`](#structFRHAPI__StageCreate_1afa9d2b6e687e0a49d89b189b3bbc5606)`()` | Gets the value of Stat2_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStat2`](#structFRHAPI__StageCreate_1aec2a60cdd01266febbaa15e92b7aac09)`() const` | Gets the value of Stat2_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStat2`](#structFRHAPI__StageCreate_1a11f1814eb0b91e782a1b17bbdbb6784f)`(const int32 & DefaultValue) const` | Gets the value of Stat2_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStat2`](#structFRHAPI__StageCreate_1a8a07b26a9a02b1105bc485eab4457df2)`(int32 & OutValue) const` | Fills OutValue with the value of Stat2_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetStat2OrNull`](#structFRHAPI__StageCreate_1ad91a7da8fd4b16fc937be8ffae37c3f9)`()` | Returns a pointer to Stat2_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetStat2OrNull`](#structFRHAPI__StageCreate_1a07eda87810d2fbf0e2092fce883a004c)`() const` | Returns a pointer to Stat2_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStat2`](#structFRHAPI__StageCreate_1a4790a51b7bae4d560a7b3455a9302db8)`(const int32 & NewValue)` | Sets the value of Stat2_Optional and also sets Stat2_IsSet to true.
`public inline FORCEINLINE void `[`SetStat2`](#structFRHAPI__StageCreate_1aab5eb4f9a4aecc1b5d774451f03f760b)`(int32 && NewValue)` | Sets the value of Stat2_Optional and also sets Stat2_IsSet to true using move semantics.
`public inline void `[`ClearStat2`](#structFRHAPI__StageCreate_1aedcd7c7ab83d2aae46b173eeb6cd46c7)`()` | Clears the value of Stat2_Optional and sets Stat2_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Stat2`](#structFRHAPI__StageCreate_1a67f54fb9d8cb9bec8032c747dad6e4b3)`()` | Returns the default value of Stat2.
`public inline FORCEINLINE void `[`SetStat2ToNull`](#structFRHAPI__StageCreate_1ad138c58aa18cad2dad6eeb90474414ac)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStat2Null`](#structFRHAPI__StageCreate_1a97985b5a8e91131722cb37f5182ec6a7)`() const` | Checks whether Stat2_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetStat3`](#structFRHAPI__StageCreate_1a132a40a5cecc7c411c5dcf3c23cbd6c0)`()` | Gets the value of Stat3_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStat3`](#structFRHAPI__StageCreate_1af28e5e111941d95df89736effcd38164)`() const` | Gets the value of Stat3_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStat3`](#structFRHAPI__StageCreate_1a93b6a94dce17db9b63b0a19320e44898)`(const int32 & DefaultValue) const` | Gets the value of Stat3_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStat3`](#structFRHAPI__StageCreate_1acd0bd26facc7ddcefb06c26df76bd1d8)`(int32 & OutValue) const` | Fills OutValue with the value of Stat3_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetStat3OrNull`](#structFRHAPI__StageCreate_1aa8c7feb4631c4167d062dd9d398a315d)`()` | Returns a pointer to Stat3_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetStat3OrNull`](#structFRHAPI__StageCreate_1a75fcd195b0208c8b1fa9fa8a8e388561)`() const` | Returns a pointer to Stat3_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStat3`](#structFRHAPI__StageCreate_1a64513a5474904384c4066ce29f9dba76)`(const int32 & NewValue)` | Sets the value of Stat3_Optional and also sets Stat3_IsSet to true.
`public inline FORCEINLINE void `[`SetStat3`](#structFRHAPI__StageCreate_1a670407962d9b1ed4943a46cc06a2fa5c)`(int32 && NewValue)` | Sets the value of Stat3_Optional and also sets Stat3_IsSet to true using move semantics.
`public inline void `[`ClearStat3`](#structFRHAPI__StageCreate_1ad1c80491449c37b8f34b57606620150a)`()` | Clears the value of Stat3_Optional and sets Stat3_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Stat3`](#structFRHAPI__StageCreate_1a1f0cb48e1268efa07714475ce80a1ab1)`()` | Returns the default value of Stat3.
`public inline FORCEINLINE void `[`SetStat3ToNull`](#structFRHAPI__StageCreate_1a327fb2eab89c7743a6731db42bcffdda)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStat3Null`](#structFRHAPI__StageCreate_1a5427718cf38596848d3927212c08d2b9)`() const` | Checks whether Stat3_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetStat4`](#structFRHAPI__StageCreate_1a750e399bf441c8b1d754a9817abd14f5)`()` | Gets the value of Stat4_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStat4`](#structFRHAPI__StageCreate_1a39fe7f4b173d1e642a937f50c5fa3cab)`() const` | Gets the value of Stat4_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetStat4`](#structFRHAPI__StageCreate_1a7f0da21e807d367d97009f464e1d90ad)`(const int32 & DefaultValue) const` | Gets the value of Stat4_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStat4`](#structFRHAPI__StageCreate_1a6bd7708a497cfe8a65b0a43924f5aa32)`(int32 & OutValue) const` | Fills OutValue with the value of Stat4_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetStat4OrNull`](#structFRHAPI__StageCreate_1abbbde8995cfd22fcf5f0fd19eed96221)`()` | Returns a pointer to Stat4_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetStat4OrNull`](#structFRHAPI__StageCreate_1a355833b483f44f117fe80c5baec5a395)`() const` | Returns a pointer to Stat4_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStat4`](#structFRHAPI__StageCreate_1a2a02c076cab425cf57eeed209d942aee)`(const int32 & NewValue)` | Sets the value of Stat4_Optional and also sets Stat4_IsSet to true.
`public inline FORCEINLINE void `[`SetStat4`](#structFRHAPI__StageCreate_1ad61cafa306aa3480ec8715e92f11b829)`(int32 && NewValue)` | Sets the value of Stat4_Optional and also sets Stat4_IsSet to true using move semantics.
`public inline void `[`ClearStat4`](#structFRHAPI__StageCreate_1a94d7c0406dc559c29315684cb857f35a)`()` | Clears the value of Stat4_Optional and sets Stat4_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Stat4`](#structFRHAPI__StageCreate_1a2e92d5bfdefec9da29ea631ccae8a74a)`()` | Returns the default value of Stat4.
`public inline FORCEINLINE void `[`SetStat4ToNull`](#structFRHAPI__StageCreate_1a511df6bbc95b4fdbdbe96f82593df480)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStat4Null`](#structFRHAPI__StageCreate_1abdf367530298c12fd1edbebbb15dab4a)`() const` | Checks whether Stat4_Optional is set to null.
`public inline FORCEINLINE float & `[`GetMmrInternal`](#structFRHAPI__StageCreate_1a41d242ef99fe7295dcf1d6c12a40e25e)`()` | Gets the value of MmrInternal_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrInternal`](#structFRHAPI__StageCreate_1a7bff2c11a8eeb0839de4648e848f838f)`() const` | Gets the value of MmrInternal_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrInternal`](#structFRHAPI__StageCreate_1a794f8e7e4e33292d03786ec61e9a28c2)`(const float & DefaultValue) const` | Gets the value of MmrInternal_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMmrInternal`](#structFRHAPI__StageCreate_1aab051d801ffc17cee34477a1eaead4fb)`(float & OutValue) const` | Fills OutValue with the value of MmrInternal_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetMmrInternalOrNull`](#structFRHAPI__StageCreate_1ae58c88b0b16e7a8c6b00f930e7b78606)`()` | Returns a pointer to MmrInternal_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetMmrInternalOrNull`](#structFRHAPI__StageCreate_1a132807e891316df07365f06e25ce4786)`() const` | Returns a pointer to MmrInternal_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMmrInternal`](#structFRHAPI__StageCreate_1a7de6f63c9ff704835d7d5101e2d36144)`(const float & NewValue)` | Sets the value of MmrInternal_Optional and also sets MmrInternal_IsSet to true.
`public inline FORCEINLINE void `[`SetMmrInternal`](#structFRHAPI__StageCreate_1a87fd1f59f893bcce90402e3286e07713)`(float && NewValue)` | Sets the value of MmrInternal_Optional and also sets MmrInternal_IsSet to true using move semantics.
`public inline void `[`ClearMmrInternal`](#structFRHAPI__StageCreate_1a4d06bc75bfd2f285ae631612033bbc09)`()` | Clears the value of MmrInternal_Optional and sets MmrInternal_IsSet to false.
`public inline FORCEINLINE void `[`SetMmrInternalToNull`](#structFRHAPI__StageCreate_1a5843bce91018a869264a730ea9644842)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMmrInternalNull`](#structFRHAPI__StageCreate_1a07711a0fc2273767790462f6d405202d)`() const` | Checks whether MmrInternal_Optional is set to null.
`public inline FORCEINLINE float & `[`GetMmrVis`](#structFRHAPI__StageCreate_1a65a0e12d12fd9bd4531a75c66504d309)`()` | Gets the value of MmrVis_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrVis`](#structFRHAPI__StageCreate_1af9988cca8e8b751cc2e387c601580c4b)`() const` | Gets the value of MmrVis_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMmrVis`](#structFRHAPI__StageCreate_1a6c6cfd1259ebf8c8daae450928c0d177)`(const float & DefaultValue) const` | Gets the value of MmrVis_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMmrVis`](#structFRHAPI__StageCreate_1ad9d6e214080e2daf3f50c3a49ebd61dd)`(float & OutValue) const` | Fills OutValue with the value of MmrVis_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetMmrVisOrNull`](#structFRHAPI__StageCreate_1af11164fbabd6180145af6dfd7a35cbab)`()` | Returns a pointer to MmrVis_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetMmrVisOrNull`](#structFRHAPI__StageCreate_1af7211a6284cbf56a5eaae4636ceb6d3a)`() const` | Returns a pointer to MmrVis_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMmrVis`](#structFRHAPI__StageCreate_1a005f5eb4bc483ee821d616a244b7a441)`(const float & NewValue)` | Sets the value of MmrVis_Optional and also sets MmrVis_IsSet to true.
`public inline FORCEINLINE void `[`SetMmrVis`](#structFRHAPI__StageCreate_1a01f86d2439592ba582ed137768abe444)`(float && NewValue)` | Sets the value of MmrVis_Optional and also sets MmrVis_IsSet to true using move semantics.
`public inline void `[`ClearMmrVis`](#structFRHAPI__StageCreate_1a5d358a0c9ecc0244dd2e188b9b2c3e2b)`()` | Clears the value of MmrVis_Optional and sets MmrVis_IsSet to false.
`public inline FORCEINLINE void `[`SetMmrVisToNull`](#structFRHAPI__StageCreate_1a808e75d04e94212d1ae0d12c5b920720)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMmrVisNull`](#structFRHAPI__StageCreate_1a7cbc79c1c2c8511b0fb943460b11c891)`() const` | Checks whether MmrVis_Optional is set to null.
`public inline FORCEINLINE ERHAPI_StageEntityType & `[`GetOwnerEntityType`](#structFRHAPI__StageCreate_1a90e71d103e700e661d952c3aac0d7410)`()` | Gets the value of OwnerEntityType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_StageEntityType & `[`GetOwnerEntityType`](#structFRHAPI__StageCreate_1a5a84d3b292f2cd4530d5f2b2c06649d1)`() const` | Gets the value of OwnerEntityType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_StageEntityType & `[`GetOwnerEntityType`](#structFRHAPI__StageCreate_1afc075e3468082bd25433e70d18449a31)`(const ERHAPI_StageEntityType & DefaultValue) const` | Gets the value of OwnerEntityType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOwnerEntityType`](#structFRHAPI__StageCreate_1a722cc2ca7246429a4d11a8e7fa040869)`(ERHAPI_StageEntityType & OutValue) const` | Fills OutValue with the value of OwnerEntityType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_StageEntityType * `[`GetOwnerEntityTypeOrNull`](#structFRHAPI__StageCreate_1a6be12ebbcf2c13849384558735dbe4bf)`()` | Returns a pointer to OwnerEntityType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_StageEntityType * `[`GetOwnerEntityTypeOrNull`](#structFRHAPI__StageCreate_1afe663426d74b5c702150c2919d6dc938)`() const` | Returns a pointer to OwnerEntityType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOwnerEntityType`](#structFRHAPI__StageCreate_1a47bee5e6091823d725e331991fe1f7d1)`(const ERHAPI_StageEntityType & NewValue)` | Sets the value of OwnerEntityType_Optional and also sets OwnerEntityType_IsSet to true.
`public inline FORCEINLINE void `[`SetOwnerEntityType`](#structFRHAPI__StageCreate_1a9157c0e4d37c8c5336e13c50ff0a52e3)`(ERHAPI_StageEntityType && NewValue)` | Sets the value of OwnerEntityType_Optional and also sets OwnerEntityType_IsSet to true using move semantics.
`public inline void `[`ClearOwnerEntityType`](#structFRHAPI__StageCreate_1a88174db05d6336157fe287201776dc8d)`()` | Clears the value of OwnerEntityType_Optional and sets OwnerEntityType_IsSet to false.
`public inline FORCEINLINE void `[`SetOwnerEntityTypeToNull`](#structFRHAPI__StageCreate_1af19f70765340ce4595bc4c600b809a9b)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsOwnerEntityTypeNull`](#structFRHAPI__StageCreate_1a7189ced405e30ff0bbf792d7a3c95a6f)`() const` | Checks whether OwnerEntityType_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetOwnerEntityId`](#structFRHAPI__StageCreate_1a0062eb1eb5868017042939b29a884aab)`()` | Gets the value of OwnerEntityId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOwnerEntityId`](#structFRHAPI__StageCreate_1ad4bbae209e5c0c9bd20d41419cea61f8)`() const` | Gets the value of OwnerEntityId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOwnerEntityId`](#structFRHAPI__StageCreate_1afa6f1bc688d3d2a9525e62dcfeb79b3d)`(const FString & DefaultValue) const` | Gets the value of OwnerEntityId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOwnerEntityId`](#structFRHAPI__StageCreate_1a52c3c8ead1d6d79ae9f483d4b5890483)`(FString & OutValue) const` | Fills OutValue with the value of OwnerEntityId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetOwnerEntityIdOrNull`](#structFRHAPI__StageCreate_1aae73af41baca84cc2c2651e088d7a998)`()` | Returns a pointer to OwnerEntityId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetOwnerEntityIdOrNull`](#structFRHAPI__StageCreate_1a37c3eda224178d4ec7a27299b50399e1)`() const` | Returns a pointer to OwnerEntityId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOwnerEntityId`](#structFRHAPI__StageCreate_1a7de60f358dad26488e974b923bba46aa)`(const FString & NewValue)` | Sets the value of OwnerEntityId_Optional and also sets OwnerEntityId_IsSet to true.
`public inline FORCEINLINE void `[`SetOwnerEntityId`](#structFRHAPI__StageCreate_1a6d3e9427d20c6949dabe8fcb865291b7)`(FString && NewValue)` | Sets the value of OwnerEntityId_Optional and also sets OwnerEntityId_IsSet to true using move semantics.
`public inline void `[`ClearOwnerEntityId`](#structFRHAPI__StageCreate_1aa7a2cb0c978dc6c0809f43e8532ba29c)`()` | Clears the value of OwnerEntityId_Optional and sets OwnerEntityId_IsSet to false.
`public inline FORCEINLINE void `[`SetOwnerEntityIdToNull`](#structFRHAPI__StageCreate_1abe0df9a443cca5111f7d96d839e34c21)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsOwnerEntityIdNull`](#structFRHAPI__StageCreate_1a1c00242e54dc7a307ece0fefdcbcdd87)`() const` | Checks whether OwnerEntityId_Optional is set to null.

### Members

#### `public TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > `[`Blob_Optional`](#structFRHAPI__StageCreate_1a560a954eab886eaa1fbb4783a71ed0ca) <a id="structFRHAPI__StageCreate_1a560a954eab886eaa1fbb4783a71ed0ca"></a>

#### `public bool `[`Blob_IsSet`](#structFRHAPI__StageCreate_1ad7af7922d7e0a793ca39f22ef6340713) <a id="structFRHAPI__StageCreate_1ad7af7922d7e0a793ca39f22ef6340713"></a>

true if Blob_Optional has been set to a value

#### `public FString `[`GameVersion_Optional`](#structFRHAPI__StageCreate_1a5ef5292521809a0fb3ead1c349908d67) <a id="structFRHAPI__StageCreate_1a5ef5292521809a0fb3ead1c349908d67"></a>

#### `public bool `[`GameVersion_IsSet`](#structFRHAPI__StageCreate_1a819d9c0491915e416f763225dd6cfb56) <a id="structFRHAPI__StageCreate_1a819d9c0491915e416f763225dd6cfb56"></a>

true if GameVersion_Optional has been set to a value

#### `public bool `[`GameVersion_IsNull`](#structFRHAPI__StageCreate_1a7675e79fccaa45cb1c1bc942d38ceba4) <a id="structFRHAPI__StageCreate_1a7675e79fccaa45cb1c1bc942d38ceba4"></a>

true if GameVersion_Optional has been explicitly set to null

#### `public FString `[`V_Optional`](#structFRHAPI__StageCreate_1a2ddf1f9a462defa76359de8b942dc4b8) <a id="structFRHAPI__StageCreate_1a2ddf1f9a462defa76359de8b942dc4b8"></a>

#### `public bool `[`V_IsSet`](#structFRHAPI__StageCreate_1aad8bfba78cc74e8ec2d3e8f8ee294fa1) <a id="structFRHAPI__StageCreate_1aad8bfba78cc74e8ec2d3e8f8ee294fa1"></a>

true if V_Optional has been set to a value

#### `public bool `[`V_IsNull`](#structFRHAPI__StageCreate_1ae2bf240b5bd3bcec4811365faa49ab38) <a id="structFRHAPI__StageCreate_1ae2bf240b5bd3bcec4811365faa49ab38"></a>

true if V_Optional has been explicitly set to null

#### `public FString `[`Type1_Optional`](#structFRHAPI__StageCreate_1aa79726606142ae415d58c7fe3e06e19f) <a id="structFRHAPI__StageCreate_1aa79726606142ae415d58c7fe3e06e19f"></a>

#### `public bool `[`Type1_IsSet`](#structFRHAPI__StageCreate_1a419ef9b63015d20b849d26bca8e839ad) <a id="structFRHAPI__StageCreate_1a419ef9b63015d20b849d26bca8e839ad"></a>

true if Type1_Optional has been set to a value

#### `public bool `[`Type1_IsNull`](#structFRHAPI__StageCreate_1a46df8aca4e511f8706dd921ecf279c4a) <a id="structFRHAPI__StageCreate_1a46df8aca4e511f8706dd921ecf279c4a"></a>

true if Type1_Optional has been explicitly set to null

#### `public FString `[`Type2_Optional`](#structFRHAPI__StageCreate_1a474b2cf65df69ade64f57513d596ff61) <a id="structFRHAPI__StageCreate_1a474b2cf65df69ade64f57513d596ff61"></a>

#### `public bool `[`Type2_IsSet`](#structFRHAPI__StageCreate_1a83ab1520fea2ffce670982fdf1327cf3) <a id="structFRHAPI__StageCreate_1a83ab1520fea2ffce670982fdf1327cf3"></a>

true if Type2_Optional has been set to a value

#### `public bool `[`Type2_IsNull`](#structFRHAPI__StageCreate_1afd39e399603b106692fec7d84219aa9e) <a id="structFRHAPI__StageCreate_1afd39e399603b106692fec7d84219aa9e"></a>

true if Type2_Optional has been explicitly set to null

#### `public FString `[`Type3_Optional`](#structFRHAPI__StageCreate_1a2dcbe8e1a790aefc73f5329c6f9e09c0) <a id="structFRHAPI__StageCreate_1a2dcbe8e1a790aefc73f5329c6f9e09c0"></a>

#### `public bool `[`Type3_IsSet`](#structFRHAPI__StageCreate_1aaed2ffea7f2f397fa58fc35e3302f080) <a id="structFRHAPI__StageCreate_1aaed2ffea7f2f397fa58fc35e3302f080"></a>

true if Type3_Optional has been set to a value

#### `public bool `[`Type3_IsNull`](#structFRHAPI__StageCreate_1abd13f24496e55b87607b4ba034a62077) <a id="structFRHAPI__StageCreate_1abd13f24496e55b87607b4ba034a62077"></a>

true if Type3_Optional has been explicitly set to null

#### `public FString `[`Type4_Optional`](#structFRHAPI__StageCreate_1a13edf80d8646871551b93088423ea653) <a id="structFRHAPI__StageCreate_1a13edf80d8646871551b93088423ea653"></a>

#### `public bool `[`Type4_IsSet`](#structFRHAPI__StageCreate_1a7e00a0ca2d651bfd93eb936f8dc5bc1a) <a id="structFRHAPI__StageCreate_1a7e00a0ca2d651bfd93eb936f8dc5bc1a"></a>

true if Type4_Optional has been set to a value

#### `public bool `[`Type4_IsNull`](#structFRHAPI__StageCreate_1ae25df3109affd10475462fdc1458e953) <a id="structFRHAPI__StageCreate_1ae25df3109affd10475462fdc1458e953"></a>

true if Type4_Optional has been explicitly set to null

#### `public int32 `[`Index_Optional`](#structFRHAPI__StageCreate_1abd97aa7d82106f2ba6c55de6fcd5f5e2) <a id="structFRHAPI__StageCreate_1abd97aa7d82106f2ba6c55de6fcd5f5e2"></a>

Index of the stage relative to other stages in the match.

#### `public bool `[`Index_IsSet`](#structFRHAPI__StageCreate_1a60b1f56b4f6e6568c036b384dfb58a69) <a id="structFRHAPI__StageCreate_1a60b1f56b4f6e6568c036b384dfb58a69"></a>

true if Index_Optional has been set to a value

#### `public FString `[`MatchId_Optional`](#structFRHAPI__StageCreate_1a0f856b705fe09447724a6604fa1c8153) <a id="structFRHAPI__StageCreate_1a0f856b705fe09447724a6604fa1c8153"></a>

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__StageCreate_1afd9708a32fb8110b18dfba90202d272e) <a id="structFRHAPI__StageCreate_1afd9708a32fb8110b18dfba90202d272e"></a>

true if MatchId_Optional has been set to a value

#### `public bool `[`MatchId_IsNull`](#structFRHAPI__StageCreate_1a6605cd705a9d324a10f244b345dfa5e4) <a id="structFRHAPI__StageCreate_1a6605cd705a9d324a10f244b345dfa5e4"></a>

true if MatchId_Optional has been explicitly set to null

#### `public int32 `[`Stat1_Optional`](#structFRHAPI__StageCreate_1a28c5c565d3c075343fdc9e484fca0631) <a id="structFRHAPI__StageCreate_1a28c5c565d3c075343fdc9e484fca0631"></a>

#### `public bool `[`Stat1_IsSet`](#structFRHAPI__StageCreate_1a172449d8a32e0de470d32fecdae7294c) <a id="structFRHAPI__StageCreate_1a172449d8a32e0de470d32fecdae7294c"></a>

true if Stat1_Optional has been set to a value

#### `public bool `[`Stat1_IsNull`](#structFRHAPI__StageCreate_1a43763a33298e97fb1cebf4c7c9f9e426) <a id="structFRHAPI__StageCreate_1a43763a33298e97fb1cebf4c7c9f9e426"></a>

true if Stat1_Optional has been explicitly set to null

#### `public int32 `[`Stat2_Optional`](#structFRHAPI__StageCreate_1a7ed35eebea9e36391156108e92112f88) <a id="structFRHAPI__StageCreate_1a7ed35eebea9e36391156108e92112f88"></a>

#### `public bool `[`Stat2_IsSet`](#structFRHAPI__StageCreate_1a7a27717b7dbbcabc7fd0015570c4b16c) <a id="structFRHAPI__StageCreate_1a7a27717b7dbbcabc7fd0015570c4b16c"></a>

true if Stat2_Optional has been set to a value

#### `public bool `[`Stat2_IsNull`](#structFRHAPI__StageCreate_1aa30377cbeed860f0648d5273af03e23a) <a id="structFRHAPI__StageCreate_1aa30377cbeed860f0648d5273af03e23a"></a>

true if Stat2_Optional has been explicitly set to null

#### `public int32 `[`Stat3_Optional`](#structFRHAPI__StageCreate_1aa3e73941a1bf5ca2151d709b720cfbd8) <a id="structFRHAPI__StageCreate_1aa3e73941a1bf5ca2151d709b720cfbd8"></a>

#### `public bool `[`Stat3_IsSet`](#structFRHAPI__StageCreate_1a1df1bdeb7dcd8ac57f17a4afe856d987) <a id="structFRHAPI__StageCreate_1a1df1bdeb7dcd8ac57f17a4afe856d987"></a>

true if Stat3_Optional has been set to a value

#### `public bool `[`Stat3_IsNull`](#structFRHAPI__StageCreate_1a2c2745f6d50c5ef20d5775fb884cb924) <a id="structFRHAPI__StageCreate_1a2c2745f6d50c5ef20d5775fb884cb924"></a>

true if Stat3_Optional has been explicitly set to null

#### `public int32 `[`Stat4_Optional`](#structFRHAPI__StageCreate_1a461a7923ad60217493e3bbe36ef3f604) <a id="structFRHAPI__StageCreate_1a461a7923ad60217493e3bbe36ef3f604"></a>

#### `public bool `[`Stat4_IsSet`](#structFRHAPI__StageCreate_1a57f2489e18b030d75d03890dafaaa65e) <a id="structFRHAPI__StageCreate_1a57f2489e18b030d75d03890dafaaa65e"></a>

true if Stat4_Optional has been set to a value

#### `public bool `[`Stat4_IsNull`](#structFRHAPI__StageCreate_1aca3fce81b52a105562b878192f981a4b) <a id="structFRHAPI__StageCreate_1aca3fce81b52a105562b878192f981a4b"></a>

true if Stat4_Optional has been explicitly set to null

#### `public float `[`MmrInternal_Optional`](#structFRHAPI__StageCreate_1a8f5b139fa2dfaaf038e60b17960025a1) <a id="structFRHAPI__StageCreate_1a8f5b139fa2dfaaf038e60b17960025a1"></a>

#### `public bool `[`MmrInternal_IsSet`](#structFRHAPI__StageCreate_1aa3da0452c1a1f8805bc47750f7bc785f) <a id="structFRHAPI__StageCreate_1aa3da0452c1a1f8805bc47750f7bc785f"></a>

true if MmrInternal_Optional has been set to a value

#### `public bool `[`MmrInternal_IsNull`](#structFRHAPI__StageCreate_1a3a9a802fdd8ef5a231df9111e761427e) <a id="structFRHAPI__StageCreate_1a3a9a802fdd8ef5a231df9111e761427e"></a>

true if MmrInternal_Optional has been explicitly set to null

#### `public float `[`MmrVis_Optional`](#structFRHAPI__StageCreate_1aae70d63abf15899ddf0e1bf241a15108) <a id="structFRHAPI__StageCreate_1aae70d63abf15899ddf0e1bf241a15108"></a>

#### `public bool `[`MmrVis_IsSet`](#structFRHAPI__StageCreate_1ad7777ad38c351a6da193c98bfb0a762e) <a id="structFRHAPI__StageCreate_1ad7777ad38c351a6da193c98bfb0a762e"></a>

true if MmrVis_Optional has been set to a value

#### `public bool `[`MmrVis_IsNull`](#structFRHAPI__StageCreate_1a2381427744c2c6e33eb52234a176a55b) <a id="structFRHAPI__StageCreate_1a2381427744c2c6e33eb52234a176a55b"></a>

true if MmrVis_Optional has been explicitly set to null

#### `public ERHAPI_StageEntityType `[`OwnerEntityType_Optional`](#structFRHAPI__StageCreate_1a25be6e5e1a316c8fa4b6064d78d2f46b) <a id="structFRHAPI__StageCreate_1a25be6e5e1a316c8fa4b6064d78d2f46b"></a>

#### `public bool `[`OwnerEntityType_IsSet`](#structFRHAPI__StageCreate_1a1dcc3d3895bdacde82855a8a8e6aab3d) <a id="structFRHAPI__StageCreate_1a1dcc3d3895bdacde82855a8a8e6aab3d"></a>

true if OwnerEntityType_Optional has been set to a value

#### `public bool `[`OwnerEntityType_IsNull`](#structFRHAPI__StageCreate_1ab0953e2601084d7112caf9535147f368) <a id="structFRHAPI__StageCreate_1ab0953e2601084d7112caf9535147f368"></a>

true if OwnerEntityType_Optional has been explicitly set to null

#### `public FString `[`OwnerEntityId_Optional`](#structFRHAPI__StageCreate_1a6ad916352a2d22fb59a6e4e08c4e97bb) <a id="structFRHAPI__StageCreate_1a6ad916352a2d22fb59a6e4e08c4e97bb"></a>

#### `public bool `[`OwnerEntityId_IsSet`](#structFRHAPI__StageCreate_1ad3d73bffeb4457df20a60f4a2ed8d9e9) <a id="structFRHAPI__StageCreate_1ad3d73bffeb4457df20a60f4a2ed8d9e9"></a>

true if OwnerEntityId_Optional has been set to a value

#### `public bool `[`OwnerEntityId_IsNull`](#structFRHAPI__StageCreate_1afcc3cd22d211c738ac296ff2aee3f0c7) <a id="structFRHAPI__StageCreate_1afcc3cd22d211c738ac296ff2aee3f0c7"></a>

true if OwnerEntityId_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__StageCreate_1ace43bf06fa1c306370a59c94b23914a2)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__StageCreate_1ace43bf06fa1c306370a59c94b23914a2"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__StageCreate_1a04106cd112738a89a58f8aed21907d52)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__StageCreate_1a04106cd112738a89a58f8aed21907d52"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetBlob`](#structFRHAPI__StageCreate_1a074b4ed15bf5493d7976394e01b747ea)`()` <a id="structFRHAPI__StageCreate_1a074b4ed15bf5493d7976394e01b747ea"></a>

Gets the value of Blob_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetBlob`](#structFRHAPI__StageCreate_1a4b48961f0115c2eaf79486cb6c1f64f1)`() const` <a id="structFRHAPI__StageCreate_1a4b48961f0115c2eaf79486cb6c1f64f1"></a>

Gets the value of Blob_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & `[`GetBlob`](#structFRHAPI__StageCreate_1a3ae801dd5cf2f0d8af86832f848e40f0)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & DefaultValue) const` <a id="structFRHAPI__StageCreate_1a3ae801dd5cf2f0d8af86832f848e40f0"></a>

Gets the value of Blob_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetBlob`](#structFRHAPI__StageCreate_1ac450a12deb79f11c56bdf828326aa1b2)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & OutValue) const` <a id="structFRHAPI__StageCreate_1ac450a12deb79f11c56bdf828326aa1b2"></a>

Fills OutValue with the value of Blob_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetBlobOrNull`](#structFRHAPI__StageCreate_1a74030cb9aceccf3752205a679f124731)`()` <a id="structFRHAPI__StageCreate_1a74030cb9aceccf3752205a679f124731"></a>

Returns a pointer to Blob_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > * `[`GetBlobOrNull`](#structFRHAPI__StageCreate_1a4486a52d4d34fa2720b7735bd57fb0ec)`() const` <a id="structFRHAPI__StageCreate_1a4486a52d4d34fa2720b7735bd57fb0ec"></a>

Returns a pointer to Blob_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetBlob`](#structFRHAPI__StageCreate_1a6aa9305f83b82365826edaecc2aa5f90)`(const TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > & NewValue)` <a id="structFRHAPI__StageCreate_1a6aa9305f83b82365826edaecc2aa5f90"></a>

Sets the value of Blob_Optional and also sets Blob_IsSet to true.

#### `public inline FORCEINLINE void `[`SetBlob`](#structFRHAPI__StageCreate_1a8cc62f0e26ecf114ee3863aa8bf3e0bc)`(TMap< FString, `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` > && NewValue)` <a id="structFRHAPI__StageCreate_1a8cc62f0e26ecf114ee3863aa8bf3e0bc"></a>

Sets the value of Blob_Optional and also sets Blob_IsSet to true using move semantics.

#### `public inline void `[`ClearBlob`](#structFRHAPI__StageCreate_1ad010ace4e3c032160131293051a7dc41)`()` <a id="structFRHAPI__StageCreate_1ad010ace4e3c032160131293051a7dc41"></a>

Clears the value of Blob_Optional and sets Blob_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetGameVersion`](#structFRHAPI__StageCreate_1ab0de300d882725a0ec97b6af273b997d)`()` <a id="structFRHAPI__StageCreate_1ab0de300d882725a0ec97b6af273b997d"></a>

Gets the value of GameVersion_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetGameVersion`](#structFRHAPI__StageCreate_1a23b4e279d8fa8be4b46c12a45a753251)`() const` <a id="structFRHAPI__StageCreate_1a23b4e279d8fa8be4b46c12a45a753251"></a>

Gets the value of GameVersion_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetGameVersion`](#structFRHAPI__StageCreate_1ace2504cb9e3d17f16d92cf7901264888)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageCreate_1ace2504cb9e3d17f16d92cf7901264888"></a>

Gets the value of GameVersion_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetGameVersion`](#structFRHAPI__StageCreate_1ab41b2da66f3d54aafda797e7b55431e9)`(FString & OutValue) const` <a id="structFRHAPI__StageCreate_1ab41b2da66f3d54aafda797e7b55431e9"></a>

Fills OutValue with the value of GameVersion_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetGameVersionOrNull`](#structFRHAPI__StageCreate_1ac70b36e2e32bf8c63bdf1781c5e8ae7f)`()` <a id="structFRHAPI__StageCreate_1ac70b36e2e32bf8c63bdf1781c5e8ae7f"></a>

Returns a pointer to GameVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetGameVersionOrNull`](#structFRHAPI__StageCreate_1a8c705a08a5c1029f15ed8ab612bc63f5)`() const` <a id="structFRHAPI__StageCreate_1a8c705a08a5c1029f15ed8ab612bc63f5"></a>

Returns a pointer to GameVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetGameVersion`](#structFRHAPI__StageCreate_1a1aaa68fed26ea1a00b8a3ada3d1d6cb3)`(const FString & NewValue)` <a id="structFRHAPI__StageCreate_1a1aaa68fed26ea1a00b8a3ada3d1d6cb3"></a>

Sets the value of GameVersion_Optional and also sets GameVersion_IsSet to true.

#### `public inline FORCEINLINE void `[`SetGameVersion`](#structFRHAPI__StageCreate_1a4e7fe6251fa7f7de0fafa2e06b9f7e61)`(FString && NewValue)` <a id="structFRHAPI__StageCreate_1a4e7fe6251fa7f7de0fafa2e06b9f7e61"></a>

Sets the value of GameVersion_Optional and also sets GameVersion_IsSet to true using move semantics.

#### `public inline void `[`ClearGameVersion`](#structFRHAPI__StageCreate_1a2804c069ee1b1bf0bbd6839460dd3d03)`()` <a id="structFRHAPI__StageCreate_1a2804c069ee1b1bf0bbd6839460dd3d03"></a>

Clears the value of GameVersion_Optional and sets GameVersion_IsSet to false.

#### `public inline FORCEINLINE void `[`SetGameVersionToNull`](#structFRHAPI__StageCreate_1a803a55a46a95f1c94a749ec7852f51b6)`()` <a id="structFRHAPI__StageCreate_1a803a55a46a95f1c94a749ec7852f51b6"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsGameVersionNull`](#structFRHAPI__StageCreate_1aeae10ea234fbcdcb4eb67372db8dec0a)`() const` <a id="structFRHAPI__StageCreate_1aeae10ea234fbcdcb4eb67372db8dec0a"></a>

Checks whether GameVersion_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetV`](#structFRHAPI__StageCreate_1affe78ecc3d60c82a99428c7e8682e34a)`()` <a id="structFRHAPI__StageCreate_1affe78ecc3d60c82a99428c7e8682e34a"></a>

Gets the value of V_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetV`](#structFRHAPI__StageCreate_1afc2e3e3096fe103f807713b1ea98368a)`() const` <a id="structFRHAPI__StageCreate_1afc2e3e3096fe103f807713b1ea98368a"></a>

Gets the value of V_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetV`](#structFRHAPI__StageCreate_1a5634ce8a8ab8374a2876c77b5c81aa1f)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageCreate_1a5634ce8a8ab8374a2876c77b5c81aa1f"></a>

Gets the value of V_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetV`](#structFRHAPI__StageCreate_1a5d5681814e9bfb439b5c5f4f15654beb)`(FString & OutValue) const` <a id="structFRHAPI__StageCreate_1a5d5681814e9bfb439b5c5f4f15654beb"></a>

Fills OutValue with the value of V_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetVOrNull`](#structFRHAPI__StageCreate_1aea1217acc558a409d30886c5131af794)`()` <a id="structFRHAPI__StageCreate_1aea1217acc558a409d30886c5131af794"></a>

Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetVOrNull`](#structFRHAPI__StageCreate_1abdd797286277a38481918e7d2cb5e346)`() const` <a id="structFRHAPI__StageCreate_1abdd797286277a38481918e7d2cb5e346"></a>

Returns a pointer to V_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetV`](#structFRHAPI__StageCreate_1af2d664734789ea1b84f3a31dbf118821)`(const FString & NewValue)` <a id="structFRHAPI__StageCreate_1af2d664734789ea1b84f3a31dbf118821"></a>

Sets the value of V_Optional and also sets V_IsSet to true.

#### `public inline FORCEINLINE void `[`SetV`](#structFRHAPI__StageCreate_1a749c1ff702f0bb50f209efdec92fba66)`(FString && NewValue)` <a id="structFRHAPI__StageCreate_1a749c1ff702f0bb50f209efdec92fba66"></a>

Sets the value of V_Optional and also sets V_IsSet to true using move semantics.

#### `public inline void `[`ClearV`](#structFRHAPI__StageCreate_1a6dff8d3c798aa1fcc7ec92feec11c2e6)`()` <a id="structFRHAPI__StageCreate_1a6dff8d3c798aa1fcc7ec92feec11c2e6"></a>

Clears the value of V_Optional and sets V_IsSet to false.

#### `public inline FORCEINLINE void `[`SetVToNull`](#structFRHAPI__StageCreate_1a9fa8c6ab17caf998bee5b225ff202512)`()` <a id="structFRHAPI__StageCreate_1a9fa8c6ab17caf998bee5b225ff202512"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsVNull`](#structFRHAPI__StageCreate_1af5914fa0a232e1c184afc7300c547086)`() const` <a id="structFRHAPI__StageCreate_1af5914fa0a232e1c184afc7300c547086"></a>

Checks whether V_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetType1`](#structFRHAPI__StageCreate_1af1f213b6b4ea77450d48c0525ed27d9c)`()` <a id="structFRHAPI__StageCreate_1af1f213b6b4ea77450d48c0525ed27d9c"></a>

Gets the value of Type1_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType1`](#structFRHAPI__StageCreate_1ac3f252cee37a394943a4e533a7a8567f)`() const` <a id="structFRHAPI__StageCreate_1ac3f252cee37a394943a4e533a7a8567f"></a>

Gets the value of Type1_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType1`](#structFRHAPI__StageCreate_1a717d7c566ac0fbf1f3ed9eb952ab48c5)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageCreate_1a717d7c566ac0fbf1f3ed9eb952ab48c5"></a>

Gets the value of Type1_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType1`](#structFRHAPI__StageCreate_1ac0ee2533d73e2b9bab0ecd2e30fc1e28)`(FString & OutValue) const` <a id="structFRHAPI__StageCreate_1ac0ee2533d73e2b9bab0ecd2e30fc1e28"></a>

Fills OutValue with the value of Type1_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetType1OrNull`](#structFRHAPI__StageCreate_1ad2e50d0da384d699fbfb6d18308c64c6)`()` <a id="structFRHAPI__StageCreate_1ad2e50d0da384d699fbfb6d18308c64c6"></a>

Returns a pointer to Type1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetType1OrNull`](#structFRHAPI__StageCreate_1a4c0877a3d79d3a2a030b773cfaa1bcad)`() const` <a id="structFRHAPI__StageCreate_1a4c0877a3d79d3a2a030b773cfaa1bcad"></a>

Returns a pointer to Type1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType1`](#structFRHAPI__StageCreate_1af0ef64b4a7142e1cc0ab6348419dd7bb)`(const FString & NewValue)` <a id="structFRHAPI__StageCreate_1af0ef64b4a7142e1cc0ab6348419dd7bb"></a>

Sets the value of Type1_Optional and also sets Type1_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType1`](#structFRHAPI__StageCreate_1a1628c93c3bf5e0f4f51c9881091e25d6)`(FString && NewValue)` <a id="structFRHAPI__StageCreate_1a1628c93c3bf5e0f4f51c9881091e25d6"></a>

Sets the value of Type1_Optional and also sets Type1_IsSet to true using move semantics.

#### `public inline void `[`ClearType1`](#structFRHAPI__StageCreate_1a67e2e9c6d1e7c9eb4609d19906a152f6)`()` <a id="structFRHAPI__StageCreate_1a67e2e9c6d1e7c9eb4609d19906a152f6"></a>

Clears the value of Type1_Optional and sets Type1_IsSet to false.

#### `public inline FORCEINLINE void `[`SetType1ToNull`](#structFRHAPI__StageCreate_1aa25dd4e80e71176a7b10d98cd62230b8)`()` <a id="structFRHAPI__StageCreate_1aa25dd4e80e71176a7b10d98cd62230b8"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsType1Null`](#structFRHAPI__StageCreate_1ae331c5521a9892632f08a5c7349d2b04)`() const` <a id="structFRHAPI__StageCreate_1ae331c5521a9892632f08a5c7349d2b04"></a>

Checks whether Type1_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetType2`](#structFRHAPI__StageCreate_1a88acc81576afb61e68c7649331221d00)`()` <a id="structFRHAPI__StageCreate_1a88acc81576afb61e68c7649331221d00"></a>

Gets the value of Type2_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType2`](#structFRHAPI__StageCreate_1aa5b91546b88e24e9458e350be8a2e961)`() const` <a id="structFRHAPI__StageCreate_1aa5b91546b88e24e9458e350be8a2e961"></a>

Gets the value of Type2_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType2`](#structFRHAPI__StageCreate_1a87e1757e679ddcb49efd52dd9e2c8482)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageCreate_1a87e1757e679ddcb49efd52dd9e2c8482"></a>

Gets the value of Type2_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType2`](#structFRHAPI__StageCreate_1ac51977cb2bd895b5b7f4523840cd9dcd)`(FString & OutValue) const` <a id="structFRHAPI__StageCreate_1ac51977cb2bd895b5b7f4523840cd9dcd"></a>

Fills OutValue with the value of Type2_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetType2OrNull`](#structFRHAPI__StageCreate_1a5eb5f3a8dbb2d6ee853e1266a89fc0a8)`()` <a id="structFRHAPI__StageCreate_1a5eb5f3a8dbb2d6ee853e1266a89fc0a8"></a>

Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetType2OrNull`](#structFRHAPI__StageCreate_1acd70bfa81bf9b0b32e602f2e9996cbf0)`() const` <a id="structFRHAPI__StageCreate_1acd70bfa81bf9b0b32e602f2e9996cbf0"></a>

Returns a pointer to Type2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType2`](#structFRHAPI__StageCreate_1ae4facea87b8d0e11926d53453a8f2984)`(const FString & NewValue)` <a id="structFRHAPI__StageCreate_1ae4facea87b8d0e11926d53453a8f2984"></a>

Sets the value of Type2_Optional and also sets Type2_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType2`](#structFRHAPI__StageCreate_1a492903f2212c6396ae3115827bc3fd25)`(FString && NewValue)` <a id="structFRHAPI__StageCreate_1a492903f2212c6396ae3115827bc3fd25"></a>

Sets the value of Type2_Optional and also sets Type2_IsSet to true using move semantics.

#### `public inline void `[`ClearType2`](#structFRHAPI__StageCreate_1a308616c10647bb10ab86fd066ff86400)`()` <a id="structFRHAPI__StageCreate_1a308616c10647bb10ab86fd066ff86400"></a>

Clears the value of Type2_Optional and sets Type2_IsSet to false.

#### `public inline FORCEINLINE void `[`SetType2ToNull`](#structFRHAPI__StageCreate_1a3a5ba6c0fed5f702e67e905fb38ef046)`()` <a id="structFRHAPI__StageCreate_1a3a5ba6c0fed5f702e67e905fb38ef046"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsType2Null`](#structFRHAPI__StageCreate_1a8cf48ad1754d01f38a08a0a1c86c55a4)`() const` <a id="structFRHAPI__StageCreate_1a8cf48ad1754d01f38a08a0a1c86c55a4"></a>

Checks whether Type2_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetType3`](#structFRHAPI__StageCreate_1ac379964e962cfd280afd2b82c6496420)`()` <a id="structFRHAPI__StageCreate_1ac379964e962cfd280afd2b82c6496420"></a>

Gets the value of Type3_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType3`](#structFRHAPI__StageCreate_1aaa62adda0b3716c19a3a4ff5782065ac)`() const` <a id="structFRHAPI__StageCreate_1aaa62adda0b3716c19a3a4ff5782065ac"></a>

Gets the value of Type3_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType3`](#structFRHAPI__StageCreate_1aadc3fac67f63b5fa4a1bcb59b56d671a)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageCreate_1aadc3fac67f63b5fa4a1bcb59b56d671a"></a>

Gets the value of Type3_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType3`](#structFRHAPI__StageCreate_1aa2ee3ef5b10e8d90c30bb64574bf73f0)`(FString & OutValue) const` <a id="structFRHAPI__StageCreate_1aa2ee3ef5b10e8d90c30bb64574bf73f0"></a>

Fills OutValue with the value of Type3_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetType3OrNull`](#structFRHAPI__StageCreate_1a7f9177ba5a85175392a3eef3cee265e7)`()` <a id="structFRHAPI__StageCreate_1a7f9177ba5a85175392a3eef3cee265e7"></a>

Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetType3OrNull`](#structFRHAPI__StageCreate_1a3c8f0e879fb3f5bc746ab23c890c2e28)`() const` <a id="structFRHAPI__StageCreate_1a3c8f0e879fb3f5bc746ab23c890c2e28"></a>

Returns a pointer to Type3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType3`](#structFRHAPI__StageCreate_1a8a911180becdf4e0e78f13b26e625e3d)`(const FString & NewValue)` <a id="structFRHAPI__StageCreate_1a8a911180becdf4e0e78f13b26e625e3d"></a>

Sets the value of Type3_Optional and also sets Type3_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType3`](#structFRHAPI__StageCreate_1aefb08dcf39ace4d28604e90e7c9cff9a)`(FString && NewValue)` <a id="structFRHAPI__StageCreate_1aefb08dcf39ace4d28604e90e7c9cff9a"></a>

Sets the value of Type3_Optional and also sets Type3_IsSet to true using move semantics.

#### `public inline void `[`ClearType3`](#structFRHAPI__StageCreate_1ad79c7e97fc663305af3e2a8d19aed056)`()` <a id="structFRHAPI__StageCreate_1ad79c7e97fc663305af3e2a8d19aed056"></a>

Clears the value of Type3_Optional and sets Type3_IsSet to false.

#### `public inline FORCEINLINE void `[`SetType3ToNull`](#structFRHAPI__StageCreate_1ad5191dafea6c0626e4297889bfc0d9ee)`()` <a id="structFRHAPI__StageCreate_1ad5191dafea6c0626e4297889bfc0d9ee"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsType3Null`](#structFRHAPI__StageCreate_1a23995f72ae2beff89a5e2992084fa18e)`() const` <a id="structFRHAPI__StageCreate_1a23995f72ae2beff89a5e2992084fa18e"></a>

Checks whether Type3_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetType4`](#structFRHAPI__StageCreate_1ac46575c61a2e20c86157b5a5d9c3b3d0)`()` <a id="structFRHAPI__StageCreate_1ac46575c61a2e20c86157b5a5d9c3b3d0"></a>

Gets the value of Type4_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType4`](#structFRHAPI__StageCreate_1a43f1f52e57365a3d834f4933da979855)`() const` <a id="structFRHAPI__StageCreate_1a43f1f52e57365a3d834f4933da979855"></a>

Gets the value of Type4_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType4`](#structFRHAPI__StageCreate_1a63c1b68868ca458bd51eada0287c2324)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageCreate_1a63c1b68868ca458bd51eada0287c2324"></a>

Gets the value of Type4_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType4`](#structFRHAPI__StageCreate_1a48f9769ae502e2f414dc8d00cc0a33a6)`(FString & OutValue) const` <a id="structFRHAPI__StageCreate_1a48f9769ae502e2f414dc8d00cc0a33a6"></a>

Fills OutValue with the value of Type4_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetType4OrNull`](#structFRHAPI__StageCreate_1add27a558f804a1f20420eca3cf68796c)`()` <a id="structFRHAPI__StageCreate_1add27a558f804a1f20420eca3cf68796c"></a>

Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetType4OrNull`](#structFRHAPI__StageCreate_1a661dfc5fe7875f36750e6ed0215f8321)`() const` <a id="structFRHAPI__StageCreate_1a661dfc5fe7875f36750e6ed0215f8321"></a>

Returns a pointer to Type4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType4`](#structFRHAPI__StageCreate_1a74113eab9a8dcd80e36c64432d8c2212)`(const FString & NewValue)` <a id="structFRHAPI__StageCreate_1a74113eab9a8dcd80e36c64432d8c2212"></a>

Sets the value of Type4_Optional and also sets Type4_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType4`](#structFRHAPI__StageCreate_1a824f7cea0666daedc0620ce219bc7a81)`(FString && NewValue)` <a id="structFRHAPI__StageCreate_1a824f7cea0666daedc0620ce219bc7a81"></a>

Sets the value of Type4_Optional and also sets Type4_IsSet to true using move semantics.

#### `public inline void `[`ClearType4`](#structFRHAPI__StageCreate_1a8baeb26101ed5138cea1fa264ace3bb1)`()` <a id="structFRHAPI__StageCreate_1a8baeb26101ed5138cea1fa264ace3bb1"></a>

Clears the value of Type4_Optional and sets Type4_IsSet to false.

#### `public inline FORCEINLINE void `[`SetType4ToNull`](#structFRHAPI__StageCreate_1adc89628fac2135c18ab026d9cd597c0a)`()` <a id="structFRHAPI__StageCreate_1adc89628fac2135c18ab026d9cd597c0a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsType4Null`](#structFRHAPI__StageCreate_1a976abe32b9e4ea7b64036897bdc47e6b)`() const` <a id="structFRHAPI__StageCreate_1a976abe32b9e4ea7b64036897bdc47e6b"></a>

Checks whether Type4_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetIndex`](#structFRHAPI__StageCreate_1a74dd8dedd378a96f1deb5ba87639530b)`()` <a id="structFRHAPI__StageCreate_1a74dd8dedd378a96f1deb5ba87639530b"></a>

Gets the value of Index_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetIndex`](#structFRHAPI__StageCreate_1a754a5b5cb8629f8a9913dd645585e7e6)`() const` <a id="structFRHAPI__StageCreate_1a754a5b5cb8629f8a9913dd645585e7e6"></a>

Gets the value of Index_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetIndex`](#structFRHAPI__StageCreate_1a2596e5c5ca3ef12c8a0a63449ab7a6a8)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StageCreate_1a2596e5c5ca3ef12c8a0a63449ab7a6a8"></a>

Gets the value of Index_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIndex`](#structFRHAPI__StageCreate_1a601a25c4f8d9fd4b4f7d133d440b87fc)`(int32 & OutValue) const` <a id="structFRHAPI__StageCreate_1a601a25c4f8d9fd4b4f7d133d440b87fc"></a>

Fills OutValue with the value of Index_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetIndexOrNull`](#structFRHAPI__StageCreate_1a2b1b2671b09bb5b0e4b23c4c81b4985a)`()` <a id="structFRHAPI__StageCreate_1a2b1b2671b09bb5b0e4b23c4c81b4985a"></a>

Returns a pointer to Index_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetIndexOrNull`](#structFRHAPI__StageCreate_1a154cff480b9dee536ca50e3a6791f5cb)`() const` <a id="structFRHAPI__StageCreate_1a154cff480b9dee536ca50e3a6791f5cb"></a>

Returns a pointer to Index_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIndex`](#structFRHAPI__StageCreate_1ae92f716062be9d974012acaccdabfa11)`(const int32 & NewValue)` <a id="structFRHAPI__StageCreate_1ae92f716062be9d974012acaccdabfa11"></a>

Sets the value of Index_Optional and also sets Index_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIndex`](#structFRHAPI__StageCreate_1a8ee2d48c8ddfeaa62300c33e283f2cda)`(int32 && NewValue)` <a id="structFRHAPI__StageCreate_1a8ee2d48c8ddfeaa62300c33e283f2cda"></a>

Sets the value of Index_Optional and also sets Index_IsSet to true using move semantics.

#### `public inline void `[`ClearIndex`](#structFRHAPI__StageCreate_1a11112b9f0be002b8ee67d700fdb4691e)`()` <a id="structFRHAPI__StageCreate_1a11112b9f0be002b8ee67d700fdb4691e"></a>

Clears the value of Index_Optional and sets Index_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Index`](#structFRHAPI__StageCreate_1a9492f3cf99a71a2509d850f6fe84d127)`()` <a id="structFRHAPI__StageCreate_1a9492f3cf99a71a2509d850f6fe84d127"></a>

Returns the default value of Index.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__StageCreate_1ae44a43d9d93d082f147f34f85a491351)`()` <a id="structFRHAPI__StageCreate_1ae44a43d9d93d082f147f34f85a491351"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__StageCreate_1a036d9a09f555dc7ce78b0657ccc64d4f)`() const` <a id="structFRHAPI__StageCreate_1a036d9a09f555dc7ce78b0657ccc64d4f"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__StageCreate_1a0ea33fd0bd1f82dcb25fbb4c1c0b5d82)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageCreate_1a0ea33fd0bd1f82dcb25fbb4c1c0b5d82"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__StageCreate_1a34b1e6d8c2e3ce45ad51f5b5e585bb14)`(FString & OutValue) const` <a id="structFRHAPI__StageCreate_1a34b1e6d8c2e3ce45ad51f5b5e585bb14"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__StageCreate_1a7ac9a577e0a08b9bef58862b091e71df)`()` <a id="structFRHAPI__StageCreate_1a7ac9a577e0a08b9bef58862b091e71df"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__StageCreate_1a225e76b3ff93d8da0c73b3917e097517)`() const` <a id="structFRHAPI__StageCreate_1a225e76b3ff93d8da0c73b3917e097517"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__StageCreate_1ab903df8983b1b9ec7c7c5b2148a9c726)`(const FString & NewValue)` <a id="structFRHAPI__StageCreate_1ab903df8983b1b9ec7c7c5b2148a9c726"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__StageCreate_1a6840c61b6afc9d3a535d4d65530e4a94)`(FString && NewValue)` <a id="structFRHAPI__StageCreate_1a6840c61b6afc9d3a535d4d65530e4a94"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__StageCreate_1a14323b2e184d71820301f6478152522c)`()` <a id="structFRHAPI__StageCreate_1a14323b2e184d71820301f6478152522c"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__StageCreate_1aae60d5fe3e2eca37e9eeaf2dfc23b5c4)`()` <a id="structFRHAPI__StageCreate_1aae60d5fe3e2eca37e9eeaf2dfc23b5c4"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__StageCreate_1aabd0ed7799089cb5816fbf90b85e5eb3)`() const` <a id="structFRHAPI__StageCreate_1aabd0ed7799089cb5816fbf90b85e5eb3"></a>

Checks whether MatchId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetStat1`](#structFRHAPI__StageCreate_1a745006d674b5fb51a50cb395a1fe3745)`()` <a id="structFRHAPI__StageCreate_1a745006d674b5fb51a50cb395a1fe3745"></a>

Gets the value of Stat1_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStat1`](#structFRHAPI__StageCreate_1ae99dc58f1ba68439a6321dff2a745299)`() const` <a id="structFRHAPI__StageCreate_1ae99dc58f1ba68439a6321dff2a745299"></a>

Gets the value of Stat1_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStat1`](#structFRHAPI__StageCreate_1a10b48dc083c7d0b48df386d5cfe8f312)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StageCreate_1a10b48dc083c7d0b48df386d5cfe8f312"></a>

Gets the value of Stat1_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStat1`](#structFRHAPI__StageCreate_1a840354571d07f365a5132621e1779f13)`(int32 & OutValue) const` <a id="structFRHAPI__StageCreate_1a840354571d07f365a5132621e1779f13"></a>

Fills OutValue with the value of Stat1_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetStat1OrNull`](#structFRHAPI__StageCreate_1a6b105fdd61304ee559b4ef4dd05ff256)`()` <a id="structFRHAPI__StageCreate_1a6b105fdd61304ee559b4ef4dd05ff256"></a>

Returns a pointer to Stat1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetStat1OrNull`](#structFRHAPI__StageCreate_1abbb4b117282a9a81aae13251cfac665a)`() const` <a id="structFRHAPI__StageCreate_1abbb4b117282a9a81aae13251cfac665a"></a>

Returns a pointer to Stat1_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStat1`](#structFRHAPI__StageCreate_1a5af3d959e57ee917838b69028fe64f88)`(const int32 & NewValue)` <a id="structFRHAPI__StageCreate_1a5af3d959e57ee917838b69028fe64f88"></a>

Sets the value of Stat1_Optional and also sets Stat1_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStat1`](#structFRHAPI__StageCreate_1addefc82c3788e3d12df82cefc9ace3bc)`(int32 && NewValue)` <a id="structFRHAPI__StageCreate_1addefc82c3788e3d12df82cefc9ace3bc"></a>

Sets the value of Stat1_Optional and also sets Stat1_IsSet to true using move semantics.

#### `public inline void `[`ClearStat1`](#structFRHAPI__StageCreate_1a3aa8ba188dc364c1bc376810cc918c30)`()` <a id="structFRHAPI__StageCreate_1a3aa8ba188dc364c1bc376810cc918c30"></a>

Clears the value of Stat1_Optional and sets Stat1_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Stat1`](#structFRHAPI__StageCreate_1acff649da0bce18d9640a735bf48faa96)`()` <a id="structFRHAPI__StageCreate_1acff649da0bce18d9640a735bf48faa96"></a>

Returns the default value of Stat1.

#### `public inline FORCEINLINE void `[`SetStat1ToNull`](#structFRHAPI__StageCreate_1adbb1b90f36f39c075d3a5f633c3e1ad1)`()` <a id="structFRHAPI__StageCreate_1adbb1b90f36f39c075d3a5f633c3e1ad1"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStat1Null`](#structFRHAPI__StageCreate_1a6c175da61dfd62479380c95b7e713bcf)`() const` <a id="structFRHAPI__StageCreate_1a6c175da61dfd62479380c95b7e713bcf"></a>

Checks whether Stat1_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetStat2`](#structFRHAPI__StageCreate_1afa9d2b6e687e0a49d89b189b3bbc5606)`()` <a id="structFRHAPI__StageCreate_1afa9d2b6e687e0a49d89b189b3bbc5606"></a>

Gets the value of Stat2_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStat2`](#structFRHAPI__StageCreate_1aec2a60cdd01266febbaa15e92b7aac09)`() const` <a id="structFRHAPI__StageCreate_1aec2a60cdd01266febbaa15e92b7aac09"></a>

Gets the value of Stat2_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStat2`](#structFRHAPI__StageCreate_1a11f1814eb0b91e782a1b17bbdbb6784f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StageCreate_1a11f1814eb0b91e782a1b17bbdbb6784f"></a>

Gets the value of Stat2_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStat2`](#structFRHAPI__StageCreate_1a8a07b26a9a02b1105bc485eab4457df2)`(int32 & OutValue) const` <a id="structFRHAPI__StageCreate_1a8a07b26a9a02b1105bc485eab4457df2"></a>

Fills OutValue with the value of Stat2_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetStat2OrNull`](#structFRHAPI__StageCreate_1ad91a7da8fd4b16fc937be8ffae37c3f9)`()` <a id="structFRHAPI__StageCreate_1ad91a7da8fd4b16fc937be8ffae37c3f9"></a>

Returns a pointer to Stat2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetStat2OrNull`](#structFRHAPI__StageCreate_1a07eda87810d2fbf0e2092fce883a004c)`() const` <a id="structFRHAPI__StageCreate_1a07eda87810d2fbf0e2092fce883a004c"></a>

Returns a pointer to Stat2_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStat2`](#structFRHAPI__StageCreate_1a4790a51b7bae4d560a7b3455a9302db8)`(const int32 & NewValue)` <a id="structFRHAPI__StageCreate_1a4790a51b7bae4d560a7b3455a9302db8"></a>

Sets the value of Stat2_Optional and also sets Stat2_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStat2`](#structFRHAPI__StageCreate_1aab5eb4f9a4aecc1b5d774451f03f760b)`(int32 && NewValue)` <a id="structFRHAPI__StageCreate_1aab5eb4f9a4aecc1b5d774451f03f760b"></a>

Sets the value of Stat2_Optional and also sets Stat2_IsSet to true using move semantics.

#### `public inline void `[`ClearStat2`](#structFRHAPI__StageCreate_1aedcd7c7ab83d2aae46b173eeb6cd46c7)`()` <a id="structFRHAPI__StageCreate_1aedcd7c7ab83d2aae46b173eeb6cd46c7"></a>

Clears the value of Stat2_Optional and sets Stat2_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Stat2`](#structFRHAPI__StageCreate_1a67f54fb9d8cb9bec8032c747dad6e4b3)`()` <a id="structFRHAPI__StageCreate_1a67f54fb9d8cb9bec8032c747dad6e4b3"></a>

Returns the default value of Stat2.

#### `public inline FORCEINLINE void `[`SetStat2ToNull`](#structFRHAPI__StageCreate_1ad138c58aa18cad2dad6eeb90474414ac)`()` <a id="structFRHAPI__StageCreate_1ad138c58aa18cad2dad6eeb90474414ac"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStat2Null`](#structFRHAPI__StageCreate_1a97985b5a8e91131722cb37f5182ec6a7)`() const` <a id="structFRHAPI__StageCreate_1a97985b5a8e91131722cb37f5182ec6a7"></a>

Checks whether Stat2_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetStat3`](#structFRHAPI__StageCreate_1a132a40a5cecc7c411c5dcf3c23cbd6c0)`()` <a id="structFRHAPI__StageCreate_1a132a40a5cecc7c411c5dcf3c23cbd6c0"></a>

Gets the value of Stat3_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStat3`](#structFRHAPI__StageCreate_1af28e5e111941d95df89736effcd38164)`() const` <a id="structFRHAPI__StageCreate_1af28e5e111941d95df89736effcd38164"></a>

Gets the value of Stat3_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStat3`](#structFRHAPI__StageCreate_1a93b6a94dce17db9b63b0a19320e44898)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StageCreate_1a93b6a94dce17db9b63b0a19320e44898"></a>

Gets the value of Stat3_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStat3`](#structFRHAPI__StageCreate_1acd0bd26facc7ddcefb06c26df76bd1d8)`(int32 & OutValue) const` <a id="structFRHAPI__StageCreate_1acd0bd26facc7ddcefb06c26df76bd1d8"></a>

Fills OutValue with the value of Stat3_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetStat3OrNull`](#structFRHAPI__StageCreate_1aa8c7feb4631c4167d062dd9d398a315d)`()` <a id="structFRHAPI__StageCreate_1aa8c7feb4631c4167d062dd9d398a315d"></a>

Returns a pointer to Stat3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetStat3OrNull`](#structFRHAPI__StageCreate_1a75fcd195b0208c8b1fa9fa8a8e388561)`() const` <a id="structFRHAPI__StageCreate_1a75fcd195b0208c8b1fa9fa8a8e388561"></a>

Returns a pointer to Stat3_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStat3`](#structFRHAPI__StageCreate_1a64513a5474904384c4066ce29f9dba76)`(const int32 & NewValue)` <a id="structFRHAPI__StageCreate_1a64513a5474904384c4066ce29f9dba76"></a>

Sets the value of Stat3_Optional and also sets Stat3_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStat3`](#structFRHAPI__StageCreate_1a670407962d9b1ed4943a46cc06a2fa5c)`(int32 && NewValue)` <a id="structFRHAPI__StageCreate_1a670407962d9b1ed4943a46cc06a2fa5c"></a>

Sets the value of Stat3_Optional and also sets Stat3_IsSet to true using move semantics.

#### `public inline void `[`ClearStat3`](#structFRHAPI__StageCreate_1ad1c80491449c37b8f34b57606620150a)`()` <a id="structFRHAPI__StageCreate_1ad1c80491449c37b8f34b57606620150a"></a>

Clears the value of Stat3_Optional and sets Stat3_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Stat3`](#structFRHAPI__StageCreate_1a1f0cb48e1268efa07714475ce80a1ab1)`()` <a id="structFRHAPI__StageCreate_1a1f0cb48e1268efa07714475ce80a1ab1"></a>

Returns the default value of Stat3.

#### `public inline FORCEINLINE void `[`SetStat3ToNull`](#structFRHAPI__StageCreate_1a327fb2eab89c7743a6731db42bcffdda)`()` <a id="structFRHAPI__StageCreate_1a327fb2eab89c7743a6731db42bcffdda"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStat3Null`](#structFRHAPI__StageCreate_1a5427718cf38596848d3927212c08d2b9)`() const` <a id="structFRHAPI__StageCreate_1a5427718cf38596848d3927212c08d2b9"></a>

Checks whether Stat3_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetStat4`](#structFRHAPI__StageCreate_1a750e399bf441c8b1d754a9817abd14f5)`()` <a id="structFRHAPI__StageCreate_1a750e399bf441c8b1d754a9817abd14f5"></a>

Gets the value of Stat4_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStat4`](#structFRHAPI__StageCreate_1a39fe7f4b173d1e642a937f50c5fa3cab)`() const` <a id="structFRHAPI__StageCreate_1a39fe7f4b173d1e642a937f50c5fa3cab"></a>

Gets the value of Stat4_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetStat4`](#structFRHAPI__StageCreate_1a7f0da21e807d367d97009f464e1d90ad)`(const int32 & DefaultValue) const` <a id="structFRHAPI__StageCreate_1a7f0da21e807d367d97009f464e1d90ad"></a>

Gets the value of Stat4_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStat4`](#structFRHAPI__StageCreate_1a6bd7708a497cfe8a65b0a43924f5aa32)`(int32 & OutValue) const` <a id="structFRHAPI__StageCreate_1a6bd7708a497cfe8a65b0a43924f5aa32"></a>

Fills OutValue with the value of Stat4_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetStat4OrNull`](#structFRHAPI__StageCreate_1abbbde8995cfd22fcf5f0fd19eed96221)`()` <a id="structFRHAPI__StageCreate_1abbbde8995cfd22fcf5f0fd19eed96221"></a>

Returns a pointer to Stat4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetStat4OrNull`](#structFRHAPI__StageCreate_1a355833b483f44f117fe80c5baec5a395)`() const` <a id="structFRHAPI__StageCreate_1a355833b483f44f117fe80c5baec5a395"></a>

Returns a pointer to Stat4_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStat4`](#structFRHAPI__StageCreate_1a2a02c076cab425cf57eeed209d942aee)`(const int32 & NewValue)` <a id="structFRHAPI__StageCreate_1a2a02c076cab425cf57eeed209d942aee"></a>

Sets the value of Stat4_Optional and also sets Stat4_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStat4`](#structFRHAPI__StageCreate_1ad61cafa306aa3480ec8715e92f11b829)`(int32 && NewValue)` <a id="structFRHAPI__StageCreate_1ad61cafa306aa3480ec8715e92f11b829"></a>

Sets the value of Stat4_Optional and also sets Stat4_IsSet to true using move semantics.

#### `public inline void `[`ClearStat4`](#structFRHAPI__StageCreate_1a94d7c0406dc559c29315684cb857f35a)`()` <a id="structFRHAPI__StageCreate_1a94d7c0406dc559c29315684cb857f35a"></a>

Clears the value of Stat4_Optional and sets Stat4_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Stat4`](#structFRHAPI__StageCreate_1a2e92d5bfdefec9da29ea631ccae8a74a)`()` <a id="structFRHAPI__StageCreate_1a2e92d5bfdefec9da29ea631ccae8a74a"></a>

Returns the default value of Stat4.

#### `public inline FORCEINLINE void `[`SetStat4ToNull`](#structFRHAPI__StageCreate_1a511df6bbc95b4fdbdbe96f82593df480)`()` <a id="structFRHAPI__StageCreate_1a511df6bbc95b4fdbdbe96f82593df480"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStat4Null`](#structFRHAPI__StageCreate_1abdf367530298c12fd1edbebbb15dab4a)`() const` <a id="structFRHAPI__StageCreate_1abdf367530298c12fd1edbebbb15dab4a"></a>

Checks whether Stat4_Optional is set to null.

#### `public inline FORCEINLINE float & `[`GetMmrInternal`](#structFRHAPI__StageCreate_1a41d242ef99fe7295dcf1d6c12a40e25e)`()` <a id="structFRHAPI__StageCreate_1a41d242ef99fe7295dcf1d6c12a40e25e"></a>

Gets the value of MmrInternal_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrInternal`](#structFRHAPI__StageCreate_1a7bff2c11a8eeb0839de4648e848f838f)`() const` <a id="structFRHAPI__StageCreate_1a7bff2c11a8eeb0839de4648e848f838f"></a>

Gets the value of MmrInternal_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrInternal`](#structFRHAPI__StageCreate_1a794f8e7e4e33292d03786ec61e9a28c2)`(const float & DefaultValue) const` <a id="structFRHAPI__StageCreate_1a794f8e7e4e33292d03786ec61e9a28c2"></a>

Gets the value of MmrInternal_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMmrInternal`](#structFRHAPI__StageCreate_1aab051d801ffc17cee34477a1eaead4fb)`(float & OutValue) const` <a id="structFRHAPI__StageCreate_1aab051d801ffc17cee34477a1eaead4fb"></a>

Fills OutValue with the value of MmrInternal_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetMmrInternalOrNull`](#structFRHAPI__StageCreate_1ae58c88b0b16e7a8c6b00f930e7b78606)`()` <a id="structFRHAPI__StageCreate_1ae58c88b0b16e7a8c6b00f930e7b78606"></a>

Returns a pointer to MmrInternal_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetMmrInternalOrNull`](#structFRHAPI__StageCreate_1a132807e891316df07365f06e25ce4786)`() const` <a id="structFRHAPI__StageCreate_1a132807e891316df07365f06e25ce4786"></a>

Returns a pointer to MmrInternal_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMmrInternal`](#structFRHAPI__StageCreate_1a7de6f63c9ff704835d7d5101e2d36144)`(const float & NewValue)` <a id="structFRHAPI__StageCreate_1a7de6f63c9ff704835d7d5101e2d36144"></a>

Sets the value of MmrInternal_Optional and also sets MmrInternal_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMmrInternal`](#structFRHAPI__StageCreate_1a87fd1f59f893bcce90402e3286e07713)`(float && NewValue)` <a id="structFRHAPI__StageCreate_1a87fd1f59f893bcce90402e3286e07713"></a>

Sets the value of MmrInternal_Optional and also sets MmrInternal_IsSet to true using move semantics.

#### `public inline void `[`ClearMmrInternal`](#structFRHAPI__StageCreate_1a4d06bc75bfd2f285ae631612033bbc09)`()` <a id="structFRHAPI__StageCreate_1a4d06bc75bfd2f285ae631612033bbc09"></a>

Clears the value of MmrInternal_Optional and sets MmrInternal_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMmrInternalToNull`](#structFRHAPI__StageCreate_1a5843bce91018a869264a730ea9644842)`()` <a id="structFRHAPI__StageCreate_1a5843bce91018a869264a730ea9644842"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMmrInternalNull`](#structFRHAPI__StageCreate_1a07711a0fc2273767790462f6d405202d)`() const` <a id="structFRHAPI__StageCreate_1a07711a0fc2273767790462f6d405202d"></a>

Checks whether MmrInternal_Optional is set to null.

#### `public inline FORCEINLINE float & `[`GetMmrVis`](#structFRHAPI__StageCreate_1a65a0e12d12fd9bd4531a75c66504d309)`()` <a id="structFRHAPI__StageCreate_1a65a0e12d12fd9bd4531a75c66504d309"></a>

Gets the value of MmrVis_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrVis`](#structFRHAPI__StageCreate_1af9988cca8e8b751cc2e387c601580c4b)`() const` <a id="structFRHAPI__StageCreate_1af9988cca8e8b751cc2e387c601580c4b"></a>

Gets the value of MmrVis_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMmrVis`](#structFRHAPI__StageCreate_1a6c6cfd1259ebf8c8daae450928c0d177)`(const float & DefaultValue) const` <a id="structFRHAPI__StageCreate_1a6c6cfd1259ebf8c8daae450928c0d177"></a>

Gets the value of MmrVis_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMmrVis`](#structFRHAPI__StageCreate_1ad9d6e214080e2daf3f50c3a49ebd61dd)`(float & OutValue) const` <a id="structFRHAPI__StageCreate_1ad9d6e214080e2daf3f50c3a49ebd61dd"></a>

Fills OutValue with the value of MmrVis_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetMmrVisOrNull`](#structFRHAPI__StageCreate_1af11164fbabd6180145af6dfd7a35cbab)`()` <a id="structFRHAPI__StageCreate_1af11164fbabd6180145af6dfd7a35cbab"></a>

Returns a pointer to MmrVis_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetMmrVisOrNull`](#structFRHAPI__StageCreate_1af7211a6284cbf56a5eaae4636ceb6d3a)`() const` <a id="structFRHAPI__StageCreate_1af7211a6284cbf56a5eaae4636ceb6d3a"></a>

Returns a pointer to MmrVis_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMmrVis`](#structFRHAPI__StageCreate_1a005f5eb4bc483ee821d616a244b7a441)`(const float & NewValue)` <a id="structFRHAPI__StageCreate_1a005f5eb4bc483ee821d616a244b7a441"></a>

Sets the value of MmrVis_Optional and also sets MmrVis_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMmrVis`](#structFRHAPI__StageCreate_1a01f86d2439592ba582ed137768abe444)`(float && NewValue)` <a id="structFRHAPI__StageCreate_1a01f86d2439592ba582ed137768abe444"></a>

Sets the value of MmrVis_Optional and also sets MmrVis_IsSet to true using move semantics.

#### `public inline void `[`ClearMmrVis`](#structFRHAPI__StageCreate_1a5d358a0c9ecc0244dd2e188b9b2c3e2b)`()` <a id="structFRHAPI__StageCreate_1a5d358a0c9ecc0244dd2e188b9b2c3e2b"></a>

Clears the value of MmrVis_Optional and sets MmrVis_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMmrVisToNull`](#structFRHAPI__StageCreate_1a808e75d04e94212d1ae0d12c5b920720)`()` <a id="structFRHAPI__StageCreate_1a808e75d04e94212d1ae0d12c5b920720"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMmrVisNull`](#structFRHAPI__StageCreate_1a7cbc79c1c2c8511b0fb943460b11c891)`() const` <a id="structFRHAPI__StageCreate_1a7cbc79c1c2c8511b0fb943460b11c891"></a>

Checks whether MmrVis_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_StageEntityType & `[`GetOwnerEntityType`](#structFRHAPI__StageCreate_1a90e71d103e700e661d952c3aac0d7410)`()` <a id="structFRHAPI__StageCreate_1a90e71d103e700e661d952c3aac0d7410"></a>

Gets the value of OwnerEntityType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_StageEntityType & `[`GetOwnerEntityType`](#structFRHAPI__StageCreate_1a5a84d3b292f2cd4530d5f2b2c06649d1)`() const` <a id="structFRHAPI__StageCreate_1a5a84d3b292f2cd4530d5f2b2c06649d1"></a>

Gets the value of OwnerEntityType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_StageEntityType & `[`GetOwnerEntityType`](#structFRHAPI__StageCreate_1afc075e3468082bd25433e70d18449a31)`(const ERHAPI_StageEntityType & DefaultValue) const` <a id="structFRHAPI__StageCreate_1afc075e3468082bd25433e70d18449a31"></a>

Gets the value of OwnerEntityType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOwnerEntityType`](#structFRHAPI__StageCreate_1a722cc2ca7246429a4d11a8e7fa040869)`(ERHAPI_StageEntityType & OutValue) const` <a id="structFRHAPI__StageCreate_1a722cc2ca7246429a4d11a8e7fa040869"></a>

Fills OutValue with the value of OwnerEntityType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_StageEntityType * `[`GetOwnerEntityTypeOrNull`](#structFRHAPI__StageCreate_1a6be12ebbcf2c13849384558735dbe4bf)`()` <a id="structFRHAPI__StageCreate_1a6be12ebbcf2c13849384558735dbe4bf"></a>

Returns a pointer to OwnerEntityType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_StageEntityType * `[`GetOwnerEntityTypeOrNull`](#structFRHAPI__StageCreate_1afe663426d74b5c702150c2919d6dc938)`() const` <a id="structFRHAPI__StageCreate_1afe663426d74b5c702150c2919d6dc938"></a>

Returns a pointer to OwnerEntityType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOwnerEntityType`](#structFRHAPI__StageCreate_1a47bee5e6091823d725e331991fe1f7d1)`(const ERHAPI_StageEntityType & NewValue)` <a id="structFRHAPI__StageCreate_1a47bee5e6091823d725e331991fe1f7d1"></a>

Sets the value of OwnerEntityType_Optional and also sets OwnerEntityType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOwnerEntityType`](#structFRHAPI__StageCreate_1a9157c0e4d37c8c5336e13c50ff0a52e3)`(ERHAPI_StageEntityType && NewValue)` <a id="structFRHAPI__StageCreate_1a9157c0e4d37c8c5336e13c50ff0a52e3"></a>

Sets the value of OwnerEntityType_Optional and also sets OwnerEntityType_IsSet to true using move semantics.

#### `public inline void `[`ClearOwnerEntityType`](#structFRHAPI__StageCreate_1a88174db05d6336157fe287201776dc8d)`()` <a id="structFRHAPI__StageCreate_1a88174db05d6336157fe287201776dc8d"></a>

Clears the value of OwnerEntityType_Optional and sets OwnerEntityType_IsSet to false.

#### `public inline FORCEINLINE void `[`SetOwnerEntityTypeToNull`](#structFRHAPI__StageCreate_1af19f70765340ce4595bc4c600b809a9b)`()` <a id="structFRHAPI__StageCreate_1af19f70765340ce4595bc4c600b809a9b"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsOwnerEntityTypeNull`](#structFRHAPI__StageCreate_1a7189ced405e30ff0bbf792d7a3c95a6f)`() const` <a id="structFRHAPI__StageCreate_1a7189ced405e30ff0bbf792d7a3c95a6f"></a>

Checks whether OwnerEntityType_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetOwnerEntityId`](#structFRHAPI__StageCreate_1a0062eb1eb5868017042939b29a884aab)`()` <a id="structFRHAPI__StageCreate_1a0062eb1eb5868017042939b29a884aab"></a>

Gets the value of OwnerEntityId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOwnerEntityId`](#structFRHAPI__StageCreate_1ad4bbae209e5c0c9bd20d41419cea61f8)`() const` <a id="structFRHAPI__StageCreate_1ad4bbae209e5c0c9bd20d41419cea61f8"></a>

Gets the value of OwnerEntityId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOwnerEntityId`](#structFRHAPI__StageCreate_1afa6f1bc688d3d2a9525e62dcfeb79b3d)`(const FString & DefaultValue) const` <a id="structFRHAPI__StageCreate_1afa6f1bc688d3d2a9525e62dcfeb79b3d"></a>

Gets the value of OwnerEntityId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOwnerEntityId`](#structFRHAPI__StageCreate_1a52c3c8ead1d6d79ae9f483d4b5890483)`(FString & OutValue) const` <a id="structFRHAPI__StageCreate_1a52c3c8ead1d6d79ae9f483d4b5890483"></a>

Fills OutValue with the value of OwnerEntityId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetOwnerEntityIdOrNull`](#structFRHAPI__StageCreate_1aae73af41baca84cc2c2651e088d7a998)`()` <a id="structFRHAPI__StageCreate_1aae73af41baca84cc2c2651e088d7a998"></a>

Returns a pointer to OwnerEntityId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetOwnerEntityIdOrNull`](#structFRHAPI__StageCreate_1a37c3eda224178d4ec7a27299b50399e1)`() const` <a id="structFRHAPI__StageCreate_1a37c3eda224178d4ec7a27299b50399e1"></a>

Returns a pointer to OwnerEntityId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOwnerEntityId`](#structFRHAPI__StageCreate_1a7de60f358dad26488e974b923bba46aa)`(const FString & NewValue)` <a id="structFRHAPI__StageCreate_1a7de60f358dad26488e974b923bba46aa"></a>

Sets the value of OwnerEntityId_Optional and also sets OwnerEntityId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOwnerEntityId`](#structFRHAPI__StageCreate_1a6d3e9427d20c6949dabe8fcb865291b7)`(FString && NewValue)` <a id="structFRHAPI__StageCreate_1a6d3e9427d20c6949dabe8fcb865291b7"></a>

Sets the value of OwnerEntityId_Optional and also sets OwnerEntityId_IsSet to true using move semantics.

#### `public inline void `[`ClearOwnerEntityId`](#structFRHAPI__StageCreate_1aa7a2cb0c978dc6c0809f43e8532ba29c)`()` <a id="structFRHAPI__StageCreate_1aa7a2cb0c978dc6c0809f43e8532ba29c"></a>

Clears the value of OwnerEntityId_Optional and sets OwnerEntityId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetOwnerEntityIdToNull`](#structFRHAPI__StageCreate_1abe0df9a443cca5111f7d96d839e34c21)`()` <a id="structFRHAPI__StageCreate_1abe0df9a443cca5111f7d96d839e34c21"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsOwnerEntityIdNull`](#structFRHAPI__StageCreate_1a1c00242e54dc7a307ece0fefdcbcdd87)`() const` <a id="structFRHAPI__StageCreate_1a1c00242e54dc7a307ece0fefdcbcdd87"></a>

Checks whether OwnerEntityId_Optional is set to null.

