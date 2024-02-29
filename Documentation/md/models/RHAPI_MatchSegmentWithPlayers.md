# RHAPI_MatchSegmentWithPlayers <a id="group__RHAPI__MatchSegmentWithPlayers"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchSegmentWithPlayers`](#structFRHAPI__MatchSegmentWithPlayers) | 

## struct `FRHAPI_MatchSegmentWithPlayers` <a id="structFRHAPI__MatchSegmentWithPlayers"></a>

```
struct FRHAPI_MatchSegmentWithPlayers
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a9eca2a5833de95e3ed72aba8c83dc9dc) | Timestamp of when the resource was last modified.
`public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a78a113038c9fecab84e371028a42c6c1) | true if LastModifiedTimestamp_Optional has been set to a value
`public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1acc9f8a06bd40bafbf218000cc367763d) | Timestamp of when the resource was created.
`public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1afda3956f96ed763b8409e79057c5b73b) | true if CreatedTimestamp_Optional has been set to a value
`public FString `[`Type_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a291e12ebbc251c23c1d0a858af118c85) | 
`public bool `[`Type_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a4b0a303cf56ef163e65cdc5001165606) | true if Type_Optional has been set to a value
`public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a343239e117c881ef0babce8d33da22e5) | 
`public bool `[`State_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ade4d132ca8f837385a57b209022a9516) | true if State_Optional has been set to a value
`public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1abbbae2f6e11c489c93b83f44d8c80981) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ae4ed41700c0f1e95454fa7e818628f70) | true if StartTimestamp_Optional has been set to a value
`public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a03e28aa342550e7362804012a8b814dc) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a98fde9c4578a9e3a87dc35aacc09dd7f) | true if EndTimestamp_Optional has been set to a value
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a71a7c957df8d10a7c598790bd36c451b) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a15ef72098e5544655b697455c2d70728) | true if DurationSeconds_Optional has been set to a value
`public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`CustomData_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a35c1213633243a9e06a51bccaf012f89) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a702ee27225f5a4793a8bba1bc1021461) | true if CustomData_Optional has been set to a value
`public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a8b13aa7a271cf5c9a628d2fc41abb117) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ae0198259edd0be64a411dc7e0806fad7) | true if CorrelationId_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a88e0376c4953b9ee93c08c55b6058e86) | List of session IDs for the match.
`public bool `[`Sessions_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1aa91235d1ad813c404efa9d3b60fc7c8b) | true if Sessions_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1ac31b50aca8ffc33afde7b17de66ccea4) | List of MatchInstances for the match.
`public bool `[`Instances_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a47c65c74525ae2e6ffc7a8b6da41ab8d) | true if Instances_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1ad241dbbbf02018e6d8fe7b14d74f6bf8) | List of allocation IDs for the match.
`public bool `[`Allocations_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a3a3d50f05d92e12aebdf821a7b6818e7) | true if Allocations_Optional has been set to a value
`public FString `[`MatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1a4f20d61ba3cb95fd9bb22795bbd219cc) | Segment ID of the match.
`public FString `[`MatchId_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1af86245279ec671847e8f2694ebf33c24) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a1843958153ec0547171d4e430d94fe09) | true if MatchId_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > `[`Players_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1ac767b500554539f4f6964c3175bcc8c8) | List of players in the match.
`public bool `[`Players_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ae80235257daf87efc2467d0f24ed4b7b) | true if Players_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchSegmentWithPlayers_1acbc1d998c9130108e8350a1eadd92121)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchSegmentWithPlayers_1a3390eae93d957716625f79d4b088c7e0)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1acb123598ca112710267ef30a812efd4e)`()` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a26dcd14f891ba31a58145bbf90b03d29)`() const` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a09864af002efc2f6dcce72967685c46a)`(const FDateTime & DefaultValue) const` | Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ac88a859409da55d7751360b1b10411a7)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a227c503ad85f898e120863b4334e46f1)`()` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a1366657b1b85f60dea581abec8dd59c0)`() const` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a56c499afdf7ac9b97222a300b1b9ab75)`(FDateTime NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.
`public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a5a057c0d69d7bd1191fe8c02dc18b874)`()` | Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.
`public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a5e3f794cf4180b68c0e47d188ae3769b)`()` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a278915b5cca2a0b4d1584ced1f84af59)`() const` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a10ad8c3ac73a81c940a6f1d9a8e6930b)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1adacb31c1fe32898eb19fae3c66240ea0)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ad061dfc13a379b8bbc8c97323af4ef9b)`()` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a4f11ed542451103731d229f32e40b998)`() const` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a958608f27564ff0fce5a6a26600dde92)`(FDateTime NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.
`public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a2a7b395e6ff81659ce695e0d72f0a84e)`()` | Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.
`public inline FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1a3d89589469d8856d334eb138fe6fa7b8)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1afab5a348a00253c97c7a052c199278b6)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1ad474f36c06e02b6cc163ddb12e0f6a5d)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1aa2695bf92ed22c3dfa1a166cd98c9613)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1adae99c41751aa20a46b9de0e2da8a63d)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a2ddf27c21a38dd1761989e070a2b2153)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__MatchSegmentWithPlayers_1a5f27c687c94924243375d3c4e6172967)`(FString NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`ClearType`](#structFRHAPI__MatchSegmentWithPlayers_1afe765a26c85d22c1b38da4cb84a71fde)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1a61d9a8df3d311725767bcbf3130810d5)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1abafe04515b4be95db580825968899d3f)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1a93852b4e5b7800cdc3a4d2239f67f9ee)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1ad6328a671fd64e6ef8aca03ff1d28d71)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ad35dc9012b2fc5234bd90db4fb707eee)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1aefe2b2fe05ab5ba67c0f4256084c9026)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetState`](#structFRHAPI__MatchSegmentWithPlayers_1a5d96317b2ee7dea9f8b0280d26050c73)`(ERHAPI_MatchState NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline void `[`ClearState`](#structFRHAPI__MatchSegmentWithPlayers_1afa393bb3409f6076f9945972f9f23659)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a356c3357d59918ac45b5513c5e17aa38)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a1b39b58941e914e621233cc810ce8971)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a9d53de5c174dd794be4a1850fb3f7677)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a85971b368ceb883b63e656a7d71854bf)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a33c17f0999c6882ee03ab473acd19418)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a1f1dcf42a0318d7fa5fc4c85714454d7)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ab0b5ca120a9811b8da6b7080680c5bbe)`(FDateTime NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a99bdcedb9bbfb7a04d8c6a561aa69ca4)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a0fc5c9a23242c0725c4ca5687e936ebd)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ab035fa73c7fb6769b7277ff644fb20a0)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a1565c38af4ec0a0a900994dc96cbfa04)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1aa5b2ff59590f4f64ca43f00717e2198d)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a7c7b847d4f02726e03fcf1e84bfff8d3)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a6909ca14672fe7e881077c5e9e454bfa)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a32b48dedcb014be3fd79ede6cb280b28)`(FDateTime NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a0d8df68f97003699016115fabb307c88)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a8f41bd9e451a8dcabd5665e9a7daeb7a)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1afdf817db069141dae74283771c57237f)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1aa6390212cd414bf3471f8be7288d5b3d)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a356b2e5248fdb4e55df1571174b388ee)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1abccd28ecd6a2c6957e4331923f898d98)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a1bd58aacb068e3c10440efc74352e208)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a31d9f827d4e9e9f113c34008a2deeabc)`(int32 NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a859cad510bd50f14da7ec423a7c01fca)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchSegmentWithPlayers_1abbb72031ca57070ac395d6f7ec36c679)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchSegmentWithPlayers_1ad498f534581644269e95aaacc28bb0d0)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1adb7535e1771e15de691899f911680b7e)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1ab9d5f1c84215fd1b69ba07e374326a1a)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a21edb638611d95cffca043b763fff55e)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a8f96d8cf7ced0a193f474321cc901975)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a2638235b40a011d21e7fea006fc6bbe4)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ad24f4c3ea2aa2cd9ce6f1fd7d72fb874)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1ad61f6b443bb6ba3c883d1e8d81e297bb)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1af69bbc7dff23cd38b47e468eb12468a3)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a77d6313eac98a831a506a0f05bcb8763)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a008b95ad7144ca6009d79f294906b137)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1ae2bcd0a93f59d5262c5e300049721f5a)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a6d1d580a4a2efde5f9be0de1acc84032)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a5b4b501a114a4fedfa95750c0a45c5ff)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ada4eb2b94807c705274268256ce385f2)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a927af0cff111a7b68b3a1008c9d63506)`(FString NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a70facbc24f55ecb933e183842b709e04)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1ad6e5b4277a098d9dce3c1fe4f0f8689a)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a2b9154e56b179875711ee6b09f30d5b3)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1ad4ca5d24d5ddab78ee1c48c4d56f0572)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1aefb00e5d968181837820d7b9d8396ead)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1af6dc8fabec953dbea13f4c3ec335b72e)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1afd53e9d46552dd1619fdbf859cee1f8a)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a80f5b7edee0c73966c29d893bf7c2513)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentWithPlayers_1af45381b90e7f81345393fe1ec079b45a)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a7ec0c9b84c6aad73ecbdf4485c592d2a)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1aa049d80608c92cfe51643838266320c6)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a66171be1bdf3c07213b2b1cc8c767d92)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a3e45012cae3089c3f6c9fa260eca6ced)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1abd61240c9bd57e1d5042d1852e73a5f0)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a3c9b5238769f9318253af4be80838cfb)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a848787ce37c49bfcbe99728a0a1ca536)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a6247bc3fbc11566e3249a4a00a740a8f)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a681cda8fa7c051262d7808f546558cbb)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1aef96a739db4bb7932013f840cfe0bf10)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a72c14443f854c1d88afbc2e0a57ebb41)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1aa83bc8c930dfd54e9066efc3b22cf512)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a0c8d40456b231f57a2a6f106c8c40d57)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a0b6583fa38a0d9aa028b3f0bb292ca2b)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a0e385ee64ab883b54375d513a7846976)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a861e5f93aa0c9c39fad6e569e0aa8763)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1afd41faed32c852aec07817a2f9ed2c1c)`()` | Gets the value of MatchSegment.
`public inline const FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1a141367bda3fb24ea4c9d42509bc465b5)`() const` | Gets the value of MatchSegment.
`public inline void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1a1afd770ec4fef0934fb1fd58d2f719bd)`(FString NewValue)` | Sets the value of MatchSegment.
`public inline FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a347d633371db8eb8a73cc63efb3e1dcd)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1aba9f8d36a4f962eaac28ec25aecae0b8)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1afbef50f99aa26e5e888b88f419c4c2ca)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a611846110c3cc227df68cfa09252c29f)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a66f58256ef342c0857fab9075d9d61e0)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a0dcab390a83dea382a16b973abccd06c)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1aadb13cc0f05f754e2f5b15964f64d4fd)`(FString NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`ClearMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1ada9fb5b63bc3e430f786d150021e532d)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a78e05d281164e73e2953bffdd576d6c7)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a373e44be283580c0f24d49a702c1ffe1)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a74a7763b46c2e48fdeda5731006a1828)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1afc4e5cd4c781b7fbb952f413a6a0f396)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ac6f5c7b30d3c77d6bd3dfa9c5646665b)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a4060dd13f1ee2d7ccfe0fc5c7d219a87)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a227fd6dbaeb4b39bfff67a0126059a40)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a942c9f48d6a439b1a1c55c698a90b4a2)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.

#### Members

#### `public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a9eca2a5833de95e3ed72aba8c83dc9dc) <a id="structFRHAPI__MatchSegmentWithPlayers_1a9eca2a5833de95e3ed72aba8c83dc9dc"></a>

Timestamp of when the resource was last modified.

<br>
#### `public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a78a113038c9fecab84e371028a42c6c1) <a id="structFRHAPI__MatchSegmentWithPlayers_1a78a113038c9fecab84e371028a42c6c1"></a>

true if LastModifiedTimestamp_Optional has been set to a value

<br>
#### `public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1acc9f8a06bd40bafbf218000cc367763d) <a id="structFRHAPI__MatchSegmentWithPlayers_1acc9f8a06bd40bafbf218000cc367763d"></a>

Timestamp of when the resource was created.

<br>
#### `public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1afda3956f96ed763b8409e79057c5b73b) <a id="structFRHAPI__MatchSegmentWithPlayers_1afda3956f96ed763b8409e79057c5b73b"></a>

true if CreatedTimestamp_Optional has been set to a value

<br>
#### `public FString `[`Type_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a291e12ebbc251c23c1d0a858af118c85) <a id="structFRHAPI__MatchSegmentWithPlayers_1a291e12ebbc251c23c1d0a858af118c85"></a>

<br>
#### `public bool `[`Type_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a4b0a303cf56ef163e65cdc5001165606) <a id="structFRHAPI__MatchSegmentWithPlayers_1a4b0a303cf56ef163e65cdc5001165606"></a>

true if Type_Optional has been set to a value

<br>
#### `public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a343239e117c881ef0babce8d33da22e5) <a id="structFRHAPI__MatchSegmentWithPlayers_1a343239e117c881ef0babce8d33da22e5"></a>

<br>
#### `public bool `[`State_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ade4d132ca8f837385a57b209022a9516) <a id="structFRHAPI__MatchSegmentWithPlayers_1ade4d132ca8f837385a57b209022a9516"></a>

true if State_Optional has been set to a value

<br>
#### `public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1abbbae2f6e11c489c93b83f44d8c80981) <a id="structFRHAPI__MatchSegmentWithPlayers_1abbbae2f6e11c489c93b83f44d8c80981"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ae4ed41700c0f1e95454fa7e818628f70) <a id="structFRHAPI__MatchSegmentWithPlayers_1ae4ed41700c0f1e95454fa7e818628f70"></a>

true if StartTimestamp_Optional has been set to a value

<br>
#### `public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a03e28aa342550e7362804012a8b814dc) <a id="structFRHAPI__MatchSegmentWithPlayers_1a03e28aa342550e7362804012a8b814dc"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a98fde9c4578a9e3a87dc35aacc09dd7f) <a id="structFRHAPI__MatchSegmentWithPlayers_1a98fde9c4578a9e3a87dc35aacc09dd7f"></a>

true if EndTimestamp_Optional has been set to a value

<br>
#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a71a7c957df8d10a7c598790bd36c451b) <a id="structFRHAPI__MatchSegmentWithPlayers_1a71a7c957df8d10a7c598790bd36c451b"></a>

<br>
#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a15ef72098e5544655b697455c2d70728) <a id="structFRHAPI__MatchSegmentWithPlayers_1a15ef72098e5544655b697455c2d70728"></a>

true if DurationSeconds_Optional has been set to a value

<br>
#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`CustomData_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a35c1213633243a9e06a51bccaf012f89) <a id="structFRHAPI__MatchSegmentWithPlayers_1a35c1213633243a9e06a51bccaf012f89"></a>

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a702ee27225f5a4793a8bba1bc1021461) <a id="structFRHAPI__MatchSegmentWithPlayers_1a702ee27225f5a4793a8bba1bc1021461"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a8b13aa7a271cf5c9a628d2fc41abb117) <a id="structFRHAPI__MatchSegmentWithPlayers_1a8b13aa7a271cf5c9a628d2fc41abb117"></a>

<br>
#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ae0198259edd0be64a411dc7e0806fad7) <a id="structFRHAPI__MatchSegmentWithPlayers_1ae0198259edd0be64a411dc7e0806fad7"></a>

true if CorrelationId_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a88e0376c4953b9ee93c08c55b6058e86) <a id="structFRHAPI__MatchSegmentWithPlayers_1a88e0376c4953b9ee93c08c55b6058e86"></a>

List of session IDs for the match.

<br>
#### `public bool `[`Sessions_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1aa91235d1ad813c404efa9d3b60fc7c8b) <a id="structFRHAPI__MatchSegmentWithPlayers_1aa91235d1ad813c404efa9d3b60fc7c8b"></a>

true if Sessions_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1ac31b50aca8ffc33afde7b17de66ccea4) <a id="structFRHAPI__MatchSegmentWithPlayers_1ac31b50aca8ffc33afde7b17de66ccea4"></a>

List of MatchInstances for the match.

<br>
#### `public bool `[`Instances_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a47c65c74525ae2e6ffc7a8b6da41ab8d) <a id="structFRHAPI__MatchSegmentWithPlayers_1a47c65c74525ae2e6ffc7a8b6da41ab8d"></a>

true if Instances_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1ad241dbbbf02018e6d8fe7b14d74f6bf8) <a id="structFRHAPI__MatchSegmentWithPlayers_1ad241dbbbf02018e6d8fe7b14d74f6bf8"></a>

List of allocation IDs for the match.

<br>
#### `public bool `[`Allocations_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a3a3d50f05d92e12aebdf821a7b6818e7) <a id="structFRHAPI__MatchSegmentWithPlayers_1a3a3d50f05d92e12aebdf821a7b6818e7"></a>

true if Allocations_Optional has been set to a value

<br>
#### `public FString `[`MatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1a4f20d61ba3cb95fd9bb22795bbd219cc) <a id="structFRHAPI__MatchSegmentWithPlayers_1a4f20d61ba3cb95fd9bb22795bbd219cc"></a>

Segment ID of the match.

<br>
#### `public FString `[`MatchId_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1af86245279ec671847e8f2694ebf33c24) <a id="structFRHAPI__MatchSegmentWithPlayers_1af86245279ec671847e8f2694ebf33c24"></a>

<br>
#### `public bool `[`MatchId_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a1843958153ec0547171d4e430d94fe09) <a id="structFRHAPI__MatchSegmentWithPlayers_1a1843958153ec0547171d4e430d94fe09"></a>

true if MatchId_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > `[`Players_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1ac767b500554539f4f6964c3175bcc8c8) <a id="structFRHAPI__MatchSegmentWithPlayers_1ac767b500554539f4f6964c3175bcc8c8"></a>

List of players in the match.

<br>
#### `public bool `[`Players_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ae80235257daf87efc2467d0f24ed4b7b) <a id="structFRHAPI__MatchSegmentWithPlayers_1ae80235257daf87efc2467d0f24ed4b7b"></a>

true if Players_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchSegmentWithPlayers_1acbc1d998c9130108e8350a1eadd92121)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1acbc1d998c9130108e8350a1eadd92121"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchSegmentWithPlayers_1a3390eae93d957716625f79d4b088c7e0)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a3390eae93d957716625f79d4b088c7e0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1acb123598ca112710267ef30a812efd4e)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1acb123598ca112710267ef30a812efd4e"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a26dcd14f891ba31a58145bbf90b03d29)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a26dcd14f891ba31a58145bbf90b03d29"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a09864af002efc2f6dcce72967685c46a)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a09864af002efc2f6dcce72967685c46a"></a>

Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ac88a859409da55d7751360b1b10411a7)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ac88a859409da55d7751360b1b10411a7"></a>

Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a227c503ad85f898e120863b4334e46f1)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a227c503ad85f898e120863b4334e46f1"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a1366657b1b85f60dea581abec8dd59c0)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1366657b1b85f60dea581abec8dd59c0"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a56c499afdf7ac9b97222a300b1b9ab75)`(FDateTime NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a56c499afdf7ac9b97222a300b1b9ab75"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.

<br>
#### `public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a5a057c0d69d7bd1191fe8c02dc18b874)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5a057c0d69d7bd1191fe8c02dc18b874"></a>

Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a5e3f794cf4180b68c0e47d188ae3769b)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5e3f794cf4180b68c0e47d188ae3769b"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a278915b5cca2a0b4d1584ced1f84af59)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a278915b5cca2a0b4d1584ced1f84af59"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a10ad8c3ac73a81c940a6f1d9a8e6930b)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a10ad8c3ac73a81c940a6f1d9a8e6930b"></a>

Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1adacb31c1fe32898eb19fae3c66240ea0)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1adacb31c1fe32898eb19fae3c66240ea0"></a>

Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ad061dfc13a379b8bbc8c97323af4ef9b)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad061dfc13a379b8bbc8c97323af4ef9b"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a4f11ed542451103731d229f32e40b998)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a4f11ed542451103731d229f32e40b998"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a958608f27564ff0fce5a6a26600dde92)`(FDateTime NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a958608f27564ff0fce5a6a26600dde92"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.

<br>
#### `public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a2a7b395e6ff81659ce695e0d72f0a84e)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a2a7b395e6ff81659ce695e0d72f0a84e"></a>

Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

<br>
#### `public inline FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1a3d89589469d8856d334eb138fe6fa7b8)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a3d89589469d8856d334eb138fe6fa7b8"></a>

Gets the value of Type_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1afab5a348a00253c97c7a052c199278b6)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1afab5a348a00253c97c7a052c199278b6"></a>

Gets the value of Type_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1ad474f36c06e02b6cc163ddb12e0f6a5d)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad474f36c06e02b6cc163ddb12e0f6a5d"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1aa2695bf92ed22c3dfa1a166cd98c9613)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa2695bf92ed22c3dfa1a166cd98c9613"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1adae99c41751aa20a46b9de0e2da8a63d)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1adae99c41751aa20a46b9de0e2da8a63d"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a2ddf27c21a38dd1761989e070a2b2153)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a2ddf27c21a38dd1761989e070a2b2153"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetType`](#structFRHAPI__MatchSegmentWithPlayers_1a5f27c687c94924243375d3c4e6172967)`(FString NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5f27c687c94924243375d3c4e6172967"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

<br>
#### `public inline void `[`ClearType`](#structFRHAPI__MatchSegmentWithPlayers_1afe765a26c85d22c1b38da4cb84a71fde)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1afe765a26c85d22c1b38da4cb84a71fde"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

<br>
#### `public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1a61d9a8df3d311725767bcbf3130810d5)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a61d9a8df3d311725767bcbf3130810d5"></a>

Gets the value of State_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1abafe04515b4be95db580825968899d3f)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1abafe04515b4be95db580825968899d3f"></a>

Gets the value of State_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1a93852b4e5b7800cdc3a4d2239f67f9ee)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a93852b4e5b7800cdc3a4d2239f67f9ee"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1ad6328a671fd64e6ef8aca03ff1d28d71)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad6328a671fd64e6ef8aca03ff1d28d71"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ad35dc9012b2fc5234bd90db4fb707eee)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad35dc9012b2fc5234bd90db4fb707eee"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1aefe2b2fe05ab5ba67c0f4256084c9026)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aefe2b2fe05ab5ba67c0f4256084c9026"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetState`](#structFRHAPI__MatchSegmentWithPlayers_1a5d96317b2ee7dea9f8b0280d26050c73)`(ERHAPI_MatchState NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5d96317b2ee7dea9f8b0280d26050c73"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

<br>
#### `public inline void `[`ClearState`](#structFRHAPI__MatchSegmentWithPlayers_1afa393bb3409f6076f9945972f9f23659)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1afa393bb3409f6076f9945972f9f23659"></a>

Clears the value of State_Optional and sets State_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a356c3357d59918ac45b5513c5e17aa38)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a356c3357d59918ac45b5513c5e17aa38"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a1b39b58941e914e621233cc810ce8971)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1b39b58941e914e621233cc810ce8971"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a9d53de5c174dd794be4a1850fb3f7677)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a9d53de5c174dd794be4a1850fb3f7677"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a85971b368ceb883b63e656a7d71854bf)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a85971b368ceb883b63e656a7d71854bf"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a33c17f0999c6882ee03ab473acd19418)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a33c17f0999c6882ee03ab473acd19418"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a1f1dcf42a0318d7fa5fc4c85714454d7)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1f1dcf42a0318d7fa5fc4c85714454d7"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ab0b5ca120a9811b8da6b7080680c5bbe)`(FDateTime NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab0b5ca120a9811b8da6b7080680c5bbe"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

<br>
#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a99bdcedb9bbfb7a04d8c6a561aa69ca4)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a99bdcedb9bbfb7a04d8c6a561aa69ca4"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a0fc5c9a23242c0725c4ca5687e936ebd)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a0fc5c9a23242c0725c4ca5687e936ebd"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ab035fa73c7fb6769b7277ff644fb20a0)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab035fa73c7fb6769b7277ff644fb20a0"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a1565c38af4ec0a0a900994dc96cbfa04)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1565c38af4ec0a0a900994dc96cbfa04"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1aa5b2ff59590f4f64ca43f00717e2198d)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa5b2ff59590f4f64ca43f00717e2198d"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a7c7b847d4f02726e03fcf1e84bfff8d3)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a7c7b847d4f02726e03fcf1e84bfff8d3"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a6909ca14672fe7e881077c5e9e454bfa)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6909ca14672fe7e881077c5e9e454bfa"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a32b48dedcb014be3fd79ede6cb280b28)`(FDateTime NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a32b48dedcb014be3fd79ede6cb280b28"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

<br>
#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a0d8df68f97003699016115fabb307c88)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a0d8df68f97003699016115fabb307c88"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

<br>
#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a8f41bd9e451a8dcabd5665e9a7daeb7a)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a8f41bd9e451a8dcabd5665e9a7daeb7a"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1afdf817db069141dae74283771c57237f)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1afdf817db069141dae74283771c57237f"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1aa6390212cd414bf3471f8be7288d5b3d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa6390212cd414bf3471f8be7288d5b3d"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a356b2e5248fdb4e55df1571174b388ee)`(int32 & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a356b2e5248fdb4e55df1571174b388ee"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1abccd28ecd6a2c6957e4331923f898d98)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1abccd28ecd6a2c6957e4331923f898d98"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a1bd58aacb068e3c10440efc74352e208)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1bd58aacb068e3c10440efc74352e208"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a31d9f827d4e9e9f113c34008a2deeabc)`(int32 NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a31d9f827d4e9e9f113c34008a2deeabc"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

<br>
#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a859cad510bd50f14da7ec423a7c01fca)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a859cad510bd50f14da7ec423a7c01fca"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

<br>
#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchSegmentWithPlayers_1abbb72031ca57070ac395d6f7ec36c679)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1abbb72031ca57070ac395d6f7ec36c679"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchSegmentWithPlayers_1ad498f534581644269e95aaacc28bb0d0)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad498f534581644269e95aaacc28bb0d0"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

<br>
#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1adb7535e1771e15de691899f911680b7e)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1adb7535e1771e15de691899f911680b7e"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1ab9d5f1c84215fd1b69ba07e374326a1a)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab9d5f1c84215fd1b69ba07e374326a1a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a21edb638611d95cffca043b763fff55e)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a21edb638611d95cffca043b763fff55e"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a8f96d8cf7ced0a193f474321cc901975)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a8f96d8cf7ced0a193f474321cc901975"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a2638235b40a011d21e7fea006fc6bbe4)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a2638235b40a011d21e7fea006fc6bbe4"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ad24f4c3ea2aa2cd9ce6f1fd7d72fb874)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad24f4c3ea2aa2cd9ce6f1fd7d72fb874"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1ad61f6b443bb6ba3c883d1e8d81e297bb)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad61f6b443bb6ba3c883d1e8d81e297bb"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1af69bbc7dff23cd38b47e468eb12468a3)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1af69bbc7dff23cd38b47e468eb12468a3"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a77d6313eac98a831a506a0f05bcb8763)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a77d6313eac98a831a506a0f05bcb8763"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a008b95ad7144ca6009d79f294906b137)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a008b95ad7144ca6009d79f294906b137"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1ae2bcd0a93f59d5262c5e300049721f5a)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ae2bcd0a93f59d5262c5e300049721f5a"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a6d1d580a4a2efde5f9be0de1acc84032)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6d1d580a4a2efde5f9be0de1acc84032"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a5b4b501a114a4fedfa95750c0a45c5ff)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5b4b501a114a4fedfa95750c0a45c5ff"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ada4eb2b94807c705274268256ce385f2)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ada4eb2b94807c705274268256ce385f2"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a927af0cff111a7b68b3a1008c9d63506)`(FString NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a927af0cff111a7b68b3a1008c9d63506"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

<br>
#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a70facbc24f55ecb933e183842b709e04)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a70facbc24f55ecb933e183842b709e04"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1ad6e5b4277a098d9dce3c1fe4f0f8689a)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad6e5b4277a098d9dce3c1fe4f0f8689a"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a2b9154e56b179875711ee6b09f30d5b3)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a2b9154e56b179875711ee6b09f30d5b3"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1ad4ca5d24d5ddab78ee1c48c4d56f0572)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad4ca5d24d5ddab78ee1c48c4d56f0572"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1aefb00e5d968181837820d7b9d8396ead)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aefb00e5d968181837820d7b9d8396ead"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1af6dc8fabec953dbea13f4c3ec335b72e)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1af6dc8fabec953dbea13f4c3ec335b72e"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1afd53e9d46552dd1619fdbf859cee1f8a)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1afd53e9d46552dd1619fdbf859cee1f8a"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a80f5b7edee0c73966c29d893bf7c2513)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a80f5b7edee0c73966c29d893bf7c2513"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

<br>
#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentWithPlayers_1af45381b90e7f81345393fe1ec079b45a)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1af45381b90e7f81345393fe1ec079b45a"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a7ec0c9b84c6aad73ecbdf4485c592d2a)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a7ec0c9b84c6aad73ecbdf4485c592d2a"></a>

Gets the value of Instances_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1aa049d80608c92cfe51643838266320c6)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa049d80608c92cfe51643838266320c6"></a>

Gets the value of Instances_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a66171be1bdf3c07213b2b1cc8c767d92)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a66171be1bdf3c07213b2b1cc8c767d92"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a3e45012cae3089c3f6c9fa260eca6ced)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a3e45012cae3089c3f6c9fa260eca6ced"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1abd61240c9bd57e1d5042d1852e73a5f0)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1abd61240c9bd57e1d5042d1852e73a5f0"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a3c9b5238769f9318253af4be80838cfb)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a3c9b5238769f9318253af4be80838cfb"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a848787ce37c49bfcbe99728a0a1ca536)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a848787ce37c49bfcbe99728a0a1ca536"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

<br>
#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a6247bc3fbc11566e3249a4a00a740a8f)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6247bc3fbc11566e3249a4a00a740a8f"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a681cda8fa7c051262d7808f546558cbb)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a681cda8fa7c051262d7808f546558cbb"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1aef96a739db4bb7932013f840cfe0bf10)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aef96a739db4bb7932013f840cfe0bf10"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a72c14443f854c1d88afbc2e0a57ebb41)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a72c14443f854c1d88afbc2e0a57ebb41"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1aa83bc8c930dfd54e9066efc3b22cf512)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa83bc8c930dfd54e9066efc3b22cf512"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a0c8d40456b231f57a2a6f106c8c40d57)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a0c8d40456b231f57a2a6f106c8c40d57"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a0b6583fa38a0d9aa028b3f0bb292ca2b)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a0b6583fa38a0d9aa028b3f0bb292ca2b"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a0e385ee64ab883b54375d513a7846976)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a0e385ee64ab883b54375d513a7846976"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

<br>
#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a861e5f93aa0c9c39fad6e569e0aa8763)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a861e5f93aa0c9c39fad6e569e0aa8763"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

<br>
#### `public inline FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1afd41faed32c852aec07817a2f9ed2c1c)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1afd41faed32c852aec07817a2f9ed2c1c"></a>

Gets the value of MatchSegment.

<br>
#### `public inline const FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1a141367bda3fb24ea4c9d42509bc465b5)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a141367bda3fb24ea4c9d42509bc465b5"></a>

Gets the value of MatchSegment.

<br>
#### `public inline void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1a1afd770ec4fef0934fb1fd58d2f719bd)`(FString NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1afd770ec4fef0934fb1fd58d2f719bd"></a>

Sets the value of MatchSegment.

<br>
#### `public inline FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a347d633371db8eb8a73cc63efb3e1dcd)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a347d633371db8eb8a73cc63efb3e1dcd"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1aba9f8d36a4f962eaac28ec25aecae0b8)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aba9f8d36a4f962eaac28ec25aecae0b8"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1afbef50f99aa26e5e888b88f419c4c2ca)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1afbef50f99aa26e5e888b88f419c4c2ca"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a611846110c3cc227df68cfa09252c29f)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a611846110c3cc227df68cfa09252c29f"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a66f58256ef342c0857fab9075d9d61e0)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a66f58256ef342c0857fab9075d9d61e0"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a0dcab390a83dea382a16b973abccd06c)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a0dcab390a83dea382a16b973abccd06c"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1aadb13cc0f05f754e2f5b15964f64d4fd)`(FString NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1aadb13cc0f05f754e2f5b15964f64d4fd"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

<br>
#### `public inline void `[`ClearMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1ada9fb5b63bc3e430f786d150021e532d)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ada9fb5b63bc3e430f786d150021e532d"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a78e05d281164e73e2953bffdd576d6c7)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a78e05d281164e73e2953bffdd576d6c7"></a>

Gets the value of Players_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a373e44be283580c0f24d49a702c1ffe1)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a373e44be283580c0f24d49a702c1ffe1"></a>

Gets the value of Players_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a74a7763b46c2e48fdeda5731006a1828)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a74a7763b46c2e48fdeda5731006a1828"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1afc4e5cd4c781b7fbb952f413a6a0f396)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1afc4e5cd4c781b7fbb952f413a6a0f396"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ac6f5c7b30d3c77d6bd3dfa9c5646665b)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ac6f5c7b30d3c77d6bd3dfa9c5646665b"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a4060dd13f1ee2d7ccfe0fc5c7d219a87)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a4060dd13f1ee2d7ccfe0fc5c7d219a87"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a227fd6dbaeb4b39bfff67a0126059a40)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a227fd6dbaeb4b39bfff67a0126059a40"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

<br>
#### `public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a942c9f48d6a439b1a1c55c698a90b4a2)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a942c9f48d6a439b1a1c55c698a90b4a2"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

<br>
