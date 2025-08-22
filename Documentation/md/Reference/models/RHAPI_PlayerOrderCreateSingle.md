---
title: RHAPI_PlayerOrderCreateSingle
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerOrderCreateSingle`](#structFRHAPI__PlayerOrderCreateSingle) | 

## struct `FRHAPI_PlayerOrderCreateSingle` <a id="structFRHAPI__PlayerOrderCreateSingle"></a>

```
struct FRHAPI_PlayerOrderCreateSingle
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1a4afeffe8fc93d876583e4925aef248bf) | 
`public bool `[`Source_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1ab7817c9e525b0731d38e575c7b85fd92) | true if Source_Optional has been set to a value
`public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1ac5bf5e5f287a5721b029859d4bf464a5) | 
`public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1a814ae143ec41d13538e91987c3dab6c2) | true if ClientOrderRefId_Optional has been set to a value
`public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__PlayerOrderCreateSingle_1a7082183e02e90886c387e4933a58d20f) | true if ClientOrderRefId_Optional has been explicitly set to null
`public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1a7924ec679668a454e790d49e86e6a495) | 
`public bool `[`PortalId_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1a368c5f314beaa8c26e90766aef07156d) | true if PortalId_Optional has been set to a value
`public bool `[`PortalId_IsNull`](#structFRHAPI__PlayerOrderCreateSingle_1a626a1a6a4b55ca4a35e736feafc97cb6) | true if PortalId_Optional has been explicitly set to null
`public FString `[`PortalUserId_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1aafc220ca22143a625ec0019f7065f632) | 
`public bool `[`PortalUserId_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1adaabb91a2e34b9a04860c8fe19593e27) | true if PortalUserId_Optional has been set to a value
`public bool `[`PortalUserId_IsNull`](#structFRHAPI__PlayerOrderCreateSingle_1a6e61044e57ff2e9146dd5adc0d974334) | true if PortalUserId_Optional has been explicitly set to null
`public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1ab766648e981f698ec4ee543d9bdd30f5) | 
`public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1ab4fab6604de8eb1fae14178d834d28eb) | true if InstanceId_Optional has been set to a value
`public bool `[`InstanceId_IsNull`](#structFRHAPI__PlayerOrderCreateSingle_1a6a56219e509e06733927046ad79a1ba8) | true if InstanceId_Optional has been explicitly set to null
`public FString `[`MatchId_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1a0107f3612498a824b774773b98a366d1) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1a6fc10cebcf4a4108a6ae8d764823dd3d) | true if MatchId_Optional has been set to a value
`public bool `[`MatchId_IsNull`](#structFRHAPI__PlayerOrderCreateSingle_1aa422ca841fb7b6c8850bd10d8b3eccd6) | true if MatchId_Optional has been explicitly set to null
`public bool `[`IsTransaction_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1a47c8dcf588e297aab712678ff44339b1) | If an order is a transaction, any failed entries will roll back changes from all other entries.
`public bool `[`IsTransaction_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1a2cc049074e72652abc55ae47405917e6) | true if IsTransaction_Optional has been set to a value
`public int32 `[`PlayerId_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1a3096c732f635ff31f41c1214102affd6) | 
`public bool `[`PlayerId_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1a42888415bea7e50ca4c08fb3e707e3da) | true if PlayerId_Optional has been set to a value
`public bool `[`PlayerId_IsNull`](#structFRHAPI__PlayerOrderCreateSingle_1aed3b76743392a27ec34b41374a467454) | true if PlayerId_Optional has been explicitly set to null
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1ad8ae254f32fc0caa7f44a7fb66d2db24) | 
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1a66101aa82c54add1df6b524a2b443dec) | true if PlayerUuid_Optional has been set to a value
`public bool `[`PlayerUuid_IsNull`](#structFRHAPI__PlayerOrderCreateSingle_1ac3e516b47bbef58513244ab87838ba8d) | true if PlayerUuid_Optional has been explicitly set to null
`public FString `[`OrderId_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1aefefe39f0d9d7986bab2a0d934cda978) | 
`public bool `[`OrderId_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1a538ba0b31d56f5593e0787b562879d90) | true if OrderId_Optional has been set to a value
`public bool `[`OrderId_IsNull`](#structFRHAPI__PlayerOrderCreateSingle_1ac620c1ae12d29ce6ad4ceccd8a9ab807) | true if OrderId_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > `[`Entries`](#structFRHAPI__PlayerOrderCreateSingle_1a17e63ab8d91f2e1997f28dcb15338cf9) | List of Player Order Entries for the Player Order.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderCreateSingle_1ad99381b1fb94552ed0f0247cac33ff0e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderCreateSingle_1afe8daee4d00b2240e63f8ad5b7a242d3)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateSingle_1a8f8424358fb1756d5e7774521566a33f)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateSingle_1a6315bbbec7bc19126c1a5ad77ad5b4d3)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateSingle_1a3d9e3bd1e47ece3ba3f719eda67789cd)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__PlayerOrderCreateSingle_1a77dbb80c5e008d61eb09b19aac77b8c1)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1acfa8b9694839cff4f7f90d1bf8ef036f)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a71b9e1990d7b266f6720c170e04dee79)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__PlayerOrderCreateSingle_1add3f6a2c9c3f2cde52c3a1307baf578b)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__PlayerOrderCreateSingle_1aa07ae8b9e9113f0e3def5a77029bed9a)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__PlayerOrderCreateSingle_1a9d020b63a4b8f2969d9dcb9f43a3337e)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a630c4f6d43e210145af58805a073c74b)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a913f15697a92e014501c694b659cd844)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a735b79b6a5c586fec8a4abdcfe3bb035)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a7891fcba2fdf855b5fd39d80a3881ed1)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a335a4a16c6beeee8dc9abd9656af2446)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a0a36e7aa6d830645714bbad5ac77cba8)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a5aa77409063d66875e20533b2495e464)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a0b4771e57ec722e9850463ea65644621)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a29f9402c593f508a3d11fb270b6e04f8)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline FORCEINLINE void `[`SetClientOrderRefIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a67a49ee577ef1ed4c5268173340ace50)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsClientOrderRefIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1af49ff6b3e377791921599e625e54dbd5)`() const` | Checks whether ClientOrderRefId_Optional is set to null.
`public inline FORCEINLINE ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a0d7267c89b752746d28ba878542d77a7)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a9ea8195f92f445a5ef4d14d8db31e886)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a4d6a578ac6a617d5ef3f1a7b186592e9)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a9506163cd34fad741469c4c500201f62)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a97c5b3dc67773d7a363df052c78f71eb)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1ae850c58e29a3685972baab20ba559d6c)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a69c70735b53acffad06696e6254f937e)`(const ERHAPI_Portal & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1af16d954d2f3aa851be8a46f10184e48e)`(ERHAPI_Portal && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1aa88cf222d67b10f1cbac530a63a8684b)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline FORCEINLINE void `[`SetPortalIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a699694a51b76ba8b6b1ddf3b126150e3)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPortalIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1aea92f3e35d9275a82851703c2b2aeca3)`() const` | Checks whether PortalId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a07e56f0c337625e67488ae7bef25d364)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1ad252c4657788c578b3f3e56c1a7f86ce)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a00ef77673920225aa670ad3833d6d923)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a2018d6319fc69d721777b3c5afe17fd4)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a19b766bf465637273e96d4eeb4edac4c)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1ae8f9c8121f78a62b0b901bbdb5b881d1)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a2a1feb5e10abe13ec8bf0b55d3d6c340)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a63f67873a3c586b714963b918211445d)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a808fcb656f86cf1721403aebf71a4957)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline FORCEINLINE void `[`SetPortalUserIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a039cb8839c69b74e44a15c3812c2e7a3)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPortalUserIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1acd9b5ffb68a48b8edc4d5ab16510ac3d)`() const` | Checks whether PortalUserId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1aca71f83994615345546aff1c50849063)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1acf3dfbda8055e999762d164f02be5a51)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1a9c637bd5f173d202093c9d5863bd6093)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1af86fa25d974ace8fd96793f668267825)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1ad5d30f946e1ee71520c37f5156982c9d)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1aa89795abca8e378fcaff5cfc89c67e36)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1a0b296010ef5fc71b9deca46c3eff1dc5)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1a93c1b42bd05c3e2be990000f93284fa6)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1ab6dff19443e4640a3c3ee220cec495e5)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FORCEINLINE void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1ab72356871c78075493fd79a9ae9b2a35)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1a5a55ff838f723d3117900d94d4af93bb)`() const` | Checks whether InstanceId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a3fe0babbfdece57ee22c09e509fa9587)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a69246ee486e42d53d193e72edf1e59c1)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a448c1029efb4850b50290d046274ca97)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1afa462da8a2182371c8258e2c2abd5fe4)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a0131c82bac64aa0e5192ce651d12ded1)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a2cbe9f33ffebc3c5a403a96787c4b3c6)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a5daa8673b97763b3f1097b47c39d93cf)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1ae41d2152ce929c5e0d672581b1a9467b)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1abcf9adc4cb27aad7176244f48007d06a)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a1a772f2ab30d350ef97e5b31cb5d8bf7)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1a7deaeb6af33bce601b4728fec0053506)`() const` | Checks whether MatchId_Optional is set to null.
`public inline FORCEINLINE bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a58c5b49dc6456027cba507dbeaa7af38)`()` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a4c8f0457fa3c5e567c2b171c746c6ba6)`() const` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a6ace07416845ef8732be0a7ad297b0d2)`(const bool & DefaultValue) const` | Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a6d1a0ca74ccb1403a6b7ecf269528d7b)`(bool & OutValue) const` | Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a2d4755652340c865d96a51dba6c9b787)`()` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1ab8d6483f0dc5a539659e46002a42db33)`() const` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a1de9cbc66c603ecb604114d98348d354)`(const bool & NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.
`public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a9bc33e6644d65d2e5109b3bc3252c3d4)`(bool && NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.
`public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1af6084ce7f7e9dbbf52c7e9cf7caa237b)`()` | Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_IsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1add01c9a55e23907f5b8ac851bcbadb85)`()` | Returns the default value of IsTransaction.
`public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a493df2b2c1238a1189299cb3ea904e78)`()` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1afb6eb690abed16b7b7222d26265b7143)`() const` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1ad9c6d73b81c97de32d7d987d47dc108a)`(const int32 & DefaultValue) const` | Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a8855f98f6eb34cd619f72012abf7a5c0)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a1f4dca6a2a3ad92910cdadb2c194cd09)`()` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1ac9e80582b43ff2df66c3c0472a7c0b3c)`() const` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1aef8be4443b5602a21eeb8588ca9289a3)`(const int32 & NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1aa104fd9a5fea3b0c28569dabc76c8a13)`(int32 && NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a1151db01a96ef69686e4709a6cc9dfa3)`()` | Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a1de7315965f4e834e628e6f7afc157cf)`()` | Returns the default value of PlayerId.
`public inline FORCEINLINE void `[`SetPlayerIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a7183f2cefe4616ef7489b789f3043c20)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlayerIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1a61c6ba75880ce742bc290eb473d69d28)`() const` | Checks whether PlayerId_Optional is set to null.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a8cf97b5d95cf03c3e372f2b8ee463fed)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a392a3e3b38ef013807f95919ad28f8dc)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1aa9e8b151725a84b7da48e4e5593715de)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a0dc7bc114d1c6e424fb4808296314071)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a5ce2a6dc31a003b2604a50d5b91a9fab)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a1eef2bffae34fee9beeecad9a0d0624a)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a02b67cfef735a0c74ab1c807e325f714)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1aa30ee4786302d01bdad943442b997f71)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1aa509915c01a6f32148b74ce13a2409b1)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetPlayerUuidToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a7715d97da264b451f7db8b03a27a1c14)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlayerUuidNull`](#structFRHAPI__PlayerOrderCreateSingle_1a57853d183e1204d79f336dce7b041220)`() const` | Checks whether PlayerUuid_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a70903dec5384a02b67778e3819f511b5)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1afcbca4b0db5478c8a79703a15dedff4f)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a3910addd7964331ecdea0816e114cf73)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a675d0cc191572f2ebeeeb79d36498057)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a595efb03d30a7228592e0eceda689664)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1abe711e69993f6a2668b5f4c71d0e0af9)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a774427353273234d00642b044f104019)`(const FString & NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.
`public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1acf63f648ee7887ec3644ce96d6ca953b)`(FString && NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.
`public inline void `[`ClearOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a895a830ce32272d2bd9bf5e78f1eafc8)`()` | Clears the value of OrderId_Optional and sets OrderId_IsSet to false.
`public inline FORCEINLINE void `[`SetOrderIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1af635ceaf9f18a0414accab1ba60399de)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsOrderIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1a108deb6550bc61d6db3512cf5e616c9d)`() const` | Checks whether OrderId_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateSingle_1a80494cee87299375e7143af2daa490c5)`()` | Gets the value of Entries.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateSingle_1a11c1d203932c6e020a5b1b1e0e4ebdc0)`() const` | Gets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateSingle_1ac2b40474f1f72874fa819236026574e2)`(const TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & NewValue)` | Sets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateSingle_1a4eaa844a966382c1823c41566ca5c2fe)`(TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > && NewValue)` | Sets the value of Entries using move semantics.

### Members

#### `public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1a4afeffe8fc93d876583e4925aef248bf) <a id="structFRHAPI__PlayerOrderCreateSingle_1a4afeffe8fc93d876583e4925aef248bf"></a>

#### `public bool `[`Source_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1ab7817c9e525b0731d38e575c7b85fd92) <a id="structFRHAPI__PlayerOrderCreateSingle_1ab7817c9e525b0731d38e575c7b85fd92"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1ac5bf5e5f287a5721b029859d4bf464a5) <a id="structFRHAPI__PlayerOrderCreateSingle_1ac5bf5e5f287a5721b029859d4bf464a5"></a>

#### `public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1a814ae143ec41d13538e91987c3dab6c2) <a id="structFRHAPI__PlayerOrderCreateSingle_1a814ae143ec41d13538e91987c3dab6c2"></a>

true if ClientOrderRefId_Optional has been set to a value

#### `public bool `[`ClientOrderRefId_IsNull`](#structFRHAPI__PlayerOrderCreateSingle_1a7082183e02e90886c387e4933a58d20f) <a id="structFRHAPI__PlayerOrderCreateSingle_1a7082183e02e90886c387e4933a58d20f"></a>

true if ClientOrderRefId_Optional has been explicitly set to null

#### `public ERHAPI_Portal `[`PortalId_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1a7924ec679668a454e790d49e86e6a495) <a id="structFRHAPI__PlayerOrderCreateSingle_1a7924ec679668a454e790d49e86e6a495"></a>

#### `public bool `[`PortalId_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1a368c5f314beaa8c26e90766aef07156d) <a id="structFRHAPI__PlayerOrderCreateSingle_1a368c5f314beaa8c26e90766aef07156d"></a>

true if PortalId_Optional has been set to a value

#### `public bool `[`PortalId_IsNull`](#structFRHAPI__PlayerOrderCreateSingle_1a626a1a6a4b55ca4a35e736feafc97cb6) <a id="structFRHAPI__PlayerOrderCreateSingle_1a626a1a6a4b55ca4a35e736feafc97cb6"></a>

true if PortalId_Optional has been explicitly set to null

#### `public FString `[`PortalUserId_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1aafc220ca22143a625ec0019f7065f632) <a id="structFRHAPI__PlayerOrderCreateSingle_1aafc220ca22143a625ec0019f7065f632"></a>

#### `public bool `[`PortalUserId_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1adaabb91a2e34b9a04860c8fe19593e27) <a id="structFRHAPI__PlayerOrderCreateSingle_1adaabb91a2e34b9a04860c8fe19593e27"></a>

true if PortalUserId_Optional has been set to a value

#### `public bool `[`PortalUserId_IsNull`](#structFRHAPI__PlayerOrderCreateSingle_1a6e61044e57ff2e9146dd5adc0d974334) <a id="structFRHAPI__PlayerOrderCreateSingle_1a6e61044e57ff2e9146dd5adc0d974334"></a>

true if PortalUserId_Optional has been explicitly set to null

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1ab766648e981f698ec4ee543d9bdd30f5) <a id="structFRHAPI__PlayerOrderCreateSingle_1ab766648e981f698ec4ee543d9bdd30f5"></a>

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1ab4fab6604de8eb1fae14178d834d28eb) <a id="structFRHAPI__PlayerOrderCreateSingle_1ab4fab6604de8eb1fae14178d834d28eb"></a>

true if InstanceId_Optional has been set to a value

#### `public bool `[`InstanceId_IsNull`](#structFRHAPI__PlayerOrderCreateSingle_1a6a56219e509e06733927046ad79a1ba8) <a id="structFRHAPI__PlayerOrderCreateSingle_1a6a56219e509e06733927046ad79a1ba8"></a>

true if InstanceId_Optional has been explicitly set to null

#### `public FString `[`MatchId_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1a0107f3612498a824b774773b98a366d1) <a id="structFRHAPI__PlayerOrderCreateSingle_1a0107f3612498a824b774773b98a366d1"></a>

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1a6fc10cebcf4a4108a6ae8d764823dd3d) <a id="structFRHAPI__PlayerOrderCreateSingle_1a6fc10cebcf4a4108a6ae8d764823dd3d"></a>

true if MatchId_Optional has been set to a value

#### `public bool `[`MatchId_IsNull`](#structFRHAPI__PlayerOrderCreateSingle_1aa422ca841fb7b6c8850bd10d8b3eccd6) <a id="structFRHAPI__PlayerOrderCreateSingle_1aa422ca841fb7b6c8850bd10d8b3eccd6"></a>

true if MatchId_Optional has been explicitly set to null

#### `public bool `[`IsTransaction_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1a47c8dcf588e297aab712678ff44339b1) <a id="structFRHAPI__PlayerOrderCreateSingle_1a47c8dcf588e297aab712678ff44339b1"></a>

If an order is a transaction, any failed entries will roll back changes from all other entries.

#### `public bool `[`IsTransaction_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1a2cc049074e72652abc55ae47405917e6) <a id="structFRHAPI__PlayerOrderCreateSingle_1a2cc049074e72652abc55ae47405917e6"></a>

true if IsTransaction_Optional has been set to a value

#### `public int32 `[`PlayerId_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1a3096c732f635ff31f41c1214102affd6) <a id="structFRHAPI__PlayerOrderCreateSingle_1a3096c732f635ff31f41c1214102affd6"></a>

#### `public bool `[`PlayerId_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1a42888415bea7e50ca4c08fb3e707e3da) <a id="structFRHAPI__PlayerOrderCreateSingle_1a42888415bea7e50ca4c08fb3e707e3da"></a>

true if PlayerId_Optional has been set to a value

#### `public bool `[`PlayerId_IsNull`](#structFRHAPI__PlayerOrderCreateSingle_1aed3b76743392a27ec34b41374a467454) <a id="structFRHAPI__PlayerOrderCreateSingle_1aed3b76743392a27ec34b41374a467454"></a>

true if PlayerId_Optional has been explicitly set to null

#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1ad8ae254f32fc0caa7f44a7fb66d2db24) <a id="structFRHAPI__PlayerOrderCreateSingle_1ad8ae254f32fc0caa7f44a7fb66d2db24"></a>

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1a66101aa82c54add1df6b524a2b443dec) <a id="structFRHAPI__PlayerOrderCreateSingle_1a66101aa82c54add1df6b524a2b443dec"></a>

true if PlayerUuid_Optional has been set to a value

#### `public bool `[`PlayerUuid_IsNull`](#structFRHAPI__PlayerOrderCreateSingle_1ac3e516b47bbef58513244ab87838ba8d) <a id="structFRHAPI__PlayerOrderCreateSingle_1ac3e516b47bbef58513244ab87838ba8d"></a>

true if PlayerUuid_Optional has been explicitly set to null

#### `public FString `[`OrderId_Optional`](#structFRHAPI__PlayerOrderCreateSingle_1aefefe39f0d9d7986bab2a0d934cda978) <a id="structFRHAPI__PlayerOrderCreateSingle_1aefefe39f0d9d7986bab2a0d934cda978"></a>

#### `public bool `[`OrderId_IsSet`](#structFRHAPI__PlayerOrderCreateSingle_1a538ba0b31d56f5593e0787b562879d90) <a id="structFRHAPI__PlayerOrderCreateSingle_1a538ba0b31d56f5593e0787b562879d90"></a>

true if OrderId_Optional has been set to a value

#### `public bool `[`OrderId_IsNull`](#structFRHAPI__PlayerOrderCreateSingle_1ac620c1ae12d29ce6ad4ceccd8a9ab807) <a id="structFRHAPI__PlayerOrderCreateSingle_1ac620c1ae12d29ce6ad4ceccd8a9ab807"></a>

true if OrderId_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > `[`Entries`](#structFRHAPI__PlayerOrderCreateSingle_1a17e63ab8d91f2e1997f28dcb15338cf9) <a id="structFRHAPI__PlayerOrderCreateSingle_1a17e63ab8d91f2e1997f28dcb15338cf9"></a>

List of Player Order Entries for the Player Order.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerOrderCreateSingle_1ad99381b1fb94552ed0f0247cac33ff0e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1ad99381b1fb94552ed0f0247cac33ff0e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerOrderCreateSingle_1afe8daee4d00b2240e63f8ad5b7a242d3)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1afe8daee4d00b2240e63f8ad5b7a242d3"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateSingle_1a8f8424358fb1756d5e7774521566a33f)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a8f8424358fb1756d5e7774521566a33f"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateSingle_1a6315bbbec7bc19126c1a5ad77ad5b4d3)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a6315bbbec7bc19126c1a5ad77ad5b4d3"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateSingle_1a3d9e3bd1e47ece3ba3f719eda67789cd)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a3d9e3bd1e47ece3ba3f719eda67789cd"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__PlayerOrderCreateSingle_1a77dbb80c5e008d61eb09b19aac77b8c1)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a77dbb80c5e008d61eb09b19aac77b8c1"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1acfa8b9694839cff4f7f90d1bf8ef036f)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1acfa8b9694839cff4f7f90d1bf8ef036f"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a71b9e1990d7b266f6720c170e04dee79)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a71b9e1990d7b266f6720c170e04dee79"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__PlayerOrderCreateSingle_1add3f6a2c9c3f2cde52c3a1307baf578b)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1add3f6a2c9c3f2cde52c3a1307baf578b"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__PlayerOrderCreateSingle_1aa07ae8b9e9113f0e3def5a77029bed9a)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1aa07ae8b9e9113f0e3def5a77029bed9a"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__PlayerOrderCreateSingle_1a9d020b63a4b8f2969d9dcb9f43a3337e)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a9d020b63a4b8f2969d9dcb9f43a3337e"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a630c4f6d43e210145af58805a073c74b)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a630c4f6d43e210145af58805a073c74b"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a913f15697a92e014501c694b659cd844)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a913f15697a92e014501c694b659cd844"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a735b79b6a5c586fec8a4abdcfe3bb035)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a735b79b6a5c586fec8a4abdcfe3bb035"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a7891fcba2fdf855b5fd39d80a3881ed1)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a7891fcba2fdf855b5fd39d80a3881ed1"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a335a4a16c6beeee8dc9abd9656af2446)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a335a4a16c6beeee8dc9abd9656af2446"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a0a36e7aa6d830645714bbad5ac77cba8)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a0a36e7aa6d830645714bbad5ac77cba8"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a5aa77409063d66875e20533b2495e464)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a5aa77409063d66875e20533b2495e464"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a0b4771e57ec722e9850463ea65644621)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a0b4771e57ec722e9850463ea65644621"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a29f9402c593f508a3d11fb270b6e04f8)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a29f9402c593f508a3d11fb270b6e04f8"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetClientOrderRefIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a67a49ee577ef1ed4c5268173340ace50)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a67a49ee577ef1ed4c5268173340ace50"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsClientOrderRefIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1af49ff6b3e377791921599e625e54dbd5)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1af49ff6b3e377791921599e625e54dbd5"></a>

Checks whether ClientOrderRefId_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a0d7267c89b752746d28ba878542d77a7)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a0d7267c89b752746d28ba878542d77a7"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a9ea8195f92f445a5ef4d14d8db31e886)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a9ea8195f92f445a5ef4d14d8db31e886"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a4d6a578ac6a617d5ef3f1a7b186592e9)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a4d6a578ac6a617d5ef3f1a7b186592e9"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a9506163cd34fad741469c4c500201f62)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a9506163cd34fad741469c4c500201f62"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a97c5b3dc67773d7a363df052c78f71eb)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a97c5b3dc67773d7a363df052c78f71eb"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1ae850c58e29a3685972baab20ba559d6c)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ae850c58e29a3685972baab20ba559d6c"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a69c70735b53acffad06696e6254f937e)`(const ERHAPI_Portal & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a69c70735b53acffad06696e6254f937e"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1af16d954d2f3aa851be8a46f10184e48e)`(ERHAPI_Portal && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1af16d954d2f3aa851be8a46f10184e48e"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1aa88cf222d67b10f1cbac530a63a8684b)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1aa88cf222d67b10f1cbac530a63a8684b"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPortalIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a699694a51b76ba8b6b1ddf3b126150e3)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a699694a51b76ba8b6b1ddf3b126150e3"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPortalIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1aea92f3e35d9275a82851703c2b2aeca3)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1aea92f3e35d9275a82851703c2b2aeca3"></a>

Checks whether PortalId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a07e56f0c337625e67488ae7bef25d364)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a07e56f0c337625e67488ae7bef25d364"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1ad252c4657788c578b3f3e56c1a7f86ce)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ad252c4657788c578b3f3e56c1a7f86ce"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a00ef77673920225aa670ad3833d6d923)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a00ef77673920225aa670ad3833d6d923"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a2018d6319fc69d721777b3c5afe17fd4)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a2018d6319fc69d721777b3c5afe17fd4"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a19b766bf465637273e96d4eeb4edac4c)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a19b766bf465637273e96d4eeb4edac4c"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1ae8f9c8121f78a62b0b901bbdb5b881d1)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ae8f9c8121f78a62b0b901bbdb5b881d1"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a2a1feb5e10abe13ec8bf0b55d3d6c340)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a2a1feb5e10abe13ec8bf0b55d3d6c340"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a63f67873a3c586b714963b918211445d)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a63f67873a3c586b714963b918211445d"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a808fcb656f86cf1721403aebf71a4957)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a808fcb656f86cf1721403aebf71a4957"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPortalUserIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a039cb8839c69b74e44a15c3812c2e7a3)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a039cb8839c69b74e44a15c3812c2e7a3"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPortalUserIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1acd9b5ffb68a48b8edc4d5ab16510ac3d)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1acd9b5ffb68a48b8edc4d5ab16510ac3d"></a>

Checks whether PortalUserId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1aca71f83994615345546aff1c50849063)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1aca71f83994615345546aff1c50849063"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1acf3dfbda8055e999762d164f02be5a51)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1acf3dfbda8055e999762d164f02be5a51"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1a9c637bd5f173d202093c9d5863bd6093)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a9c637bd5f173d202093c9d5863bd6093"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1af86fa25d974ace8fd96793f668267825)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1af86fa25d974ace8fd96793f668267825"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1ad5d30f946e1ee71520c37f5156982c9d)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1ad5d30f946e1ee71520c37f5156982c9d"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1aa89795abca8e378fcaff5cfc89c67e36)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1aa89795abca8e378fcaff5cfc89c67e36"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1a0b296010ef5fc71b9deca46c3eff1dc5)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a0b296010ef5fc71b9deca46c3eff1dc5"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1a93c1b42bd05c3e2be990000f93284fa6)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a93c1b42bd05c3e2be990000f93284fa6"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1ab6dff19443e4640a3c3ee220cec495e5)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1ab6dff19443e4640a3c3ee220cec495e5"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1ab72356871c78075493fd79a9ae9b2a35)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1ab72356871c78075493fd79a9ae9b2a35"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1a5a55ff838f723d3117900d94d4af93bb)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a5a55ff838f723d3117900d94d4af93bb"></a>

Checks whether InstanceId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a3fe0babbfdece57ee22c09e509fa9587)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a3fe0babbfdece57ee22c09e509fa9587"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a69246ee486e42d53d193e72edf1e59c1)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a69246ee486e42d53d193e72edf1e59c1"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a448c1029efb4850b50290d046274ca97)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a448c1029efb4850b50290d046274ca97"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1afa462da8a2182371c8258e2c2abd5fe4)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1afa462da8a2182371c8258e2c2abd5fe4"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a0131c82bac64aa0e5192ce651d12ded1)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a0131c82bac64aa0e5192ce651d12ded1"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a2cbe9f33ffebc3c5a403a96787c4b3c6)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a2cbe9f33ffebc3c5a403a96787c4b3c6"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a5daa8673b97763b3f1097b47c39d93cf)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a5daa8673b97763b3f1097b47c39d93cf"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1ae41d2152ce929c5e0d672581b1a9467b)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1ae41d2152ce929c5e0d672581b1a9467b"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1abcf9adc4cb27aad7176244f48007d06a)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1abcf9adc4cb27aad7176244f48007d06a"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a1a772f2ab30d350ef97e5b31cb5d8bf7)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a1a772f2ab30d350ef97e5b31cb5d8bf7"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1a7deaeb6af33bce601b4728fec0053506)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a7deaeb6af33bce601b4728fec0053506"></a>

Checks whether MatchId_Optional is set to null.

#### `public inline FORCEINLINE bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a58c5b49dc6456027cba507dbeaa7af38)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a58c5b49dc6456027cba507dbeaa7af38"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a4c8f0457fa3c5e567c2b171c746c6ba6)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a4c8f0457fa3c5e567c2b171c746c6ba6"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a6ace07416845ef8732be0a7ad297b0d2)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a6ace07416845ef8732be0a7ad297b0d2"></a>

Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a6d1a0ca74ccb1403a6b7ecf269528d7b)`(bool & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a6d1a0ca74ccb1403a6b7ecf269528d7b"></a>

Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a2d4755652340c865d96a51dba6c9b787)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a2d4755652340c865d96a51dba6c9b787"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1ab8d6483f0dc5a539659e46002a42db33)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ab8d6483f0dc5a539659e46002a42db33"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a1de9cbc66c603ecb604114d98348d354)`(const bool & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a1de9cbc66c603ecb604114d98348d354"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a9bc33e6644d65d2e5109b3bc3252c3d4)`(bool && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a9bc33e6644d65d2e5109b3bc3252c3d4"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.

#### `public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1af6084ce7f7e9dbbf52c7e9cf7caa237b)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1af6084ce7f7e9dbbf52c7e9cf7caa237b"></a>

Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_IsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1add01c9a55e23907f5b8ac851bcbadb85)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1add01c9a55e23907f5b8ac851bcbadb85"></a>

Returns the default value of IsTransaction.

#### `public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a493df2b2c1238a1189299cb3ea904e78)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a493df2b2c1238a1189299cb3ea904e78"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1afb6eb690abed16b7b7222d26265b7143)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1afb6eb690abed16b7b7222d26265b7143"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1ad9c6d73b81c97de32d7d987d47dc108a)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ad9c6d73b81c97de32d7d987d47dc108a"></a>

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a8855f98f6eb34cd619f72012abf7a5c0)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a8855f98f6eb34cd619f72012abf7a5c0"></a>

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a1f4dca6a2a3ad92910cdadb2c194cd09)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a1f4dca6a2a3ad92910cdadb2c194cd09"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1ac9e80582b43ff2df66c3c0472a7c0b3c)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ac9e80582b43ff2df66c3c0472a7c0b3c"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1aef8be4443b5602a21eeb8588ca9289a3)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1aef8be4443b5602a21eeb8588ca9289a3"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1aa104fd9a5fea3b0c28569dabc76c8a13)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1aa104fd9a5fea3b0c28569dabc76c8a13"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a1151db01a96ef69686e4709a6cc9dfa3)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a1151db01a96ef69686e4709a6cc9dfa3"></a>

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a1de7315965f4e834e628e6f7afc157cf)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a1de7315965f4e834e628e6f7afc157cf"></a>

Returns the default value of PlayerId.

#### `public inline FORCEINLINE void `[`SetPlayerIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a7183f2cefe4616ef7489b789f3043c20)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a7183f2cefe4616ef7489b789f3043c20"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlayerIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1a61c6ba75880ce742bc290eb473d69d28)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a61c6ba75880ce742bc290eb473d69d28"></a>

Checks whether PlayerId_Optional is set to null.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a8cf97b5d95cf03c3e372f2b8ee463fed)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a8cf97b5d95cf03c3e372f2b8ee463fed"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a392a3e3b38ef013807f95919ad28f8dc)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a392a3e3b38ef013807f95919ad28f8dc"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1aa9e8b151725a84b7da48e4e5593715de)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1aa9e8b151725a84b7da48e4e5593715de"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a0dc7bc114d1c6e424fb4808296314071)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a0dc7bc114d1c6e424fb4808296314071"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a5ce2a6dc31a003b2604a50d5b91a9fab)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a5ce2a6dc31a003b2604a50d5b91a9fab"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a1eef2bffae34fee9beeecad9a0d0624a)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a1eef2bffae34fee9beeecad9a0d0624a"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a02b67cfef735a0c74ab1c807e325f714)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a02b67cfef735a0c74ab1c807e325f714"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1aa30ee4786302d01bdad943442b997f71)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1aa30ee4786302d01bdad943442b997f71"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1aa509915c01a6f32148b74ce13a2409b1)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1aa509915c01a6f32148b74ce13a2409b1"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPlayerUuidToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a7715d97da264b451f7db8b03a27a1c14)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a7715d97da264b451f7db8b03a27a1c14"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlayerUuidNull`](#structFRHAPI__PlayerOrderCreateSingle_1a57853d183e1204d79f336dce7b041220)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a57853d183e1204d79f336dce7b041220"></a>

Checks whether PlayerUuid_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a70903dec5384a02b67778e3819f511b5)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a70903dec5384a02b67778e3819f511b5"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1afcbca4b0db5478c8a79703a15dedff4f)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1afcbca4b0db5478c8a79703a15dedff4f"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a3910addd7964331ecdea0816e114cf73)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a3910addd7964331ecdea0816e114cf73"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a675d0cc191572f2ebeeeb79d36498057)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a675d0cc191572f2ebeeeb79d36498057"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a595efb03d30a7228592e0eceda689664)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a595efb03d30a7228592e0eceda689664"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1abe711e69993f6a2668b5f4c71d0e0af9)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1abe711e69993f6a2668b5f4c71d0e0af9"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a774427353273234d00642b044f104019)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a774427353273234d00642b044f104019"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1acf63f648ee7887ec3644ce96d6ca953b)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1acf63f648ee7887ec3644ce96d6ca953b"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a895a830ce32272d2bd9bf5e78f1eafc8)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a895a830ce32272d2bd9bf5e78f1eafc8"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetOrderIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1af635ceaf9f18a0414accab1ba60399de)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1af635ceaf9f18a0414accab1ba60399de"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsOrderIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1a108deb6550bc61d6db3512cf5e616c9d)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a108deb6550bc61d6db3512cf5e616c9d"></a>

Checks whether OrderId_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateSingle_1a80494cee87299375e7143af2daa490c5)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a80494cee87299375e7143af2daa490c5"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateSingle_1a11c1d203932c6e020a5b1b1e0e4ebdc0)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a11c1d203932c6e020a5b1b1e0e4ebdc0"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateSingle_1ac2b40474f1f72874fa819236026574e2)`(const TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1ac2b40474f1f72874fa819236026574e2"></a>

Sets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateSingle_1a4eaa844a966382c1823c41566ca5c2fe)`(TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a4eaa844a966382c1823c41566ca5c2fe"></a>

Sets the value of Entries using move semantics.

