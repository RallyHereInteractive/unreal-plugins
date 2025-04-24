---
title: RHAPI_MatchSegmentRequest
---

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
`public bool `[`Type_IsNull`](#structFRHAPI__MatchSegmentRequest_1ae99412195eaab8f558dbb4772d18b55a) | true if Type_Optional has been explicitly set to null
`public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchSegmentRequest_1a9eb3821e617e4c08196d063bc2334c64) | 
`public bool `[`State_IsSet`](#structFRHAPI__MatchSegmentRequest_1ad693cb00bee4281b1e36c8a1c06b6f4f) | true if State_Optional has been set to a value
`public bool `[`State_IsNull`](#structFRHAPI__MatchSegmentRequest_1a6df61807227da37345c3299a24b4dfda) | true if State_Optional has been explicitly set to null
`public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchSegmentRequest_1ad830cbeee12fd3a99218223efc732865) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchSegmentRequest_1aa15cb9adf188d8e5d827a03763d3ab2a) | true if StartTimestamp_Optional has been set to a value
`public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchSegmentRequest_1a9bd3cb926a04d91980229ae67b1fa6f2) | true if StartTimestamp_Optional has been explicitly set to null
`public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchSegmentRequest_1ad9e131a06e73944b475c38ffae700bec) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchSegmentRequest_1a9a4793cdf472804b2e7893f657e4ece0) | true if EndTimestamp_Optional has been set to a value
`public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchSegmentRequest_1acca6016e7aabd1060d2c6ed6224d0640) | true if EndTimestamp_Optional has been explicitly set to null
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchSegmentRequest_1a3de5d52bd1d8dda3b664c502c53ba264) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchSegmentRequest_1a77358533af3b31fed689fde879b475cd) | true if DurationSeconds_Optional has been set to a value
`public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchSegmentRequest_1a7ed66e8ddad521b805b64f70d8809bd5) | true if DurationSeconds_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchSegmentRequest_1abb0505d707dd5ef98075a053e1e67f2a) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchSegmentRequest_1a715c005955b9c2ac62348cecc532b8ed) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__MatchSegmentRequest_1adbe6d3276f9d1920f6b651e88b7c6d46) | true if CustomData_Optional has been explicitly set to null
`public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchSegmentRequest_1a311dc63348fd76c42ec53bb0a879a39d) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchSegmentRequest_1a983a0c162b2f1c2d5c5c44bda2a3d797) | true if CorrelationId_Optional has been set to a value
`public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchSegmentRequest_1a5a907045b40bb4ba0efc400258dcf86a) | true if CorrelationId_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchSegmentRequest_1abda1f2ffe60706c1f44839a7152c8f46) | List of session IDs for the match.
`public bool `[`Sessions_IsSet`](#structFRHAPI__MatchSegmentRequest_1a7fb1a63926c8d5ebf55b3ff57cf61bf2) | true if Sessions_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchSegmentRequest_1ace3f094d9970fbff99105142014555d3) | List of MatchInstances for the match.
`public bool `[`Instances_IsSet`](#structFRHAPI__MatchSegmentRequest_1a649e5e22b69bb4db84e1e4862e1db942) | true if Instances_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchSegmentRequest_1a1548d9a5f4346208258780a082ec1d24) | List of allocation IDs for the match.
`public bool `[`Allocations_IsSet`](#structFRHAPI__MatchSegmentRequest_1a9fc5279a288e6118729eda867a549611) | true if Allocations_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > `[`Players_Optional`](#structFRHAPI__MatchSegmentRequest_1a92dcdda0698197aaadf51c1ea420a4f2) | List of players in the match.
`public bool `[`Players_IsSet`](#structFRHAPI__MatchSegmentRequest_1adc3cd94b304bfa1b132b85c34b399b0e) | true if Players_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchSegmentRequest_1aad32599404a25831e3af7f23fd1148ac)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchSegmentRequest_1abe7c450599557fbe93d217a8f2d6f3f1)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1a8b9d618c84b0e65dfb7b31b026e5705e)`()` | Gets the value of MatchSegment.
`public inline const FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1a5fa60a94668bc1726a365c638702d2d7)`() const` | Gets the value of MatchSegment.
`public inline void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1aba94ad794c4a03d88417122e59ee6ebb)`(const FString & NewValue)` | Sets the value of MatchSegment.
`public inline void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1a3d99cba89066e5a06cf899d85d480d29)`(FString && NewValue)` | Sets the value of MatchSegment using move semantics.
`public inline FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1aef89ba47a8d719ec3cc6e4bf691b1656)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a0f16b73545e796430688df853a00778d)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1ae4ae2475f902e8063b4157f82f73997c)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a684c50cee2cf9f87e6d83d2725c41ed3)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentRequest_1af88fd27f4f5079dd4c20d7866ddaf27e)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentRequest_1a386b3fa80c0d9119214983aa3f3585ba)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__MatchSegmentRequest_1a7191ce8fc4fdb6aa8afdf6beb9f2733c)`(const FString & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`SetType`](#structFRHAPI__MatchSegmentRequest_1a0bf22a2a4e5d51373d7745834594f8ef)`(FString && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__MatchSegmentRequest_1a643adb7d68d495cde9a96d4a300721fa)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline bool `[`IsTypeSet`](#structFRHAPI__MatchSegmentRequest_1a814444e50cec98c27d109cc79e24ce62)`() const` | Checks whether Type_Optional has been set.
`public inline void `[`SetTypeToNull`](#structFRHAPI__MatchSegmentRequest_1a484a598bab051a790debd74668588741)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTypeNull`](#structFRHAPI__MatchSegmentRequest_1aaa1d062b016222e406945a5e083bb803)`() const` | Checks whether Type_Optional is set to null.
`public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1acfd11c57c666393b31c300141d65fe32)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a9e4990258d4671f22866bb34906ade14)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1ac5fe8fc67c02f84387506d43720d1ed5)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a3098dff2c2fa11c822b969cc9c5bc449)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentRequest_1ade3fffcf9379d960ea851f966505d849)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentRequest_1acf8c71729abeae5ec9ffb0969c4d05af)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetState`](#structFRHAPI__MatchSegmentRequest_1a926e45a6488c814de88af75ac4532213)`(const ERHAPI_MatchState & NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline void `[`SetState`](#structFRHAPI__MatchSegmentRequest_1ae7f41989b42d0436200b5f112f800e9e)`(ERHAPI_MatchState && NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true using move semantics.
`public inline void `[`ClearState`](#structFRHAPI__MatchSegmentRequest_1a8c7dcd730489e19c038d0d360941d771)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline bool `[`IsStateSet`](#structFRHAPI__MatchSegmentRequest_1a43c6a8047fc516be1c4981e3ae1672d7)`() const` | Checks whether State_Optional has been set.
`public inline void `[`SetStateToNull`](#structFRHAPI__MatchSegmentRequest_1a34f21f39ee68ade8dace9ca378356c92)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStateNull`](#structFRHAPI__MatchSegmentRequest_1a0e0459ea3fafb4e298821c79570e82c3)`() const` | Checks whether State_Optional is set to null.
`public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a8b97b0cc34307b50ba2886a70421e419)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1abe5d1de959ce6469b0568e221cc2ef29)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a5a6e110b4706a1f6a0319de9675c8112)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a6b7544eee21185d51e49672afb090b28)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1a6a297fa5dc4751f4f3cfc4b1ad401e71)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1aa65aafe91ae32dbfd7035998d7ec8fc3)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a54ab3972e8c56a844a393f7271261d70)`(const FDateTime & NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1ac104922ff404be0aebe28ea17a6a5057)`(FDateTime && NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a89c74d5e241723f999052d1e198f11a5)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline bool `[`IsStartTimestampSet`](#structFRHAPI__MatchSegmentRequest_1a4e63ed6a1e6783799cb4ae7a607f6496)`() const` | Checks whether StartTimestamp_Optional has been set.
`public inline void `[`SetStartTimestampToNull`](#structFRHAPI__MatchSegmentRequest_1ae06f6c8722129fabf2579de1b74fcf4f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStartTimestampNull`](#structFRHAPI__MatchSegmentRequest_1a8a72a845426b11460e4c3ccf532d0c1a)`() const` | Checks whether StartTimestamp_Optional is set to null.
`public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a4883e2016a0ac1bcb81d60ff9a85ae6e)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a448fe22ffdf20f0f253143dd9339d4ca)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a6112fcf4c8e0007aa41197906959300b)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a4c86cd76c195017d4267db5932e01741)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1af2bc5279893b8c01bcc579b339ece358)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1aff8edc82d6298eb4f9bbc91956126cc0)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1adb7dd7148bfdbebe2714deaabe9889b2)`(const FDateTime & NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1aa8d6c38bfe646c61c87a6bb8381eedec)`(FDateTime && NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1ae11be37bd9f3f646a788ad56a5250f55)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline bool `[`IsEndTimestampSet`](#structFRHAPI__MatchSegmentRequest_1a9c2b8b20caeca4223a8c607890b7ffc0)`() const` | Checks whether EndTimestamp_Optional has been set.
`public inline void `[`SetEndTimestampToNull`](#structFRHAPI__MatchSegmentRequest_1ac9732b04a850cfeb6142a7f434fbf2ba)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsEndTimestampNull`](#structFRHAPI__MatchSegmentRequest_1a8eba57094406204b119ebe79b04b7b42)`() const` | Checks whether EndTimestamp_Optional is set to null.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a2657fc9a297b9a159b107e713774db8c)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a7d5e71dd1b3e106796e942637259b149)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a4a1ef16f38566ceb1157e0e1a8726b88)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a8b86b2ce21ca3a5dd9c89d04d14061a0)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentRequest_1a763ea83d286e2df08515f22e7d637ef4)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentRequest_1a2774537f7bcfe1bb5bdcf9d49fd6b95a)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1acb1f6d0671079cfb7e993f4e4ef8a2d8)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1adba5eeaa20d3db4028798fc1dbcecbbe)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1ab41aef77bfcccf8cf329309671101fd8)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchSegmentRequest_1a0938833a3717544683e4ae34b1bd9a55)`() const` | Checks whether DurationSeconds_Optional has been set.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchSegmentRequest_1a24262b2fd97565326e67cc86c76974c0)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchSegmentRequest_1ad27dc476dbe4fbdfc2076753fcc36788)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchSegmentRequest_1a300e791e74f250dbf8ae3e5f4ae3b079)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchSegmentRequest_1a03a2465d002399a060d9d2a682ba1fbc)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1ad676ef0728ebfeaa283e72596b0ee509)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1abb99103dcbc5de02c405d53d3221aad9)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1afe49d8b767a8d1095c8be08abaa4fe1b)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1af46bfbebc861f17b7ff548f0295a8150)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentRequest_1a04f965d8e0d79bf59a4b9388112f7522)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentRequest_1aa0e660ff30c2a9e93d001f30a4ab32b1)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentRequest_1ab73f2515884809a80101e30c69b1e1d7)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentRequest_1adc5a696be88dbb6606a9eaf8fa20ad66)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentRequest_1adb2c7a7e1606c8ab240c7023ec84fa16)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchSegmentRequest_1aa546682431338e417ac1c0bdcca7828b)`() const` | Checks whether CustomData_Optional has been set.
`public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchSegmentRequest_1a7cd9963a953e8241c9b0af2096af13fe)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchSegmentRequest_1ac17166c811c706074f0a6bab35d1a855)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a51d01da66c228b723313689d54c9ec81)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a27db44b96b2c9c6c5152f62bdeb236c8)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a6ba1643aa3d5a436ac339d8437243c05)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a0b575c8d3423aa2eb542f13dafb071ee)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentRequest_1a231ce754bfb9500eeb7ba473b8d4e4ce)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentRequest_1a31f7b893423928f3b452366b9b0bfce4)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a7552f8fff64a204e64a48fcea060d52a)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a6836fdfb5b24ea86b65898ba2102f32c)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a0dbc4d704dfd89f3f4053397378cf59c)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline bool `[`IsCorrelationIdSet`](#structFRHAPI__MatchSegmentRequest_1ab955dd9752cfe8fe12d8bb924ee50b9a)`() const` | Checks whether CorrelationId_Optional has been set.
`public inline void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchSegmentRequest_1afe40a79350b071ac7d31ce355cc8eec5)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchSegmentRequest_1a89bb2e7ace8fbda8aededc6335b8e516)`() const` | Checks whether CorrelationId_Optional is set to null.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1ab6eb851da526a6c1594094e22f7ad211)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a2c76927b56178bc420ea3d90d8c026d6)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1aff51e29d754b0c4d01ca82e85c8df8d1)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a50b46a4d534481167defa7f8aa503f6d)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentRequest_1ad8c930338ce66094a218d2384c811e82)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentRequest_1aa63047a8e7fdb789e31c5a7c18aecf07)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentRequest_1a71d64ef64076fb33dbe85fd27b0ebc80)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentRequest_1a08e4979f01c9f2f5e2e279fc379f037b)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentRequest_1a5eb4fa24ed25d90b716aa55936ecaa29)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline bool `[`IsSessionsSet`](#structFRHAPI__MatchSegmentRequest_1a3f7d2c5ef02ba23b6b0c7c4c42cc6723)`() const` | Checks whether Sessions_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a0c1da2f90b064d5df702b4850198ed97)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a33ca75adf9eea5819a3fe4f0b37ee1a4)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1aee8c815450576ca97f88de0e0825b738)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a579b26e5aed141750750f1458be8cfc5)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentRequest_1a1735a03982934bf6eb3228bb39aaf935)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentRequest_1a6583e4d9524dff7e329a3ac16b900250)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentRequest_1ac9b9894131b912703887d98444d4e906)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentRequest_1a6125aec8a398816c835f22005b08a202)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentRequest_1a82eb96ccb52be59ac46ed6dff2792784)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline bool `[`IsInstancesSet`](#structFRHAPI__MatchSegmentRequest_1a42f683f3c01c6553de76eaedc405b841)`() const` | Checks whether Instances_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a27d548133dba85100f3434e80e641cff)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a18613a1ed2cf3566a180e047a256f456)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a181d847afb2b2694d2e11520cbe7e7b8)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1ac639d4779758ec6eb52c86d5e4a4787d)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentRequest_1ad6f17fb9d2b7799c29e272b9b5c734dc)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentRequest_1aa3b3783ea97df141f58b77b9738add20)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentRequest_1ac5dab1864bfffe77bd11dcf0620f1edd)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentRequest_1a77d7a902ee202fd7010850c1e96fb073)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentRequest_1a82c44276f3a07d2165c049295e0a168a)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline bool `[`IsAllocationsSet`](#structFRHAPI__MatchSegmentRequest_1a8593ab3581d1d9639f511b48d4489b5c)`() const` | Checks whether Allocations_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a7a0215fe4638c58919f8a8137f520fd2)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a367803490b6e7367b8cdd48e3b52d75a)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1abc2d761aac8a567cdc02f04a2d3e13d8)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a5c1318286920615fe22d34216d649e97)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentRequest_1af434afc0dfcb21362c70cd3361936b5c)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentRequest_1a10a13b5b72ee9e0020bec9f14d5dbab0)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentRequest_1acf7d8cf338ea3ea212687ed62f9ffcd0)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentRequest_1a23034fa8694f23ccdf9a167f4bbe442c)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentRequest_1a82789e62a1025e16304f51dce9461f75)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.
`public inline bool `[`IsPlayersSet`](#structFRHAPI__MatchSegmentRequest_1a1ef288ace91624b7ec230ac3f070ca6c)`() const` | Checks whether Players_Optional has been set.

### Members

#### `public FString `[`MatchSegment`](#structFRHAPI__MatchSegmentRequest_1a89e1688873b68a9d18fd23b1b586788d) <a id="structFRHAPI__MatchSegmentRequest_1a89e1688873b68a9d18fd23b1b586788d"></a>

Segment ID of the match.

#### `public FString `[`Type_Optional`](#structFRHAPI__MatchSegmentRequest_1aab68ef98c0c55fb95b65088da276ad48) <a id="structFRHAPI__MatchSegmentRequest_1aab68ef98c0c55fb95b65088da276ad48"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__MatchSegmentRequest_1a44f780b34900c4b1927cc0d1e48c2213) <a id="structFRHAPI__MatchSegmentRequest_1a44f780b34900c4b1927cc0d1e48c2213"></a>

true if Type_Optional has been set to a value

#### `public bool `[`Type_IsNull`](#structFRHAPI__MatchSegmentRequest_1ae99412195eaab8f558dbb4772d18b55a) <a id="structFRHAPI__MatchSegmentRequest_1ae99412195eaab8f558dbb4772d18b55a"></a>

true if Type_Optional has been explicitly set to null

#### `public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchSegmentRequest_1a9eb3821e617e4c08196d063bc2334c64) <a id="structFRHAPI__MatchSegmentRequest_1a9eb3821e617e4c08196d063bc2334c64"></a>

#### `public bool `[`State_IsSet`](#structFRHAPI__MatchSegmentRequest_1ad693cb00bee4281b1e36c8a1c06b6f4f) <a id="structFRHAPI__MatchSegmentRequest_1ad693cb00bee4281b1e36c8a1c06b6f4f"></a>

true if State_Optional has been set to a value

#### `public bool `[`State_IsNull`](#structFRHAPI__MatchSegmentRequest_1a6df61807227da37345c3299a24b4dfda) <a id="structFRHAPI__MatchSegmentRequest_1a6df61807227da37345c3299a24b4dfda"></a>

true if State_Optional has been explicitly set to null

#### `public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchSegmentRequest_1ad830cbeee12fd3a99218223efc732865) <a id="structFRHAPI__MatchSegmentRequest_1ad830cbeee12fd3a99218223efc732865"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchSegmentRequest_1aa15cb9adf188d8e5d827a03763d3ab2a) <a id="structFRHAPI__MatchSegmentRequest_1aa15cb9adf188d8e5d827a03763d3ab2a"></a>

true if StartTimestamp_Optional has been set to a value

#### `public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchSegmentRequest_1a9bd3cb926a04d91980229ae67b1fa6f2) <a id="structFRHAPI__MatchSegmentRequest_1a9bd3cb926a04d91980229ae67b1fa6f2"></a>

true if StartTimestamp_Optional has been explicitly set to null

#### `public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchSegmentRequest_1ad9e131a06e73944b475c38ffae700bec) <a id="structFRHAPI__MatchSegmentRequest_1ad9e131a06e73944b475c38ffae700bec"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchSegmentRequest_1a9a4793cdf472804b2e7893f657e4ece0) <a id="structFRHAPI__MatchSegmentRequest_1a9a4793cdf472804b2e7893f657e4ece0"></a>

true if EndTimestamp_Optional has been set to a value

#### `public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchSegmentRequest_1acca6016e7aabd1060d2c6ed6224d0640) <a id="structFRHAPI__MatchSegmentRequest_1acca6016e7aabd1060d2c6ed6224d0640"></a>

true if EndTimestamp_Optional has been explicitly set to null

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchSegmentRequest_1a3de5d52bd1d8dda3b664c502c53ba264) <a id="structFRHAPI__MatchSegmentRequest_1a3de5d52bd1d8dda3b664c502c53ba264"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchSegmentRequest_1a77358533af3b31fed689fde879b475cd) <a id="structFRHAPI__MatchSegmentRequest_1a77358533af3b31fed689fde879b475cd"></a>

true if DurationSeconds_Optional has been set to a value

#### `public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchSegmentRequest_1a7ed66e8ddad521b805b64f70d8809bd5) <a id="structFRHAPI__MatchSegmentRequest_1a7ed66e8ddad521b805b64f70d8809bd5"></a>

true if DurationSeconds_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchSegmentRequest_1abb0505d707dd5ef98075a053e1e67f2a) <a id="structFRHAPI__MatchSegmentRequest_1abb0505d707dd5ef98075a053e1e67f2a"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchSegmentRequest_1a715c005955b9c2ac62348cecc532b8ed) <a id="structFRHAPI__MatchSegmentRequest_1a715c005955b9c2ac62348cecc532b8ed"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__MatchSegmentRequest_1adbe6d3276f9d1920f6b651e88b7c6d46) <a id="structFRHAPI__MatchSegmentRequest_1adbe6d3276f9d1920f6b651e88b7c6d46"></a>

true if CustomData_Optional has been explicitly set to null

#### `public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchSegmentRequest_1a311dc63348fd76c42ec53bb0a879a39d) <a id="structFRHAPI__MatchSegmentRequest_1a311dc63348fd76c42ec53bb0a879a39d"></a>

#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchSegmentRequest_1a983a0c162b2f1c2d5c5c44bda2a3d797) <a id="structFRHAPI__MatchSegmentRequest_1a983a0c162b2f1c2d5c5c44bda2a3d797"></a>

true if CorrelationId_Optional has been set to a value

#### `public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchSegmentRequest_1a5a907045b40bb4ba0efc400258dcf86a) <a id="structFRHAPI__MatchSegmentRequest_1a5a907045b40bb4ba0efc400258dcf86a"></a>

true if CorrelationId_Optional has been explicitly set to null

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchSegmentRequest_1aad32599404a25831e3af7f23fd1148ac)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchSegmentRequest_1aad32599404a25831e3af7f23fd1148ac"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchSegmentRequest_1abe7c450599557fbe93d217a8f2d6f3f1)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchSegmentRequest_1abe7c450599557fbe93d217a8f2d6f3f1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1a8b9d618c84b0e65dfb7b31b026e5705e)`()` <a id="structFRHAPI__MatchSegmentRequest_1a8b9d618c84b0e65dfb7b31b026e5705e"></a>

Gets the value of MatchSegment.

#### `public inline const FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1a5fa60a94668bc1726a365c638702d2d7)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a5fa60a94668bc1726a365c638702d2d7"></a>

Gets the value of MatchSegment.

#### `public inline void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1aba94ad794c4a03d88417122e59ee6ebb)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1aba94ad794c4a03d88417122e59ee6ebb"></a>

Sets the value of MatchSegment.

#### `public inline void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1a3d99cba89066e5a06cf899d85d480d29)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a3d99cba89066e5a06cf899d85d480d29"></a>

Sets the value of MatchSegment using move semantics.

#### `public inline FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1aef89ba47a8d719ec3cc6e4bf691b1656)`()` <a id="structFRHAPI__MatchSegmentRequest_1aef89ba47a8d719ec3cc6e4bf691b1656"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a0f16b73545e796430688df853a00778d)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a0f16b73545e796430688df853a00778d"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1ae4ae2475f902e8063b4157f82f73997c)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1ae4ae2475f902e8063b4157f82f73997c"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a684c50cee2cf9f87e6d83d2725c41ed3)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a684c50cee2cf9f87e6d83d2725c41ed3"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentRequest_1af88fd27f4f5079dd4c20d7866ddaf27e)`()` <a id="structFRHAPI__MatchSegmentRequest_1af88fd27f4f5079dd4c20d7866ddaf27e"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentRequest_1a386b3fa80c0d9119214983aa3f3585ba)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a386b3fa80c0d9119214983aa3f3585ba"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType`](#structFRHAPI__MatchSegmentRequest_1a7191ce8fc4fdb6aa8afdf6beb9f2733c)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a7191ce8fc4fdb6aa8afdf6beb9f2733c"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline void `[`SetType`](#structFRHAPI__MatchSegmentRequest_1a0bf22a2a4e5d51373d7745834594f8ef)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a0bf22a2a4e5d51373d7745834594f8ef"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__MatchSegmentRequest_1a643adb7d68d495cde9a96d4a300721fa)`()` <a id="structFRHAPI__MatchSegmentRequest_1a643adb7d68d495cde9a96d4a300721fa"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline bool `[`IsTypeSet`](#structFRHAPI__MatchSegmentRequest_1a814444e50cec98c27d109cc79e24ce62)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a814444e50cec98c27d109cc79e24ce62"></a>

Checks whether Type_Optional has been set.

#### `public inline void `[`SetTypeToNull`](#structFRHAPI__MatchSegmentRequest_1a484a598bab051a790debd74668588741)`()` <a id="structFRHAPI__MatchSegmentRequest_1a484a598bab051a790debd74668588741"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTypeNull`](#structFRHAPI__MatchSegmentRequest_1aaa1d062b016222e406945a5e083bb803)`() const` <a id="structFRHAPI__MatchSegmentRequest_1aaa1d062b016222e406945a5e083bb803"></a>

Checks whether Type_Optional is set to null.

#### `public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1acfd11c57c666393b31c300141d65fe32)`()` <a id="structFRHAPI__MatchSegmentRequest_1acfd11c57c666393b31c300141d65fe32"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a9e4990258d4671f22866bb34906ade14)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a9e4990258d4671f22866bb34906ade14"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1ac5fe8fc67c02f84387506d43720d1ed5)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1ac5fe8fc67c02f84387506d43720d1ed5"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a3098dff2c2fa11c822b969cc9c5bc449)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a3098dff2c2fa11c822b969cc9c5bc449"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentRequest_1ade3fffcf9379d960ea851f966505d849)`()` <a id="structFRHAPI__MatchSegmentRequest_1ade3fffcf9379d960ea851f966505d849"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentRequest_1acf8c71729abeae5ec9ffb0969c4d05af)`() const` <a id="structFRHAPI__MatchSegmentRequest_1acf8c71729abeae5ec9ffb0969c4d05af"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetState`](#structFRHAPI__MatchSegmentRequest_1a926e45a6488c814de88af75ac4532213)`(const ERHAPI_MatchState & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a926e45a6488c814de88af75ac4532213"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

#### `public inline void `[`SetState`](#structFRHAPI__MatchSegmentRequest_1ae7f41989b42d0436200b5f112f800e9e)`(ERHAPI_MatchState && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1ae7f41989b42d0436200b5f112f800e9e"></a>

Sets the value of State_Optional and also sets State_IsSet to true using move semantics.

#### `public inline void `[`ClearState`](#structFRHAPI__MatchSegmentRequest_1a8c7dcd730489e19c038d0d360941d771)`()` <a id="structFRHAPI__MatchSegmentRequest_1a8c7dcd730489e19c038d0d360941d771"></a>

Clears the value of State_Optional and sets State_IsSet to false.

#### `public inline bool `[`IsStateSet`](#structFRHAPI__MatchSegmentRequest_1a43c6a8047fc516be1c4981e3ae1672d7)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a43c6a8047fc516be1c4981e3ae1672d7"></a>

Checks whether State_Optional has been set.

#### `public inline void `[`SetStateToNull`](#structFRHAPI__MatchSegmentRequest_1a34f21f39ee68ade8dace9ca378356c92)`()` <a id="structFRHAPI__MatchSegmentRequest_1a34f21f39ee68ade8dace9ca378356c92"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStateNull`](#structFRHAPI__MatchSegmentRequest_1a0e0459ea3fafb4e298821c79570e82c3)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a0e0459ea3fafb4e298821c79570e82c3"></a>

Checks whether State_Optional is set to null.

#### `public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a8b97b0cc34307b50ba2886a70421e419)`()` <a id="structFRHAPI__MatchSegmentRequest_1a8b97b0cc34307b50ba2886a70421e419"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1abe5d1de959ce6469b0568e221cc2ef29)`() const` <a id="structFRHAPI__MatchSegmentRequest_1abe5d1de959ce6469b0568e221cc2ef29"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a5a6e110b4706a1f6a0319de9675c8112)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a5a6e110b4706a1f6a0319de9675c8112"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a6b7544eee21185d51e49672afb090b28)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a6b7544eee21185d51e49672afb090b28"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1a6a297fa5dc4751f4f3cfc4b1ad401e71)`()` <a id="structFRHAPI__MatchSegmentRequest_1a6a297fa5dc4751f4f3cfc4b1ad401e71"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1aa65aafe91ae32dbfd7035998d7ec8fc3)`() const` <a id="structFRHAPI__MatchSegmentRequest_1aa65aafe91ae32dbfd7035998d7ec8fc3"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a54ab3972e8c56a844a393f7271261d70)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a54ab3972e8c56a844a393f7271261d70"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1ac104922ff404be0aebe28ea17a6a5057)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1ac104922ff404be0aebe28ea17a6a5057"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a89c74d5e241723f999052d1e198f11a5)`()` <a id="structFRHAPI__MatchSegmentRequest_1a89c74d5e241723f999052d1e198f11a5"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

#### `public inline bool `[`IsStartTimestampSet`](#structFRHAPI__MatchSegmentRequest_1a4e63ed6a1e6783799cb4ae7a607f6496)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a4e63ed6a1e6783799cb4ae7a607f6496"></a>

Checks whether StartTimestamp_Optional has been set.

#### `public inline void `[`SetStartTimestampToNull`](#structFRHAPI__MatchSegmentRequest_1ae06f6c8722129fabf2579de1b74fcf4f)`()` <a id="structFRHAPI__MatchSegmentRequest_1ae06f6c8722129fabf2579de1b74fcf4f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStartTimestampNull`](#structFRHAPI__MatchSegmentRequest_1a8a72a845426b11460e4c3ccf532d0c1a)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a8a72a845426b11460e4c3ccf532d0c1a"></a>

Checks whether StartTimestamp_Optional is set to null.

#### `public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a4883e2016a0ac1bcb81d60ff9a85ae6e)`()` <a id="structFRHAPI__MatchSegmentRequest_1a4883e2016a0ac1bcb81d60ff9a85ae6e"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a448fe22ffdf20f0f253143dd9339d4ca)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a448fe22ffdf20f0f253143dd9339d4ca"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a6112fcf4c8e0007aa41197906959300b)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a6112fcf4c8e0007aa41197906959300b"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a4c86cd76c195017d4267db5932e01741)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a4c86cd76c195017d4267db5932e01741"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1af2bc5279893b8c01bcc579b339ece358)`()` <a id="structFRHAPI__MatchSegmentRequest_1af2bc5279893b8c01bcc579b339ece358"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1aff8edc82d6298eb4f9bbc91956126cc0)`() const` <a id="structFRHAPI__MatchSegmentRequest_1aff8edc82d6298eb4f9bbc91956126cc0"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1adb7dd7148bfdbebe2714deaabe9889b2)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1adb7dd7148bfdbebe2714deaabe9889b2"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1aa8d6c38bfe646c61c87a6bb8381eedec)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1aa8d6c38bfe646c61c87a6bb8381eedec"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1ae11be37bd9f3f646a788ad56a5250f55)`()` <a id="structFRHAPI__MatchSegmentRequest_1ae11be37bd9f3f646a788ad56a5250f55"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

#### `public inline bool `[`IsEndTimestampSet`](#structFRHAPI__MatchSegmentRequest_1a9c2b8b20caeca4223a8c607890b7ffc0)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a9c2b8b20caeca4223a8c607890b7ffc0"></a>

Checks whether EndTimestamp_Optional has been set.

#### `public inline void `[`SetEndTimestampToNull`](#structFRHAPI__MatchSegmentRequest_1ac9732b04a850cfeb6142a7f434fbf2ba)`()` <a id="structFRHAPI__MatchSegmentRequest_1ac9732b04a850cfeb6142a7f434fbf2ba"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsEndTimestampNull`](#structFRHAPI__MatchSegmentRequest_1a8eba57094406204b119ebe79b04b7b42)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a8eba57094406204b119ebe79b04b7b42"></a>

Checks whether EndTimestamp_Optional is set to null.

#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a2657fc9a297b9a159b107e713774db8c)`()` <a id="structFRHAPI__MatchSegmentRequest_1a2657fc9a297b9a159b107e713774db8c"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a7d5e71dd1b3e106796e942637259b149)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a7d5e71dd1b3e106796e942637259b149"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a4a1ef16f38566ceb1157e0e1a8726b88)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a4a1ef16f38566ceb1157e0e1a8726b88"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a8b86b2ce21ca3a5dd9c89d04d14061a0)`(int32 & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a8b86b2ce21ca3a5dd9c89d04d14061a0"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentRequest_1a763ea83d286e2df08515f22e7d637ef4)`()` <a id="structFRHAPI__MatchSegmentRequest_1a763ea83d286e2df08515f22e7d637ef4"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentRequest_1a2774537f7bcfe1bb5bdcf9d49fd6b95a)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a2774537f7bcfe1bb5bdcf9d49fd6b95a"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1acb1f6d0671079cfb7e993f4e4ef8a2d8)`(const int32 & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1acb1f6d0671079cfb7e993f4e4ef8a2d8"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1adba5eeaa20d3db4028798fc1dbcecbbe)`(int32 && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1adba5eeaa20d3db4028798fc1dbcecbbe"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1ab41aef77bfcccf8cf329309671101fd8)`()` <a id="structFRHAPI__MatchSegmentRequest_1ab41aef77bfcccf8cf329309671101fd8"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchSegmentRequest_1a0938833a3717544683e4ae34b1bd9a55)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a0938833a3717544683e4ae34b1bd9a55"></a>

Checks whether DurationSeconds_Optional has been set.

#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchSegmentRequest_1a24262b2fd97565326e67cc86c76974c0)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a24262b2fd97565326e67cc86c76974c0"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchSegmentRequest_1ad27dc476dbe4fbdfc2076753fcc36788)`()` <a id="structFRHAPI__MatchSegmentRequest_1ad27dc476dbe4fbdfc2076753fcc36788"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchSegmentRequest_1a300e791e74f250dbf8ae3e5f4ae3b079)`()` <a id="structFRHAPI__MatchSegmentRequest_1a300e791e74f250dbf8ae3e5f4ae3b079"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchSegmentRequest_1a03a2465d002399a060d9d2a682ba1fbc)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a03a2465d002399a060d9d2a682ba1fbc"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1ad676ef0728ebfeaa283e72596b0ee509)`()` <a id="structFRHAPI__MatchSegmentRequest_1ad676ef0728ebfeaa283e72596b0ee509"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1abb99103dcbc5de02c405d53d3221aad9)`() const` <a id="structFRHAPI__MatchSegmentRequest_1abb99103dcbc5de02c405d53d3221aad9"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1afe49d8b767a8d1095c8be08abaa4fe1b)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1afe49d8b767a8d1095c8be08abaa4fe1b"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1af46bfbebc861f17b7ff548f0295a8150)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1af46bfbebc861f17b7ff548f0295a8150"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentRequest_1a04f965d8e0d79bf59a4b9388112f7522)`()` <a id="structFRHAPI__MatchSegmentRequest_1a04f965d8e0d79bf59a4b9388112f7522"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentRequest_1aa0e660ff30c2a9e93d001f30a4ab32b1)`() const` <a id="structFRHAPI__MatchSegmentRequest_1aa0e660ff30c2a9e93d001f30a4ab32b1"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentRequest_1ab73f2515884809a80101e30c69b1e1d7)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1ab73f2515884809a80101e30c69b1e1d7"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentRequest_1adc5a696be88dbb6606a9eaf8fa20ad66)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1adc5a696be88dbb6606a9eaf8fa20ad66"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentRequest_1adb2c7a7e1606c8ab240c7023ec84fa16)`()` <a id="structFRHAPI__MatchSegmentRequest_1adb2c7a7e1606c8ab240c7023ec84fa16"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchSegmentRequest_1aa546682431338e417ac1c0bdcca7828b)`() const` <a id="structFRHAPI__MatchSegmentRequest_1aa546682431338e417ac1c0bdcca7828b"></a>

Checks whether CustomData_Optional has been set.

#### `public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchSegmentRequest_1a7cd9963a953e8241c9b0af2096af13fe)`()` <a id="structFRHAPI__MatchSegmentRequest_1a7cd9963a953e8241c9b0af2096af13fe"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchSegmentRequest_1ac17166c811c706074f0a6bab35d1a855)`() const` <a id="structFRHAPI__MatchSegmentRequest_1ac17166c811c706074f0a6bab35d1a855"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a51d01da66c228b723313689d54c9ec81)`()` <a id="structFRHAPI__MatchSegmentRequest_1a51d01da66c228b723313689d54c9ec81"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a27db44b96b2c9c6c5152f62bdeb236c8)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a27db44b96b2c9c6c5152f62bdeb236c8"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a6ba1643aa3d5a436ac339d8437243c05)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a6ba1643aa3d5a436ac339d8437243c05"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a0b575c8d3423aa2eb542f13dafb071ee)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a0b575c8d3423aa2eb542f13dafb071ee"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentRequest_1a231ce754bfb9500eeb7ba473b8d4e4ce)`()` <a id="structFRHAPI__MatchSegmentRequest_1a231ce754bfb9500eeb7ba473b8d4e4ce"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentRequest_1a31f7b893423928f3b452366b9b0bfce4)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a31f7b893423928f3b452366b9b0bfce4"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a7552f8fff64a204e64a48fcea060d52a)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a7552f8fff64a204e64a48fcea060d52a"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a6836fdfb5b24ea86b65898ba2102f32c)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a6836fdfb5b24ea86b65898ba2102f32c"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a0dbc4d704dfd89f3f4053397378cf59c)`()` <a id="structFRHAPI__MatchSegmentRequest_1a0dbc4d704dfd89f3f4053397378cf59c"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline bool `[`IsCorrelationIdSet`](#structFRHAPI__MatchSegmentRequest_1ab955dd9752cfe8fe12d8bb924ee50b9a)`() const` <a id="structFRHAPI__MatchSegmentRequest_1ab955dd9752cfe8fe12d8bb924ee50b9a"></a>

Checks whether CorrelationId_Optional has been set.

#### `public inline void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchSegmentRequest_1afe40a79350b071ac7d31ce355cc8eec5)`()` <a id="structFRHAPI__MatchSegmentRequest_1afe40a79350b071ac7d31ce355cc8eec5"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchSegmentRequest_1a89bb2e7ace8fbda8aededc6335b8e516)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a89bb2e7ace8fbda8aededc6335b8e516"></a>

Checks whether CorrelationId_Optional is set to null.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1ab6eb851da526a6c1594094e22f7ad211)`()` <a id="structFRHAPI__MatchSegmentRequest_1ab6eb851da526a6c1594094e22f7ad211"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a2c76927b56178bc420ea3d90d8c026d6)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a2c76927b56178bc420ea3d90d8c026d6"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1aff51e29d754b0c4d01ca82e85c8df8d1)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1aff51e29d754b0c4d01ca82e85c8df8d1"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a50b46a4d534481167defa7f8aa503f6d)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a50b46a4d534481167defa7f8aa503f6d"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentRequest_1ad8c930338ce66094a218d2384c811e82)`()` <a id="structFRHAPI__MatchSegmentRequest_1ad8c930338ce66094a218d2384c811e82"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentRequest_1aa63047a8e7fdb789e31c5a7c18aecf07)`() const` <a id="structFRHAPI__MatchSegmentRequest_1aa63047a8e7fdb789e31c5a7c18aecf07"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentRequest_1a71d64ef64076fb33dbe85fd27b0ebc80)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a71d64ef64076fb33dbe85fd27b0ebc80"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentRequest_1a08e4979f01c9f2f5e2e279fc379f037b)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a08e4979f01c9f2f5e2e279fc379f037b"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentRequest_1a5eb4fa24ed25d90b716aa55936ecaa29)`()` <a id="structFRHAPI__MatchSegmentRequest_1a5eb4fa24ed25d90b716aa55936ecaa29"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline bool `[`IsSessionsSet`](#structFRHAPI__MatchSegmentRequest_1a3f7d2c5ef02ba23b6b0c7c4c42cc6723)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a3f7d2c5ef02ba23b6b0c7c4c42cc6723"></a>

Checks whether Sessions_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a0c1da2f90b064d5df702b4850198ed97)`()` <a id="structFRHAPI__MatchSegmentRequest_1a0c1da2f90b064d5df702b4850198ed97"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a33ca75adf9eea5819a3fe4f0b37ee1a4)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a33ca75adf9eea5819a3fe4f0b37ee1a4"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1aee8c815450576ca97f88de0e0825b738)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1aee8c815450576ca97f88de0e0825b738"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a579b26e5aed141750750f1458be8cfc5)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a579b26e5aed141750750f1458be8cfc5"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentRequest_1a1735a03982934bf6eb3228bb39aaf935)`()` <a id="structFRHAPI__MatchSegmentRequest_1a1735a03982934bf6eb3228bb39aaf935"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentRequest_1a6583e4d9524dff7e329a3ac16b900250)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a6583e4d9524dff7e329a3ac16b900250"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentRequest_1ac9b9894131b912703887d98444d4e906)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1ac9b9894131b912703887d98444d4e906"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentRequest_1a6125aec8a398816c835f22005b08a202)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a6125aec8a398816c835f22005b08a202"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.

#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentRequest_1a82eb96ccb52be59ac46ed6dff2792784)`()` <a id="structFRHAPI__MatchSegmentRequest_1a82eb96ccb52be59ac46ed6dff2792784"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

#### `public inline bool `[`IsInstancesSet`](#structFRHAPI__MatchSegmentRequest_1a42f683f3c01c6553de76eaedc405b841)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a42f683f3c01c6553de76eaedc405b841"></a>

Checks whether Instances_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a27d548133dba85100f3434e80e641cff)`()` <a id="structFRHAPI__MatchSegmentRequest_1a27d548133dba85100f3434e80e641cff"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a18613a1ed2cf3566a180e047a256f456)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a18613a1ed2cf3566a180e047a256f456"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a181d847afb2b2694d2e11520cbe7e7b8)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a181d847afb2b2694d2e11520cbe7e7b8"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1ac639d4779758ec6eb52c86d5e4a4787d)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1ac639d4779758ec6eb52c86d5e4a4787d"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentRequest_1ad6f17fb9d2b7799c29e272b9b5c734dc)`()` <a id="structFRHAPI__MatchSegmentRequest_1ad6f17fb9d2b7799c29e272b9b5c734dc"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentRequest_1aa3b3783ea97df141f58b77b9738add20)`() const` <a id="structFRHAPI__MatchSegmentRequest_1aa3b3783ea97df141f58b77b9738add20"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentRequest_1ac5dab1864bfffe77bd11dcf0620f1edd)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1ac5dab1864bfffe77bd11dcf0620f1edd"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentRequest_1a77d7a902ee202fd7010850c1e96fb073)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a77d7a902ee202fd7010850c1e96fb073"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentRequest_1a82c44276f3a07d2165c049295e0a168a)`()` <a id="structFRHAPI__MatchSegmentRequest_1a82c44276f3a07d2165c049295e0a168a"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

#### `public inline bool `[`IsAllocationsSet`](#structFRHAPI__MatchSegmentRequest_1a8593ab3581d1d9639f511b48d4489b5c)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a8593ab3581d1d9639f511b48d4489b5c"></a>

Checks whether Allocations_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a7a0215fe4638c58919f8a8137f520fd2)`()` <a id="structFRHAPI__MatchSegmentRequest_1a7a0215fe4638c58919f8a8137f520fd2"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a367803490b6e7367b8cdd48e3b52d75a)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a367803490b6e7367b8cdd48e3b52d75a"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1abc2d761aac8a567cdc02f04a2d3e13d8)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1abc2d761aac8a567cdc02f04a2d3e13d8"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a5c1318286920615fe22d34216d649e97)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a5c1318286920615fe22d34216d649e97"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentRequest_1af434afc0dfcb21362c70cd3361936b5c)`()` <a id="structFRHAPI__MatchSegmentRequest_1af434afc0dfcb21362c70cd3361936b5c"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentRequest_1a10a13b5b72ee9e0020bec9f14d5dbab0)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a10a13b5b72ee9e0020bec9f14d5dbab0"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentRequest_1acf7d8cf338ea3ea212687ed62f9ffcd0)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1acf7d8cf338ea3ea212687ed62f9ffcd0"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentRequest_1a23034fa8694f23ccdf9a167f4bbe442c)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a23034fa8694f23ccdf9a167f4bbe442c"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentRequest_1a82789e62a1025e16304f51dce9461f75)`()` <a id="structFRHAPI__MatchSegmentRequest_1a82789e62a1025e16304f51dce9461f75"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

#### `public inline bool `[`IsPlayersSet`](#structFRHAPI__MatchSegmentRequest_1a1ef288ace91624b7ec230ac3f070ca6c)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a1ef288ace91624b7ec230ac3f070ca6c"></a>

Checks whether Players_Optional has been set.

