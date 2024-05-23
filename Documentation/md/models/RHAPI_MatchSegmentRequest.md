# group `RHAPI_MatchSegmentRequest` <a id="group__RHAPI__MatchSegmentRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchSegmentRequest`](#structFRHAPI__MatchSegmentRequest) | 

## struct `FRHAPI_MatchSegmentRequest` <a id="structFRHAPI__MatchSegmentRequest"></a>

```
struct FRHAPI_MatchSegmentRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`MatchSegment`](#structFRHAPI__MatchSegmentRequest_1a89e1688873b68a9d18fd23b1b586788d) | Segment ID of the match.
`public FString `[`Type_Optional`](#structFRHAPI__MatchSegmentRequest_1aab68ef98c0c55fb95b65088da276ad48) | 
`public bool `[`Type_IsSet`](#structFRHAPI__MatchSegmentRequest_1a44f780b34900c4b1927cc0d1e48c2213) | true if Type_Optional has been set to a value
`public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchSegmentRequest_1a9eb3821e617e4c08196d063bc2334c64) | 
`public bool `[`State_IsSet`](#structFRHAPI__MatchSegmentRequest_1ad693cb00bee4281b1e36c8a1c06b6f4f) | true if State_Optional has been set to a value
`public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchSegmentRequest_1ad830cbeee12fd3a99218223efc732865) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchSegmentRequest_1aa15cb9adf188d8e5d827a03763d3ab2a) | true if StartTimestamp_Optional has been set to a value
`public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchSegmentRequest_1ad9e131a06e73944b475c38ffae700bec) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchSegmentRequest_1a9a4793cdf472804b2e7893f657e4ece0) | true if EndTimestamp_Optional has been set to a value
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchSegmentRequest_1a3de5d52bd1d8dda3b664c502c53ba264) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchSegmentRequest_1a77358533af3b31fed689fde879b475cd) | true if DurationSeconds_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchSegmentRequest_1abb0505d707dd5ef98075a053e1e67f2a) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchSegmentRequest_1a715c005955b9c2ac62348cecc532b8ed) | true if CustomData_Optional has been set to a value
`public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchSegmentRequest_1a311dc63348fd76c42ec53bb0a879a39d) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchSegmentRequest_1a983a0c162b2f1c2d5c5c44bda2a3d797) | true if CorrelationId_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchSegmentRequest_1abda1f2ffe60706c1f44839a7152c8f46) | List of session IDs for the match.
`public bool `[`Sessions_IsSet`](#structFRHAPI__MatchSegmentRequest_1a7fb1a63926c8d5ebf55b3ff57cf61bf2) | true if Sessions_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchSegmentRequest_1ace3f094d9970fbff99105142014555d3) | List of MatchInstances for the match.
`public bool `[`Instances_IsSet`](#structFRHAPI__MatchSegmentRequest_1a649e5e22b69bb4db84e1e4862e1db942) | true if Instances_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchSegmentRequest_1a1548d9a5f4346208258780a082ec1d24) | List of allocation IDs for the match.
`public bool `[`Allocations_IsSet`](#structFRHAPI__MatchSegmentRequest_1a9fc5279a288e6118729eda867a549611) | true if Allocations_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > `[`Players_Optional`](#structFRHAPI__MatchSegmentRequest_1a92dcdda0698197aaadf51c1ea420a4f2) | List of players in the match.
`public bool `[`Players_IsSet`](#structFRHAPI__MatchSegmentRequest_1adc3cd94b304bfa1b132b85c34b399b0e) | true if Players_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchSegmentRequest_1ade2f19b599e855966c5f2e303cefb8fc)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchSegmentRequest_1a23161b70299e90627c008b1b567373e0)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1ad7a445e45e9e4a64862b11a3dc4576d3)`()` | Gets the value of MatchSegment.
`public inline const FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1ae01f00c8a91145947d971dcc2c9d3d7a)`() const` | Gets the value of MatchSegment.
`public inline void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1aba94ad794c4a03d88417122e59ee6ebb)`(const FString & NewValue)` | Sets the value of MatchSegment.
`public inline void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1a3d99cba89066e5a06cf899d85d480d29)`(FString && NewValue)` | Sets the value of MatchSegment using move semantics.
`public inline FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a123afe13f4297160d4eca76510a53e03)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1af98812d6219bc335619a9131845c0695)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a16a438e20bd3879824458cb91bedfeb7)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a684c50cee2cf9f87e6d83d2725c41ed3)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentRequest_1a3fa5a909cbb69a9572218ca95f1084e7)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentRequest_1a782eabbb850df7f7354b72ab5ef18796)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__MatchSegmentRequest_1a7191ce8fc4fdb6aa8afdf6beb9f2733c)`(const FString & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`SetType`](#structFRHAPI__MatchSegmentRequest_1a0bf22a2a4e5d51373d7745834594f8ef)`(FString && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__MatchSegmentRequest_1a643adb7d68d495cde9a96d4a300721fa)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a4b23cf9fb27eaf90b02f05653849c431)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a3abfc7a008e812f018ea84721c5bd805)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a479d446f0c48a42f0f7989587f7c0569)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a3098dff2c2fa11c822b969cc9c5bc449)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentRequest_1a8c026dc887b40f0af5de916cfd7991e0)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentRequest_1a4e2ab79863be1ad58e72a16e61ea98df)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetState`](#structFRHAPI__MatchSegmentRequest_1a926e45a6488c814de88af75ac4532213)`(const ERHAPI_MatchState & NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline void `[`SetState`](#structFRHAPI__MatchSegmentRequest_1ae7f41989b42d0436200b5f112f800e9e)`(ERHAPI_MatchState && NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true using move semantics.
`public inline void `[`ClearState`](#structFRHAPI__MatchSegmentRequest_1a8c7dcd730489e19c038d0d360941d771)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1aa5ad24d19119235bd169522cfe4eb07b)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1aa1cd418ea16f8533ef51c378acc09edd)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1acebe5d68c52f5270b34e49defd041e3e)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a6b7544eee21185d51e49672afb090b28)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1af8b6758eaf5450e916f96256bf01edb3)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1a595192327f1f8a657ac733adacbe6441)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a54ab3972e8c56a844a393f7271261d70)`(const FDateTime & NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1ac104922ff404be0aebe28ea17a6a5057)`(FDateTime && NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a89c74d5e241723f999052d1e198f11a5)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a7862139e8a0b0883f24c8ebab8c13394)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a27b7b002d197ea565a1b594e98a27cf6)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1afa70e80b4711b220f6ffc3d0776299a8)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a4c86cd76c195017d4267db5932e01741)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1ab427a44bc2bf582fda686c9c24202488)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1a2e3cba799a642d65e2c47b395c517eb4)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1adb7dd7148bfdbebe2714deaabe9889b2)`(const FDateTime & NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1aa8d6c38bfe646c61c87a6bb8381eedec)`(FDateTime && NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1ae11be37bd9f3f646a788ad56a5250f55)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a92407ab9edc768c3ea712415be0c43f9)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a0e72768dfc4d798fe57531bc4ca5ea15)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1adec2f219851dad529f25620729cff91f)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a8b86b2ce21ca3a5dd9c89d04d14061a0)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentRequest_1ac5c61a35e136463e5d69a0d69effbf68)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentRequest_1af9dc4cf30de4a6a177d0b999db975cf4)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1acb1f6d0671079cfb7e993f4e4ef8a2d8)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1adba5eeaa20d3db4028798fc1dbcecbbe)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1ab41aef77bfcccf8cf329309671101fd8)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchSegmentRequest_1a24262b2fd97565326e67cc86c76974c0)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchSegmentRequest_1ad27dc476dbe4fbdfc2076753fcc36788)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1ace6b416f3bb5cd9fada32511d8bfe1db)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1a07d1e5048c3c842ba321105115b920ba)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1a58fd8180f57c73bf08e2b64397614ce0)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1af46bfbebc861f17b7ff548f0295a8150)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentRequest_1ac795f4a212f677c502aa0b1e5aab192c)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentRequest_1a96f7c3d809ea33586c44eecfe1ce917b)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentRequest_1ab73f2515884809a80101e30c69b1e1d7)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentRequest_1adc5a696be88dbb6606a9eaf8fa20ad66)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentRequest_1adb2c7a7e1606c8ab240c7023ec84fa16)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1ade81d0ae93a6edcfbc25aaa3ac58018a)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a305c683b0243cbf414bec654cd949ede)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a53ec6ace5bd210548c409f39c3137523)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a0b575c8d3423aa2eb542f13dafb071ee)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentRequest_1a82a98144a0febbf91ae40ca51273fa43)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentRequest_1ac59e2ebd98a0d6db3748676257ab9f76)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a7552f8fff64a204e64a48fcea060d52a)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a6836fdfb5b24ea86b65898ba2102f32c)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a0dbc4d704dfd89f3f4053397378cf59c)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1ae1c084ea18739720149b616a1763d5c2)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1aa35c6d826c50c5f1b331f157ab6b4679)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a9d3b2a33e3f9fe204bec83a9bdd2ae18)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a50b46a4d534481167defa7f8aa503f6d)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentRequest_1a55d76658e08aacf62b497281f5a6d853)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentRequest_1a936237333332759b60168ee42137af6f)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentRequest_1a71d64ef64076fb33dbe85fd27b0ebc80)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentRequest_1a08e4979f01c9f2f5e2e279fc379f037b)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentRequest_1a5eb4fa24ed25d90b716aa55936ecaa29)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a6baf7b49d674a04a48a51cf0a452cf80)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a9f749f817013d6444c4d05fa40f96934)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a055e77737725d329d82703774f414a96)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a579b26e5aed141750750f1458be8cfc5)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentRequest_1aa011a0e5d352b8c1f331214b11c35eb4)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentRequest_1a5a333903d564ececfb5541ac94bf60f0)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentRequest_1ac9b9894131b912703887d98444d4e906)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentRequest_1a6125aec8a398816c835f22005b08a202)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentRequest_1a82eb96ccb52be59ac46ed6dff2792784)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a2d952367c5864f22296c4b3608a4b8cf)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a27df8a6b1c3d012f9f9167129805c187)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a1bdf94cda4d4ee213fdcb4a7f3e898b9)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1ac639d4779758ec6eb52c86d5e4a4787d)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentRequest_1af49c7bb013a6351ae2404345ee792df5)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentRequest_1a3e3dbebe95dbdf4db518034b15840f77)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentRequest_1ac5dab1864bfffe77bd11dcf0620f1edd)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentRequest_1a77d7a902ee202fd7010850c1e96fb073)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentRequest_1a82c44276f3a07d2165c049295e0a168a)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1ad2bf4fc7c632872f301cd7b121f1e922)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a11d72526942b049b13b861c92ba24414)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a756d0c8a1bd95421ee99a4f3a82edb01)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a5c1318286920615fe22d34216d649e97)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentRequest_1a613990d7519f25d2b953d62e2334d510)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentRequest_1a18b935ccb8f9e63d9a82ce8035194e45)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentRequest_1acf7d8cf338ea3ea212687ed62f9ffcd0)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentRequest_1a23034fa8694f23ccdf9a167f4bbe442c)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentRequest_1a82789e62a1025e16304f51dce9461f75)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.

### Members

#### `public FString `[`MatchSegment`](#structFRHAPI__MatchSegmentRequest_1a89e1688873b68a9d18fd23b1b586788d) <a id="structFRHAPI__MatchSegmentRequest_1a89e1688873b68a9d18fd23b1b586788d"></a>

Segment ID of the match.

#### `public FString `[`Type_Optional`](#structFRHAPI__MatchSegmentRequest_1aab68ef98c0c55fb95b65088da276ad48) <a id="structFRHAPI__MatchSegmentRequest_1aab68ef98c0c55fb95b65088da276ad48"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__MatchSegmentRequest_1a44f780b34900c4b1927cc0d1e48c2213) <a id="structFRHAPI__MatchSegmentRequest_1a44f780b34900c4b1927cc0d1e48c2213"></a>

true if Type_Optional has been set to a value

#### `public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchSegmentRequest_1a9eb3821e617e4c08196d063bc2334c64) <a id="structFRHAPI__MatchSegmentRequest_1a9eb3821e617e4c08196d063bc2334c64"></a>

#### `public bool `[`State_IsSet`](#structFRHAPI__MatchSegmentRequest_1ad693cb00bee4281b1e36c8a1c06b6f4f) <a id="structFRHAPI__MatchSegmentRequest_1ad693cb00bee4281b1e36c8a1c06b6f4f"></a>

true if State_Optional has been set to a value

#### `public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchSegmentRequest_1ad830cbeee12fd3a99218223efc732865) <a id="structFRHAPI__MatchSegmentRequest_1ad830cbeee12fd3a99218223efc732865"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchSegmentRequest_1aa15cb9adf188d8e5d827a03763d3ab2a) <a id="structFRHAPI__MatchSegmentRequest_1aa15cb9adf188d8e5d827a03763d3ab2a"></a>

true if StartTimestamp_Optional has been set to a value

#### `public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchSegmentRequest_1ad9e131a06e73944b475c38ffae700bec) <a id="structFRHAPI__MatchSegmentRequest_1ad9e131a06e73944b475c38ffae700bec"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchSegmentRequest_1a9a4793cdf472804b2e7893f657e4ece0) <a id="structFRHAPI__MatchSegmentRequest_1a9a4793cdf472804b2e7893f657e4ece0"></a>

true if EndTimestamp_Optional has been set to a value

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchSegmentRequest_1a3de5d52bd1d8dda3b664c502c53ba264) <a id="structFRHAPI__MatchSegmentRequest_1a3de5d52bd1d8dda3b664c502c53ba264"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchSegmentRequest_1a77358533af3b31fed689fde879b475cd) <a id="structFRHAPI__MatchSegmentRequest_1a77358533af3b31fed689fde879b475cd"></a>

true if DurationSeconds_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchSegmentRequest_1abb0505d707dd5ef98075a053e1e67f2a) <a id="structFRHAPI__MatchSegmentRequest_1abb0505d707dd5ef98075a053e1e67f2a"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchSegmentRequest_1a715c005955b9c2ac62348cecc532b8ed) <a id="structFRHAPI__MatchSegmentRequest_1a715c005955b9c2ac62348cecc532b8ed"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchSegmentRequest_1a311dc63348fd76c42ec53bb0a879a39d) <a id="structFRHAPI__MatchSegmentRequest_1a311dc63348fd76c42ec53bb0a879a39d"></a>

#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchSegmentRequest_1a983a0c162b2f1c2d5c5c44bda2a3d797) <a id="structFRHAPI__MatchSegmentRequest_1a983a0c162b2f1c2d5c5c44bda2a3d797"></a>

true if CorrelationId_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchSegmentRequest_1abda1f2ffe60706c1f44839a7152c8f46) <a id="structFRHAPI__MatchSegmentRequest_1abda1f2ffe60706c1f44839a7152c8f46"></a>

List of session IDs for the match.

#### `public bool `[`Sessions_IsSet`](#structFRHAPI__MatchSegmentRequest_1a7fb1a63926c8d5ebf55b3ff57cf61bf2) <a id="structFRHAPI__MatchSegmentRequest_1a7fb1a63926c8d5ebf55b3ff57cf61bf2"></a>

true if Sessions_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchSegmentRequest_1ace3f094d9970fbff99105142014555d3) <a id="structFRHAPI__MatchSegmentRequest_1ace3f094d9970fbff99105142014555d3"></a>

List of MatchInstances for the match.

#### `public bool `[`Instances_IsSet`](#structFRHAPI__MatchSegmentRequest_1a649e5e22b69bb4db84e1e4862e1db942) <a id="structFRHAPI__MatchSegmentRequest_1a649e5e22b69bb4db84e1e4862e1db942"></a>

true if Instances_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchSegmentRequest_1a1548d9a5f4346208258780a082ec1d24) <a id="structFRHAPI__MatchSegmentRequest_1a1548d9a5f4346208258780a082ec1d24"></a>

List of allocation IDs for the match.

#### `public bool `[`Allocations_IsSet`](#structFRHAPI__MatchSegmentRequest_1a9fc5279a288e6118729eda867a549611) <a id="structFRHAPI__MatchSegmentRequest_1a9fc5279a288e6118729eda867a549611"></a>

true if Allocations_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > `[`Players_Optional`](#structFRHAPI__MatchSegmentRequest_1a92dcdda0698197aaadf51c1ea420a4f2) <a id="structFRHAPI__MatchSegmentRequest_1a92dcdda0698197aaadf51c1ea420a4f2"></a>

List of players in the match.

#### `public bool `[`Players_IsSet`](#structFRHAPI__MatchSegmentRequest_1adc3cd94b304bfa1b132b85c34b399b0e) <a id="structFRHAPI__MatchSegmentRequest_1adc3cd94b304bfa1b132b85c34b399b0e"></a>

true if Players_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchSegmentRequest_1ade2f19b599e855966c5f2e303cefb8fc)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchSegmentRequest_1ade2f19b599e855966c5f2e303cefb8fc"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchSegmentRequest_1a23161b70299e90627c008b1b567373e0)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchSegmentRequest_1a23161b70299e90627c008b1b567373e0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1ad7a445e45e9e4a64862b11a3dc4576d3)`()` <a id="structFRHAPI__MatchSegmentRequest_1ad7a445e45e9e4a64862b11a3dc4576d3"></a>

Gets the value of MatchSegment.

#### `public inline const FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1ae01f00c8a91145947d971dcc2c9d3d7a)`() const` <a id="structFRHAPI__MatchSegmentRequest_1ae01f00c8a91145947d971dcc2c9d3d7a"></a>

Gets the value of MatchSegment.

#### `public inline void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1aba94ad794c4a03d88417122e59ee6ebb)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1aba94ad794c4a03d88417122e59ee6ebb"></a>

Sets the value of MatchSegment.

#### `public inline void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1a3d99cba89066e5a06cf899d85d480d29)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a3d99cba89066e5a06cf899d85d480d29"></a>

Sets the value of MatchSegment using move semantics.

#### `public inline FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a123afe13f4297160d4eca76510a53e03)`()` <a id="structFRHAPI__MatchSegmentRequest_1a123afe13f4297160d4eca76510a53e03"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1af98812d6219bc335619a9131845c0695)`() const` <a id="structFRHAPI__MatchSegmentRequest_1af98812d6219bc335619a9131845c0695"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a16a438e20bd3879824458cb91bedfeb7)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a16a438e20bd3879824458cb91bedfeb7"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a684c50cee2cf9f87e6d83d2725c41ed3)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a684c50cee2cf9f87e6d83d2725c41ed3"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentRequest_1a3fa5a909cbb69a9572218ca95f1084e7)`()` <a id="structFRHAPI__MatchSegmentRequest_1a3fa5a909cbb69a9572218ca95f1084e7"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentRequest_1a782eabbb850df7f7354b72ab5ef18796)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a782eabbb850df7f7354b72ab5ef18796"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType`](#structFRHAPI__MatchSegmentRequest_1a7191ce8fc4fdb6aa8afdf6beb9f2733c)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a7191ce8fc4fdb6aa8afdf6beb9f2733c"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline void `[`SetType`](#structFRHAPI__MatchSegmentRequest_1a0bf22a2a4e5d51373d7745834594f8ef)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a0bf22a2a4e5d51373d7745834594f8ef"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__MatchSegmentRequest_1a643adb7d68d495cde9a96d4a300721fa)`()` <a id="structFRHAPI__MatchSegmentRequest_1a643adb7d68d495cde9a96d4a300721fa"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a4b23cf9fb27eaf90b02f05653849c431)`()` <a id="structFRHAPI__MatchSegmentRequest_1a4b23cf9fb27eaf90b02f05653849c431"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a3abfc7a008e812f018ea84721c5bd805)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a3abfc7a008e812f018ea84721c5bd805"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a479d446f0c48a42f0f7989587f7c0569)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a479d446f0c48a42f0f7989587f7c0569"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a3098dff2c2fa11c822b969cc9c5bc449)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a3098dff2c2fa11c822b969cc9c5bc449"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentRequest_1a8c026dc887b40f0af5de916cfd7991e0)`()` <a id="structFRHAPI__MatchSegmentRequest_1a8c026dc887b40f0af5de916cfd7991e0"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentRequest_1a4e2ab79863be1ad58e72a16e61ea98df)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a4e2ab79863be1ad58e72a16e61ea98df"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetState`](#structFRHAPI__MatchSegmentRequest_1a926e45a6488c814de88af75ac4532213)`(const ERHAPI_MatchState & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a926e45a6488c814de88af75ac4532213"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

#### `public inline void `[`SetState`](#structFRHAPI__MatchSegmentRequest_1ae7f41989b42d0436200b5f112f800e9e)`(ERHAPI_MatchState && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1ae7f41989b42d0436200b5f112f800e9e"></a>

Sets the value of State_Optional and also sets State_IsSet to true using move semantics.

#### `public inline void `[`ClearState`](#structFRHAPI__MatchSegmentRequest_1a8c7dcd730489e19c038d0d360941d771)`()` <a id="structFRHAPI__MatchSegmentRequest_1a8c7dcd730489e19c038d0d360941d771"></a>

Clears the value of State_Optional and sets State_IsSet to false.

#### `public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1aa5ad24d19119235bd169522cfe4eb07b)`()` <a id="structFRHAPI__MatchSegmentRequest_1aa5ad24d19119235bd169522cfe4eb07b"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1aa1cd418ea16f8533ef51c378acc09edd)`() const` <a id="structFRHAPI__MatchSegmentRequest_1aa1cd418ea16f8533ef51c378acc09edd"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1acebe5d68c52f5270b34e49defd041e3e)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1acebe5d68c52f5270b34e49defd041e3e"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a6b7544eee21185d51e49672afb090b28)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a6b7544eee21185d51e49672afb090b28"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1af8b6758eaf5450e916f96256bf01edb3)`()` <a id="structFRHAPI__MatchSegmentRequest_1af8b6758eaf5450e916f96256bf01edb3"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1a595192327f1f8a657ac733adacbe6441)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a595192327f1f8a657ac733adacbe6441"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a54ab3972e8c56a844a393f7271261d70)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a54ab3972e8c56a844a393f7271261d70"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1ac104922ff404be0aebe28ea17a6a5057)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1ac104922ff404be0aebe28ea17a6a5057"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a89c74d5e241723f999052d1e198f11a5)`()` <a id="structFRHAPI__MatchSegmentRequest_1a89c74d5e241723f999052d1e198f11a5"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

#### `public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a7862139e8a0b0883f24c8ebab8c13394)`()` <a id="structFRHAPI__MatchSegmentRequest_1a7862139e8a0b0883f24c8ebab8c13394"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a27b7b002d197ea565a1b594e98a27cf6)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a27b7b002d197ea565a1b594e98a27cf6"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1afa70e80b4711b220f6ffc3d0776299a8)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1afa70e80b4711b220f6ffc3d0776299a8"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a4c86cd76c195017d4267db5932e01741)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a4c86cd76c195017d4267db5932e01741"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1ab427a44bc2bf582fda686c9c24202488)`()` <a id="structFRHAPI__MatchSegmentRequest_1ab427a44bc2bf582fda686c9c24202488"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1a2e3cba799a642d65e2c47b395c517eb4)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a2e3cba799a642d65e2c47b395c517eb4"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1adb7dd7148bfdbebe2714deaabe9889b2)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1adb7dd7148bfdbebe2714deaabe9889b2"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1aa8d6c38bfe646c61c87a6bb8381eedec)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1aa8d6c38bfe646c61c87a6bb8381eedec"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1ae11be37bd9f3f646a788ad56a5250f55)`()` <a id="structFRHAPI__MatchSegmentRequest_1ae11be37bd9f3f646a788ad56a5250f55"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a92407ab9edc768c3ea712415be0c43f9)`()` <a id="structFRHAPI__MatchSegmentRequest_1a92407ab9edc768c3ea712415be0c43f9"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a0e72768dfc4d798fe57531bc4ca5ea15)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a0e72768dfc4d798fe57531bc4ca5ea15"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1adec2f219851dad529f25620729cff91f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1adec2f219851dad529f25620729cff91f"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a8b86b2ce21ca3a5dd9c89d04d14061a0)`(int32 & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a8b86b2ce21ca3a5dd9c89d04d14061a0"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentRequest_1ac5c61a35e136463e5d69a0d69effbf68)`()` <a id="structFRHAPI__MatchSegmentRequest_1ac5c61a35e136463e5d69a0d69effbf68"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentRequest_1af9dc4cf30de4a6a177d0b999db975cf4)`() const` <a id="structFRHAPI__MatchSegmentRequest_1af9dc4cf30de4a6a177d0b999db975cf4"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1acb1f6d0671079cfb7e993f4e4ef8a2d8)`(const int32 & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1acb1f6d0671079cfb7e993f4e4ef8a2d8"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1adba5eeaa20d3db4028798fc1dbcecbbe)`(int32 && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1adba5eeaa20d3db4028798fc1dbcecbbe"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1ab41aef77bfcccf8cf329309671101fd8)`()` <a id="structFRHAPI__MatchSegmentRequest_1ab41aef77bfcccf8cf329309671101fd8"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchSegmentRequest_1a24262b2fd97565326e67cc86c76974c0)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a24262b2fd97565326e67cc86c76974c0"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchSegmentRequest_1ad27dc476dbe4fbdfc2076753fcc36788)`()` <a id="structFRHAPI__MatchSegmentRequest_1ad27dc476dbe4fbdfc2076753fcc36788"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1ace6b416f3bb5cd9fada32511d8bfe1db)`()` <a id="structFRHAPI__MatchSegmentRequest_1ace6b416f3bb5cd9fada32511d8bfe1db"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1a07d1e5048c3c842ba321105115b920ba)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a07d1e5048c3c842ba321105115b920ba"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1a58fd8180f57c73bf08e2b64397614ce0)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a58fd8180f57c73bf08e2b64397614ce0"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1af46bfbebc861f17b7ff548f0295a8150)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1af46bfbebc861f17b7ff548f0295a8150"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentRequest_1ac795f4a212f677c502aa0b1e5aab192c)`()` <a id="structFRHAPI__MatchSegmentRequest_1ac795f4a212f677c502aa0b1e5aab192c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentRequest_1a96f7c3d809ea33586c44eecfe1ce917b)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a96f7c3d809ea33586c44eecfe1ce917b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentRequest_1ab73f2515884809a80101e30c69b1e1d7)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1ab73f2515884809a80101e30c69b1e1d7"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentRequest_1adc5a696be88dbb6606a9eaf8fa20ad66)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1adc5a696be88dbb6606a9eaf8fa20ad66"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentRequest_1adb2c7a7e1606c8ab240c7023ec84fa16)`()` <a id="structFRHAPI__MatchSegmentRequest_1adb2c7a7e1606c8ab240c7023ec84fa16"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1ade81d0ae93a6edcfbc25aaa3ac58018a)`()` <a id="structFRHAPI__MatchSegmentRequest_1ade81d0ae93a6edcfbc25aaa3ac58018a"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a305c683b0243cbf414bec654cd949ede)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a305c683b0243cbf414bec654cd949ede"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a53ec6ace5bd210548c409f39c3137523)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a53ec6ace5bd210548c409f39c3137523"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a0b575c8d3423aa2eb542f13dafb071ee)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a0b575c8d3423aa2eb542f13dafb071ee"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentRequest_1a82a98144a0febbf91ae40ca51273fa43)`()` <a id="structFRHAPI__MatchSegmentRequest_1a82a98144a0febbf91ae40ca51273fa43"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentRequest_1ac59e2ebd98a0d6db3748676257ab9f76)`() const` <a id="structFRHAPI__MatchSegmentRequest_1ac59e2ebd98a0d6db3748676257ab9f76"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a7552f8fff64a204e64a48fcea060d52a)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a7552f8fff64a204e64a48fcea060d52a"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a6836fdfb5b24ea86b65898ba2102f32c)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a6836fdfb5b24ea86b65898ba2102f32c"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a0dbc4d704dfd89f3f4053397378cf59c)`()` <a id="structFRHAPI__MatchSegmentRequest_1a0dbc4d704dfd89f3f4053397378cf59c"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1ae1c084ea18739720149b616a1763d5c2)`()` <a id="structFRHAPI__MatchSegmentRequest_1ae1c084ea18739720149b616a1763d5c2"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1aa35c6d826c50c5f1b331f157ab6b4679)`() const` <a id="structFRHAPI__MatchSegmentRequest_1aa35c6d826c50c5f1b331f157ab6b4679"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a9d3b2a33e3f9fe204bec83a9bdd2ae18)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a9d3b2a33e3f9fe204bec83a9bdd2ae18"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a50b46a4d534481167defa7f8aa503f6d)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a50b46a4d534481167defa7f8aa503f6d"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentRequest_1a55d76658e08aacf62b497281f5a6d853)`()` <a id="structFRHAPI__MatchSegmentRequest_1a55d76658e08aacf62b497281f5a6d853"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentRequest_1a936237333332759b60168ee42137af6f)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a936237333332759b60168ee42137af6f"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentRequest_1a71d64ef64076fb33dbe85fd27b0ebc80)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a71d64ef64076fb33dbe85fd27b0ebc80"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentRequest_1a08e4979f01c9f2f5e2e279fc379f037b)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a08e4979f01c9f2f5e2e279fc379f037b"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentRequest_1a5eb4fa24ed25d90b716aa55936ecaa29)`()` <a id="structFRHAPI__MatchSegmentRequest_1a5eb4fa24ed25d90b716aa55936ecaa29"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a6baf7b49d674a04a48a51cf0a452cf80)`()` <a id="structFRHAPI__MatchSegmentRequest_1a6baf7b49d674a04a48a51cf0a452cf80"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a9f749f817013d6444c4d05fa40f96934)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a9f749f817013d6444c4d05fa40f96934"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a055e77737725d329d82703774f414a96)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a055e77737725d329d82703774f414a96"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a579b26e5aed141750750f1458be8cfc5)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a579b26e5aed141750750f1458be8cfc5"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentRequest_1aa011a0e5d352b8c1f331214b11c35eb4)`()` <a id="structFRHAPI__MatchSegmentRequest_1aa011a0e5d352b8c1f331214b11c35eb4"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentRequest_1a5a333903d564ececfb5541ac94bf60f0)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a5a333903d564ececfb5541ac94bf60f0"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentRequest_1ac9b9894131b912703887d98444d4e906)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1ac9b9894131b912703887d98444d4e906"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentRequest_1a6125aec8a398816c835f22005b08a202)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a6125aec8a398816c835f22005b08a202"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.

#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentRequest_1a82eb96ccb52be59ac46ed6dff2792784)`()` <a id="structFRHAPI__MatchSegmentRequest_1a82eb96ccb52be59ac46ed6dff2792784"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a2d952367c5864f22296c4b3608a4b8cf)`()` <a id="structFRHAPI__MatchSegmentRequest_1a2d952367c5864f22296c4b3608a4b8cf"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a27df8a6b1c3d012f9f9167129805c187)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a27df8a6b1c3d012f9f9167129805c187"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a1bdf94cda4d4ee213fdcb4a7f3e898b9)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a1bdf94cda4d4ee213fdcb4a7f3e898b9"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1ac639d4779758ec6eb52c86d5e4a4787d)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1ac639d4779758ec6eb52c86d5e4a4787d"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentRequest_1af49c7bb013a6351ae2404345ee792df5)`()` <a id="structFRHAPI__MatchSegmentRequest_1af49c7bb013a6351ae2404345ee792df5"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentRequest_1a3e3dbebe95dbdf4db518034b15840f77)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a3e3dbebe95dbdf4db518034b15840f77"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentRequest_1ac5dab1864bfffe77bd11dcf0620f1edd)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1ac5dab1864bfffe77bd11dcf0620f1edd"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentRequest_1a77d7a902ee202fd7010850c1e96fb073)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a77d7a902ee202fd7010850c1e96fb073"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentRequest_1a82c44276f3a07d2165c049295e0a168a)`()` <a id="structFRHAPI__MatchSegmentRequest_1a82c44276f3a07d2165c049295e0a168a"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

#### `public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1ad2bf4fc7c632872f301cd7b121f1e922)`()` <a id="structFRHAPI__MatchSegmentRequest_1ad2bf4fc7c632872f301cd7b121f1e922"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a11d72526942b049b13b861c92ba24414)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a11d72526942b049b13b861c92ba24414"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a756d0c8a1bd95421ee99a4f3a82edb01)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a756d0c8a1bd95421ee99a4f3a82edb01"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a5c1318286920615fe22d34216d649e97)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a5c1318286920615fe22d34216d649e97"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentRequest_1a613990d7519f25d2b953d62e2334d510)`()` <a id="structFRHAPI__MatchSegmentRequest_1a613990d7519f25d2b953d62e2334d510"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentRequest_1a18b935ccb8f9e63d9a82ce8035194e45)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a18b935ccb8f9e63d9a82ce8035194e45"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentRequest_1acf7d8cf338ea3ea212687ed62f9ffcd0)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1acf7d8cf338ea3ea212687ed62f9ffcd0"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentRequest_1a23034fa8694f23ccdf9a167f4bbe442c)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a23034fa8694f23ccdf9a167f4bbe442c"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentRequest_1a82789e62a1025e16304f51dce9461f75)`()` <a id="structFRHAPI__MatchSegmentRequest_1a82789e62a1025e16304f51dce9461f75"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

