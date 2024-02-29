# RHAPI_MatchWithPlayers <a id="group__RHAPI__MatchWithPlayers"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchWithPlayers`](#structFRHAPI__MatchWithPlayers) | 

## struct `FRHAPI_MatchWithPlayers` <a id="structFRHAPI__MatchWithPlayers"></a>

```
struct FRHAPI_MatchWithPlayers
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a5628f211d41028e24c5c16f18245a2a1) | Timestamp of when the resource was last modified.
`public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1a00acf4b4ad5e4ad5fe5869bc6c807992) | true if LastModifiedTimestamp_Optional has been set to a value
`public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1ac344460c57fc5d3f0660f305fe4dbd1e) | Timestamp of when the resource was created.
`public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1afacaaac54f38f7a0a8a7b422db16c75f) | true if CreatedTimestamp_Optional has been set to a value
`public FString `[`Type_Optional`](#structFRHAPI__MatchWithPlayers_1a659236b15b05f230d2716f9be31aee67) | 
`public bool `[`Type_IsSet`](#structFRHAPI__MatchWithPlayers_1ace102a653b3f208eddd528df76288a74) | true if Type_Optional has been set to a value
`public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchWithPlayers_1abc3bfff7ef2994d9a411543a9d54dd31) | 
`public bool `[`State_IsSet`](#structFRHAPI__MatchWithPlayers_1af2add4306978accd23b3d39d3f74f79f) | true if State_Optional has been set to a value
`public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a3befa8a77889fee718742ad18b820853) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1a8efa84c4e181023de46d742bca705805) | true if StartTimestamp_Optional has been set to a value
`public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a0e48a16cc0b6ca8f0e39f4a3618c8b2f) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1ac4ad4dcf7d89b667b8d29ec956d057aa) | true if EndTimestamp_Optional has been set to a value
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchWithPlayers_1a0ea6f1121c18c0926fec8fc7a27f460d) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchWithPlayers_1a8a265fb4e7cee101a6d1411933728606) | true if DurationSeconds_Optional has been set to a value
`public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`CustomData_Optional`](#structFRHAPI__MatchWithPlayers_1a460ea9d4849a308d3dc009ca2eee9b6e) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchWithPlayers_1accd783d40f7eabecaad610755a628889) | true if CustomData_Optional has been set to a value
`public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchWithPlayers_1a41a0406798245ba6e5c2534aeb6fbaf0) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchWithPlayers_1abdf507772e60249c93da5ff188346e24) | true if CorrelationId_Optional has been set to a value
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
`public virtual bool `[`FromJson`](#structFRHAPI__MatchWithPlayers_1a753bc42adce410e96be08ff9bb295006)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchWithPlayers_1aab1a3f8d94bbcf24b3664fad60df676d)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a658eba361efdfacde3be3a736909c966)`()` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1ad44550929f9e9722bbc07e74f802d53e)`() const` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a9315e0b22e3f3a542ccfed0aed9f3398)`(const FDateTime & DefaultValue) const` | Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a97b08d4060a98b8167bbad9cb7dc7daf)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a8145ea70de348403626e8fa1ecb3fca4)`()` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a1f3a766c9a37d7b25f26b5b889ff56ca)`() const` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1af1f906cea57213f8699ab3ded1b94119)`(FDateTime NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.
`public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a4e3e368f11262aecbd8a9a00efe86a64)`()` | Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.
`public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1afd609605e5e3eb944a302f59e343051a)`()` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a0d945a9bb8408a9a311d5cebb982bab1)`() const` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1af6e77d34753d89b64cfe7121e1dcd66f)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1ab9da2189959feaf8f50e13f29a19f35a)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1aa63de198120557dffd52e3b6eaa5d950)`()` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a812cc3e5be33ab98bb5e71e04c7669d9)`() const` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a1f8f18e03d3cff7627a24c7f018c7bca)`(FDateTime NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.
`public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a4c7b58dd67ad205c840f4799e86f3141)`()` | Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.
`public inline FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1aad25df5f30589b442f7599eb18c4aa86)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1ab346060d3ba8592156af5695a9625cfe)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1afae093104f09c68fa87b4f0f460cee13)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__MatchWithPlayers_1af2d41bc03e51508d3dc70a9fc4ee2cac)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchWithPlayers_1a0e4d6438887193fbabfb233bd4074cb8)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchWithPlayers_1a90920fae227c303cb590f985b5801fca)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__MatchWithPlayers_1aa60c89d8e8bfec25db3ff1a473d66b12)`(FString NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`ClearType`](#structFRHAPI__MatchWithPlayers_1a701d0e7bc85a24c0b27dc79b2d70f103)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1af8ab7bd58b3f5e1ee31a55df1d107a14)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1a34423047d5041f5bc6559cbd82d3f023)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1a432344b245c5ce974254b73c62b54ba9)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetState`](#structFRHAPI__MatchWithPlayers_1a31a8d6b979f6126694eb5c90041f385c)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchWithPlayers_1a07779a9442ec130a328a3cabe3951529)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchWithPlayers_1a969e4a6e135ad7969afe7108569138ce)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetState`](#structFRHAPI__MatchWithPlayers_1af586c6ac20c22a90deb6497f00af5424)`(ERHAPI_MatchState NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline void `[`ClearState`](#structFRHAPI__MatchWithPlayers_1ae5f274757061314b2f09b2013e7a6c0c)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a016bef72954d6749cfd8dceb09d99225)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a7d12c802969eaf1efd5182701ddf6535)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1ae8e4cbe6583c6fef239cce2ff24408be)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a8b0decfee4a35fe5db6342eadca8cc03)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1afb277e648232dd24b0a5cfb831583f52)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a457ec2193e5c0a93fea908a97a4086e8)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1ae09c22920b89000778c768d4ca1828a7)`(FDateTime NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a641f7901d874710f0e4871f9acd283f8)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1add3184e90643be9d1937065b85ce6535)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1ab2d82f1826d52e4f0c15837b289a603d)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1abbe5ca9f7c1d37dd24fe1a90a2cf32e4)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a95892e96f1cfd1982d6dead2ffac6c0f)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a45858a49b88489bfc9787b38a71d6309)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a04c5e30c854c95693fcf2ced2bdcabb9)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1acdddd42c6055d4b9803ff58ffa06ff76)`(FDateTime NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a720ccb68e29bd18392e98e6ba681f0b3)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a6d9557e03c00eac2399e3cc03ecc340b)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a679f4e4ebdcc22951ef8d9c287104828)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1ac26b9b754b645103ecf471d14d9ac614)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a434e492617d80c9aa428ae7db890085f)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchWithPlayers_1a3ab52dca5ef193d72603a5ffd0152a6e)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchWithPlayers_1ac450f87420dad7ae85747ff7b3371163)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a017b22e86acc79649c9cbe3dfb084cf7)`(int32 NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchWithPlayers_1aaa3f48e241f0728fc8fbe273f97b0f6b)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchWithPlayers_1a57cf59c04d42d2679dfb317f5994ff25)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchWithPlayers_1af9c7ea1ac26ee438a143433dc69b84d2)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1ad8abc2091584f5d64c547e4fc0293693)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1a0a95e5b0d097409d1296d45360ecdb6b)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1ab76aceb3ef4f8089e382b5448624e791)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1a8d5ce574f9a9b6888faa5429ebb5c24e)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__MatchWithPlayers_1a44101cd4f4969e55e7953fa3f2d49fc1)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__MatchWithPlayers_1ac03863304f870ed000642a0552cc2d62)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchWithPlayers_1a58399e4521e7a725bd57849a640e47d8)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchWithPlayers_1a9cf848863e68de7670c31053b3062688)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a17fd1330acdd17ed1ccd615f9ed6f8e3)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a9d9b14917637394b1866b65da7e6969e)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a4fa93d77c229644dc754968f1d593926)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a404ea5bc2cb375d5010180e46d148c7d)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchWithPlayers_1aa149013d14110236728cfc0d1f241ce2)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchWithPlayers_1a9f38c583e78085b6926596c4477cd8be)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchWithPlayers_1ab321b75f719009d7ccb7ee6db1d9f8d4)`(FString NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchWithPlayers_1a68f5a07bf08e9d29e5ab87051d4b258b)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1a50146fca8b74aa27ff4541dd3736844f)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1ae4a365c577153b7eb454ed114da392a9)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1a097989068b6ac1ab03ddd42b353f78a5)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1aaeb2e271f7883b10e0bffe5d09d7625e)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchWithPlayers_1a2f22670f43089cd7e81b21a4539daa14)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchWithPlayers_1a59bf1a24cbf18552603d9b3230e74a12)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessions`](#structFRHAPI__MatchWithPlayers_1a0e25196e10a4e532711481d9e4056b48)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchWithPlayers_1a5ecfbae79a24684b17957054f9d0108b)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a6a4ee04c5df55ee9a5cf220fca3ff4c6)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a032389f9a75fbc3f854c52ed09ee6ff7)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a17b6220963bc9e8cbe12cfc6ad760b39)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a18dc419d4459b7e809d9f13e162de7c4)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchWithPlayers_1ab895ad0f79de7e5476965e27edb28c36)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchWithPlayers_1aecf24a323d8f493a5f758700c4990826)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstances`](#structFRHAPI__MatchWithPlayers_1a8cd8031ee818d13341419527c160305e)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchWithPlayers_1ab9984a8c8ffce98a08718561f0d29a96)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1a528531f9c9fc2fc88e2bf877ff3c179a)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1ab99b7630dd25b95a30662ae6e6b8caaa)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1a3d40c2dc48ba945c8b6a870aee622884)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1ae16ab87ac74ddb3cb4482134dd1d9613)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchWithPlayers_1a9d8fd223ade66f39f82b78a8be0a4435)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchWithPlayers_1aaef0ace21a1b6522dc139609374e0f9d)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchWithPlayers_1a51b1424f0623dce14e102cea5da6634f)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchWithPlayers_1a50c98e5a3851d361a455a9093c73e106)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1aa77eb7081ac722647e64fdae687ca605)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1a3cff41f4a7b67baf216f883883989284)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1a85479ca2dde430ac1113e20cc7230c50)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1a7bdcb334d8a7653209603207bed2351f)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchWithPlayers_1a2aad43820efae0c20ff41079e9abf672)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchWithPlayers_1afd4721f4f5cf4bd76cd0b64558fc9241)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchWithPlayers_1a0e92f2cefb512ce8c8f57f986c9a3156)`(FString NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`ClearMatchId`](#structFRHAPI__MatchWithPlayers_1af0199003a37780a5d2932dff41b5757b)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1ab75a3c08202d129b26c4ca851053f803)`()` | Gets the value of Segments_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1a80f90d439c7e041e5e2c899f04b720d1)`() const` | Gets the value of Segments_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1a65e854d0f83b160bd7955808b1806a6f)`(const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & DefaultValue) const` | Gets the value of Segments_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1ad527c627f1459a166f7cc17fb33456d8)`(TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & OutValue) const` | Fills OutValue with the value of Segments_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchWithPlayers_1a47c3643e60be06e24541664ff917f662)`()` | Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchWithPlayers_1a7247d1b910eab330191f18e9a6d2c280)`() const` | Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSegments`](#structFRHAPI__MatchWithPlayers_1a87a5fc144cd3bf5a0e43d6157ccbb8f7)`(TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > NewValue)` | Sets the value of Segments_Optional and also sets Segments_IsSet to true.
`public inline void `[`ClearSegments`](#structFRHAPI__MatchWithPlayers_1a46b69c45f30aba090d9cb4520b83feb6)`()` | Clears the value of Segments_Optional and sets Segments_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1ae594d5b94284527d285021cf20b28dad)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1a1dcffe68679492092d2a763faf1c8965)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1a55ab81d041dc5a6dfeb7384ad472a8fb)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1a4c6d91121226331b85ff974977922a84)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchWithPlayers_1a950a6a1ffb7dbd19503d1d43435e63f6)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchWithPlayers_1a1f681d378cc44a10e52b6c2003f7def9)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchWithPlayers_1a3062abe683ac821b47f94145d8982557)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline void `[`ClearPlayers`](#structFRHAPI__MatchWithPlayers_1adc79fb23da80d7a20ccd18c8bfe2801f)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.

#### Members

#### `public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a5628f211d41028e24c5c16f18245a2a1) <a id="structFRHAPI__MatchWithPlayers_1a5628f211d41028e24c5c16f18245a2a1"></a>

Timestamp of when the resource was last modified.

<br>
#### `public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1a00acf4b4ad5e4ad5fe5869bc6c807992) <a id="structFRHAPI__MatchWithPlayers_1a00acf4b4ad5e4ad5fe5869bc6c807992"></a>

true if LastModifiedTimestamp_Optional has been set to a value

<br>
#### `public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1ac344460c57fc5d3f0660f305fe4dbd1e) <a id="structFRHAPI__MatchWithPlayers_1ac344460c57fc5d3f0660f305fe4dbd1e"></a>

Timestamp of when the resource was created.

<br>
#### `public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1afacaaac54f38f7a0a8a7b422db16c75f) <a id="structFRHAPI__MatchWithPlayers_1afacaaac54f38f7a0a8a7b422db16c75f"></a>

true if CreatedTimestamp_Optional has been set to a value

<br>
#### `public FString `[`Type_Optional`](#structFRHAPI__MatchWithPlayers_1a659236b15b05f230d2716f9be31aee67) <a id="structFRHAPI__MatchWithPlayers_1a659236b15b05f230d2716f9be31aee67"></a>

<br>
#### `public bool `[`Type_IsSet`](#structFRHAPI__MatchWithPlayers_1ace102a653b3f208eddd528df76288a74) <a id="structFRHAPI__MatchWithPlayers_1ace102a653b3f208eddd528df76288a74"></a>

true if Type_Optional has been set to a value

<br>
#### `public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchWithPlayers_1abc3bfff7ef2994d9a411543a9d54dd31) <a id="structFRHAPI__MatchWithPlayers_1abc3bfff7ef2994d9a411543a9d54dd31"></a>

<br>
#### `public bool `[`State_IsSet`](#structFRHAPI__MatchWithPlayers_1af2add4306978accd23b3d39d3f74f79f) <a id="structFRHAPI__MatchWithPlayers_1af2add4306978accd23b3d39d3f74f79f"></a>

true if State_Optional has been set to a value

<br>
#### `public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a3befa8a77889fee718742ad18b820853) <a id="structFRHAPI__MatchWithPlayers_1a3befa8a77889fee718742ad18b820853"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1a8efa84c4e181023de46d742bca705805) <a id="structFRHAPI__MatchWithPlayers_1a8efa84c4e181023de46d742bca705805"></a>

true if StartTimestamp_Optional has been set to a value

<br>
#### `public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a0e48a16cc0b6ca8f0e39f4a3618c8b2f) <a id="structFRHAPI__MatchWithPlayers_1a0e48a16cc0b6ca8f0e39f4a3618c8b2f"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1ac4ad4dcf7d89b667b8d29ec956d057aa) <a id="structFRHAPI__MatchWithPlayers_1ac4ad4dcf7d89b667b8d29ec956d057aa"></a>

true if EndTimestamp_Optional has been set to a value

<br>
#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchWithPlayers_1a0ea6f1121c18c0926fec8fc7a27f460d) <a id="structFRHAPI__MatchWithPlayers_1a0ea6f1121c18c0926fec8fc7a27f460d"></a>

<br>
#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchWithPlayers_1a8a265fb4e7cee101a6d1411933728606) <a id="structFRHAPI__MatchWithPlayers_1a8a265fb4e7cee101a6d1411933728606"></a>

true if DurationSeconds_Optional has been set to a value

<br>
#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`CustomData_Optional`](#structFRHAPI__MatchWithPlayers_1a460ea9d4849a308d3dc009ca2eee9b6e) <a id="structFRHAPI__MatchWithPlayers_1a460ea9d4849a308d3dc009ca2eee9b6e"></a>

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchWithPlayers_1accd783d40f7eabecaad610755a628889) <a id="structFRHAPI__MatchWithPlayers_1accd783d40f7eabecaad610755a628889"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchWithPlayers_1a41a0406798245ba6e5c2534aeb6fbaf0) <a id="structFRHAPI__MatchWithPlayers_1a41a0406798245ba6e5c2534aeb6fbaf0"></a>

<br>
#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchWithPlayers_1abdf507772e60249c93da5ff188346e24) <a id="structFRHAPI__MatchWithPlayers_1abdf507772e60249c93da5ff188346e24"></a>

true if CorrelationId_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchWithPlayers_1a947c4070cc7d61a78ea796bf6e3f7f1f) <a id="structFRHAPI__MatchWithPlayers_1a947c4070cc7d61a78ea796bf6e3f7f1f"></a>

List of session IDs for the match.

<br>
#### `public bool `[`Sessions_IsSet`](#structFRHAPI__MatchWithPlayers_1af263e14c93f881c3616fd44afca05bb2) <a id="structFRHAPI__MatchWithPlayers_1af263e14c93f881c3616fd44afca05bb2"></a>

true if Sessions_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchWithPlayers_1a6a98fb6ddb8255f72962c405a2fea0bf) <a id="structFRHAPI__MatchWithPlayers_1a6a98fb6ddb8255f72962c405a2fea0bf"></a>

List of MatchInstances for the match.

<br>
#### `public bool `[`Instances_IsSet`](#structFRHAPI__MatchWithPlayers_1af42654ffd3f46b248f5f48b5c8cde8f9) <a id="structFRHAPI__MatchWithPlayers_1af42654ffd3f46b248f5f48b5c8cde8f9"></a>

true if Instances_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchWithPlayers_1af8508fb5bd07eb01b53af4a6fa9eeacc) <a id="structFRHAPI__MatchWithPlayers_1af8508fb5bd07eb01b53af4a6fa9eeacc"></a>

List of allocation IDs for the match.

<br>
#### `public bool `[`Allocations_IsSet`](#structFRHAPI__MatchWithPlayers_1a634ec951054d0e4b760976ccb4a8f529) <a id="structFRHAPI__MatchWithPlayers_1a634ec951054d0e4b760976ccb4a8f529"></a>

true if Allocations_Optional has been set to a value

<br>
#### `public FString `[`MatchId_Optional`](#structFRHAPI__MatchWithPlayers_1a9145dd76d8fed562312d9b2495752290) <a id="structFRHAPI__MatchWithPlayers_1a9145dd76d8fed562312d9b2495752290"></a>

<br>
#### `public bool `[`MatchId_IsSet`](#structFRHAPI__MatchWithPlayers_1adf0a808f0238349b98515027957864fc) <a id="structFRHAPI__MatchWithPlayers_1adf0a808f0238349b98515027957864fc"></a>

true if MatchId_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > `[`Segments_Optional`](#structFRHAPI__MatchWithPlayers_1a2927cb22ad7fa59ca2ff1f99b5168a51) <a id="structFRHAPI__MatchWithPlayers_1a2927cb22ad7fa59ca2ff1f99b5168a51"></a>

List of segments for the match.

<br>
#### `public bool `[`Segments_IsSet`](#structFRHAPI__MatchWithPlayers_1adae97c7f001028002546a4949f9268a8) <a id="structFRHAPI__MatchWithPlayers_1adae97c7f001028002546a4949f9268a8"></a>

true if Segments_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > `[`Players_Optional`](#structFRHAPI__MatchWithPlayers_1ac846c80718ec521337a5d8c5c30ae55d) <a id="structFRHAPI__MatchWithPlayers_1ac846c80718ec521337a5d8c5c30ae55d"></a>

List of players in the match.

<br>
#### `public bool `[`Players_IsSet`](#structFRHAPI__MatchWithPlayers_1a89153749417713a1d74653a5cd476a60) <a id="structFRHAPI__MatchWithPlayers_1a89153749417713a1d74653a5cd476a60"></a>

true if Players_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchWithPlayers_1a753bc42adce410e96be08ff9bb295006)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchWithPlayers_1a753bc42adce410e96be08ff9bb295006"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchWithPlayers_1aab1a3f8d94bbcf24b3664fad60df676d)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchWithPlayers_1aab1a3f8d94bbcf24b3664fad60df676d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a658eba361efdfacde3be3a736909c966)`()` <a id="structFRHAPI__MatchWithPlayers_1a658eba361efdfacde3be3a736909c966"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1ad44550929f9e9722bbc07e74f802d53e)`() const` <a id="structFRHAPI__MatchWithPlayers_1ad44550929f9e9722bbc07e74f802d53e"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a9315e0b22e3f3a542ccfed0aed9f3398)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a9315e0b22e3f3a542ccfed0aed9f3398"></a>

Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a97b08d4060a98b8167bbad9cb7dc7daf)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a97b08d4060a98b8167bbad9cb7dc7daf"></a>

Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a8145ea70de348403626e8fa1ecb3fca4)`()` <a id="structFRHAPI__MatchWithPlayers_1a8145ea70de348403626e8fa1ecb3fca4"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a1f3a766c9a37d7b25f26b5b889ff56ca)`() const` <a id="structFRHAPI__MatchWithPlayers_1a1f3a766c9a37d7b25f26b5b889ff56ca"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1af1f906cea57213f8699ab3ded1b94119)`(FDateTime NewValue)` <a id="structFRHAPI__MatchWithPlayers_1af1f906cea57213f8699ab3ded1b94119"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.

<br>
#### `public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a4e3e368f11262aecbd8a9a00efe86a64)`()` <a id="structFRHAPI__MatchWithPlayers_1a4e3e368f11262aecbd8a9a00efe86a64"></a>

Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1afd609605e5e3eb944a302f59e343051a)`()` <a id="structFRHAPI__MatchWithPlayers_1afd609605e5e3eb944a302f59e343051a"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a0d945a9bb8408a9a311d5cebb982bab1)`() const` <a id="structFRHAPI__MatchWithPlayers_1a0d945a9bb8408a9a311d5cebb982bab1"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1af6e77d34753d89b64cfe7121e1dcd66f)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1af6e77d34753d89b64cfe7121e1dcd66f"></a>

Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1ab9da2189959feaf8f50e13f29a19f35a)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1ab9da2189959feaf8f50e13f29a19f35a"></a>

Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1aa63de198120557dffd52e3b6eaa5d950)`()` <a id="structFRHAPI__MatchWithPlayers_1aa63de198120557dffd52e3b6eaa5d950"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a812cc3e5be33ab98bb5e71e04c7669d9)`() const` <a id="structFRHAPI__MatchWithPlayers_1a812cc3e5be33ab98bb5e71e04c7669d9"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a1f8f18e03d3cff7627a24c7f018c7bca)`(FDateTime NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a1f8f18e03d3cff7627a24c7f018c7bca"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.

<br>
#### `public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a4c7b58dd67ad205c840f4799e86f3141)`()` <a id="structFRHAPI__MatchWithPlayers_1a4c7b58dd67ad205c840f4799e86f3141"></a>

Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

<br>
#### `public inline FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1aad25df5f30589b442f7599eb18c4aa86)`()` <a id="structFRHAPI__MatchWithPlayers_1aad25df5f30589b442f7599eb18c4aa86"></a>

Gets the value of Type_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1ab346060d3ba8592156af5695a9625cfe)`() const` <a id="structFRHAPI__MatchWithPlayers_1ab346060d3ba8592156af5695a9625cfe"></a>

Gets the value of Type_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1afae093104f09c68fa87b4f0f460cee13)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1afae093104f09c68fa87b4f0f460cee13"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetType`](#structFRHAPI__MatchWithPlayers_1af2d41bc03e51508d3dc70a9fc4ee2cac)`(FString & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1af2d41bc03e51508d3dc70a9fc4ee2cac"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchWithPlayers_1a0e4d6438887193fbabfb233bd4074cb8)`()` <a id="structFRHAPI__MatchWithPlayers_1a0e4d6438887193fbabfb233bd4074cb8"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchWithPlayers_1a90920fae227c303cb590f985b5801fca)`() const` <a id="structFRHAPI__MatchWithPlayers_1a90920fae227c303cb590f985b5801fca"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetType`](#structFRHAPI__MatchWithPlayers_1aa60c89d8e8bfec25db3ff1a473d66b12)`(FString NewValue)` <a id="structFRHAPI__MatchWithPlayers_1aa60c89d8e8bfec25db3ff1a473d66b12"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

<br>
#### `public inline void `[`ClearType`](#structFRHAPI__MatchWithPlayers_1a701d0e7bc85a24c0b27dc79b2d70f103)`()` <a id="structFRHAPI__MatchWithPlayers_1a701d0e7bc85a24c0b27dc79b2d70f103"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

<br>
#### `public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1af8ab7bd58b3f5e1ee31a55df1d107a14)`()` <a id="structFRHAPI__MatchWithPlayers_1af8ab7bd58b3f5e1ee31a55df1d107a14"></a>

Gets the value of State_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1a34423047d5041f5bc6559cbd82d3f023)`() const` <a id="structFRHAPI__MatchWithPlayers_1a34423047d5041f5bc6559cbd82d3f023"></a>

Gets the value of State_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1a432344b245c5ce974254b73c62b54ba9)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a432344b245c5ce974254b73c62b54ba9"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetState`](#structFRHAPI__MatchWithPlayers_1a31a8d6b979f6126694eb5c90041f385c)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a31a8d6b979f6126694eb5c90041f385c"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchWithPlayers_1a07779a9442ec130a328a3cabe3951529)`()` <a id="structFRHAPI__MatchWithPlayers_1a07779a9442ec130a328a3cabe3951529"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchWithPlayers_1a969e4a6e135ad7969afe7108569138ce)`() const` <a id="structFRHAPI__MatchWithPlayers_1a969e4a6e135ad7969afe7108569138ce"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetState`](#structFRHAPI__MatchWithPlayers_1af586c6ac20c22a90deb6497f00af5424)`(ERHAPI_MatchState NewValue)` <a id="structFRHAPI__MatchWithPlayers_1af586c6ac20c22a90deb6497f00af5424"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

<br>
#### `public inline void `[`ClearState`](#structFRHAPI__MatchWithPlayers_1ae5f274757061314b2f09b2013e7a6c0c)`()` <a id="structFRHAPI__MatchWithPlayers_1ae5f274757061314b2f09b2013e7a6c0c"></a>

Clears the value of State_Optional and sets State_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a016bef72954d6749cfd8dceb09d99225)`()` <a id="structFRHAPI__MatchWithPlayers_1a016bef72954d6749cfd8dceb09d99225"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a7d12c802969eaf1efd5182701ddf6535)`() const` <a id="structFRHAPI__MatchWithPlayers_1a7d12c802969eaf1efd5182701ddf6535"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1ae8e4cbe6583c6fef239cce2ff24408be)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1ae8e4cbe6583c6fef239cce2ff24408be"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a8b0decfee4a35fe5db6342eadca8cc03)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a8b0decfee4a35fe5db6342eadca8cc03"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1afb277e648232dd24b0a5cfb831583f52)`()` <a id="structFRHAPI__MatchWithPlayers_1afb277e648232dd24b0a5cfb831583f52"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a457ec2193e5c0a93fea908a97a4086e8)`() const` <a id="structFRHAPI__MatchWithPlayers_1a457ec2193e5c0a93fea908a97a4086e8"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1ae09c22920b89000778c768d4ca1828a7)`(FDateTime NewValue)` <a id="structFRHAPI__MatchWithPlayers_1ae09c22920b89000778c768d4ca1828a7"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

<br>
#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a641f7901d874710f0e4871f9acd283f8)`()` <a id="structFRHAPI__MatchWithPlayers_1a641f7901d874710f0e4871f9acd283f8"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1add3184e90643be9d1937065b85ce6535)`()` <a id="structFRHAPI__MatchWithPlayers_1add3184e90643be9d1937065b85ce6535"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1ab2d82f1826d52e4f0c15837b289a603d)`() const` <a id="structFRHAPI__MatchWithPlayers_1ab2d82f1826d52e4f0c15837b289a603d"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1abbe5ca9f7c1d37dd24fe1a90a2cf32e4)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1abbe5ca9f7c1d37dd24fe1a90a2cf32e4"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a95892e96f1cfd1982d6dead2ffac6c0f)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a95892e96f1cfd1982d6dead2ffac6c0f"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a45858a49b88489bfc9787b38a71d6309)`()` <a id="structFRHAPI__MatchWithPlayers_1a45858a49b88489bfc9787b38a71d6309"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a04c5e30c854c95693fcf2ced2bdcabb9)`() const` <a id="structFRHAPI__MatchWithPlayers_1a04c5e30c854c95693fcf2ced2bdcabb9"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1acdddd42c6055d4b9803ff58ffa06ff76)`(FDateTime NewValue)` <a id="structFRHAPI__MatchWithPlayers_1acdddd42c6055d4b9803ff58ffa06ff76"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

<br>
#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a720ccb68e29bd18392e98e6ba681f0b3)`()` <a id="structFRHAPI__MatchWithPlayers_1a720ccb68e29bd18392e98e6ba681f0b3"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

<br>
#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a6d9557e03c00eac2399e3cc03ecc340b)`()` <a id="structFRHAPI__MatchWithPlayers_1a6d9557e03c00eac2399e3cc03ecc340b"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a679f4e4ebdcc22951ef8d9c287104828)`() const` <a id="structFRHAPI__MatchWithPlayers_1a679f4e4ebdcc22951ef8d9c287104828"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1ac26b9b754b645103ecf471d14d9ac614)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1ac26b9b754b645103ecf471d14d9ac614"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a434e492617d80c9aa428ae7db890085f)`(int32 & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a434e492617d80c9aa428ae7db890085f"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchWithPlayers_1a3ab52dca5ef193d72603a5ffd0152a6e)`()` <a id="structFRHAPI__MatchWithPlayers_1a3ab52dca5ef193d72603a5ffd0152a6e"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchWithPlayers_1ac450f87420dad7ae85747ff7b3371163)`() const` <a id="structFRHAPI__MatchWithPlayers_1ac450f87420dad7ae85747ff7b3371163"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a017b22e86acc79649c9cbe3dfb084cf7)`(int32 NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a017b22e86acc79649c9cbe3dfb084cf7"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

<br>
#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchWithPlayers_1aaa3f48e241f0728fc8fbe273f97b0f6b)`()` <a id="structFRHAPI__MatchWithPlayers_1aaa3f48e241f0728fc8fbe273f97b0f6b"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

<br>
#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchWithPlayers_1a57cf59c04d42d2679dfb317f5994ff25)`() const` <a id="structFRHAPI__MatchWithPlayers_1a57cf59c04d42d2679dfb317f5994ff25"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchWithPlayers_1af9c7ea1ac26ee438a143433dc69b84d2)`()` <a id="structFRHAPI__MatchWithPlayers_1af9c7ea1ac26ee438a143433dc69b84d2"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

<br>
#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1ad8abc2091584f5d64c547e4fc0293693)`()` <a id="structFRHAPI__MatchWithPlayers_1ad8abc2091584f5d64c547e4fc0293693"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1a0a95e5b0d097409d1296d45360ecdb6b)`() const` <a id="structFRHAPI__MatchWithPlayers_1a0a95e5b0d097409d1296d45360ecdb6b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1ab76aceb3ef4f8089e382b5448624e791)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1ab76aceb3ef4f8089e382b5448624e791"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1a8d5ce574f9a9b6888faa5429ebb5c24e)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a8d5ce574f9a9b6888faa5429ebb5c24e"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__MatchWithPlayers_1a44101cd4f4969e55e7953fa3f2d49fc1)`()` <a id="structFRHAPI__MatchWithPlayers_1a44101cd4f4969e55e7953fa3f2d49fc1"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__MatchWithPlayers_1ac03863304f870ed000642a0552cc2d62)`() const` <a id="structFRHAPI__MatchWithPlayers_1ac03863304f870ed000642a0552cc2d62"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchWithPlayers_1a58399e4521e7a725bd57849a640e47d8)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a58399e4521e7a725bd57849a640e47d8"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchWithPlayers_1a9cf848863e68de7670c31053b3062688)`()` <a id="structFRHAPI__MatchWithPlayers_1a9cf848863e68de7670c31053b3062688"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a17fd1330acdd17ed1ccd615f9ed6f8e3)`()` <a id="structFRHAPI__MatchWithPlayers_1a17fd1330acdd17ed1ccd615f9ed6f8e3"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a9d9b14917637394b1866b65da7e6969e)`() const` <a id="structFRHAPI__MatchWithPlayers_1a9d9b14917637394b1866b65da7e6969e"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a4fa93d77c229644dc754968f1d593926)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a4fa93d77c229644dc754968f1d593926"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a404ea5bc2cb375d5010180e46d148c7d)`(FString & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a404ea5bc2cb375d5010180e46d148c7d"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchWithPlayers_1aa149013d14110236728cfc0d1f241ce2)`()` <a id="structFRHAPI__MatchWithPlayers_1aa149013d14110236728cfc0d1f241ce2"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchWithPlayers_1a9f38c583e78085b6926596c4477cd8be)`() const` <a id="structFRHAPI__MatchWithPlayers_1a9f38c583e78085b6926596c4477cd8be"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchWithPlayers_1ab321b75f719009d7ccb7ee6db1d9f8d4)`(FString NewValue)` <a id="structFRHAPI__MatchWithPlayers_1ab321b75f719009d7ccb7ee6db1d9f8d4"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

<br>
#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchWithPlayers_1a68f5a07bf08e9d29e5ab87051d4b258b)`()` <a id="structFRHAPI__MatchWithPlayers_1a68f5a07bf08e9d29e5ab87051d4b258b"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1a50146fca8b74aa27ff4541dd3736844f)`()` <a id="structFRHAPI__MatchWithPlayers_1a50146fca8b74aa27ff4541dd3736844f"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1ae4a365c577153b7eb454ed114da392a9)`() const` <a id="structFRHAPI__MatchWithPlayers_1ae4a365c577153b7eb454ed114da392a9"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1a097989068b6ac1ab03ddd42b353f78a5)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a097989068b6ac1ab03ddd42b353f78a5"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1aaeb2e271f7883b10e0bffe5d09d7625e)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1aaeb2e271f7883b10e0bffe5d09d7625e"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchWithPlayers_1a2f22670f43089cd7e81b21a4539daa14)`()` <a id="structFRHAPI__MatchWithPlayers_1a2f22670f43089cd7e81b21a4539daa14"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchWithPlayers_1a59bf1a24cbf18552603d9b3230e74a12)`() const` <a id="structFRHAPI__MatchWithPlayers_1a59bf1a24cbf18552603d9b3230e74a12"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSessions`](#structFRHAPI__MatchWithPlayers_1a0e25196e10a4e532711481d9e4056b48)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a0e25196e10a4e532711481d9e4056b48"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

<br>
#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchWithPlayers_1a5ecfbae79a24684b17957054f9d0108b)`()` <a id="structFRHAPI__MatchWithPlayers_1a5ecfbae79a24684b17957054f9d0108b"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a6a4ee04c5df55ee9a5cf220fca3ff4c6)`()` <a id="structFRHAPI__MatchWithPlayers_1a6a4ee04c5df55ee9a5cf220fca3ff4c6"></a>

Gets the value of Instances_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a032389f9a75fbc3f854c52ed09ee6ff7)`() const` <a id="structFRHAPI__MatchWithPlayers_1a032389f9a75fbc3f854c52ed09ee6ff7"></a>

Gets the value of Instances_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a17b6220963bc9e8cbe12cfc6ad760b39)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a17b6220963bc9e8cbe12cfc6ad760b39"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a18dc419d4459b7e809d9f13e162de7c4)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a18dc419d4459b7e809d9f13e162de7c4"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchWithPlayers_1ab895ad0f79de7e5476965e27edb28c36)`()` <a id="structFRHAPI__MatchWithPlayers_1ab895ad0f79de7e5476965e27edb28c36"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchWithPlayers_1aecf24a323d8f493a5f758700c4990826)`() const` <a id="structFRHAPI__MatchWithPlayers_1aecf24a323d8f493a5f758700c4990826"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstances`](#structFRHAPI__MatchWithPlayers_1a8cd8031ee818d13341419527c160305e)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a8cd8031ee818d13341419527c160305e"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

<br>
#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchWithPlayers_1ab9984a8c8ffce98a08718561f0d29a96)`()` <a id="structFRHAPI__MatchWithPlayers_1ab9984a8c8ffce98a08718561f0d29a96"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1a528531f9c9fc2fc88e2bf877ff3c179a)`()` <a id="structFRHAPI__MatchWithPlayers_1a528531f9c9fc2fc88e2bf877ff3c179a"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1ab99b7630dd25b95a30662ae6e6b8caaa)`() const` <a id="structFRHAPI__MatchWithPlayers_1ab99b7630dd25b95a30662ae6e6b8caaa"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1a3d40c2dc48ba945c8b6a870aee622884)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a3d40c2dc48ba945c8b6a870aee622884"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1ae16ab87ac74ddb3cb4482134dd1d9613)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1ae16ab87ac74ddb3cb4482134dd1d9613"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchWithPlayers_1a9d8fd223ade66f39f82b78a8be0a4435)`()` <a id="structFRHAPI__MatchWithPlayers_1a9d8fd223ade66f39f82b78a8be0a4435"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchWithPlayers_1aaef0ace21a1b6522dc139609374e0f9d)`() const` <a id="structFRHAPI__MatchWithPlayers_1aaef0ace21a1b6522dc139609374e0f9d"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchWithPlayers_1a51b1424f0623dce14e102cea5da6634f)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a51b1424f0623dce14e102cea5da6634f"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

<br>
#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchWithPlayers_1a50c98e5a3851d361a455a9093c73e106)`()` <a id="structFRHAPI__MatchWithPlayers_1a50c98e5a3851d361a455a9093c73e106"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

<br>
#### `public inline FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1aa77eb7081ac722647e64fdae687ca605)`()` <a id="structFRHAPI__MatchWithPlayers_1aa77eb7081ac722647e64fdae687ca605"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1a3cff41f4a7b67baf216f883883989284)`() const` <a id="structFRHAPI__MatchWithPlayers_1a3cff41f4a7b67baf216f883883989284"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1a85479ca2dde430ac1113e20cc7230c50)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a85479ca2dde430ac1113e20cc7230c50"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1a7bdcb334d8a7653209603207bed2351f)`(FString & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a7bdcb334d8a7653209603207bed2351f"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchWithPlayers_1a2aad43820efae0c20ff41079e9abf672)`()` <a id="structFRHAPI__MatchWithPlayers_1a2aad43820efae0c20ff41079e9abf672"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchWithPlayers_1afd4721f4f5cf4bd76cd0b64558fc9241)`() const` <a id="structFRHAPI__MatchWithPlayers_1afd4721f4f5cf4bd76cd0b64558fc9241"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchWithPlayers_1a0e92f2cefb512ce8c8f57f986c9a3156)`(FString NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a0e92f2cefb512ce8c8f57f986c9a3156"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

<br>
#### `public inline void `[`ClearMatchId`](#structFRHAPI__MatchWithPlayers_1af0199003a37780a5d2932dff41b5757b)`()` <a id="structFRHAPI__MatchWithPlayers_1af0199003a37780a5d2932dff41b5757b"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1ab75a3c08202d129b26c4ca851053f803)`()` <a id="structFRHAPI__MatchWithPlayers_1ab75a3c08202d129b26c4ca851053f803"></a>

Gets the value of Segments_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1a80f90d439c7e041e5e2c899f04b720d1)`() const` <a id="structFRHAPI__MatchWithPlayers_1a80f90d439c7e041e5e2c899f04b720d1"></a>

Gets the value of Segments_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1a65e854d0f83b160bd7955808b1806a6f)`(const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a65e854d0f83b160bd7955808b1806a6f"></a>

Gets the value of Segments_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1ad527c627f1459a166f7cc17fb33456d8)`(TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1ad527c627f1459a166f7cc17fb33456d8"></a>

Fills OutValue with the value of Segments_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchWithPlayers_1a47c3643e60be06e24541664ff917f662)`()` <a id="structFRHAPI__MatchWithPlayers_1a47c3643e60be06e24541664ff917f662"></a>

Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchWithPlayers_1a7247d1b910eab330191f18e9a6d2c280)`() const` <a id="structFRHAPI__MatchWithPlayers_1a7247d1b910eab330191f18e9a6d2c280"></a>

Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSegments`](#structFRHAPI__MatchWithPlayers_1a87a5fc144cd3bf5a0e43d6157ccbb8f7)`(TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a87a5fc144cd3bf5a0e43d6157ccbb8f7"></a>

Sets the value of Segments_Optional and also sets Segments_IsSet to true.

<br>
#### `public inline void `[`ClearSegments`](#structFRHAPI__MatchWithPlayers_1a46b69c45f30aba090d9cb4520b83feb6)`()` <a id="structFRHAPI__MatchWithPlayers_1a46b69c45f30aba090d9cb4520b83feb6"></a>

Clears the value of Segments_Optional and sets Segments_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1ae594d5b94284527d285021cf20b28dad)`()` <a id="structFRHAPI__MatchWithPlayers_1ae594d5b94284527d285021cf20b28dad"></a>

Gets the value of Players_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1a1dcffe68679492092d2a763faf1c8965)`() const` <a id="structFRHAPI__MatchWithPlayers_1a1dcffe68679492092d2a763faf1c8965"></a>

Gets the value of Players_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1a55ab81d041dc5a6dfeb7384ad472a8fb)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a55ab81d041dc5a6dfeb7384ad472a8fb"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1a4c6d91121226331b85ff974977922a84)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a4c6d91121226331b85ff974977922a84"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchWithPlayers_1a950a6a1ffb7dbd19503d1d43435e63f6)`()` <a id="structFRHAPI__MatchWithPlayers_1a950a6a1ffb7dbd19503d1d43435e63f6"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchWithPlayers_1a1f681d378cc44a10e52b6c2003f7def9)`() const` <a id="structFRHAPI__MatchWithPlayers_1a1f681d378cc44a10e52b6c2003f7def9"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchWithPlayers_1a3062abe683ac821b47f94145d8982557)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a3062abe683ac821b47f94145d8982557"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

<br>
#### `public inline void `[`ClearPlayers`](#structFRHAPI__MatchWithPlayers_1adc79fb23da80d7a20ccd18c8bfe2801f)`()` <a id="structFRHAPI__MatchWithPlayers_1adc79fb23da80d7a20ccd18c8bfe2801f"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

<br>
