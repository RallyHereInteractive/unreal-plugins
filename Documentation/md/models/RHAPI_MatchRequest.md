# group `RHAPI_MatchRequest` <a id="group__RHAPI__MatchRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchRequest`](#structFRHAPI__MatchRequest) | 

## struct `FRHAPI_MatchRequest` <a id="structFRHAPI__MatchRequest"></a>

```
struct FRHAPI_MatchRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Type_Optional`](#structFRHAPI__MatchRequest_1ab839a817dc40352cb3c0ca73c61d5e02) | 
`public bool `[`Type_IsSet`](#structFRHAPI__MatchRequest_1abe5d4f87abc45267ff46095e574ac1de) | true if Type_Optional has been set to a value
`public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchRequest_1a079c10a2192458369fe50df6ed301801) | 
`public bool `[`State_IsSet`](#structFRHAPI__MatchRequest_1ab27939d169cf0275976a1c881096e05e) | true if State_Optional has been set to a value
`public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchRequest_1a2d24a6a6734be57fb7fe4af5f0ddc658) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchRequest_1a937088d54918ba6a58d8e46ba0492dac) | true if StartTimestamp_Optional has been set to a value
`public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchRequest_1aecd9bf7e987b51862ced5c8d2a7f0b9d) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchRequest_1aec3e6dc2e0e7bc5a469a351aef465142) | true if EndTimestamp_Optional has been set to a value
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchRequest_1ab5622d8346dbbec062896e30c0b29503) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchRequest_1a2e18fe31cac09b08075979ac98a498d3) | true if DurationSeconds_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchRequest_1a971fab495719d05d3e2b561db84c5e96) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchRequest_1a26a37a1864d703d013953dc553e91946) | true if CustomData_Optional has been set to a value
`public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchRequest_1a7694e1d2d7f1bbdbd5bd63bd6d567088) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchRequest_1a49330730e6494a36d3e8763770938e65) | true if CorrelationId_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchRequest_1ad9a2c0cf7acc5bd02df2e041c674acb3) | List of session IDs for the match.
`public bool `[`Sessions_IsSet`](#structFRHAPI__MatchRequest_1a77d5e6f5347b25d8860e90bd6949e1be) | true if Sessions_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchRequest_1a743d81929ccb16b1e331b1340b442dd8) | List of MatchInstances for the match.
`public bool `[`Instances_IsSet`](#structFRHAPI__MatchRequest_1aa46141072f5e845418ce4da0cd1403f2) | true if Instances_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchRequest_1adc3909cdd7378f7951371fae64d3ff6a) | List of allocation IDs for the match.
`public bool `[`Allocations_IsSet`](#structFRHAPI__MatchRequest_1acd546371928307adf3beddcfbb2efb61) | true if Allocations_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > `[`Players_Optional`](#structFRHAPI__MatchRequest_1a99281a383a8f16fd36c00efcb701613f) | List of players in the match.
`public bool `[`Players_IsSet`](#structFRHAPI__MatchRequest_1adc05ddd9cc82a1d8176d4e49af661f21) | true if Players_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > `[`Segments_Optional`](#structFRHAPI__MatchRequest_1a753f5cdfee938552acc26905798d3a4f) | List of segments for the match.
`public bool `[`Segments_IsSet`](#structFRHAPI__MatchRequest_1a8e1f8809e17f337de345f9866bed6ec1) | true if Segments_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchRequest_1a46bdd718400a9c337523bc21cb78f3b6)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchRequest_1a36f7b88074e392ae19bf3c4cfa9d3da8)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetType`](#structFRHAPI__MatchRequest_1aa3f6615a8bae5a0559cbf3ef05660990)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchRequest_1ade63d60f792858ce8d6d3638792e62dc)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchRequest_1ac42c9f8c72f72bdd5e6dee071c7477cc)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__MatchRequest_1aaed2735d9e72e11e16b64fe43558a7a0)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchRequest_1a6fa3a77b4299704a274e617c444c6e3d)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchRequest_1a88fbbd2a13f8fa000f2e29da408c8745)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__MatchRequest_1a6d38c97627d3993011a5ed52e965806b)`(const FString & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`SetType`](#structFRHAPI__MatchRequest_1a55c8cfcfe17478db1276353a033eceaf)`(FString && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__MatchRequest_1af9c61838ea0b0186c0f1bd1754604ab4)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1a8011b989a45cf9eddec7ce493d45dc81)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1a2120050bfaa71478d5508858c3ef7fa7)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1a59e3937b9320bae1f37d1d9215d1a1c2)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetState`](#structFRHAPI__MatchRequest_1a221ed2aff5ce8bcc7a772b9b440abc3f)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchRequest_1a687d59e629b82e8a44982d4316b68c82)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchRequest_1a72ce9b8a4e366b0249f73a24a45e8338)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetState`](#structFRHAPI__MatchRequest_1a33b88e9f8d06557f7809a5ae4102646f)`(const ERHAPI_MatchState & NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline void `[`SetState`](#structFRHAPI__MatchRequest_1a9397c9344d58aa310d2d22d8635834ef)`(ERHAPI_MatchState && NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true using move semantics.
`public inline void `[`ClearState`](#structFRHAPI__MatchRequest_1a9da60b903356716a501e0925f1d4685b)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1a0c76e238d3962e15277707a0999f1815)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1abc9e6eac1eb519e6d79c55e4994a559e)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1ada25145623eaec8af3333d9fc38f3583)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1a5f372229c0ee7321badd2a62ad8e7985)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchRequest_1ae752b430c50ea155f30de22e220ff13b)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchRequest_1aa9193b78507d612c367879fda0d9b513)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchRequest_1a2ca064fca6d0f7b22f81b7042c12121d)`(const FDateTime & NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchRequest_1a8df9a43704ce713e242457d2117df520)`(FDateTime && NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchRequest_1aa739e4d9ed24db135bf6b2e7d6a430a9)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a63add88593cd4a1b0a1789815f9e5954)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a1c3aae9a8a773cf0d155008e7468d941)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a459206a62d2e8127c8f1bea7984b5a4f)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a87031e36946cd13e5c2530a96711c91f)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchRequest_1ab9010d8dd458c45488e917c57fca6fd2)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchRequest_1a0ea4af7a93198fe89a4a16dd10125820)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchRequest_1ad2c3e9bd35a890a44e8f39b9d6858bc5)`(const FDateTime & NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchRequest_1a4d13d21da676782078d6f0a0752a7a5d)`(FDateTime && NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchRequest_1a8e7d61358ad58a7ad43f73e4c25d0d21)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1a655db6a967efdfab412faef0dc9bc454)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1aeecc4d7cccf5bca88a6383daf36cc7e9)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1a3b3f5fc8a0fcb1b85188c54e6e4083d7)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1af956d3d5e116849cbe724e763cefec61)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchRequest_1a18597f7ee09d61677b236b7b7ca0174f)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchRequest_1a1dba2ddd130afd4ffe36ba4ad3acbc3d)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchRequest_1aa34ef31729d769d996c08f299825f516)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchRequest_1a8036da073b9e1f577ddb9e7818839b58)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchRequest_1a4531d9f94c88c0d046cc0666758574ef)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchRequest_1a2d84c0ebc3266f7add3e93392685b2e6)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchRequest_1a89f17c266ad68ec3092c523ff0fae25f)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1ac7e25cb029da7353b7bca6992da5fbee)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1adfd685a2957e9485d3b722b403d2b74e)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1a2d70a762675a34dfba60caa6127e7742)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchRequest_1a487ab54593c98dd69ccfc13b6751781f)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchRequest_1ac89beec511a5465bfce3f99a4c4bb19d)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchRequest_1a63a76a1f6bca990d48e8381ba840a2d6)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchRequest_1a23a91dca55ae78220bc521085d0a95b8)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchRequest_1aff5d75a0777d300762c69ad82fcd3584)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchRequest_1ae7113f8974c51027f09948d67cdcffba)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1a3b9cfc1a53833c295900b6435c94018b)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1abc48bea5b08285067c6d463e9baf6e08)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1adb38411404c67713718d92be9cecdb40)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1af17e3de39a4e4527a49884eca0ce99cf)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchRequest_1a27ad0a6feacdf8ff9ffe215341a7be65)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchRequest_1a9f4a884e58671bc8b6c0644f8354ab4d)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchRequest_1ab82a0437daa90ea4af391a2f8603bfe6)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchRequest_1a68709f30be05930f0c06cf9cc2f634c2)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchRequest_1a48222b428b83d6591288b93689013771)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1a0be3ec955c5e5dfc8cfb48cc2fffc178)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1aa781fd45aa5ac21369ea9bb6432cdcf4)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1a6c295b3919ccf88b75e19d70f32dfdec)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessions`](#structFRHAPI__MatchRequest_1a0be6fb15cd2f4d583ea9a98b451f40ce)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchRequest_1a8fb985bd1ddc36867c4b66f245db0bea)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchRequest_1a5a50afd88b8041ce3e5c89fe6326430a)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessions`](#structFRHAPI__MatchRequest_1a365714ac7ee09ae4eb315582f31978e2)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline void `[`SetSessions`](#structFRHAPI__MatchRequest_1a8fffb967503f5e7cb6f564940dc5cced)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchRequest_1a2d5c977d4b55a58006f774fd8ab10b90)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1a6b0ff8ea67af3bbd3209aae75b5272ce)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1a7b2e5922179b2299fdc6d2923b6900cc)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1aac9a8b40cc8851fb3fde1f98d3598791)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstances`](#structFRHAPI__MatchRequest_1aa61fc22d7bbea363aca034faf9990c49)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchRequest_1aab90cca286a67fabfae79c5d308e65a8)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchRequest_1a760132e01d9b596c73665fad3c4a3391)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstances`](#structFRHAPI__MatchRequest_1adb677d72863d342d6e9d5641be69ff93)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline void `[`SetInstances`](#structFRHAPI__MatchRequest_1aa2602207e026f38b0f82dc5724920ed0)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchRequest_1a0019195267b0da04fbe8bf9e97d47de9)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1a264121c4d15a1b1ed88d183f711c92d2)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1a9463d589959d58c7b1a9d65e5ff3f6e5)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1ae22649b3d62596476be30813034a383b)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocations`](#structFRHAPI__MatchRequest_1a71f174dadcfba5868683f2f3362da100)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchRequest_1ac2696b79d4b0eb37b0fac73c4ea5c53f)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchRequest_1a9e6e0b4e6f9552936900ed16e04551d2)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchRequest_1aed5258e6e72527580851c9884e8e7f19)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchRequest_1a6799e73ee0e17f1fc4132b50f28ebbee)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchRequest_1a689d90c17bde84c3da9d5a528d3ad571)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1a628aeeabf5a4d5260232bc20ceecde6b)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1abf6928fed8e474f308f3f3b1f61f729b)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1a80d78acfb62a107ddc8fb233cca8649f)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayers`](#structFRHAPI__MatchRequest_1af2587a886d114f308074061c342b2132)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchRequest_1ad73f47f00a1a01d289c45bc84db305bc)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchRequest_1abfd86c6bd7423bdb0f00791f4c36a050)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchRequest_1a7189755b2996ed5dc42b3dcf987bcfd9)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchRequest_1a34fd97ef66fdc1cadc8a5e6b02b654ce)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__MatchRequest_1a474a625b191c13b7cd9a95430f5a36d0)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1a114ee40fb141b4e1157baaf0e249006c)`()` | Gets the value of Segments_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1a7e8ee7a82eb9d02b43123eb9b152b02c)`() const` | Gets the value of Segments_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1a62638c904f873b426ec2a6c982d16203)`(const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & DefaultValue) const` | Gets the value of Segments_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSegments`](#structFRHAPI__MatchRequest_1a125da882e890fe3a5a1553811ddc203e)`(TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & OutValue) const` | Fills OutValue with the value of Segments_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchRequest_1a4f67abaf4f5665437c728899aab58d66)`()` | Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchRequest_1a1eeaabe1d6cdb788f368afb44f66e02d)`() const` | Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSegments`](#structFRHAPI__MatchRequest_1a644afec3b28351be61d885e52070dc1c)`(const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & NewValue)` | Sets the value of Segments_Optional and also sets Segments_IsSet to true.
`public inline void `[`SetSegments`](#structFRHAPI__MatchRequest_1ac76b847e32ef3bdda25a0fd5b83a32b9)`(TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > && NewValue)` | Sets the value of Segments_Optional and also sets Segments_IsSet to true using move semantics.
`public inline void `[`ClearSegments`](#structFRHAPI__MatchRequest_1a052cf015350c63d2e2d2c3f2df2633df)`()` | Clears the value of Segments_Optional and sets Segments_IsSet to false.

### Members

#### `public FString `[`Type_Optional`](#structFRHAPI__MatchRequest_1ab839a817dc40352cb3c0ca73c61d5e02) <a id="structFRHAPI__MatchRequest_1ab839a817dc40352cb3c0ca73c61d5e02"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__MatchRequest_1abe5d4f87abc45267ff46095e574ac1de) <a id="structFRHAPI__MatchRequest_1abe5d4f87abc45267ff46095e574ac1de"></a>

true if Type_Optional has been set to a value

#### `public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchRequest_1a079c10a2192458369fe50df6ed301801) <a id="structFRHAPI__MatchRequest_1a079c10a2192458369fe50df6ed301801"></a>

#### `public bool `[`State_IsSet`](#structFRHAPI__MatchRequest_1ab27939d169cf0275976a1c881096e05e) <a id="structFRHAPI__MatchRequest_1ab27939d169cf0275976a1c881096e05e"></a>

true if State_Optional has been set to a value

#### `public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchRequest_1a2d24a6a6734be57fb7fe4af5f0ddc658) <a id="structFRHAPI__MatchRequest_1a2d24a6a6734be57fb7fe4af5f0ddc658"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchRequest_1a937088d54918ba6a58d8e46ba0492dac) <a id="structFRHAPI__MatchRequest_1a937088d54918ba6a58d8e46ba0492dac"></a>

true if StartTimestamp_Optional has been set to a value

#### `public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchRequest_1aecd9bf7e987b51862ced5c8d2a7f0b9d) <a id="structFRHAPI__MatchRequest_1aecd9bf7e987b51862ced5c8d2a7f0b9d"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchRequest_1aec3e6dc2e0e7bc5a469a351aef465142) <a id="structFRHAPI__MatchRequest_1aec3e6dc2e0e7bc5a469a351aef465142"></a>

true if EndTimestamp_Optional has been set to a value

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchRequest_1ab5622d8346dbbec062896e30c0b29503) <a id="structFRHAPI__MatchRequest_1ab5622d8346dbbec062896e30c0b29503"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchRequest_1a2e18fe31cac09b08075979ac98a498d3) <a id="structFRHAPI__MatchRequest_1a2e18fe31cac09b08075979ac98a498d3"></a>

true if DurationSeconds_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchRequest_1a971fab495719d05d3e2b561db84c5e96) <a id="structFRHAPI__MatchRequest_1a971fab495719d05d3e2b561db84c5e96"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchRequest_1a26a37a1864d703d013953dc553e91946) <a id="structFRHAPI__MatchRequest_1a26a37a1864d703d013953dc553e91946"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchRequest_1a7694e1d2d7f1bbdbd5bd63bd6d567088) <a id="structFRHAPI__MatchRequest_1a7694e1d2d7f1bbdbd5bd63bd6d567088"></a>

#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchRequest_1a49330730e6494a36d3e8763770938e65) <a id="structFRHAPI__MatchRequest_1a49330730e6494a36d3e8763770938e65"></a>

true if CorrelationId_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchRequest_1ad9a2c0cf7acc5bd02df2e041c674acb3) <a id="structFRHAPI__MatchRequest_1ad9a2c0cf7acc5bd02df2e041c674acb3"></a>

List of session IDs for the match.

#### `public bool `[`Sessions_IsSet`](#structFRHAPI__MatchRequest_1a77d5e6f5347b25d8860e90bd6949e1be) <a id="structFRHAPI__MatchRequest_1a77d5e6f5347b25d8860e90bd6949e1be"></a>

true if Sessions_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchRequest_1a743d81929ccb16b1e331b1340b442dd8) <a id="structFRHAPI__MatchRequest_1a743d81929ccb16b1e331b1340b442dd8"></a>

List of MatchInstances for the match.

#### `public bool `[`Instances_IsSet`](#structFRHAPI__MatchRequest_1aa46141072f5e845418ce4da0cd1403f2) <a id="structFRHAPI__MatchRequest_1aa46141072f5e845418ce4da0cd1403f2"></a>

true if Instances_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchRequest_1adc3909cdd7378f7951371fae64d3ff6a) <a id="structFRHAPI__MatchRequest_1adc3909cdd7378f7951371fae64d3ff6a"></a>

List of allocation IDs for the match.

#### `public bool `[`Allocations_IsSet`](#structFRHAPI__MatchRequest_1acd546371928307adf3beddcfbb2efb61) <a id="structFRHAPI__MatchRequest_1acd546371928307adf3beddcfbb2efb61"></a>

true if Allocations_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > `[`Players_Optional`](#structFRHAPI__MatchRequest_1a99281a383a8f16fd36c00efcb701613f) <a id="structFRHAPI__MatchRequest_1a99281a383a8f16fd36c00efcb701613f"></a>

List of players in the match.

#### `public bool `[`Players_IsSet`](#structFRHAPI__MatchRequest_1adc05ddd9cc82a1d8176d4e49af661f21) <a id="structFRHAPI__MatchRequest_1adc05ddd9cc82a1d8176d4e49af661f21"></a>

true if Players_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > `[`Segments_Optional`](#structFRHAPI__MatchRequest_1a753f5cdfee938552acc26905798d3a4f) <a id="structFRHAPI__MatchRequest_1a753f5cdfee938552acc26905798d3a4f"></a>

List of segments for the match.

#### `public bool `[`Segments_IsSet`](#structFRHAPI__MatchRequest_1a8e1f8809e17f337de345f9866bed6ec1) <a id="structFRHAPI__MatchRequest_1a8e1f8809e17f337de345f9866bed6ec1"></a>

true if Segments_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchRequest_1a46bdd718400a9c337523bc21cb78f3b6)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchRequest_1a46bdd718400a9c337523bc21cb78f3b6"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchRequest_1a36f7b88074e392ae19bf3c4cfa9d3da8)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchRequest_1a36f7b88074e392ae19bf3c4cfa9d3da8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetType`](#structFRHAPI__MatchRequest_1aa3f6615a8bae5a0559cbf3ef05660990)`()` <a id="structFRHAPI__MatchRequest_1aa3f6615a8bae5a0559cbf3ef05660990"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchRequest_1ade63d60f792858ce8d6d3638792e62dc)`() const` <a id="structFRHAPI__MatchRequest_1ade63d60f792858ce8d6d3638792e62dc"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchRequest_1ac42c9f8c72f72bdd5e6dee071c7477cc)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1ac42c9f8c72f72bdd5e6dee071c7477cc"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType`](#structFRHAPI__MatchRequest_1aaed2735d9e72e11e16b64fe43558a7a0)`(FString & OutValue) const` <a id="structFRHAPI__MatchRequest_1aaed2735d9e72e11e16b64fe43558a7a0"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchRequest_1a6fa3a77b4299704a274e617c444c6e3d)`()` <a id="structFRHAPI__MatchRequest_1a6fa3a77b4299704a274e617c444c6e3d"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchRequest_1a88fbbd2a13f8fa000f2e29da408c8745)`() const` <a id="structFRHAPI__MatchRequest_1a88fbbd2a13f8fa000f2e29da408c8745"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType`](#structFRHAPI__MatchRequest_1a6d38c97627d3993011a5ed52e965806b)`(const FString & NewValue)` <a id="structFRHAPI__MatchRequest_1a6d38c97627d3993011a5ed52e965806b"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline void `[`SetType`](#structFRHAPI__MatchRequest_1a55c8cfcfe17478db1276353a033eceaf)`(FString && NewValue)` <a id="structFRHAPI__MatchRequest_1a55c8cfcfe17478db1276353a033eceaf"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__MatchRequest_1af9c61838ea0b0186c0f1bd1754604ab4)`()` <a id="structFRHAPI__MatchRequest_1af9c61838ea0b0186c0f1bd1754604ab4"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1a8011b989a45cf9eddec7ce493d45dc81)`()` <a id="structFRHAPI__MatchRequest_1a8011b989a45cf9eddec7ce493d45dc81"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1a2120050bfaa71478d5508858c3ef7fa7)`() const` <a id="structFRHAPI__MatchRequest_1a2120050bfaa71478d5508858c3ef7fa7"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1a59e3937b9320bae1f37d1d9215d1a1c2)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a59e3937b9320bae1f37d1d9215d1a1c2"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetState`](#structFRHAPI__MatchRequest_1a221ed2aff5ce8bcc7a772b9b440abc3f)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchRequest_1a221ed2aff5ce8bcc7a772b9b440abc3f"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchRequest_1a687d59e629b82e8a44982d4316b68c82)`()` <a id="structFRHAPI__MatchRequest_1a687d59e629b82e8a44982d4316b68c82"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchRequest_1a72ce9b8a4e366b0249f73a24a45e8338)`() const` <a id="structFRHAPI__MatchRequest_1a72ce9b8a4e366b0249f73a24a45e8338"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetState`](#structFRHAPI__MatchRequest_1a33b88e9f8d06557f7809a5ae4102646f)`(const ERHAPI_MatchState & NewValue)` <a id="structFRHAPI__MatchRequest_1a33b88e9f8d06557f7809a5ae4102646f"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

#### `public inline void `[`SetState`](#structFRHAPI__MatchRequest_1a9397c9344d58aa310d2d22d8635834ef)`(ERHAPI_MatchState && NewValue)` <a id="structFRHAPI__MatchRequest_1a9397c9344d58aa310d2d22d8635834ef"></a>

Sets the value of State_Optional and also sets State_IsSet to true using move semantics.

#### `public inline void `[`ClearState`](#structFRHAPI__MatchRequest_1a9da60b903356716a501e0925f1d4685b)`()` <a id="structFRHAPI__MatchRequest_1a9da60b903356716a501e0925f1d4685b"></a>

Clears the value of State_Optional and sets State_IsSet to false.

#### `public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1a0c76e238d3962e15277707a0999f1815)`()` <a id="structFRHAPI__MatchRequest_1a0c76e238d3962e15277707a0999f1815"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1abc9e6eac1eb519e6d79c55e4994a559e)`() const` <a id="structFRHAPI__MatchRequest_1abc9e6eac1eb519e6d79c55e4994a559e"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1ada25145623eaec8af3333d9fc38f3583)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1ada25145623eaec8af3333d9fc38f3583"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1a5f372229c0ee7321badd2a62ad8e7985)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchRequest_1a5f372229c0ee7321badd2a62ad8e7985"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchRequest_1ae752b430c50ea155f30de22e220ff13b)`()` <a id="structFRHAPI__MatchRequest_1ae752b430c50ea155f30de22e220ff13b"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchRequest_1aa9193b78507d612c367879fda0d9b513)`() const` <a id="structFRHAPI__MatchRequest_1aa9193b78507d612c367879fda0d9b513"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchRequest_1a2ca064fca6d0f7b22f81b7042c12121d)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchRequest_1a2ca064fca6d0f7b22f81b7042c12121d"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchRequest_1a8df9a43704ce713e242457d2117df520)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchRequest_1a8df9a43704ce713e242457d2117df520"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchRequest_1aa739e4d9ed24db135bf6b2e7d6a430a9)`()` <a id="structFRHAPI__MatchRequest_1aa739e4d9ed24db135bf6b2e7d6a430a9"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

#### `public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a63add88593cd4a1b0a1789815f9e5954)`()` <a id="structFRHAPI__MatchRequest_1a63add88593cd4a1b0a1789815f9e5954"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a1c3aae9a8a773cf0d155008e7468d941)`() const` <a id="structFRHAPI__MatchRequest_1a1c3aae9a8a773cf0d155008e7468d941"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a459206a62d2e8127c8f1bea7984b5a4f)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a459206a62d2e8127c8f1bea7984b5a4f"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a87031e36946cd13e5c2530a96711c91f)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchRequest_1a87031e36946cd13e5c2530a96711c91f"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchRequest_1ab9010d8dd458c45488e917c57fca6fd2)`()` <a id="structFRHAPI__MatchRequest_1ab9010d8dd458c45488e917c57fca6fd2"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchRequest_1a0ea4af7a93198fe89a4a16dd10125820)`() const` <a id="structFRHAPI__MatchRequest_1a0ea4af7a93198fe89a4a16dd10125820"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchRequest_1ad2c3e9bd35a890a44e8f39b9d6858bc5)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchRequest_1ad2c3e9bd35a890a44e8f39b9d6858bc5"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchRequest_1a4d13d21da676782078d6f0a0752a7a5d)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchRequest_1a4d13d21da676782078d6f0a0752a7a5d"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchRequest_1a8e7d61358ad58a7ad43f73e4c25d0d21)`()` <a id="structFRHAPI__MatchRequest_1a8e7d61358ad58a7ad43f73e4c25d0d21"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1a655db6a967efdfab412faef0dc9bc454)`()` <a id="structFRHAPI__MatchRequest_1a655db6a967efdfab412faef0dc9bc454"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1aeecc4d7cccf5bca88a6383daf36cc7e9)`() const` <a id="structFRHAPI__MatchRequest_1aeecc4d7cccf5bca88a6383daf36cc7e9"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1a3b3f5fc8a0fcb1b85188c54e6e4083d7)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a3b3f5fc8a0fcb1b85188c54e6e4083d7"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1af956d3d5e116849cbe724e763cefec61)`(int32 & OutValue) const` <a id="structFRHAPI__MatchRequest_1af956d3d5e116849cbe724e763cefec61"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchRequest_1a18597f7ee09d61677b236b7b7ca0174f)`()` <a id="structFRHAPI__MatchRequest_1a18597f7ee09d61677b236b7b7ca0174f"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchRequest_1a1dba2ddd130afd4ffe36ba4ad3acbc3d)`() const` <a id="structFRHAPI__MatchRequest_1a1dba2ddd130afd4ffe36ba4ad3acbc3d"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchRequest_1aa34ef31729d769d996c08f299825f516)`(const int32 & NewValue)` <a id="structFRHAPI__MatchRequest_1aa34ef31729d769d996c08f299825f516"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchRequest_1a8036da073b9e1f577ddb9e7818839b58)`(int32 && NewValue)` <a id="structFRHAPI__MatchRequest_1a8036da073b9e1f577ddb9e7818839b58"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchRequest_1a4531d9f94c88c0d046cc0666758574ef)`()` <a id="structFRHAPI__MatchRequest_1a4531d9f94c88c0d046cc0666758574ef"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchRequest_1a2d84c0ebc3266f7add3e93392685b2e6)`() const` <a id="structFRHAPI__MatchRequest_1a2d84c0ebc3266f7add3e93392685b2e6"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchRequest_1a89f17c266ad68ec3092c523ff0fae25f)`()` <a id="structFRHAPI__MatchRequest_1a89f17c266ad68ec3092c523ff0fae25f"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1ac7e25cb029da7353b7bca6992da5fbee)`()` <a id="structFRHAPI__MatchRequest_1ac7e25cb029da7353b7bca6992da5fbee"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1adfd685a2957e9485d3b722b403d2b74e)`() const` <a id="structFRHAPI__MatchRequest_1adfd685a2957e9485d3b722b403d2b74e"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1a2d70a762675a34dfba60caa6127e7742)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a2d70a762675a34dfba60caa6127e7742"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchRequest_1a487ab54593c98dd69ccfc13b6751781f)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchRequest_1a487ab54593c98dd69ccfc13b6751781f"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchRequest_1ac89beec511a5465bfce3f99a4c4bb19d)`()` <a id="structFRHAPI__MatchRequest_1ac89beec511a5465bfce3f99a4c4bb19d"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchRequest_1a63a76a1f6bca990d48e8381ba840a2d6)`() const` <a id="structFRHAPI__MatchRequest_1a63a76a1f6bca990d48e8381ba840a2d6"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchRequest_1a23a91dca55ae78220bc521085d0a95b8)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchRequest_1a23a91dca55ae78220bc521085d0a95b8"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchRequest_1aff5d75a0777d300762c69ad82fcd3584)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchRequest_1aff5d75a0777d300762c69ad82fcd3584"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchRequest_1ae7113f8974c51027f09948d67cdcffba)`()` <a id="structFRHAPI__MatchRequest_1ae7113f8974c51027f09948d67cdcffba"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1a3b9cfc1a53833c295900b6435c94018b)`()` <a id="structFRHAPI__MatchRequest_1a3b9cfc1a53833c295900b6435c94018b"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1abc48bea5b08285067c6d463e9baf6e08)`() const` <a id="structFRHAPI__MatchRequest_1abc48bea5b08285067c6d463e9baf6e08"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1adb38411404c67713718d92be9cecdb40)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1adb38411404c67713718d92be9cecdb40"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1af17e3de39a4e4527a49884eca0ce99cf)`(FString & OutValue) const` <a id="structFRHAPI__MatchRequest_1af17e3de39a4e4527a49884eca0ce99cf"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchRequest_1a27ad0a6feacdf8ff9ffe215341a7be65)`()` <a id="structFRHAPI__MatchRequest_1a27ad0a6feacdf8ff9ffe215341a7be65"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchRequest_1a9f4a884e58671bc8b6c0644f8354ab4d)`() const` <a id="structFRHAPI__MatchRequest_1a9f4a884e58671bc8b6c0644f8354ab4d"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchRequest_1ab82a0437daa90ea4af391a2f8603bfe6)`(const FString & NewValue)` <a id="structFRHAPI__MatchRequest_1ab82a0437daa90ea4af391a2f8603bfe6"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchRequest_1a68709f30be05930f0c06cf9cc2f634c2)`(FString && NewValue)` <a id="structFRHAPI__MatchRequest_1a68709f30be05930f0c06cf9cc2f634c2"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchRequest_1a48222b428b83d6591288b93689013771)`()` <a id="structFRHAPI__MatchRequest_1a48222b428b83d6591288b93689013771"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1a0be3ec955c5e5dfc8cfb48cc2fffc178)`()` <a id="structFRHAPI__MatchRequest_1a0be3ec955c5e5dfc8cfb48cc2fffc178"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1aa781fd45aa5ac21369ea9bb6432cdcf4)`() const` <a id="structFRHAPI__MatchRequest_1aa781fd45aa5ac21369ea9bb6432cdcf4"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1a6c295b3919ccf88b75e19d70f32dfdec)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a6c295b3919ccf88b75e19d70f32dfdec"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessions`](#structFRHAPI__MatchRequest_1a0be6fb15cd2f4d583ea9a98b451f40ce)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchRequest_1a0be6fb15cd2f4d583ea9a98b451f40ce"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchRequest_1a8fb985bd1ddc36867c4b66f245db0bea)`()` <a id="structFRHAPI__MatchRequest_1a8fb985bd1ddc36867c4b66f245db0bea"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchRequest_1a5a50afd88b8041ce3e5c89fe6326430a)`() const` <a id="structFRHAPI__MatchRequest_1a5a50afd88b8041ce3e5c89fe6326430a"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchRequest_1a365714ac7ee09ae4eb315582f31978e2)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` <a id="structFRHAPI__MatchRequest_1a365714ac7ee09ae4eb315582f31978e2"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchRequest_1a8fffb967503f5e7cb6f564940dc5cced)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` <a id="structFRHAPI__MatchRequest_1a8fffb967503f5e7cb6f564940dc5cced"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchRequest_1a2d5c977d4b55a58006f774fd8ab10b90)`()` <a id="structFRHAPI__MatchRequest_1a2d5c977d4b55a58006f774fd8ab10b90"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1a6b0ff8ea67af3bbd3209aae75b5272ce)`()` <a id="structFRHAPI__MatchRequest_1a6b0ff8ea67af3bbd3209aae75b5272ce"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1a7b2e5922179b2299fdc6d2923b6900cc)`() const` <a id="structFRHAPI__MatchRequest_1a7b2e5922179b2299fdc6d2923b6900cc"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1aac9a8b40cc8851fb3fde1f98d3598791)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1aac9a8b40cc8851fb3fde1f98d3598791"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstances`](#structFRHAPI__MatchRequest_1aa61fc22d7bbea363aca034faf9990c49)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchRequest_1aa61fc22d7bbea363aca034faf9990c49"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchRequest_1aab90cca286a67fabfae79c5d308e65a8)`()` <a id="structFRHAPI__MatchRequest_1aab90cca286a67fabfae79c5d308e65a8"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchRequest_1a760132e01d9b596c73665fad3c4a3391)`() const` <a id="structFRHAPI__MatchRequest_1a760132e01d9b596c73665fad3c4a3391"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchRequest_1adb677d72863d342d6e9d5641be69ff93)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` <a id="structFRHAPI__MatchRequest_1adb677d72863d342d6e9d5641be69ff93"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchRequest_1aa2602207e026f38b0f82dc5724920ed0)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` <a id="structFRHAPI__MatchRequest_1aa2602207e026f38b0f82dc5724920ed0"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.

#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchRequest_1a0019195267b0da04fbe8bf9e97d47de9)`()` <a id="structFRHAPI__MatchRequest_1a0019195267b0da04fbe8bf9e97d47de9"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1a264121c4d15a1b1ed88d183f711c92d2)`()` <a id="structFRHAPI__MatchRequest_1a264121c4d15a1b1ed88d183f711c92d2"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1a9463d589959d58c7b1a9d65e5ff3f6e5)`() const` <a id="structFRHAPI__MatchRequest_1a9463d589959d58c7b1a9d65e5ff3f6e5"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1ae22649b3d62596476be30813034a383b)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1ae22649b3d62596476be30813034a383b"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllocations`](#structFRHAPI__MatchRequest_1a71f174dadcfba5868683f2f3362da100)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchRequest_1a71f174dadcfba5868683f2f3362da100"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchRequest_1ac2696b79d4b0eb37b0fac73c4ea5c53f)`()` <a id="structFRHAPI__MatchRequest_1ac2696b79d4b0eb37b0fac73c4ea5c53f"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchRequest_1a9e6e0b4e6f9552936900ed16e04551d2)`() const` <a id="structFRHAPI__MatchRequest_1a9e6e0b4e6f9552936900ed16e04551d2"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchRequest_1aed5258e6e72527580851c9884e8e7f19)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` <a id="structFRHAPI__MatchRequest_1aed5258e6e72527580851c9884e8e7f19"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchRequest_1a6799e73ee0e17f1fc4132b50f28ebbee)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` <a id="structFRHAPI__MatchRequest_1a6799e73ee0e17f1fc4132b50f28ebbee"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchRequest_1a689d90c17bde84c3da9d5a528d3ad571)`()` <a id="structFRHAPI__MatchRequest_1a689d90c17bde84c3da9d5a528d3ad571"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

#### `public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1a628aeeabf5a4d5260232bc20ceecde6b)`()` <a id="structFRHAPI__MatchRequest_1a628aeeabf5a4d5260232bc20ceecde6b"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1abf6928fed8e474f308f3f3b1f61f729b)`() const` <a id="structFRHAPI__MatchRequest_1abf6928fed8e474f308f3f3b1f61f729b"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1a80d78acfb62a107ddc8fb233cca8649f)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a80d78acfb62a107ddc8fb233cca8649f"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayers`](#structFRHAPI__MatchRequest_1af2587a886d114f308074061c342b2132)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` <a id="structFRHAPI__MatchRequest_1af2587a886d114f308074061c342b2132"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchRequest_1ad73f47f00a1a01d289c45bc84db305bc)`()` <a id="structFRHAPI__MatchRequest_1ad73f47f00a1a01d289c45bc84db305bc"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchRequest_1abfd86c6bd7423bdb0f00791f4c36a050)`() const` <a id="structFRHAPI__MatchRequest_1abfd86c6bd7423bdb0f00791f4c36a050"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchRequest_1a7189755b2996ed5dc42b3dcf987bcfd9)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` <a id="structFRHAPI__MatchRequest_1a7189755b2996ed5dc42b3dcf987bcfd9"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchRequest_1a34fd97ef66fdc1cadc8a5e6b02b654ce)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` <a id="structFRHAPI__MatchRequest_1a34fd97ef66fdc1cadc8a5e6b02b654ce"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__MatchRequest_1a474a625b191c13b7cd9a95430f5a36d0)`()` <a id="structFRHAPI__MatchRequest_1a474a625b191c13b7cd9a95430f5a36d0"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

#### `public inline TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1a114ee40fb141b4e1157baaf0e249006c)`()` <a id="structFRHAPI__MatchRequest_1a114ee40fb141b4e1157baaf0e249006c"></a>

Gets the value of Segments_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1a7e8ee7a82eb9d02b43123eb9b152b02c)`() const` <a id="structFRHAPI__MatchRequest_1a7e8ee7a82eb9d02b43123eb9b152b02c"></a>

Gets the value of Segments_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1a62638c904f873b426ec2a6c982d16203)`(const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a62638c904f873b426ec2a6c982d16203"></a>

Gets the value of Segments_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSegments`](#structFRHAPI__MatchRequest_1a125da882e890fe3a5a1553811ddc203e)`(TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & OutValue) const` <a id="structFRHAPI__MatchRequest_1a125da882e890fe3a5a1553811ddc203e"></a>

Fills OutValue with the value of Segments_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchRequest_1a4f67abaf4f5665437c728899aab58d66)`()` <a id="structFRHAPI__MatchRequest_1a4f67abaf4f5665437c728899aab58d66"></a>

Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchRequest_1a1eeaabe1d6cdb788f368afb44f66e02d)`() const` <a id="structFRHAPI__MatchRequest_1a1eeaabe1d6cdb788f368afb44f66e02d"></a>

Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSegments`](#structFRHAPI__MatchRequest_1a644afec3b28351be61d885e52070dc1c)`(const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & NewValue)` <a id="structFRHAPI__MatchRequest_1a644afec3b28351be61d885e52070dc1c"></a>

Sets the value of Segments_Optional and also sets Segments_IsSet to true.

#### `public inline void `[`SetSegments`](#structFRHAPI__MatchRequest_1ac76b847e32ef3bdda25a0fd5b83a32b9)`(TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > && NewValue)` <a id="structFRHAPI__MatchRequest_1ac76b847e32ef3bdda25a0fd5b83a32b9"></a>

Sets the value of Segments_Optional and also sets Segments_IsSet to true using move semantics.

#### `public inline void `[`ClearSegments`](#structFRHAPI__MatchRequest_1a052cf015350c63d2e2d2c3f2df2633df)`()` <a id="structFRHAPI__MatchRequest_1a052cf015350c63d2e2d2c3f2df2633df"></a>

Clears the value of Segments_Optional and sets Segments_IsSet to false.

