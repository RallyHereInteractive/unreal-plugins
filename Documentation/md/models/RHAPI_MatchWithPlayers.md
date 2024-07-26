# group `RHAPI_MatchWithPlayers` <a id="group__RHAPI__MatchWithPlayers"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchWithPlayers`](#structFRHAPI__MatchWithPlayers) | 

## struct `FRHAPI_MatchWithPlayers` <a id="structFRHAPI__MatchWithPlayers"></a>

```
struct FRHAPI_MatchWithPlayers
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a5628f211d41028e24c5c16f18245a2a1) | Timestamp of when the resource was last modified.
`public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1a00acf4b4ad5e4ad5fe5869bc6c807992) | true if LastModifiedTimestamp_Optional has been set to a value
`public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1ac344460c57fc5d3f0660f305fe4dbd1e) | Timestamp of when the resource was created.
`public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1afacaaac54f38f7a0a8a7b422db16c75f) | true if CreatedTimestamp_Optional has been set to a value
`public FString `[`Type_Optional`](#structFRHAPI__MatchWithPlayers_1a659236b15b05f230d2716f9be31aee67) | 
`public bool `[`Type_IsSet`](#structFRHAPI__MatchWithPlayers_1ace102a653b3f208eddd528df76288a74) | true if Type_Optional has been set to a value
`public bool `[`Type_IsNull`](#structFRHAPI__MatchWithPlayers_1a05a1a15c61b3850fcbe6d9f9da98b647) | true if Type_Optional has been explicitly set to null
`public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchWithPlayers_1abc3bfff7ef2994d9a411543a9d54dd31) | 
`public bool `[`State_IsSet`](#structFRHAPI__MatchWithPlayers_1af2add4306978accd23b3d39d3f74f79f) | true if State_Optional has been set to a value
`public bool `[`State_IsNull`](#structFRHAPI__MatchWithPlayers_1a5256556f3747265a04d7190b6370a414) | true if State_Optional has been explicitly set to null
`public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a3befa8a77889fee718742ad18b820853) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1a8efa84c4e181023de46d742bca705805) | true if StartTimestamp_Optional has been set to a value
`public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchWithPlayers_1af16392ca3424f02ebd267c640ce93431) | true if StartTimestamp_Optional has been explicitly set to null
`public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a0e48a16cc0b6ca8f0e39f4a3618c8b2f) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1ac4ad4dcf7d89b667b8d29ec956d057aa) | true if EndTimestamp_Optional has been set to a value
`public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchWithPlayers_1afa5563b8c5649c522c8b1b1952faa9f6) | true if EndTimestamp_Optional has been explicitly set to null
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchWithPlayers_1a0ea6f1121c18c0926fec8fc7a27f460d) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchWithPlayers_1a8a265fb4e7cee101a6d1411933728606) | true if DurationSeconds_Optional has been set to a value
`public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchWithPlayers_1ad30e363f56aeb8d83b0a3c7251ade227) | true if DurationSeconds_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchWithPlayers_1a0dc2bfd9e3319685c00846a81e2a610d) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchWithPlayers_1accd783d40f7eabecaad610755a628889) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__MatchWithPlayers_1a7dd9cf43760d44bbe1d4e780fcd45df9) | true if CustomData_Optional has been explicitly set to null
`public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchWithPlayers_1a41a0406798245ba6e5c2534aeb6fbaf0) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchWithPlayers_1abdf507772e60249c93da5ff188346e24) | true if CorrelationId_Optional has been set to a value
`public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchWithPlayers_1a8962ab4190c3372c2057d346bc1cb877) | true if CorrelationId_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchWithPlayers_1a947c4070cc7d61a78ea796bf6e3f7f1f) | List of session IDs for the match.
`public bool `[`Sessions_IsSet`](#structFRHAPI__MatchWithPlayers_1af263e14c93f881c3616fd44afca05bb2) | true if Sessions_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchWithPlayers_1a6a98fb6ddb8255f72962c405a2fea0bf) | List of MatchInstances for the match.
`public bool `[`Instances_IsSet`](#structFRHAPI__MatchWithPlayers_1af42654ffd3f46b248f5f48b5c8cde8f9) | true if Instances_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchWithPlayers_1af8508fb5bd07eb01b53af4a6fa9eeacc) | List of allocation IDs for the match.
`public bool `[`Allocations_IsSet`](#structFRHAPI__MatchWithPlayers_1a634ec951054d0e4b760976ccb4a8f529) | true if Allocations_Optional has been set to a value
`public FString `[`MatchId_Optional`](#structFRHAPI__MatchWithPlayers_1a9145dd76d8fed562312d9b2495752290) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__MatchWithPlayers_1adf0a808f0238349b98515027957864fc) | true if MatchId_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > `[`Segments_Optional`](#structFRHAPI__MatchWithPlayers_1a2927cb22ad7fa59ca2ff1f99b5168a51) | List of segments for the match.
`public bool `[`Segments_IsSet`](#structFRHAPI__MatchWithPlayers_1adae97c7f001028002546a4949f9268a8) | true if Segments_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > `[`Players_Optional`](#structFRHAPI__MatchWithPlayers_1ac846c80718ec521337a5d8c5c30ae55d) | List of players in the match.
`public bool `[`Players_IsSet`](#structFRHAPI__MatchWithPlayers_1a89153749417713a1d74653a5cd476a60) | true if Players_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchWithPlayers_1ad6404d79f7e010369675888d45f87e19)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchWithPlayers_1ab0140786a2c26b18234dc0b018702931)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a658eba361efdfacde3be3a736909c966)`()` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1ad44550929f9e9722bbc07e74f802d53e)`() const` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a9315e0b22e3f3a542ccfed0aed9f3398)`(const FDateTime & DefaultValue) const` | Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a97b08d4060a98b8167bbad9cb7dc7daf)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a8145ea70de348403626e8fa1ecb3fca4)`()` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a1f3a766c9a37d7b25f26b5b889ff56ca)`() const` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a7964e64d1b533e1b30672d4455ea7072)`(const FDateTime & NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1ab994eb39b4797d3918d36df43ea1c51f)`(FDateTime && NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a4e3e368f11262aecbd8a9a00efe86a64)`()` | Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.
`public inline bool `[`IsLastModifiedTimestampSet`](#structFRHAPI__MatchWithPlayers_1a6580ae3fd93b6177742ac3b49f1aa1dd)`() const` | Checks whether LastModifiedTimestamp_Optional has been set.
`public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1afd609605e5e3eb944a302f59e343051a)`()` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a0d945a9bb8408a9a311d5cebb982bab1)`() const` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1af6e77d34753d89b64cfe7121e1dcd66f)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1ab9da2189959feaf8f50e13f29a19f35a)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1aa63de198120557dffd52e3b6eaa5d950)`()` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a812cc3e5be33ab98bb5e71e04c7669d9)`() const` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a5bd0789ba8dbaebc3036fe4bb6e75139)`(const FDateTime & NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a13b5c8257980e86c6a835da8b22431f5)`(FDateTime && NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a4c7b58dd67ad205c840f4799e86f3141)`()` | Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.
`public inline bool `[`IsCreatedTimestampSet`](#structFRHAPI__MatchWithPlayers_1aa2942b9d007d1a21df9ed4a385a359ac)`() const` | Checks whether CreatedTimestamp_Optional has been set.
`public inline FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1aad25df5f30589b442f7599eb18c4aa86)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1ab346060d3ba8592156af5695a9625cfe)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1afae093104f09c68fa87b4f0f460cee13)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__MatchWithPlayers_1af2d41bc03e51508d3dc70a9fc4ee2cac)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchWithPlayers_1a0e4d6438887193fbabfb233bd4074cb8)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchWithPlayers_1a90920fae227c303cb590f985b5801fca)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__MatchWithPlayers_1acb06360313579687eb87e7bd2ea21bbc)`(const FString & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`SetType`](#structFRHAPI__MatchWithPlayers_1ad209a147d0748214e8b64d831c882f08)`(FString && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__MatchWithPlayers_1a701d0e7bc85a24c0b27dc79b2d70f103)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline bool `[`IsTypeSet`](#structFRHAPI__MatchWithPlayers_1a1bd5c7630fee853e2033b802465166b2)`() const` | Checks whether Type_Optional has been set.
`public inline void `[`SetTypeToNull`](#structFRHAPI__MatchWithPlayers_1a44d6916ddb9c278a6240f2772983425f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTypeNull`](#structFRHAPI__MatchWithPlayers_1a17e4934fb3adbef5f77842e55efc767d)`() const` | Checks whether Type_Optional is set to null.
`public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1af8ab7bd58b3f5e1ee31a55df1d107a14)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1a34423047d5041f5bc6559cbd82d3f023)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1a432344b245c5ce974254b73c62b54ba9)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetState`](#structFRHAPI__MatchWithPlayers_1a31a8d6b979f6126694eb5c90041f385c)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchWithPlayers_1a07779a9442ec130a328a3cabe3951529)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchWithPlayers_1a969e4a6e135ad7969afe7108569138ce)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetState`](#structFRHAPI__MatchWithPlayers_1a10b9786505694fa8e896768abf48b0ef)`(const ERHAPI_MatchState & NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline void `[`SetState`](#structFRHAPI__MatchWithPlayers_1a03743646e58c7b744157350c00741791)`(ERHAPI_MatchState && NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true using move semantics.
`public inline void `[`ClearState`](#structFRHAPI__MatchWithPlayers_1ae5f274757061314b2f09b2013e7a6c0c)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline bool `[`IsStateSet`](#structFRHAPI__MatchWithPlayers_1a796f29bb69e3e776fea45d92996f71a4)`() const` | Checks whether State_Optional has been set.
`public inline void `[`SetStateToNull`](#structFRHAPI__MatchWithPlayers_1affda290586f5a606538c3faff3761f19)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStateNull`](#structFRHAPI__MatchWithPlayers_1adf3e5504789f9eed5f14d999f0d8576f)`() const` | Checks whether State_Optional is set to null.
`public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a016bef72954d6749cfd8dceb09d99225)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a7d12c802969eaf1efd5182701ddf6535)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1ae8e4cbe6583c6fef239cce2ff24408be)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a8b0decfee4a35fe5db6342eadca8cc03)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1afb277e648232dd24b0a5cfb831583f52)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a457ec2193e5c0a93fea908a97a4086e8)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a4d87a1363c8fd7a69f2c61d7f8278e1d)`(const FDateTime & NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a04ff4976d8d25affe2c2a41cdd8a6f29)`(FDateTime && NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a641f7901d874710f0e4871f9acd283f8)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline bool `[`IsStartTimestampSet`](#structFRHAPI__MatchWithPlayers_1ac0f5d742edf24492eeba83cfb792ac84)`() const` | Checks whether StartTimestamp_Optional has been set.
`public inline void `[`SetStartTimestampToNull`](#structFRHAPI__MatchWithPlayers_1a4a73fc5d45c3f5b133c4653f28b3e3d5)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStartTimestampNull`](#structFRHAPI__MatchWithPlayers_1a724ef462d078ddcfa829d87abcf89e5f)`() const` | Checks whether StartTimestamp_Optional is set to null.
`public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1add3184e90643be9d1937065b85ce6535)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1ab2d82f1826d52e4f0c15837b289a603d)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1abbe5ca9f7c1d37dd24fe1a90a2cf32e4)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a95892e96f1cfd1982d6dead2ffac6c0f)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a45858a49b88489bfc9787b38a71d6309)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a04c5e30c854c95693fcf2ced2bdcabb9)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a520f4d1f4e16f94ce098979fc2a1fc7a)`(const FDateTime & NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a85d5f0afbbe0363e4ca6b2dcfac0bb85)`(FDateTime && NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a720ccb68e29bd18392e98e6ba681f0b3)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline bool `[`IsEndTimestampSet`](#structFRHAPI__MatchWithPlayers_1a02f6d7ffe29c88aea46115e34c946d84)`() const` | Checks whether EndTimestamp_Optional has been set.
`public inline void `[`SetEndTimestampToNull`](#structFRHAPI__MatchWithPlayers_1a18739c74ee52bef54886644e8414aaf7)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsEndTimestampNull`](#structFRHAPI__MatchWithPlayers_1ab1dfbc94bfbfafbda3f34855e26b06b7)`() const` | Checks whether EndTimestamp_Optional is set to null.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a6d9557e03c00eac2399e3cc03ecc340b)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a679f4e4ebdcc22951ef8d9c287104828)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1ac26b9b754b645103ecf471d14d9ac614)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a434e492617d80c9aa428ae7db890085f)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchWithPlayers_1a3ab52dca5ef193d72603a5ffd0152a6e)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchWithPlayers_1ac450f87420dad7ae85747ff7b3371163)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a597a5f64b13d967c30b3a92ca6c259dd)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a871f8a38aea65c742c7d8aff42d285a4)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchWithPlayers_1aaa3f48e241f0728fc8fbe273f97b0f6b)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchWithPlayers_1a053431309ff508e57959d12541ceb63b)`() const` | Checks whether DurationSeconds_Optional has been set.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchWithPlayers_1a57cf59c04d42d2679dfb317f5994ff25)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchWithPlayers_1af9c7ea1ac26ee438a143433dc69b84d2)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchWithPlayers_1a0facfc805c225b653a5b838227d8b07f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchWithPlayers_1a112770a295b1fb79359a6ce05b940a05)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1a3d1c3fdd81e9846d73d8adc9f2121910)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1a795d574b09918cad52a78f722642a774)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1ad2d869fdc9aaacee285ec0bee711d5b4)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1afa906abd698b0c908e9e387cfad66d62)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchWithPlayers_1a4b2d310994c4d4b97012c090cc72f5b2)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchWithPlayers_1aa7f384f84fff9ee7f83f301cf0aef23f)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchWithPlayers_1ac6a296590c8ca16649dd019db1f0732f)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchWithPlayers_1ad3a8046b1a56fbab5bbace32c4e9ae18)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchWithPlayers_1a9cf848863e68de7670c31053b3062688)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchWithPlayers_1a825ccaf00cd3f12582aa80950d0023ac)`() const` | Checks whether CustomData_Optional has been set.
`public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchWithPlayers_1acaf560ff2d9ee561edcf194039026f0e)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchWithPlayers_1a210f6d1f4c3bcc3dd047e8519718e608)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a17fd1330acdd17ed1ccd615f9ed6f8e3)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a9d9b14917637394b1866b65da7e6969e)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a4fa93d77c229644dc754968f1d593926)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a404ea5bc2cb375d5010180e46d148c7d)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchWithPlayers_1aa149013d14110236728cfc0d1f241ce2)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchWithPlayers_1a9f38c583e78085b6926596c4477cd8be)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a3c2d97ff41ea25baf5e9eaf83b0af97a)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchWithPlayers_1afc964122274a154bbcbbae79a62854ba)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchWithPlayers_1a68f5a07bf08e9d29e5ab87051d4b258b)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline bool `[`IsCorrelationIdSet`](#structFRHAPI__MatchWithPlayers_1aa1dcb67413ad7262cb6f1e21f37430c7)`() const` | Checks whether CorrelationId_Optional has been set.
`public inline void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchWithPlayers_1a738f60521e133f8437e4fd3789add78f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchWithPlayers_1a67919cf61756515a31c3f7c0890ddee5)`() const` | Checks whether CorrelationId_Optional is set to null.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1a50146fca8b74aa27ff4541dd3736844f)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1ae4a365c577153b7eb454ed114da392a9)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1a097989068b6ac1ab03ddd42b353f78a5)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1aaeb2e271f7883b10e0bffe5d09d7625e)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchWithPlayers_1a2f22670f43089cd7e81b21a4539daa14)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchWithPlayers_1a59bf1a24cbf18552603d9b3230e74a12)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessions`](#structFRHAPI__MatchWithPlayers_1ad907a132260cdec606297d7efce85871)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline void `[`SetSessions`](#structFRHAPI__MatchWithPlayers_1a1c624c897d6a72193b6501e59986cfee)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchWithPlayers_1a5ecfbae79a24684b17957054f9d0108b)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline bool `[`IsSessionsSet`](#structFRHAPI__MatchWithPlayers_1a0bf049058fc7e5d8364c552b9d4de4a6)`() const` | Checks whether Sessions_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a6a4ee04c5df55ee9a5cf220fca3ff4c6)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a032389f9a75fbc3f854c52ed09ee6ff7)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a17b6220963bc9e8cbe12cfc6ad760b39)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a18dc419d4459b7e809d9f13e162de7c4)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchWithPlayers_1ab895ad0f79de7e5476965e27edb28c36)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchWithPlayers_1aecf24a323d8f493a5f758700c4990826)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstances`](#structFRHAPI__MatchWithPlayers_1ae31f7878f6d29da3e7845a75668114bb)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline void `[`SetInstances`](#structFRHAPI__MatchWithPlayers_1a2f083fd1b4ac0af08b36ce3808b45106)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchWithPlayers_1ab9984a8c8ffce98a08718561f0d29a96)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline bool `[`IsInstancesSet`](#structFRHAPI__MatchWithPlayers_1a12c0e4c89a2ecf5c30b5555da3221d43)`() const` | Checks whether Instances_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1a528531f9c9fc2fc88e2bf877ff3c179a)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1ab99b7630dd25b95a30662ae6e6b8caaa)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1a3d40c2dc48ba945c8b6a870aee622884)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1ae16ab87ac74ddb3cb4482134dd1d9613)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchWithPlayers_1a9d8fd223ade66f39f82b78a8be0a4435)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchWithPlayers_1aaef0ace21a1b6522dc139609374e0f9d)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchWithPlayers_1afb700739269db9495b9dfbb4107b87b6)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchWithPlayers_1a38c8cc2b35426c26a85c73e3c47eb9e1)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchWithPlayers_1a50c98e5a3851d361a455a9093c73e106)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline bool `[`IsAllocationsSet`](#structFRHAPI__MatchWithPlayers_1a3ad7943c250f2b1f49c635f480fab62b)`() const` | Checks whether Allocations_Optional has been set.
`public inline FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1aa77eb7081ac722647e64fdae687ca605)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1a3cff41f4a7b67baf216f883883989284)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1a85479ca2dde430ac1113e20cc7230c50)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1a7bdcb334d8a7653209603207bed2351f)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchWithPlayers_1a2aad43820efae0c20ff41079e9abf672)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchWithPlayers_1afd4721f4f5cf4bd76cd0b64558fc9241)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchWithPlayers_1a5ddfcc9e0c7cf610f5078ccc029d5243)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchWithPlayers_1a259a00ad2e1b59e24645ce96ba8985eb)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__MatchWithPlayers_1af0199003a37780a5d2932dff41b5757b)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline bool `[`IsMatchIdSet`](#structFRHAPI__MatchWithPlayers_1aa823dfcd7303e185aaafd277c0024405)`() const` | Checks whether MatchId_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1ab75a3c08202d129b26c4ca851053f803)`()` | Gets the value of Segments_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1a80f90d439c7e041e5e2c899f04b720d1)`() const` | Gets the value of Segments_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1a65e854d0f83b160bd7955808b1806a6f)`(const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & DefaultValue) const` | Gets the value of Segments_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1ad527c627f1459a166f7cc17fb33456d8)`(TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & OutValue) const` | Fills OutValue with the value of Segments_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchWithPlayers_1a47c3643e60be06e24541664ff917f662)`()` | Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchWithPlayers_1a7247d1b910eab330191f18e9a6d2c280)`() const` | Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSegments`](#structFRHAPI__MatchWithPlayers_1a9ba96cd95275695ab623143f1fe4c60b)`(const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & NewValue)` | Sets the value of Segments_Optional and also sets Segments_IsSet to true.
`public inline void `[`SetSegments`](#structFRHAPI__MatchWithPlayers_1ab496db9c786c9a1c811c75922df8e838)`(TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > && NewValue)` | Sets the value of Segments_Optional and also sets Segments_IsSet to true using move semantics.
`public inline void `[`ClearSegments`](#structFRHAPI__MatchWithPlayers_1a46b69c45f30aba090d9cb4520b83feb6)`()` | Clears the value of Segments_Optional and sets Segments_IsSet to false.
`public inline bool `[`IsSegmentsSet`](#structFRHAPI__MatchWithPlayers_1aef8b76d53ed150c254b66ba88a9a8eef)`() const` | Checks whether Segments_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1ae594d5b94284527d285021cf20b28dad)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1a1dcffe68679492092d2a763faf1c8965)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1a55ab81d041dc5a6dfeb7384ad472a8fb)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1a4c6d91121226331b85ff974977922a84)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchWithPlayers_1a950a6a1ffb7dbd19503d1d43435e63f6)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchWithPlayers_1a1f681d378cc44a10e52b6c2003f7def9)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchWithPlayers_1a889e7a355ae45340ab33ae6f3ad167cd)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchWithPlayers_1acbb442b84b4b7c36eb29b0d796d0c512)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__MatchWithPlayers_1adc79fb23da80d7a20ccd18c8bfe2801f)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.
`public inline bool `[`IsPlayersSet`](#structFRHAPI__MatchWithPlayers_1a45a3b67d19e785f5979605010e604f88)`() const` | Checks whether Players_Optional has been set.

### Members

#### `public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a5628f211d41028e24c5c16f18245a2a1) <a id="structFRHAPI__MatchWithPlayers_1a5628f211d41028e24c5c16f18245a2a1"></a>

Timestamp of when the resource was last modified.

#### `public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1a00acf4b4ad5e4ad5fe5869bc6c807992) <a id="structFRHAPI__MatchWithPlayers_1a00acf4b4ad5e4ad5fe5869bc6c807992"></a>

true if LastModifiedTimestamp_Optional has been set to a value

#### `public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1ac344460c57fc5d3f0660f305fe4dbd1e) <a id="structFRHAPI__MatchWithPlayers_1ac344460c57fc5d3f0660f305fe4dbd1e"></a>

Timestamp of when the resource was created.

#### `public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1afacaaac54f38f7a0a8a7b422db16c75f) <a id="structFRHAPI__MatchWithPlayers_1afacaaac54f38f7a0a8a7b422db16c75f"></a>

true if CreatedTimestamp_Optional has been set to a value

#### `public FString `[`Type_Optional`](#structFRHAPI__MatchWithPlayers_1a659236b15b05f230d2716f9be31aee67) <a id="structFRHAPI__MatchWithPlayers_1a659236b15b05f230d2716f9be31aee67"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__MatchWithPlayers_1ace102a653b3f208eddd528df76288a74) <a id="structFRHAPI__MatchWithPlayers_1ace102a653b3f208eddd528df76288a74"></a>

true if Type_Optional has been set to a value

#### `public bool `[`Type_IsNull`](#structFRHAPI__MatchWithPlayers_1a05a1a15c61b3850fcbe6d9f9da98b647) <a id="structFRHAPI__MatchWithPlayers_1a05a1a15c61b3850fcbe6d9f9da98b647"></a>

true if Type_Optional has been explicitly set to null

#### `public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchWithPlayers_1abc3bfff7ef2994d9a411543a9d54dd31) <a id="structFRHAPI__MatchWithPlayers_1abc3bfff7ef2994d9a411543a9d54dd31"></a>

#### `public bool `[`State_IsSet`](#structFRHAPI__MatchWithPlayers_1af2add4306978accd23b3d39d3f74f79f) <a id="structFRHAPI__MatchWithPlayers_1af2add4306978accd23b3d39d3f74f79f"></a>

true if State_Optional has been set to a value

#### `public bool `[`State_IsNull`](#structFRHAPI__MatchWithPlayers_1a5256556f3747265a04d7190b6370a414) <a id="structFRHAPI__MatchWithPlayers_1a5256556f3747265a04d7190b6370a414"></a>

true if State_Optional has been explicitly set to null

#### `public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a3befa8a77889fee718742ad18b820853) <a id="structFRHAPI__MatchWithPlayers_1a3befa8a77889fee718742ad18b820853"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1a8efa84c4e181023de46d742bca705805) <a id="structFRHAPI__MatchWithPlayers_1a8efa84c4e181023de46d742bca705805"></a>

true if StartTimestamp_Optional has been set to a value

#### `public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchWithPlayers_1af16392ca3424f02ebd267c640ce93431) <a id="structFRHAPI__MatchWithPlayers_1af16392ca3424f02ebd267c640ce93431"></a>

true if StartTimestamp_Optional has been explicitly set to null

#### `public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a0e48a16cc0b6ca8f0e39f4a3618c8b2f) <a id="structFRHAPI__MatchWithPlayers_1a0e48a16cc0b6ca8f0e39f4a3618c8b2f"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1ac4ad4dcf7d89b667b8d29ec956d057aa) <a id="structFRHAPI__MatchWithPlayers_1ac4ad4dcf7d89b667b8d29ec956d057aa"></a>

true if EndTimestamp_Optional has been set to a value

#### `public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchWithPlayers_1afa5563b8c5649c522c8b1b1952faa9f6) <a id="structFRHAPI__MatchWithPlayers_1afa5563b8c5649c522c8b1b1952faa9f6"></a>

true if EndTimestamp_Optional has been explicitly set to null

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchWithPlayers_1a0ea6f1121c18c0926fec8fc7a27f460d) <a id="structFRHAPI__MatchWithPlayers_1a0ea6f1121c18c0926fec8fc7a27f460d"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchWithPlayers_1a8a265fb4e7cee101a6d1411933728606) <a id="structFRHAPI__MatchWithPlayers_1a8a265fb4e7cee101a6d1411933728606"></a>

true if DurationSeconds_Optional has been set to a value

#### `public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchWithPlayers_1ad30e363f56aeb8d83b0a3c7251ade227) <a id="structFRHAPI__MatchWithPlayers_1ad30e363f56aeb8d83b0a3c7251ade227"></a>

true if DurationSeconds_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchWithPlayers_1a0dc2bfd9e3319685c00846a81e2a610d) <a id="structFRHAPI__MatchWithPlayers_1a0dc2bfd9e3319685c00846a81e2a610d"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchWithPlayers_1accd783d40f7eabecaad610755a628889) <a id="structFRHAPI__MatchWithPlayers_1accd783d40f7eabecaad610755a628889"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__MatchWithPlayers_1a7dd9cf43760d44bbe1d4e780fcd45df9) <a id="structFRHAPI__MatchWithPlayers_1a7dd9cf43760d44bbe1d4e780fcd45df9"></a>

true if CustomData_Optional has been explicitly set to null

#### `public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchWithPlayers_1a41a0406798245ba6e5c2534aeb6fbaf0) <a id="structFRHAPI__MatchWithPlayers_1a41a0406798245ba6e5c2534aeb6fbaf0"></a>

#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchWithPlayers_1abdf507772e60249c93da5ff188346e24) <a id="structFRHAPI__MatchWithPlayers_1abdf507772e60249c93da5ff188346e24"></a>

true if CorrelationId_Optional has been set to a value

#### `public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchWithPlayers_1a8962ab4190c3372c2057d346bc1cb877) <a id="structFRHAPI__MatchWithPlayers_1a8962ab4190c3372c2057d346bc1cb877"></a>

true if CorrelationId_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchWithPlayers_1a947c4070cc7d61a78ea796bf6e3f7f1f) <a id="structFRHAPI__MatchWithPlayers_1a947c4070cc7d61a78ea796bf6e3f7f1f"></a>

List of session IDs for the match.

#### `public bool `[`Sessions_IsSet`](#structFRHAPI__MatchWithPlayers_1af263e14c93f881c3616fd44afca05bb2) <a id="structFRHAPI__MatchWithPlayers_1af263e14c93f881c3616fd44afca05bb2"></a>

true if Sessions_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchWithPlayers_1a6a98fb6ddb8255f72962c405a2fea0bf) <a id="structFRHAPI__MatchWithPlayers_1a6a98fb6ddb8255f72962c405a2fea0bf"></a>

List of MatchInstances for the match.

#### `public bool `[`Instances_IsSet`](#structFRHAPI__MatchWithPlayers_1af42654ffd3f46b248f5f48b5c8cde8f9) <a id="structFRHAPI__MatchWithPlayers_1af42654ffd3f46b248f5f48b5c8cde8f9"></a>

true if Instances_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchWithPlayers_1af8508fb5bd07eb01b53af4a6fa9eeacc) <a id="structFRHAPI__MatchWithPlayers_1af8508fb5bd07eb01b53af4a6fa9eeacc"></a>

List of allocation IDs for the match.

#### `public bool `[`Allocations_IsSet`](#structFRHAPI__MatchWithPlayers_1a634ec951054d0e4b760976ccb4a8f529) <a id="structFRHAPI__MatchWithPlayers_1a634ec951054d0e4b760976ccb4a8f529"></a>

true if Allocations_Optional has been set to a value

#### `public FString `[`MatchId_Optional`](#structFRHAPI__MatchWithPlayers_1a9145dd76d8fed562312d9b2495752290) <a id="structFRHAPI__MatchWithPlayers_1a9145dd76d8fed562312d9b2495752290"></a>

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__MatchWithPlayers_1adf0a808f0238349b98515027957864fc) <a id="structFRHAPI__MatchWithPlayers_1adf0a808f0238349b98515027957864fc"></a>

true if MatchId_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > `[`Segments_Optional`](#structFRHAPI__MatchWithPlayers_1a2927cb22ad7fa59ca2ff1f99b5168a51) <a id="structFRHAPI__MatchWithPlayers_1a2927cb22ad7fa59ca2ff1f99b5168a51"></a>

List of segments for the match.

#### `public bool `[`Segments_IsSet`](#structFRHAPI__MatchWithPlayers_1adae97c7f001028002546a4949f9268a8) <a id="structFRHAPI__MatchWithPlayers_1adae97c7f001028002546a4949f9268a8"></a>

true if Segments_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > `[`Players_Optional`](#structFRHAPI__MatchWithPlayers_1ac846c80718ec521337a5d8c5c30ae55d) <a id="structFRHAPI__MatchWithPlayers_1ac846c80718ec521337a5d8c5c30ae55d"></a>

List of players in the match.

#### `public bool `[`Players_IsSet`](#structFRHAPI__MatchWithPlayers_1a89153749417713a1d74653a5cd476a60) <a id="structFRHAPI__MatchWithPlayers_1a89153749417713a1d74653a5cd476a60"></a>

true if Players_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchWithPlayers_1ad6404d79f7e010369675888d45f87e19)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchWithPlayers_1ad6404d79f7e010369675888d45f87e19"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchWithPlayers_1ab0140786a2c26b18234dc0b018702931)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchWithPlayers_1ab0140786a2c26b18234dc0b018702931"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a658eba361efdfacde3be3a736909c966)`()` <a id="structFRHAPI__MatchWithPlayers_1a658eba361efdfacde3be3a736909c966"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1ad44550929f9e9722bbc07e74f802d53e)`() const` <a id="structFRHAPI__MatchWithPlayers_1ad44550929f9e9722bbc07e74f802d53e"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a9315e0b22e3f3a542ccfed0aed9f3398)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a9315e0b22e3f3a542ccfed0aed9f3398"></a>

Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a97b08d4060a98b8167bbad9cb7dc7daf)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a97b08d4060a98b8167bbad9cb7dc7daf"></a>

Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a8145ea70de348403626e8fa1ecb3fca4)`()` <a id="structFRHAPI__MatchWithPlayers_1a8145ea70de348403626e8fa1ecb3fca4"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a1f3a766c9a37d7b25f26b5b889ff56ca)`() const` <a id="structFRHAPI__MatchWithPlayers_1a1f3a766c9a37d7b25f26b5b889ff56ca"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a7964e64d1b533e1b30672d4455ea7072)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a7964e64d1b533e1b30672d4455ea7072"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.

#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1ab994eb39b4797d3918d36df43ea1c51f)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1ab994eb39b4797d3918d36df43ea1c51f"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a4e3e368f11262aecbd8a9a00efe86a64)`()` <a id="structFRHAPI__MatchWithPlayers_1a4e3e368f11262aecbd8a9a00efe86a64"></a>

Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.

#### `public inline bool `[`IsLastModifiedTimestampSet`](#structFRHAPI__MatchWithPlayers_1a6580ae3fd93b6177742ac3b49f1aa1dd)`() const` <a id="structFRHAPI__MatchWithPlayers_1a6580ae3fd93b6177742ac3b49f1aa1dd"></a>

Checks whether LastModifiedTimestamp_Optional has been set.

#### `public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1afd609605e5e3eb944a302f59e343051a)`()` <a id="structFRHAPI__MatchWithPlayers_1afd609605e5e3eb944a302f59e343051a"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a0d945a9bb8408a9a311d5cebb982bab1)`() const` <a id="structFRHAPI__MatchWithPlayers_1a0d945a9bb8408a9a311d5cebb982bab1"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1af6e77d34753d89b64cfe7121e1dcd66f)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1af6e77d34753d89b64cfe7121e1dcd66f"></a>

Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1ab9da2189959feaf8f50e13f29a19f35a)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1ab9da2189959feaf8f50e13f29a19f35a"></a>

Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1aa63de198120557dffd52e3b6eaa5d950)`()` <a id="structFRHAPI__MatchWithPlayers_1aa63de198120557dffd52e3b6eaa5d950"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a812cc3e5be33ab98bb5e71e04c7669d9)`() const` <a id="structFRHAPI__MatchWithPlayers_1a812cc3e5be33ab98bb5e71e04c7669d9"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a5bd0789ba8dbaebc3036fe4bb6e75139)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a5bd0789ba8dbaebc3036fe4bb6e75139"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.

#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a13b5c8257980e86c6a835da8b22431f5)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a13b5c8257980e86c6a835da8b22431f5"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a4c7b58dd67ad205c840f4799e86f3141)`()` <a id="structFRHAPI__MatchWithPlayers_1a4c7b58dd67ad205c840f4799e86f3141"></a>

Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

#### `public inline bool `[`IsCreatedTimestampSet`](#structFRHAPI__MatchWithPlayers_1aa2942b9d007d1a21df9ed4a385a359ac)`() const` <a id="structFRHAPI__MatchWithPlayers_1aa2942b9d007d1a21df9ed4a385a359ac"></a>

Checks whether CreatedTimestamp_Optional has been set.

#### `public inline FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1aad25df5f30589b442f7599eb18c4aa86)`()` <a id="structFRHAPI__MatchWithPlayers_1aad25df5f30589b442f7599eb18c4aa86"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1ab346060d3ba8592156af5695a9625cfe)`() const` <a id="structFRHAPI__MatchWithPlayers_1ab346060d3ba8592156af5695a9625cfe"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1afae093104f09c68fa87b4f0f460cee13)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1afae093104f09c68fa87b4f0f460cee13"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType`](#structFRHAPI__MatchWithPlayers_1af2d41bc03e51508d3dc70a9fc4ee2cac)`(FString & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1af2d41bc03e51508d3dc70a9fc4ee2cac"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchWithPlayers_1a0e4d6438887193fbabfb233bd4074cb8)`()` <a id="structFRHAPI__MatchWithPlayers_1a0e4d6438887193fbabfb233bd4074cb8"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchWithPlayers_1a90920fae227c303cb590f985b5801fca)`() const` <a id="structFRHAPI__MatchWithPlayers_1a90920fae227c303cb590f985b5801fca"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType`](#structFRHAPI__MatchWithPlayers_1acb06360313579687eb87e7bd2ea21bbc)`(const FString & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1acb06360313579687eb87e7bd2ea21bbc"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline void `[`SetType`](#structFRHAPI__MatchWithPlayers_1ad209a147d0748214e8b64d831c882f08)`(FString && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1ad209a147d0748214e8b64d831c882f08"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__MatchWithPlayers_1a701d0e7bc85a24c0b27dc79b2d70f103)`()` <a id="structFRHAPI__MatchWithPlayers_1a701d0e7bc85a24c0b27dc79b2d70f103"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline bool `[`IsTypeSet`](#structFRHAPI__MatchWithPlayers_1a1bd5c7630fee853e2033b802465166b2)`() const` <a id="structFRHAPI__MatchWithPlayers_1a1bd5c7630fee853e2033b802465166b2"></a>

Checks whether Type_Optional has been set.

#### `public inline void `[`SetTypeToNull`](#structFRHAPI__MatchWithPlayers_1a44d6916ddb9c278a6240f2772983425f)`()` <a id="structFRHAPI__MatchWithPlayers_1a44d6916ddb9c278a6240f2772983425f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTypeNull`](#structFRHAPI__MatchWithPlayers_1a17e4934fb3adbef5f77842e55efc767d)`() const` <a id="structFRHAPI__MatchWithPlayers_1a17e4934fb3adbef5f77842e55efc767d"></a>

Checks whether Type_Optional is set to null.

#### `public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1af8ab7bd58b3f5e1ee31a55df1d107a14)`()` <a id="structFRHAPI__MatchWithPlayers_1af8ab7bd58b3f5e1ee31a55df1d107a14"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1a34423047d5041f5bc6559cbd82d3f023)`() const` <a id="structFRHAPI__MatchWithPlayers_1a34423047d5041f5bc6559cbd82d3f023"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1a432344b245c5ce974254b73c62b54ba9)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a432344b245c5ce974254b73c62b54ba9"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetState`](#structFRHAPI__MatchWithPlayers_1a31a8d6b979f6126694eb5c90041f385c)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a31a8d6b979f6126694eb5c90041f385c"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchWithPlayers_1a07779a9442ec130a328a3cabe3951529)`()` <a id="structFRHAPI__MatchWithPlayers_1a07779a9442ec130a328a3cabe3951529"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchWithPlayers_1a969e4a6e135ad7969afe7108569138ce)`() const` <a id="structFRHAPI__MatchWithPlayers_1a969e4a6e135ad7969afe7108569138ce"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetState`](#structFRHAPI__MatchWithPlayers_1a10b9786505694fa8e896768abf48b0ef)`(const ERHAPI_MatchState & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a10b9786505694fa8e896768abf48b0ef"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

#### `public inline void `[`SetState`](#structFRHAPI__MatchWithPlayers_1a03743646e58c7b744157350c00741791)`(ERHAPI_MatchState && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a03743646e58c7b744157350c00741791"></a>

Sets the value of State_Optional and also sets State_IsSet to true using move semantics.

#### `public inline void `[`ClearState`](#structFRHAPI__MatchWithPlayers_1ae5f274757061314b2f09b2013e7a6c0c)`()` <a id="structFRHAPI__MatchWithPlayers_1ae5f274757061314b2f09b2013e7a6c0c"></a>

Clears the value of State_Optional and sets State_IsSet to false.

#### `public inline bool `[`IsStateSet`](#structFRHAPI__MatchWithPlayers_1a796f29bb69e3e776fea45d92996f71a4)`() const` <a id="structFRHAPI__MatchWithPlayers_1a796f29bb69e3e776fea45d92996f71a4"></a>

Checks whether State_Optional has been set.

#### `public inline void `[`SetStateToNull`](#structFRHAPI__MatchWithPlayers_1affda290586f5a606538c3faff3761f19)`()` <a id="structFRHAPI__MatchWithPlayers_1affda290586f5a606538c3faff3761f19"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStateNull`](#structFRHAPI__MatchWithPlayers_1adf3e5504789f9eed5f14d999f0d8576f)`() const` <a id="structFRHAPI__MatchWithPlayers_1adf3e5504789f9eed5f14d999f0d8576f"></a>

Checks whether State_Optional is set to null.

#### `public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a016bef72954d6749cfd8dceb09d99225)`()` <a id="structFRHAPI__MatchWithPlayers_1a016bef72954d6749cfd8dceb09d99225"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a7d12c802969eaf1efd5182701ddf6535)`() const` <a id="structFRHAPI__MatchWithPlayers_1a7d12c802969eaf1efd5182701ddf6535"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1ae8e4cbe6583c6fef239cce2ff24408be)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1ae8e4cbe6583c6fef239cce2ff24408be"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a8b0decfee4a35fe5db6342eadca8cc03)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a8b0decfee4a35fe5db6342eadca8cc03"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1afb277e648232dd24b0a5cfb831583f52)`()` <a id="structFRHAPI__MatchWithPlayers_1afb277e648232dd24b0a5cfb831583f52"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a457ec2193e5c0a93fea908a97a4086e8)`() const` <a id="structFRHAPI__MatchWithPlayers_1a457ec2193e5c0a93fea908a97a4086e8"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a4d87a1363c8fd7a69f2c61d7f8278e1d)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a4d87a1363c8fd7a69f2c61d7f8278e1d"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a04ff4976d8d25affe2c2a41cdd8a6f29)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a04ff4976d8d25affe2c2a41cdd8a6f29"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a641f7901d874710f0e4871f9acd283f8)`()` <a id="structFRHAPI__MatchWithPlayers_1a641f7901d874710f0e4871f9acd283f8"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

#### `public inline bool `[`IsStartTimestampSet`](#structFRHAPI__MatchWithPlayers_1ac0f5d742edf24492eeba83cfb792ac84)`() const` <a id="structFRHAPI__MatchWithPlayers_1ac0f5d742edf24492eeba83cfb792ac84"></a>

Checks whether StartTimestamp_Optional has been set.

#### `public inline void `[`SetStartTimestampToNull`](#structFRHAPI__MatchWithPlayers_1a4a73fc5d45c3f5b133c4653f28b3e3d5)`()` <a id="structFRHAPI__MatchWithPlayers_1a4a73fc5d45c3f5b133c4653f28b3e3d5"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStartTimestampNull`](#structFRHAPI__MatchWithPlayers_1a724ef462d078ddcfa829d87abcf89e5f)`() const` <a id="structFRHAPI__MatchWithPlayers_1a724ef462d078ddcfa829d87abcf89e5f"></a>

Checks whether StartTimestamp_Optional is set to null.

#### `public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1add3184e90643be9d1937065b85ce6535)`()` <a id="structFRHAPI__MatchWithPlayers_1add3184e90643be9d1937065b85ce6535"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1ab2d82f1826d52e4f0c15837b289a603d)`() const` <a id="structFRHAPI__MatchWithPlayers_1ab2d82f1826d52e4f0c15837b289a603d"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1abbe5ca9f7c1d37dd24fe1a90a2cf32e4)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1abbe5ca9f7c1d37dd24fe1a90a2cf32e4"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a95892e96f1cfd1982d6dead2ffac6c0f)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a95892e96f1cfd1982d6dead2ffac6c0f"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a45858a49b88489bfc9787b38a71d6309)`()` <a id="structFRHAPI__MatchWithPlayers_1a45858a49b88489bfc9787b38a71d6309"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a04c5e30c854c95693fcf2ced2bdcabb9)`() const` <a id="structFRHAPI__MatchWithPlayers_1a04c5e30c854c95693fcf2ced2bdcabb9"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a520f4d1f4e16f94ce098979fc2a1fc7a)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a520f4d1f4e16f94ce098979fc2a1fc7a"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a85d5f0afbbe0363e4ca6b2dcfac0bb85)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a85d5f0afbbe0363e4ca6b2dcfac0bb85"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a720ccb68e29bd18392e98e6ba681f0b3)`()` <a id="structFRHAPI__MatchWithPlayers_1a720ccb68e29bd18392e98e6ba681f0b3"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

#### `public inline bool `[`IsEndTimestampSet`](#structFRHAPI__MatchWithPlayers_1a02f6d7ffe29c88aea46115e34c946d84)`() const` <a id="structFRHAPI__MatchWithPlayers_1a02f6d7ffe29c88aea46115e34c946d84"></a>

Checks whether EndTimestamp_Optional has been set.

#### `public inline void `[`SetEndTimestampToNull`](#structFRHAPI__MatchWithPlayers_1a18739c74ee52bef54886644e8414aaf7)`()` <a id="structFRHAPI__MatchWithPlayers_1a18739c74ee52bef54886644e8414aaf7"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsEndTimestampNull`](#structFRHAPI__MatchWithPlayers_1ab1dfbc94bfbfafbda3f34855e26b06b7)`() const` <a id="structFRHAPI__MatchWithPlayers_1ab1dfbc94bfbfafbda3f34855e26b06b7"></a>

Checks whether EndTimestamp_Optional is set to null.

#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a6d9557e03c00eac2399e3cc03ecc340b)`()` <a id="structFRHAPI__MatchWithPlayers_1a6d9557e03c00eac2399e3cc03ecc340b"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a679f4e4ebdcc22951ef8d9c287104828)`() const` <a id="structFRHAPI__MatchWithPlayers_1a679f4e4ebdcc22951ef8d9c287104828"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1ac26b9b754b645103ecf471d14d9ac614)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1ac26b9b754b645103ecf471d14d9ac614"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a434e492617d80c9aa428ae7db890085f)`(int32 & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a434e492617d80c9aa428ae7db890085f"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchWithPlayers_1a3ab52dca5ef193d72603a5ffd0152a6e)`()` <a id="structFRHAPI__MatchWithPlayers_1a3ab52dca5ef193d72603a5ffd0152a6e"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchWithPlayers_1ac450f87420dad7ae85747ff7b3371163)`() const` <a id="structFRHAPI__MatchWithPlayers_1ac450f87420dad7ae85747ff7b3371163"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a597a5f64b13d967c30b3a92ca6c259dd)`(const int32 & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a597a5f64b13d967c30b3a92ca6c259dd"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a871f8a38aea65c742c7d8aff42d285a4)`(int32 && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a871f8a38aea65c742c7d8aff42d285a4"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchWithPlayers_1aaa3f48e241f0728fc8fbe273f97b0f6b)`()` <a id="structFRHAPI__MatchWithPlayers_1aaa3f48e241f0728fc8fbe273f97b0f6b"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchWithPlayers_1a053431309ff508e57959d12541ceb63b)`() const` <a id="structFRHAPI__MatchWithPlayers_1a053431309ff508e57959d12541ceb63b"></a>

Checks whether DurationSeconds_Optional has been set.

#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchWithPlayers_1a57cf59c04d42d2679dfb317f5994ff25)`() const` <a id="structFRHAPI__MatchWithPlayers_1a57cf59c04d42d2679dfb317f5994ff25"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchWithPlayers_1af9c7ea1ac26ee438a143433dc69b84d2)`()` <a id="structFRHAPI__MatchWithPlayers_1af9c7ea1ac26ee438a143433dc69b84d2"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchWithPlayers_1a0facfc805c225b653a5b838227d8b07f)`()` <a id="structFRHAPI__MatchWithPlayers_1a0facfc805c225b653a5b838227d8b07f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchWithPlayers_1a112770a295b1fb79359a6ce05b940a05)`() const` <a id="structFRHAPI__MatchWithPlayers_1a112770a295b1fb79359a6ce05b940a05"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1a3d1c3fdd81e9846d73d8adc9f2121910)`()` <a id="structFRHAPI__MatchWithPlayers_1a3d1c3fdd81e9846d73d8adc9f2121910"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1a795d574b09918cad52a78f722642a774)`() const` <a id="structFRHAPI__MatchWithPlayers_1a795d574b09918cad52a78f722642a774"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1ad2d869fdc9aaacee285ec0bee711d5b4)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1ad2d869fdc9aaacee285ec0bee711d5b4"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1afa906abd698b0c908e9e387cfad66d62)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1afa906abd698b0c908e9e387cfad66d62"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchWithPlayers_1a4b2d310994c4d4b97012c090cc72f5b2)`()` <a id="structFRHAPI__MatchWithPlayers_1a4b2d310994c4d4b97012c090cc72f5b2"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchWithPlayers_1aa7f384f84fff9ee7f83f301cf0aef23f)`() const` <a id="structFRHAPI__MatchWithPlayers_1aa7f384f84fff9ee7f83f301cf0aef23f"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchWithPlayers_1ac6a296590c8ca16649dd019db1f0732f)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1ac6a296590c8ca16649dd019db1f0732f"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchWithPlayers_1ad3a8046b1a56fbab5bbace32c4e9ae18)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1ad3a8046b1a56fbab5bbace32c4e9ae18"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchWithPlayers_1a9cf848863e68de7670c31053b3062688)`()` <a id="structFRHAPI__MatchWithPlayers_1a9cf848863e68de7670c31053b3062688"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchWithPlayers_1a825ccaf00cd3f12582aa80950d0023ac)`() const` <a id="structFRHAPI__MatchWithPlayers_1a825ccaf00cd3f12582aa80950d0023ac"></a>

Checks whether CustomData_Optional has been set.

#### `public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchWithPlayers_1acaf560ff2d9ee561edcf194039026f0e)`()` <a id="structFRHAPI__MatchWithPlayers_1acaf560ff2d9ee561edcf194039026f0e"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchWithPlayers_1a210f6d1f4c3bcc3dd047e8519718e608)`() const` <a id="structFRHAPI__MatchWithPlayers_1a210f6d1f4c3bcc3dd047e8519718e608"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a17fd1330acdd17ed1ccd615f9ed6f8e3)`()` <a id="structFRHAPI__MatchWithPlayers_1a17fd1330acdd17ed1ccd615f9ed6f8e3"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a9d9b14917637394b1866b65da7e6969e)`() const` <a id="structFRHAPI__MatchWithPlayers_1a9d9b14917637394b1866b65da7e6969e"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a4fa93d77c229644dc754968f1d593926)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a4fa93d77c229644dc754968f1d593926"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a404ea5bc2cb375d5010180e46d148c7d)`(FString & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a404ea5bc2cb375d5010180e46d148c7d"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchWithPlayers_1aa149013d14110236728cfc0d1f241ce2)`()` <a id="structFRHAPI__MatchWithPlayers_1aa149013d14110236728cfc0d1f241ce2"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchWithPlayers_1a9f38c583e78085b6926596c4477cd8be)`() const` <a id="structFRHAPI__MatchWithPlayers_1a9f38c583e78085b6926596c4477cd8be"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a3c2d97ff41ea25baf5e9eaf83b0af97a)`(const FString & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a3c2d97ff41ea25baf5e9eaf83b0af97a"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchWithPlayers_1afc964122274a154bbcbbae79a62854ba)`(FString && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1afc964122274a154bbcbbae79a62854ba"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchWithPlayers_1a68f5a07bf08e9d29e5ab87051d4b258b)`()` <a id="structFRHAPI__MatchWithPlayers_1a68f5a07bf08e9d29e5ab87051d4b258b"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline bool `[`IsCorrelationIdSet`](#structFRHAPI__MatchWithPlayers_1aa1dcb67413ad7262cb6f1e21f37430c7)`() const` <a id="structFRHAPI__MatchWithPlayers_1aa1dcb67413ad7262cb6f1e21f37430c7"></a>

Checks whether CorrelationId_Optional has been set.

#### `public inline void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchWithPlayers_1a738f60521e133f8437e4fd3789add78f)`()` <a id="structFRHAPI__MatchWithPlayers_1a738f60521e133f8437e4fd3789add78f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchWithPlayers_1a67919cf61756515a31c3f7c0890ddee5)`() const` <a id="structFRHAPI__MatchWithPlayers_1a67919cf61756515a31c3f7c0890ddee5"></a>

Checks whether CorrelationId_Optional is set to null.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1a50146fca8b74aa27ff4541dd3736844f)`()` <a id="structFRHAPI__MatchWithPlayers_1a50146fca8b74aa27ff4541dd3736844f"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1ae4a365c577153b7eb454ed114da392a9)`() const` <a id="structFRHAPI__MatchWithPlayers_1ae4a365c577153b7eb454ed114da392a9"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1a097989068b6ac1ab03ddd42b353f78a5)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a097989068b6ac1ab03ddd42b353f78a5"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1aaeb2e271f7883b10e0bffe5d09d7625e)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1aaeb2e271f7883b10e0bffe5d09d7625e"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchWithPlayers_1a2f22670f43089cd7e81b21a4539daa14)`()` <a id="structFRHAPI__MatchWithPlayers_1a2f22670f43089cd7e81b21a4539daa14"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchWithPlayers_1a59bf1a24cbf18552603d9b3230e74a12)`() const` <a id="structFRHAPI__MatchWithPlayers_1a59bf1a24cbf18552603d9b3230e74a12"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchWithPlayers_1ad907a132260cdec606297d7efce85871)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1ad907a132260cdec606297d7efce85871"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchWithPlayers_1a1c624c897d6a72193b6501e59986cfee)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a1c624c897d6a72193b6501e59986cfee"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchWithPlayers_1a5ecfbae79a24684b17957054f9d0108b)`()` <a id="structFRHAPI__MatchWithPlayers_1a5ecfbae79a24684b17957054f9d0108b"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline bool `[`IsSessionsSet`](#structFRHAPI__MatchWithPlayers_1a0bf049058fc7e5d8364c552b9d4de4a6)`() const` <a id="structFRHAPI__MatchWithPlayers_1a0bf049058fc7e5d8364c552b9d4de4a6"></a>

Checks whether Sessions_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a6a4ee04c5df55ee9a5cf220fca3ff4c6)`()` <a id="structFRHAPI__MatchWithPlayers_1a6a4ee04c5df55ee9a5cf220fca3ff4c6"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a032389f9a75fbc3f854c52ed09ee6ff7)`() const` <a id="structFRHAPI__MatchWithPlayers_1a032389f9a75fbc3f854c52ed09ee6ff7"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a17b6220963bc9e8cbe12cfc6ad760b39)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a17b6220963bc9e8cbe12cfc6ad760b39"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a18dc419d4459b7e809d9f13e162de7c4)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a18dc419d4459b7e809d9f13e162de7c4"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchWithPlayers_1ab895ad0f79de7e5476965e27edb28c36)`()` <a id="structFRHAPI__MatchWithPlayers_1ab895ad0f79de7e5476965e27edb28c36"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchWithPlayers_1aecf24a323d8f493a5f758700c4990826)`() const` <a id="structFRHAPI__MatchWithPlayers_1aecf24a323d8f493a5f758700c4990826"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchWithPlayers_1ae31f7878f6d29da3e7845a75668114bb)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1ae31f7878f6d29da3e7845a75668114bb"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchWithPlayers_1a2f083fd1b4ac0af08b36ce3808b45106)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a2f083fd1b4ac0af08b36ce3808b45106"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.

#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchWithPlayers_1ab9984a8c8ffce98a08718561f0d29a96)`()` <a id="structFRHAPI__MatchWithPlayers_1ab9984a8c8ffce98a08718561f0d29a96"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

#### `public inline bool `[`IsInstancesSet`](#structFRHAPI__MatchWithPlayers_1a12c0e4c89a2ecf5c30b5555da3221d43)`() const` <a id="structFRHAPI__MatchWithPlayers_1a12c0e4c89a2ecf5c30b5555da3221d43"></a>

Checks whether Instances_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1a528531f9c9fc2fc88e2bf877ff3c179a)`()` <a id="structFRHAPI__MatchWithPlayers_1a528531f9c9fc2fc88e2bf877ff3c179a"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1ab99b7630dd25b95a30662ae6e6b8caaa)`() const` <a id="structFRHAPI__MatchWithPlayers_1ab99b7630dd25b95a30662ae6e6b8caaa"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1a3d40c2dc48ba945c8b6a870aee622884)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a3d40c2dc48ba945c8b6a870aee622884"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1ae16ab87ac74ddb3cb4482134dd1d9613)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1ae16ab87ac74ddb3cb4482134dd1d9613"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchWithPlayers_1a9d8fd223ade66f39f82b78a8be0a4435)`()` <a id="structFRHAPI__MatchWithPlayers_1a9d8fd223ade66f39f82b78a8be0a4435"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchWithPlayers_1aaef0ace21a1b6522dc139609374e0f9d)`() const` <a id="structFRHAPI__MatchWithPlayers_1aaef0ace21a1b6522dc139609374e0f9d"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchWithPlayers_1afb700739269db9495b9dfbb4107b87b6)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1afb700739269db9495b9dfbb4107b87b6"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchWithPlayers_1a38c8cc2b35426c26a85c73e3c47eb9e1)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a38c8cc2b35426c26a85c73e3c47eb9e1"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchWithPlayers_1a50c98e5a3851d361a455a9093c73e106)`()` <a id="structFRHAPI__MatchWithPlayers_1a50c98e5a3851d361a455a9093c73e106"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

#### `public inline bool `[`IsAllocationsSet`](#structFRHAPI__MatchWithPlayers_1a3ad7943c250f2b1f49c635f480fab62b)`() const` <a id="structFRHAPI__MatchWithPlayers_1a3ad7943c250f2b1f49c635f480fab62b"></a>

Checks whether Allocations_Optional has been set.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1aa77eb7081ac722647e64fdae687ca605)`()` <a id="structFRHAPI__MatchWithPlayers_1aa77eb7081ac722647e64fdae687ca605"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1a3cff41f4a7b67baf216f883883989284)`() const` <a id="structFRHAPI__MatchWithPlayers_1a3cff41f4a7b67baf216f883883989284"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1a85479ca2dde430ac1113e20cc7230c50)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a85479ca2dde430ac1113e20cc7230c50"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1a7bdcb334d8a7653209603207bed2351f)`(FString & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a7bdcb334d8a7653209603207bed2351f"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchWithPlayers_1a2aad43820efae0c20ff41079e9abf672)`()` <a id="structFRHAPI__MatchWithPlayers_1a2aad43820efae0c20ff41079e9abf672"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchWithPlayers_1afd4721f4f5cf4bd76cd0b64558fc9241)`() const` <a id="structFRHAPI__MatchWithPlayers_1afd4721f4f5cf4bd76cd0b64558fc9241"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchWithPlayers_1a5ddfcc9e0c7cf610f5078ccc029d5243)`(const FString & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a5ddfcc9e0c7cf610f5078ccc029d5243"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchWithPlayers_1a259a00ad2e1b59e24645ce96ba8985eb)`(FString && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a259a00ad2e1b59e24645ce96ba8985eb"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__MatchWithPlayers_1af0199003a37780a5d2932dff41b5757b)`()` <a id="structFRHAPI__MatchWithPlayers_1af0199003a37780a5d2932dff41b5757b"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline bool `[`IsMatchIdSet`](#structFRHAPI__MatchWithPlayers_1aa823dfcd7303e185aaafd277c0024405)`() const` <a id="structFRHAPI__MatchWithPlayers_1aa823dfcd7303e185aaafd277c0024405"></a>

Checks whether MatchId_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1ab75a3c08202d129b26c4ca851053f803)`()` <a id="structFRHAPI__MatchWithPlayers_1ab75a3c08202d129b26c4ca851053f803"></a>

Gets the value of Segments_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1a80f90d439c7e041e5e2c899f04b720d1)`() const` <a id="structFRHAPI__MatchWithPlayers_1a80f90d439c7e041e5e2c899f04b720d1"></a>

Gets the value of Segments_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1a65e854d0f83b160bd7955808b1806a6f)`(const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a65e854d0f83b160bd7955808b1806a6f"></a>

Gets the value of Segments_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1ad527c627f1459a166f7cc17fb33456d8)`(TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1ad527c627f1459a166f7cc17fb33456d8"></a>

Fills OutValue with the value of Segments_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchWithPlayers_1a47c3643e60be06e24541664ff917f662)`()` <a id="structFRHAPI__MatchWithPlayers_1a47c3643e60be06e24541664ff917f662"></a>

Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchWithPlayers_1a7247d1b910eab330191f18e9a6d2c280)`() const` <a id="structFRHAPI__MatchWithPlayers_1a7247d1b910eab330191f18e9a6d2c280"></a>

Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSegments`](#structFRHAPI__MatchWithPlayers_1a9ba96cd95275695ab623143f1fe4c60b)`(const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a9ba96cd95275695ab623143f1fe4c60b"></a>

Sets the value of Segments_Optional and also sets Segments_IsSet to true.

#### `public inline void `[`SetSegments`](#structFRHAPI__MatchWithPlayers_1ab496db9c786c9a1c811c75922df8e838)`(TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1ab496db9c786c9a1c811c75922df8e838"></a>

Sets the value of Segments_Optional and also sets Segments_IsSet to true using move semantics.

#### `public inline void `[`ClearSegments`](#structFRHAPI__MatchWithPlayers_1a46b69c45f30aba090d9cb4520b83feb6)`()` <a id="structFRHAPI__MatchWithPlayers_1a46b69c45f30aba090d9cb4520b83feb6"></a>

Clears the value of Segments_Optional and sets Segments_IsSet to false.

#### `public inline bool `[`IsSegmentsSet`](#structFRHAPI__MatchWithPlayers_1aef8b76d53ed150c254b66ba88a9a8eef)`() const` <a id="structFRHAPI__MatchWithPlayers_1aef8b76d53ed150c254b66ba88a9a8eef"></a>

Checks whether Segments_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1ae594d5b94284527d285021cf20b28dad)`()` <a id="structFRHAPI__MatchWithPlayers_1ae594d5b94284527d285021cf20b28dad"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1a1dcffe68679492092d2a763faf1c8965)`() const` <a id="structFRHAPI__MatchWithPlayers_1a1dcffe68679492092d2a763faf1c8965"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1a55ab81d041dc5a6dfeb7384ad472a8fb)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a55ab81d041dc5a6dfeb7384ad472a8fb"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1a4c6d91121226331b85ff974977922a84)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a4c6d91121226331b85ff974977922a84"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchWithPlayers_1a950a6a1ffb7dbd19503d1d43435e63f6)`()` <a id="structFRHAPI__MatchWithPlayers_1a950a6a1ffb7dbd19503d1d43435e63f6"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchWithPlayers_1a1f681d378cc44a10e52b6c2003f7def9)`() const` <a id="structFRHAPI__MatchWithPlayers_1a1f681d378cc44a10e52b6c2003f7def9"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchWithPlayers_1a889e7a355ae45340ab33ae6f3ad167cd)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a889e7a355ae45340ab33ae6f3ad167cd"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchWithPlayers_1acbb442b84b4b7c36eb29b0d796d0c512)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1acbb442b84b4b7c36eb29b0d796d0c512"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__MatchWithPlayers_1adc79fb23da80d7a20ccd18c8bfe2801f)`()` <a id="structFRHAPI__MatchWithPlayers_1adc79fb23da80d7a20ccd18c8bfe2801f"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

#### `public inline bool `[`IsPlayersSet`](#structFRHAPI__MatchWithPlayers_1a45a3b67d19e785f5979605010e604f88)`() const` <a id="structFRHAPI__MatchWithPlayers_1a45a3b67d19e785f5979605010e604f88"></a>

Checks whether Players_Optional has been set.

