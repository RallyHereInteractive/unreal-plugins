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
`public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateSingle_1aff1b66afd802c3f1c69a31bdc68456be)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateSingle_1a9b4d23207e4b233c55ef8bd58c411e54)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateSingle_1ab4006645f30169aaccd361d11a9977fe)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__PlayerOrderCreateSingle_1a5cda27e77b515a9f69ac2ac5e3cd0bbd)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a6487b9b903d2a504132290d0d9d03f07)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a67ccbc35bc366bb90ece07a4627cd510)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__PlayerOrderCreateSingle_1a65a91230a7274edb164b35c38aefed44)`(const ERHAPI_Source & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`SetSource`](#structFRHAPI__PlayerOrderCreateSingle_1af82ac957048827feadcef1dd5063f03d)`(ERHAPI_Source && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__PlayerOrderCreateSingle_1a9d020b63a4b8f2969d9dcb9f43a3337e)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline bool `[`IsSourceSet`](#structFRHAPI__PlayerOrderCreateSingle_1a83ce16d6afccd3b2ed53e94652ea54f0)`() const` | Checks whether Source_Optional has been set.
`public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a695ec5ba63ab88bbe43f31f5dc41b1eb)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a3237992ddeeef2b7da5775300811a689)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a6a07a20f82970af22352d10dc821523c)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a0fcf560ae0d9e090dccefe263b6f189a)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1aeedf21592bfd2df71d72a17cbda57fab)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a3d2924cbef516bc3c593c9634b30d3bd)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1aad3c6cbd58da715c2e8833eb8636fb04)`(const FGuid & NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a01041abbc2fdf845ef9ee67861addbb3)`(FGuid && NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a29f9402c593f508a3d11fb270b6e04f8)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline bool `[`IsClientOrderRefIdSet`](#structFRHAPI__PlayerOrderCreateSingle_1a872136e796ccc686acdc0bceef001204)`() const` | Checks whether ClientOrderRefId_Optional has been set.
`public inline void `[`SetClientOrderRefIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a91a48ec27544b08bb3dfd9fa110d8756)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsClientOrderRefIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1a5a28657a7682e08dd2b5355829942565)`() const` | Checks whether ClientOrderRefId_Optional is set to null.
`public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a6f891e1e5db7eba3e0dc6bad88465762)`()` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a16c6025641c2d083d81b37f07be20e91)`() const` | Gets the value of PortalId_Optional, regardless of it having been set.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1ac93a95c0ade73c54177f7d6b2bb31080)`(const ERHAPI_Portal & DefaultValue) const` | Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1ab377e9fa86725840a97cf17691111851)`(ERHAPI_Portal & OutValue) const` | Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1ad095187e17395beb854727232e3ac5df)`()` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a32ae8e72c2fe750bbf7258dda300b235)`() const` | Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a1a58be38a6ec247566cf1f907065e236)`(const ERHAPI_Portal & NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.
`public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a7025ba910b4e70a89693814dab9e8f68)`(ERHAPI_Portal && NewValue)` | Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.
`public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1aa88cf222d67b10f1cbac530a63a8684b)`()` | Clears the value of PortalId_Optional and sets PortalId_IsSet to false.
`public inline bool `[`IsPortalIdSet`](#structFRHAPI__PlayerOrderCreateSingle_1a065776b63e8b158789d6eb37c281e373)`() const` | Checks whether PortalId_Optional has been set.
`public inline void `[`SetPortalIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a5ee9245174bbf1223fc6956451f54cc3)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPortalIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1aa6b0aae344541a521075ad4fba230dd6)`() const` | Checks whether PortalId_Optional is set to null.
`public inline FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a9e4706bd5dfde6b0ba876aea94fe83c2)`()` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1ab23de9ebceaac6d779e5c40cb358feb2)`() const` | Gets the value of PortalUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1aed1b83c342b79036b7ce8fe4ca89d64c)`(const FString & DefaultValue) const` | Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1ac888e492dc536239d4094d25eef593d4)`(FString & OutValue) const` | Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a2873512c3c4562a86e47c8de76a34f73)`()` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a2b5cb2a989e6213780eac08400be0f38)`() const` | Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a453f710569c7d7fd11505180b0b9572f)`(const FString & NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1aa2b14ef64b4c607eab4fe9957d2df796)`(FString && NewValue)` | Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.
`public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a808fcb656f86cf1721403aebf71a4957)`()` | Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.
`public inline bool `[`IsPortalUserIdSet`](#structFRHAPI__PlayerOrderCreateSingle_1a65b4205e8b55e3032abfc486d33c597e)`() const` | Checks whether PortalUserId_Optional has been set.
`public inline void `[`SetPortalUserIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a9f7b2560972bb11df70d4dc269568951)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPortalUserIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1a59ebb9ee75d9f60e0e6c0fd512e00389)`() const` | Checks whether PortalUserId_Optional is set to null.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1a7cbbd96dc9aa79b2df93dc4457ace23e)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1a2d54526a3486bb95118a1ed746b3df33)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1a1a628c0867931dc44f5581ffd51c473e)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1a72262b5d8177eca7ecb7dcf87f57f6b7)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a2c05edac53e4e81308e564dff5d0d51a)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1ade1d6e899134f43cacc17ac56f2b0b55)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1a8a9d56e2e13004b0bac8fc42272fded2)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1afcdd92f24a31a0bc989710998536819c)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1ab6dff19443e4640a3c3ee220cec495e5)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerOrderCreateSingle_1a393620bf137d3ac4df7cce7de7a53954)`() const` | Checks whether InstanceId_Optional has been set.
`public inline void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a6ef91fba7010c3ba908e9f20a3fc4349)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1af17863804b336f4e1299dc46f21209cf)`() const` | Checks whether InstanceId_Optional is set to null.
`public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a7acc01d7979bc6a1a55e7fb1b7f36f03)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a63ff86ad9c9e043e4663d595cf534933)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1abf827f94193c2036bdedf9dfc050809b)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a195098232c8e4be74db0c208ca5ae2c5)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1acdab21ba15317f72032bab838bfcb13f)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a45b3cc6e4fa2afd9bd4cd4ef8b886b92)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a2491dcea046e8ed7823d3ca3319394e2)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a2c582118cfad62b68cbbb1a1a163f7f6)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1abcf9adc4cb27aad7176244f48007d06a)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline bool `[`IsMatchIdSet`](#structFRHAPI__PlayerOrderCreateSingle_1ace0ca7fdd5cd1a1d19b8905c39105701)`() const` | Checks whether MatchId_Optional has been set.
`public inline void `[`SetMatchIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a40f1a1b85b904f667a7d78f45804b1a9)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsMatchIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1a4722961e603466f5a82fcb8f41ccee2e)`() const` | Checks whether MatchId_Optional is set to null.
`public inline bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a4307c1b74464c1e252f7c2ee8875c5d8)`()` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a8779a2c7f448539224b87d58bf87ea75)`() const` | Gets the value of IsTransaction_Optional, regardless of it having been set.
`public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a7f13578edff833435ffb8417319da9ee)`(const bool & DefaultValue) const` | Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1ac2ff0fc112de38d02d84e2f35b458489)`(bool & OutValue) const` | Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a4501a1f15b6040237dd99a91da8fc5ed)`()` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a631fd35245b673ad3bfbf950a9ae3cb4)`() const` | Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1abed0a14d4e3bead16f9051eddc36f08a)`(const bool & NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.
`public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1aba7cd8345d33d643bd6a3b77063536f2)`(bool && NewValue)` | Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.
`public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1af6084ce7f7e9dbbf52c7e9cf7caa237b)`()` | Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.
`public inline bool `[`IsIsTransactionSet`](#structFRHAPI__PlayerOrderCreateSingle_1a51fab3f7115b8d7ce8734d009686402e)`() const` | Checks whether IsTransaction_Optional has been set.
`public inline bool `[`IsIsTransactionDefaultValue`](#structFRHAPI__PlayerOrderCreateSingle_1ac5c12b1a16d2279f2716daab9f1fb4a8)`() const` | Returns true if IsTransaction_Optional is set and matches the default value.
`public inline void `[`SetIsTransactionToDefault`](#structFRHAPI__PlayerOrderCreateSingle_1ae1ca9dc6e08f7094f189e0aa196d1ffe)`()` | Sets the value of IsTransaction_Optional to its default and also sets IsTransaction_IsSet to true.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a28bc7e9c6c0354e057db86712f9ea099)`()` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a6fc647960ef1381d7de52ad2d844e998)`() const` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1af80d3b257e3c8563ec14edddf79a3319)`(const int32 & DefaultValue) const` | Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a633a057b4247fa31b71e45c017662c31)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a740d835652cc6ecad8183a823c6daaa3)`()` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a7a93d4576d6a10b7091093b9589829d3)`() const` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a408131b33d22f33ca55fcb0c12d96a88)`(const int32 & NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a99a82128e3ad0165f7d3c5d1aa24f7cb)`(int32 && NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a1151db01a96ef69686e4709a6cc9dfa3)`()` | Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.
`public inline bool `[`IsPlayerIdSet`](#structFRHAPI__PlayerOrderCreateSingle_1a3a61f26a993068546d4d427d8d0ededb)`() const` | Checks whether PlayerId_Optional has been set.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerOrderCreateSingle_1ac37046785b2e1fa2837d72883357c890)`() const` | Returns true if PlayerId_Optional is set and matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerOrderCreateSingle_1a480dfbb591890361f59ff730076e699c)`()` | Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.
`public inline void `[`SetPlayerIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a588b4f1698295b7c229859ffbe1e52f0)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPlayerIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1a44267315f47e4db219b367f8ebe8c8bc)`() const` | Checks whether PlayerId_Optional is set to null.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a715bc7263b31197a3a171579f8a2ac99)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a4c3544b96efda552116f54750d2de825)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a351919f7601538a204957d6682953731)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a9a511cd570acf90f4bd78368d0df87bf)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a71c3e46456537a738e62aa231ff7ec2b)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a2b76cab7b93cbf1c969ce8f908ef88df)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a68516290aab5e2b708c9307b760b7a6b)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1af59fcee8eab5a70633dae46537e804b8)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1aa509915c01a6f32148b74ce13a2409b1)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__PlayerOrderCreateSingle_1a3503e1091ded07951e15ab983527acfc)`() const` | Checks whether PlayerUuid_Optional has been set.
`public inline void `[`SetPlayerUuidToNull`](#structFRHAPI__PlayerOrderCreateSingle_1aad692255bb0efbaf8b09dc71c00e24e1)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPlayerUuidNull`](#structFRHAPI__PlayerOrderCreateSingle_1a2c1f7a0e2136a180d940563b6ff34ba2)`() const` | Checks whether PlayerUuid_Optional is set to null.
`public inline FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1adf5f31444fd08f9f01d6d57a4e9bdb6a)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a767465d00f511cd73149ff6c976bd849)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a00dd9a1da4584838a5b711cb47a79979)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a6087d60a80375f3ffdcddd56288398ab)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1afd0f07a7f436e73e872f9ebb70f1a353)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a73cce9e51aae999356ded2178d822414)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a9ebdc334d0d19cac0f2130f4529695a1)`(const FString & NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.
`public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a5456caf241027ab37ba5d6ed7da3cda1)`(FString && NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.
`public inline void `[`ClearOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a895a830ce32272d2bd9bf5e78f1eafc8)`()` | Clears the value of OrderId_Optional and sets OrderId_IsSet to false.
`public inline bool `[`IsOrderIdSet`](#structFRHAPI__PlayerOrderCreateSingle_1ac293c11e6fadafd4cf009a60a9f379c4)`() const` | Checks whether OrderId_Optional has been set.
`public inline void `[`SetOrderIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1ad4059fab117ff41f12b7c00ae9c59b59)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsOrderIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1ad3bcb2203150d356f1a3506c43228a4e)`() const` | Checks whether OrderId_Optional is set to null.
`public inline TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateSingle_1a2731b33c567f6447746f7458092ebd6a)`()` | Gets the value of Entries.
`public inline const TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateSingle_1a8dcf1899ffbb6c63ab76fc8522c5c6f2)`() const` | Gets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateSingle_1a55b0d2a8ef1aa873adacd088dbdd52b6)`(const TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & NewValue)` | Sets the value of Entries.
`public inline void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateSingle_1a43b1ef6c16694e4b1f13f68547df952c)`(TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > && NewValue)` | Sets the value of Entries using move semantics.

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

#### `public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateSingle_1aff1b66afd802c3f1c69a31bdc68456be)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1aff1b66afd802c3f1c69a31bdc68456be"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateSingle_1a9b4d23207e4b233c55ef8bd58c411e54)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a9b4d23207e4b233c55ef8bd58c411e54"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__PlayerOrderCreateSingle_1ab4006645f30169aaccd361d11a9977fe)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ab4006645f30169aaccd361d11a9977fe"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSource`](#structFRHAPI__PlayerOrderCreateSingle_1a5cda27e77b515a9f69ac2ac5e3cd0bbd)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a5cda27e77b515a9f69ac2ac5e3cd0bbd"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a6487b9b903d2a504132290d0d9d03f07)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a6487b9b903d2a504132290d0d9d03f07"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a67ccbc35bc366bb90ece07a4627cd510)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a67ccbc35bc366bb90ece07a4627cd510"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSource`](#structFRHAPI__PlayerOrderCreateSingle_1a65a91230a7274edb164b35c38aefed44)`(const ERHAPI_Source & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a65a91230a7274edb164b35c38aefed44"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline void `[`SetSource`](#structFRHAPI__PlayerOrderCreateSingle_1af82ac957048827feadcef1dd5063f03d)`(ERHAPI_Source && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1af82ac957048827feadcef1dd5063f03d"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__PlayerOrderCreateSingle_1a9d020b63a4b8f2969d9dcb9f43a3337e)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a9d020b63a4b8f2969d9dcb9f43a3337e"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline bool `[`IsSourceSet`](#structFRHAPI__PlayerOrderCreateSingle_1a83ce16d6afccd3b2ed53e94652ea54f0)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a83ce16d6afccd3b2ed53e94652ea54f0"></a>

Checks whether Source_Optional has been set.

#### `public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a695ec5ba63ab88bbe43f31f5dc41b1eb)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a695ec5ba63ab88bbe43f31f5dc41b1eb"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a3237992ddeeef2b7da5775300811a689)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a3237992ddeeef2b7da5775300811a689"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a6a07a20f82970af22352d10dc821523c)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a6a07a20f82970af22352d10dc821523c"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a0fcf560ae0d9e090dccefe263b6f189a)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a0fcf560ae0d9e090dccefe263b6f189a"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1aeedf21592bfd2df71d72a17cbda57fab)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1aeedf21592bfd2df71d72a17cbda57fab"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a3d2924cbef516bc3c593c9634b30d3bd)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a3d2924cbef516bc3c593c9634b30d3bd"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1aad3c6cbd58da715c2e8833eb8636fb04)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1aad3c6cbd58da715c2e8833eb8636fb04"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a01041abbc2fdf845ef9ee67861addbb3)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a01041abbc2fdf845ef9ee67861addbb3"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__PlayerOrderCreateSingle_1a29f9402c593f508a3d11fb270b6e04f8)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a29f9402c593f508a3d11fb270b6e04f8"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

#### `public inline bool `[`IsClientOrderRefIdSet`](#structFRHAPI__PlayerOrderCreateSingle_1a872136e796ccc686acdc0bceef001204)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a872136e796ccc686acdc0bceef001204"></a>

Checks whether ClientOrderRefId_Optional has been set.

#### `public inline void `[`SetClientOrderRefIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a91a48ec27544b08bb3dfd9fa110d8756)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a91a48ec27544b08bb3dfd9fa110d8756"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsClientOrderRefIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1a5a28657a7682e08dd2b5355829942565)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a5a28657a7682e08dd2b5355829942565"></a>

Checks whether ClientOrderRefId_Optional is set to null.

#### `public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a6f891e1e5db7eba3e0dc6bad88465762)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a6f891e1e5db7eba3e0dc6bad88465762"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a16c6025641c2d083d81b37f07be20e91)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a16c6025641c2d083d81b37f07be20e91"></a>

Gets the value of PortalId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1ac93a95c0ade73c54177f7d6b2bb31080)`(const ERHAPI_Portal & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ac93a95c0ade73c54177f7d6b2bb31080"></a>

Gets the value of PortalId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1ab377e9fa86725840a97cf17691111851)`(ERHAPI_Portal & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ab377e9fa86725840a97cf17691111851"></a>

Fills OutValue with the value of PortalId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1ad095187e17395beb854727232e3ac5df)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1ad095187e17395beb854727232e3ac5df"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Portal * `[`GetPortalIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a32ae8e72c2fe750bbf7258dda300b235)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a32ae8e72c2fe750bbf7258dda300b235"></a>

Returns a pointer to PortalId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a1a58be38a6ec247566cf1f907065e236)`(const ERHAPI_Portal & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a1a58be38a6ec247566cf1f907065e236"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1a7025ba910b4e70a89693814dab9e8f68)`(ERHAPI_Portal && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a7025ba910b4e70a89693814dab9e8f68"></a>

Sets the value of PortalId_Optional and also sets PortalId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalId`](#structFRHAPI__PlayerOrderCreateSingle_1aa88cf222d67b10f1cbac530a63a8684b)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1aa88cf222d67b10f1cbac530a63a8684b"></a>

Clears the value of PortalId_Optional and sets PortalId_IsSet to false.

#### `public inline bool `[`IsPortalIdSet`](#structFRHAPI__PlayerOrderCreateSingle_1a065776b63e8b158789d6eb37c281e373)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a065776b63e8b158789d6eb37c281e373"></a>

Checks whether PortalId_Optional has been set.

#### `public inline void `[`SetPortalIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a5ee9245174bbf1223fc6956451f54cc3)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a5ee9245174bbf1223fc6956451f54cc3"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPortalIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1aa6b0aae344541a521075ad4fba230dd6)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1aa6b0aae344541a521075ad4fba230dd6"></a>

Checks whether PortalId_Optional is set to null.

#### `public inline FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a9e4706bd5dfde6b0ba876aea94fe83c2)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a9e4706bd5dfde6b0ba876aea94fe83c2"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1ab23de9ebceaac6d779e5c40cb358feb2)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ab23de9ebceaac6d779e5c40cb358feb2"></a>

Gets the value of PortalUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1aed1b83c342b79036b7ce8fe4ca89d64c)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1aed1b83c342b79036b7ce8fe4ca89d64c"></a>

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1ac888e492dc536239d4094d25eef593d4)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ac888e492dc536239d4094d25eef593d4"></a>

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a2873512c3c4562a86e47c8de76a34f73)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a2873512c3c4562a86e47c8de76a34f73"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPortalUserIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a2b5cb2a989e6213780eac08400be0f38)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a2b5cb2a989e6213780eac08400be0f38"></a>

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a453f710569c7d7fd11505180b0b9572f)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a453f710569c7d7fd11505180b0b9572f"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1aa2b14ef64b4c607eab4fe9957d2df796)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1aa2b14ef64b4c607eab4fe9957d2df796"></a>

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPortalUserId`](#structFRHAPI__PlayerOrderCreateSingle_1a808fcb656f86cf1721403aebf71a4957)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a808fcb656f86cf1721403aebf71a4957"></a>

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.

#### `public inline bool `[`IsPortalUserIdSet`](#structFRHAPI__PlayerOrderCreateSingle_1a65b4205e8b55e3032abfc486d33c597e)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a65b4205e8b55e3032abfc486d33c597e"></a>

Checks whether PortalUserId_Optional has been set.

#### `public inline void `[`SetPortalUserIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a9f7b2560972bb11df70d4dc269568951)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a9f7b2560972bb11df70d4dc269568951"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPortalUserIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1a59ebb9ee75d9f60e0e6c0fd512e00389)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a59ebb9ee75d9f60e0e6c0fd512e00389"></a>

Checks whether PortalUserId_Optional is set to null.

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1a7cbbd96dc9aa79b2df93dc4457ace23e)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a7cbbd96dc9aa79b2df93dc4457ace23e"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1a2d54526a3486bb95118a1ed746b3df33)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a2d54526a3486bb95118a1ed746b3df33"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1a1a628c0867931dc44f5581ffd51c473e)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a1a628c0867931dc44f5581ffd51c473e"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1a72262b5d8177eca7ecb7dcf87f57f6b7)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a72262b5d8177eca7ecb7dcf87f57f6b7"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a2c05edac53e4e81308e564dff5d0d51a)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a2c05edac53e4e81308e564dff5d0d51a"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1ade1d6e899134f43cacc17ac56f2b0b55)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ade1d6e899134f43cacc17ac56f2b0b55"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1a8a9d56e2e13004b0bac8fc42272fded2)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a8a9d56e2e13004b0bac8fc42272fded2"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1afcdd92f24a31a0bc989710998536819c)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1afcdd92f24a31a0bc989710998536819c"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerOrderCreateSingle_1ab6dff19443e4640a3c3ee220cec495e5)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1ab6dff19443e4640a3c3ee220cec495e5"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerOrderCreateSingle_1a393620bf137d3ac4df7cce7de7a53954)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a393620bf137d3ac4df7cce7de7a53954"></a>

Checks whether InstanceId_Optional has been set.

#### `public inline void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a6ef91fba7010c3ba908e9f20a3fc4349)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a6ef91fba7010c3ba908e9f20a3fc4349"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1af17863804b336f4e1299dc46f21209cf)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1af17863804b336f4e1299dc46f21209cf"></a>

Checks whether InstanceId_Optional is set to null.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a7acc01d7979bc6a1a55e7fb1b7f36f03)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a7acc01d7979bc6a1a55e7fb1b7f36f03"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a63ff86ad9c9e043e4663d595cf534933)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a63ff86ad9c9e043e4663d595cf534933"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1abf827f94193c2036bdedf9dfc050809b)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1abf827f94193c2036bdedf9dfc050809b"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a195098232c8e4be74db0c208ca5ae2c5)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a195098232c8e4be74db0c208ca5ae2c5"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1acdab21ba15317f72032bab838bfcb13f)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1acdab21ba15317f72032bab838bfcb13f"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a45b3cc6e4fa2afd9bd4cd4ef8b886b92)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a45b3cc6e4fa2afd9bd4cd4ef8b886b92"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a2491dcea046e8ed7823d3ca3319394e2)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a2491dcea046e8ed7823d3ca3319394e2"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1a2c582118cfad62b68cbbb1a1a163f7f6)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a2c582118cfad62b68cbbb1a1a163f7f6"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__PlayerOrderCreateSingle_1abcf9adc4cb27aad7176244f48007d06a)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1abcf9adc4cb27aad7176244f48007d06a"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline bool `[`IsMatchIdSet`](#structFRHAPI__PlayerOrderCreateSingle_1ace0ca7fdd5cd1a1d19b8905c39105701)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ace0ca7fdd5cd1a1d19b8905c39105701"></a>

Checks whether MatchId_Optional has been set.

#### `public inline void `[`SetMatchIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a40f1a1b85b904f667a7d78f45804b1a9)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a40f1a1b85b904f667a7d78f45804b1a9"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsMatchIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1a4722961e603466f5a82fcb8f41ccee2e)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a4722961e603466f5a82fcb8f41ccee2e"></a>

Checks whether MatchId_Optional is set to null.

#### `public inline bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a4307c1b74464c1e252f7c2ee8875c5d8)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a4307c1b74464c1e252f7c2ee8875c5d8"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a8779a2c7f448539224b87d58bf87ea75)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a8779a2c7f448539224b87d58bf87ea75"></a>

Gets the value of IsTransaction_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1a7f13578edff833435ffb8417319da9ee)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a7f13578edff833435ffb8417319da9ee"></a>

Gets the value of IsTransaction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1ac2ff0fc112de38d02d84e2f35b458489)`(bool & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ac2ff0fc112de38d02d84e2f35b458489"></a>

Fills OutValue with the value of IsTransaction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a4501a1f15b6040237dd99a91da8fc5ed)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a4501a1f15b6040237dd99a91da8fc5ed"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetIsTransactionOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a631fd35245b673ad3bfbf950a9ae3cb4)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a631fd35245b673ad3bfbf950a9ae3cb4"></a>

Returns a pointer to IsTransaction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1abed0a14d4e3bead16f9051eddc36f08a)`(const bool & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1abed0a14d4e3bead16f9051eddc36f08a"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true.

#### `public inline void `[`SetIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1aba7cd8345d33d643bd6a3b77063536f2)`(bool && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1aba7cd8345d33d643bd6a3b77063536f2"></a>

Sets the value of IsTransaction_Optional and also sets IsTransaction_IsSet to true using move semantics.

#### `public inline void `[`ClearIsTransaction`](#structFRHAPI__PlayerOrderCreateSingle_1af6084ce7f7e9dbbf52c7e9cf7caa237b)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1af6084ce7f7e9dbbf52c7e9cf7caa237b"></a>

Clears the value of IsTransaction_Optional and sets IsTransaction_IsSet to false.

#### `public inline bool `[`IsIsTransactionSet`](#structFRHAPI__PlayerOrderCreateSingle_1a51fab3f7115b8d7ce8734d009686402e)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a51fab3f7115b8d7ce8734d009686402e"></a>

Checks whether IsTransaction_Optional has been set.

#### `public inline bool `[`IsIsTransactionDefaultValue`](#structFRHAPI__PlayerOrderCreateSingle_1ac5c12b1a16d2279f2716daab9f1fb4a8)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ac5c12b1a16d2279f2716daab9f1fb4a8"></a>

Returns true if IsTransaction_Optional is set and matches the default value.

#### `public inline void `[`SetIsTransactionToDefault`](#structFRHAPI__PlayerOrderCreateSingle_1ae1ca9dc6e08f7094f189e0aa196d1ffe)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1ae1ca9dc6e08f7094f189e0aa196d1ffe"></a>

Sets the value of IsTransaction_Optional to its default and also sets IsTransaction_IsSet to true.

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a28bc7e9c6c0354e057db86712f9ea099)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a28bc7e9c6c0354e057db86712f9ea099"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a6fc647960ef1381d7de52ad2d844e998)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a6fc647960ef1381d7de52ad2d844e998"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1af80d3b257e3c8563ec14edddf79a3319)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1af80d3b257e3c8563ec14edddf79a3319"></a>

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a633a057b4247fa31b71e45c017662c31)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a633a057b4247fa31b71e45c017662c31"></a>

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a740d835652cc6ecad8183a823c6daaa3)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a740d835652cc6ecad8183a823c6daaa3"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a7a93d4576d6a10b7091093b9589829d3)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a7a93d4576d6a10b7091093b9589829d3"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a408131b33d22f33ca55fcb0c12d96a88)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a408131b33d22f33ca55fcb0c12d96a88"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a99a82128e3ad0165f7d3c5d1aa24f7cb)`(int32 && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a99a82128e3ad0165f7d3c5d1aa24f7cb"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerId`](#structFRHAPI__PlayerOrderCreateSingle_1a1151db01a96ef69686e4709a6cc9dfa3)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a1151db01a96ef69686e4709a6cc9dfa3"></a>

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.

#### `public inline bool `[`IsPlayerIdSet`](#structFRHAPI__PlayerOrderCreateSingle_1a3a61f26a993068546d4d427d8d0ededb)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a3a61f26a993068546d4d427d8d0ededb"></a>

Checks whether PlayerId_Optional has been set.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerOrderCreateSingle_1ac37046785b2e1fa2837d72883357c890)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ac37046785b2e1fa2837d72883357c890"></a>

Returns true if PlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerOrderCreateSingle_1a480dfbb591890361f59ff730076e699c)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a480dfbb591890361f59ff730076e699c"></a>

Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.

#### `public inline void `[`SetPlayerIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1a588b4f1698295b7c229859ffbe1e52f0)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a588b4f1698295b7c229859ffbe1e52f0"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPlayerIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1a44267315f47e4db219b367f8ebe8c8bc)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a44267315f47e4db219b367f8ebe8c8bc"></a>

Checks whether PlayerId_Optional is set to null.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a715bc7263b31197a3a171579f8a2ac99)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a715bc7263b31197a3a171579f8a2ac99"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a4c3544b96efda552116f54750d2de825)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a4c3544b96efda552116f54750d2de825"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a351919f7601538a204957d6682953731)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a351919f7601538a204957d6682953731"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a9a511cd570acf90f4bd78368d0df87bf)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a9a511cd570acf90f4bd78368d0df87bf"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a71c3e46456537a738e62aa231ff7ec2b)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a71c3e46456537a738e62aa231ff7ec2b"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a2b76cab7b93cbf1c969ce8f908ef88df)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a2b76cab7b93cbf1c969ce8f908ef88df"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1a68516290aab5e2b708c9307b760b7a6b)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a68516290aab5e2b708c9307b760b7a6b"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1af59fcee8eab5a70633dae46537e804b8)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1af59fcee8eab5a70633dae46537e804b8"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__PlayerOrderCreateSingle_1aa509915c01a6f32148b74ce13a2409b1)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1aa509915c01a6f32148b74ce13a2409b1"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__PlayerOrderCreateSingle_1a3503e1091ded07951e15ab983527acfc)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a3503e1091ded07951e15ab983527acfc"></a>

Checks whether PlayerUuid_Optional has been set.

#### `public inline void `[`SetPlayerUuidToNull`](#structFRHAPI__PlayerOrderCreateSingle_1aad692255bb0efbaf8b09dc71c00e24e1)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1aad692255bb0efbaf8b09dc71c00e24e1"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPlayerUuidNull`](#structFRHAPI__PlayerOrderCreateSingle_1a2c1f7a0e2136a180d940563b6ff34ba2)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a2c1f7a0e2136a180d940563b6ff34ba2"></a>

Checks whether PlayerUuid_Optional is set to null.

#### `public inline FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1adf5f31444fd08f9f01d6d57a4e9bdb6a)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1adf5f31444fd08f9f01d6d57a4e9bdb6a"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a767465d00f511cd73149ff6c976bd849)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a767465d00f511cd73149ff6c976bd849"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a00dd9a1da4584838a5b711cb47a79979)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a00dd9a1da4584838a5b711cb47a79979"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a6087d60a80375f3ffdcddd56288398ab)`(FString & OutValue) const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a6087d60a80375f3ffdcddd56288398ab"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1afd0f07a7f436e73e872f9ebb70f1a353)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1afd0f07a7f436e73e872f9ebb70f1a353"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlayerOrderCreateSingle_1a73cce9e51aae999356ded2178d822414)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a73cce9e51aae999356ded2178d822414"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a9ebdc334d0d19cac0f2130f4529695a1)`(const FString & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a9ebdc334d0d19cac0f2130f4529695a1"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline void `[`SetOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a5456caf241027ab37ba5d6ed7da3cda1)`(FString && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a5456caf241027ab37ba5d6ed7da3cda1"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__PlayerOrderCreateSingle_1a895a830ce32272d2bd9bf5e78f1eafc8)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a895a830ce32272d2bd9bf5e78f1eafc8"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

#### `public inline bool `[`IsOrderIdSet`](#structFRHAPI__PlayerOrderCreateSingle_1ac293c11e6fadafd4cf009a60a9f379c4)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ac293c11e6fadafd4cf009a60a9f379c4"></a>

Checks whether OrderId_Optional has been set.

#### `public inline void `[`SetOrderIdToNull`](#structFRHAPI__PlayerOrderCreateSingle_1ad4059fab117ff41f12b7c00ae9c59b59)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1ad4059fab117ff41f12b7c00ae9c59b59"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsOrderIdNull`](#structFRHAPI__PlayerOrderCreateSingle_1ad3bcb2203150d356f1a3506c43228a4e)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1ad3bcb2203150d356f1a3506c43228a4e"></a>

Checks whether OrderId_Optional is set to null.

#### `public inline TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateSingle_1a2731b33c567f6447746f7458092ebd6a)`()` <a id="structFRHAPI__PlayerOrderCreateSingle_1a2731b33c567f6447746f7458092ebd6a"></a>

Gets the value of Entries.

#### `public inline const TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & `[`GetEntries`](#structFRHAPI__PlayerOrderCreateSingle_1a8dcf1899ffbb6c63ab76fc8522c5c6f2)`() const` <a id="structFRHAPI__PlayerOrderCreateSingle_1a8dcf1899ffbb6c63ab76fc8522c5c6f2"></a>

Gets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateSingle_1a55b0d2a8ef1aa873adacd088dbdd52b6)`(const TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > & NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a55b0d2a8ef1aa873adacd088dbdd52b6"></a>

Sets the value of Entries.

#### `public inline void `[`SetEntries`](#structFRHAPI__PlayerOrderCreateSingle_1a43b1ef6c16694e4b1f13f68547df952c)`(TArray< `[`FRHAPI_PlayerOrderEntryCreateInput`](RHAPI_PlayerOrderEntryCreateInput.md#structFRHAPI__PlayerOrderEntryCreateInput)` > && NewValue)` <a id="structFRHAPI__PlayerOrderCreateSingle_1a43b1ef6c16694e4b1f13f68547df952c"></a>

Sets the value of Entries using move semantics.

