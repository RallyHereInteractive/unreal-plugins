---
title: RHAPI_MatchRequest
---

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
`public bool `[`Type_IsNull`](#structFRHAPI__MatchRequest_1ab1685699625578b1413addf8f2787a8d) | true if Type_Optional has been explicitly set to null
`public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchRequest_1a079c10a2192458369fe50df6ed301801) | 
`public bool `[`State_IsSet`](#structFRHAPI__MatchRequest_1ab27939d169cf0275976a1c881096e05e) | true if State_Optional has been set to a value
`public bool `[`State_IsNull`](#structFRHAPI__MatchRequest_1a97c4d3da732beb89dcceff16a64463e0) | true if State_Optional has been explicitly set to null
`public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchRequest_1a2d24a6a6734be57fb7fe4af5f0ddc658) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchRequest_1a937088d54918ba6a58d8e46ba0492dac) | true if StartTimestamp_Optional has been set to a value
`public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchRequest_1a3d23f0ba3438243df34452cc930ca429) | true if StartTimestamp_Optional has been explicitly set to null
`public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchRequest_1aecd9bf7e987b51862ced5c8d2a7f0b9d) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchRequest_1aec3e6dc2e0e7bc5a469a351aef465142) | true if EndTimestamp_Optional has been set to a value
`public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchRequest_1aef18a4ea46a0d5bc69cbe683775a98ea) | true if EndTimestamp_Optional has been explicitly set to null
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchRequest_1ab5622d8346dbbec062896e30c0b29503) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchRequest_1a2e18fe31cac09b08075979ac98a498d3) | true if DurationSeconds_Optional has been set to a value
`public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchRequest_1a0f83b12e120beba2b56da60800809ef8) | true if DurationSeconds_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchRequest_1a971fab495719d05d3e2b561db84c5e96) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchRequest_1a26a37a1864d703d013953dc553e91946) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__MatchRequest_1a5008d5eb04a64c63fff6a8a9efa030c4) | true if CustomData_Optional has been explicitly set to null
`public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchRequest_1a7694e1d2d7f1bbdbd5bd63bd6d567088) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchRequest_1a49330730e6494a36d3e8763770938e65) | true if CorrelationId_Optional has been set to a value
`public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchRequest_1a8222f824cbd582674136119e1150a797) | true if CorrelationId_Optional has been explicitly set to null
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
`public virtual bool `[`FromJson`](#structFRHAPI__MatchRequest_1a1f939a058e9c9ea7ea523fcdcae52933)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchRequest_1a334499f4e4b5473c56812031d5d222be)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetType`](#structFRHAPI__MatchRequest_1a6a1cf1a70903e01b87a6a7902a002b14)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchRequest_1a84cc028244611c5843cda74b16287633)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchRequest_1a2b9348d7c200b25df7bff6ce04e429c4)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__MatchRequest_1aaed2735d9e72e11e16b64fe43558a7a0)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchRequest_1a7bfbc7c0e09d1d3383002a4e18b4ffa0)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchRequest_1a8582bd52ae376dee96bca805157561de)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__MatchRequest_1a6d38c97627d3993011a5ed52e965806b)`(const FString & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`SetType`](#structFRHAPI__MatchRequest_1a55c8cfcfe17478db1276353a033eceaf)`(FString && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__MatchRequest_1af9c61838ea0b0186c0f1bd1754604ab4)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline bool `[`IsTypeSet`](#structFRHAPI__MatchRequest_1a0be4953bb07975adda37dfc6a8755f7e)`() const` | Checks whether Type_Optional has been set.
`public inline void `[`SetTypeToNull`](#structFRHAPI__MatchRequest_1adf5de0ba6c4750feb03e427b62b60873)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTypeNull`](#structFRHAPI__MatchRequest_1a8617eb58595ac576fa0e18a23feca483)`() const` | Checks whether Type_Optional is set to null.
`public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1aee4496f60d2152f573e3ef10a5a2544d)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1a2943866d9e81622206d4b6b0ba254904)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1a0be4d3b328baac5de6f04b284601b422)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetState`](#structFRHAPI__MatchRequest_1a221ed2aff5ce8bcc7a772b9b440abc3f)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchRequest_1ad5c8e6322dd352aa61d0be5fafe9190c)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchRequest_1a80b2c2749baedd5fbcfce97de135b9f6)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetState`](#structFRHAPI__MatchRequest_1a33b88e9f8d06557f7809a5ae4102646f)`(const ERHAPI_MatchState & NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline void `[`SetState`](#structFRHAPI__MatchRequest_1a9397c9344d58aa310d2d22d8635834ef)`(ERHAPI_MatchState && NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true using move semantics.
`public inline void `[`ClearState`](#structFRHAPI__MatchRequest_1a9da60b903356716a501e0925f1d4685b)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline bool `[`IsStateSet`](#structFRHAPI__MatchRequest_1aa9d17d39d4439ffa3963ad42314d4b01)`() const` | Checks whether State_Optional has been set.
`public inline void `[`SetStateToNull`](#structFRHAPI__MatchRequest_1ac109501414d0773f7ad2c19bc5447e98)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStateNull`](#structFRHAPI__MatchRequest_1a89395138e65e0165a495a02cb6f2ddb5)`() const` | Checks whether State_Optional is set to null.
`public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1ae64469067f6df50e0952e19116b58d02)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1a95818904c199263a632f9ecd7abdbcea)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1a356f422bd6306858ea154839ea7f0a5e)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1a5f372229c0ee7321badd2a62ad8e7985)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchRequest_1a0af7fba3cb42dd916c1afd7d5afb01f1)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchRequest_1a68cffb94cb1fbd863c06b65ff2b4755f)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchRequest_1a2ca064fca6d0f7b22f81b7042c12121d)`(const FDateTime & NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchRequest_1a8df9a43704ce713e242457d2117df520)`(FDateTime && NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchRequest_1aa739e4d9ed24db135bf6b2e7d6a430a9)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline bool `[`IsStartTimestampSet`](#structFRHAPI__MatchRequest_1a70e9974bbde632f16b9e387e84d637d6)`() const` | Checks whether StartTimestamp_Optional has been set.
`public inline void `[`SetStartTimestampToNull`](#structFRHAPI__MatchRequest_1a5e3451d8b9884fe2d271c00aa1cfac7b)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStartTimestampNull`](#structFRHAPI__MatchRequest_1aacdbedc174f99907d3b4d1af0a9bd90e)`() const` | Checks whether StartTimestamp_Optional is set to null.
`public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1ad47cb3286be3023fd804777feb43306b)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a3e6bf85813d2cb79a7087a80996f0b36)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1afb1e94b3a40d3068f01e1c66ec018d9d)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a87031e36946cd13e5c2530a96711c91f)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchRequest_1a8dab562a531441f2a57fe2c6abbff1cc)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchRequest_1ae5a712d582799e170b736b22d88282c6)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchRequest_1ad2c3e9bd35a890a44e8f39b9d6858bc5)`(const FDateTime & NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchRequest_1a4d13d21da676782078d6f0a0752a7a5d)`(FDateTime && NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchRequest_1a8e7d61358ad58a7ad43f73e4c25d0d21)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline bool `[`IsEndTimestampSet`](#structFRHAPI__MatchRequest_1ac82dff414fe99aaf009f8739b84e7f7f)`() const` | Checks whether EndTimestamp_Optional has been set.
`public inline void `[`SetEndTimestampToNull`](#structFRHAPI__MatchRequest_1a4b2b88219c763f5c8297675f896a1f88)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsEndTimestampNull`](#structFRHAPI__MatchRequest_1a033e203c81352d729f1d1f532a10e80e)`() const` | Checks whether EndTimestamp_Optional is set to null.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1a5c3b3a36714718eda5e1d32d1fb961ae)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1a152a65317379f79d020a96f940662819)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1a76e2c3cc0b1bfbced133d2c37a58db42)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1af956d3d5e116849cbe724e763cefec61)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchRequest_1a1cf151a8aa87950d9eb9b1766bdee008)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchRequest_1a53c7b630cef20c1d00721ffca47afef7)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchRequest_1aa34ef31729d769d996c08f299825f516)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchRequest_1a8036da073b9e1f577ddb9e7818839b58)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchRequest_1a4531d9f94c88c0d046cc0666758574ef)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchRequest_1a6de29c47221e7d8d324839c8129e841e)`() const` | Checks whether DurationSeconds_Optional has been set.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchRequest_1a2d84c0ebc3266f7add3e93392685b2e6)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchRequest_1a89f17c266ad68ec3092c523ff0fae25f)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchRequest_1a77a83fb07dcf3e24f6c0c17f32e2dbe6)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchRequest_1a6b63f23d0ffc501803dcedfc642ca622)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1a225da65582adb100a97da979df2c501d)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1a8918c6aff82d5a697a1ea4f8c69a6552)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1a83327c7e7d9a3f9dd4ebd5034867a642)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchRequest_1a487ab54593c98dd69ccfc13b6751781f)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchRequest_1a2e77a38fc1b5d6f211b9260ec4ca6eb4)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchRequest_1aff20746806337eaa3394b439b910f6e1)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchRequest_1a23a91dca55ae78220bc521085d0a95b8)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchRequest_1aff5d75a0777d300762c69ad82fcd3584)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchRequest_1ae7113f8974c51027f09948d67cdcffba)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchRequest_1a084c63c4d5d269bd447f208120470dc9)`() const` | Checks whether CustomData_Optional has been set.
`public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchRequest_1a974d0b78d44e482b14ee9b29d43d6a66)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchRequest_1a854d5445b86c03f17895290c262bc358)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1a8f7f910aaca35d09449b5cae7fa11a76)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1a5953df118b9c78453b75892c6bf6ac99)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1ac90fc845b37ad98b8e7c0e02694249c3)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1af17e3de39a4e4527a49884eca0ce99cf)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchRequest_1a8110090ff23c200c2b44c751e987e712)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchRequest_1a27088367e43cded539657cfb8a27067c)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchRequest_1ab82a0437daa90ea4af391a2f8603bfe6)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchRequest_1a68709f30be05930f0c06cf9cc2f634c2)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchRequest_1a48222b428b83d6591288b93689013771)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline bool `[`IsCorrelationIdSet`](#structFRHAPI__MatchRequest_1a2b463b84afea570dde0c731b0ccc2d7a)`() const` | Checks whether CorrelationId_Optional has been set.
`public inline void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchRequest_1a7489007443af742cef1d2349b07b9cd2)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchRequest_1a40704488cb6adfde951d8b8ae5e09476)`() const` | Checks whether CorrelationId_Optional is set to null.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1a35701f65f6d603e7f802a46be00d323c)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1a5f40f2e7c8ad850d700bffc5d057da26)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1a1a829546f94680018fd911012bedad2a)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessions`](#structFRHAPI__MatchRequest_1a0be6fb15cd2f4d583ea9a98b451f40ce)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchRequest_1ad9125e67b4579fc791af183002f0a465)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchRequest_1a03746e6e7989d0903b1e4429cb2993cd)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessions`](#structFRHAPI__MatchRequest_1a365714ac7ee09ae4eb315582f31978e2)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline void `[`SetSessions`](#structFRHAPI__MatchRequest_1a8fffb967503f5e7cb6f564940dc5cced)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchRequest_1a2d5c977d4b55a58006f774fd8ab10b90)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline bool `[`IsSessionsSet`](#structFRHAPI__MatchRequest_1aef5aaab8f795a95efb3ad115da5a54ca)`() const` | Checks whether Sessions_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1ada2c72e5408d70ac5851cb2efcc168ce)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1afb51e2b37704b41d52ed4f5082fa1242)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1a2a2881553cf3e64e27867c79cee2503c)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstances`](#structFRHAPI__MatchRequest_1aa61fc22d7bbea363aca034faf9990c49)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchRequest_1af6dbb87d3d016010a30b469e3662a757)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchRequest_1a8a7156166a48c9b4f6be5a03fafaeee3)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstances`](#structFRHAPI__MatchRequest_1adb677d72863d342d6e9d5641be69ff93)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline void `[`SetInstances`](#structFRHAPI__MatchRequest_1aa2602207e026f38b0f82dc5724920ed0)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchRequest_1a0019195267b0da04fbe8bf9e97d47de9)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline bool `[`IsInstancesSet`](#structFRHAPI__MatchRequest_1a47fe6c7c16143eb0f710f20aaf3e0086)`() const` | Checks whether Instances_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1a3a5428f7f54c1cd817baa39a5694e812)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1a6e145d6a1bc1f8df4d5c4923b91912f3)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1a87381bfbb837d519fdb4d5bb334be818)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocations`](#structFRHAPI__MatchRequest_1a71f174dadcfba5868683f2f3362da100)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchRequest_1a7062168746b9e1f4813385411083f8c0)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchRequest_1ad77203193f7c51cbc262123580a3952a)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchRequest_1aed5258e6e72527580851c9884e8e7f19)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchRequest_1a6799e73ee0e17f1fc4132b50f28ebbee)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchRequest_1a689d90c17bde84c3da9d5a528d3ad571)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline bool `[`IsAllocationsSet`](#structFRHAPI__MatchRequest_1ad5f288ada35146f38bcc6eea6c0d62d5)`() const` | Checks whether Allocations_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1aca1c4781957567eeacfbafd9fbb38c6f)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1a8d51c659fdc253818e7db83f9ac014ce)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1a9d38b560cb665a891914930fc375eb64)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayers`](#structFRHAPI__MatchRequest_1af2587a886d114f308074061c342b2132)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchRequest_1ae0a6567ffa69295963a9ea2ecbceeb02)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchRequest_1a4fce77781958fe63846ee06b7246c4f6)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchRequest_1a7189755b2996ed5dc42b3dcf987bcfd9)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchRequest_1a34fd97ef66fdc1cadc8a5e6b02b654ce)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__MatchRequest_1a474a625b191c13b7cd9a95430f5a36d0)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.
`public inline bool `[`IsPlayersSet`](#structFRHAPI__MatchRequest_1af35bc96e292b9e215de6d6ede57451b3)`() const` | Checks whether Players_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1aae5c8b0b80850e8aa311396fe10fae6d)`()` | Gets the value of Segments_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1a5c001d2f2624780f522e4ed097d5a244)`() const` | Gets the value of Segments_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1af3bd426e1b09681c6935a6a7675c3e93)`(const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & DefaultValue) const` | Gets the value of Segments_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSegments`](#structFRHAPI__MatchRequest_1a125da882e890fe3a5a1553811ddc203e)`(TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & OutValue) const` | Fills OutValue with the value of Segments_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchRequest_1a6834b5f7ee241bae129a599bd77099fd)`()` | Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchRequest_1a89a6b776851c0c88cfa1f3ed8aec9ff0)`() const` | Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSegments`](#structFRHAPI__MatchRequest_1a644afec3b28351be61d885e52070dc1c)`(const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & NewValue)` | Sets the value of Segments_Optional and also sets Segments_IsSet to true.
`public inline void `[`SetSegments`](#structFRHAPI__MatchRequest_1ac76b847e32ef3bdda25a0fd5b83a32b9)`(TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > && NewValue)` | Sets the value of Segments_Optional and also sets Segments_IsSet to true using move semantics.
`public inline void `[`ClearSegments`](#structFRHAPI__MatchRequest_1a052cf015350c63d2e2d2c3f2df2633df)`()` | Clears the value of Segments_Optional and sets Segments_IsSet to false.
`public inline bool `[`IsSegmentsSet`](#structFRHAPI__MatchRequest_1a629affbef452f10e1a82b575835af96f)`() const` | Checks whether Segments_Optional has been set.

### Members

#### `public FString `[`Type_Optional`](#structFRHAPI__MatchRequest_1ab839a817dc40352cb3c0ca73c61d5e02) <a id="structFRHAPI__MatchRequest_1ab839a817dc40352cb3c0ca73c61d5e02"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__MatchRequest_1abe5d4f87abc45267ff46095e574ac1de) <a id="structFRHAPI__MatchRequest_1abe5d4f87abc45267ff46095e574ac1de"></a>

true if Type_Optional has been set to a value

#### `public bool `[`Type_IsNull`](#structFRHAPI__MatchRequest_1ab1685699625578b1413addf8f2787a8d) <a id="structFRHAPI__MatchRequest_1ab1685699625578b1413addf8f2787a8d"></a>

true if Type_Optional has been explicitly set to null

#### `public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchRequest_1a079c10a2192458369fe50df6ed301801) <a id="structFRHAPI__MatchRequest_1a079c10a2192458369fe50df6ed301801"></a>

#### `public bool `[`State_IsSet`](#structFRHAPI__MatchRequest_1ab27939d169cf0275976a1c881096e05e) <a id="structFRHAPI__MatchRequest_1ab27939d169cf0275976a1c881096e05e"></a>

true if State_Optional has been set to a value

#### `public bool `[`State_IsNull`](#structFRHAPI__MatchRequest_1a97c4d3da732beb89dcceff16a64463e0) <a id="structFRHAPI__MatchRequest_1a97c4d3da732beb89dcceff16a64463e0"></a>

true if State_Optional has been explicitly set to null

#### `public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchRequest_1a2d24a6a6734be57fb7fe4af5f0ddc658) <a id="structFRHAPI__MatchRequest_1a2d24a6a6734be57fb7fe4af5f0ddc658"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchRequest_1a937088d54918ba6a58d8e46ba0492dac) <a id="structFRHAPI__MatchRequest_1a937088d54918ba6a58d8e46ba0492dac"></a>

true if StartTimestamp_Optional has been set to a value

#### `public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchRequest_1a3d23f0ba3438243df34452cc930ca429) <a id="structFRHAPI__MatchRequest_1a3d23f0ba3438243df34452cc930ca429"></a>

true if StartTimestamp_Optional has been explicitly set to null

#### `public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchRequest_1aecd9bf7e987b51862ced5c8d2a7f0b9d) <a id="structFRHAPI__MatchRequest_1aecd9bf7e987b51862ced5c8d2a7f0b9d"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchRequest_1aec3e6dc2e0e7bc5a469a351aef465142) <a id="structFRHAPI__MatchRequest_1aec3e6dc2e0e7bc5a469a351aef465142"></a>

true if EndTimestamp_Optional has been set to a value

#### `public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchRequest_1aef18a4ea46a0d5bc69cbe683775a98ea) <a id="structFRHAPI__MatchRequest_1aef18a4ea46a0d5bc69cbe683775a98ea"></a>

true if EndTimestamp_Optional has been explicitly set to null

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchRequest_1ab5622d8346dbbec062896e30c0b29503) <a id="structFRHAPI__MatchRequest_1ab5622d8346dbbec062896e30c0b29503"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchRequest_1a2e18fe31cac09b08075979ac98a498d3) <a id="structFRHAPI__MatchRequest_1a2e18fe31cac09b08075979ac98a498d3"></a>

true if DurationSeconds_Optional has been set to a value

#### `public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchRequest_1a0f83b12e120beba2b56da60800809ef8) <a id="structFRHAPI__MatchRequest_1a0f83b12e120beba2b56da60800809ef8"></a>

true if DurationSeconds_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchRequest_1a971fab495719d05d3e2b561db84c5e96) <a id="structFRHAPI__MatchRequest_1a971fab495719d05d3e2b561db84c5e96"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchRequest_1a26a37a1864d703d013953dc553e91946) <a id="structFRHAPI__MatchRequest_1a26a37a1864d703d013953dc553e91946"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__MatchRequest_1a5008d5eb04a64c63fff6a8a9efa030c4) <a id="structFRHAPI__MatchRequest_1a5008d5eb04a64c63fff6a8a9efa030c4"></a>

true if CustomData_Optional has been explicitly set to null

#### `public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchRequest_1a7694e1d2d7f1bbdbd5bd63bd6d567088) <a id="structFRHAPI__MatchRequest_1a7694e1d2d7f1bbdbd5bd63bd6d567088"></a>

#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchRequest_1a49330730e6494a36d3e8763770938e65) <a id="structFRHAPI__MatchRequest_1a49330730e6494a36d3e8763770938e65"></a>

true if CorrelationId_Optional has been set to a value

#### `public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchRequest_1a8222f824cbd582674136119e1150a797) <a id="structFRHAPI__MatchRequest_1a8222f824cbd582674136119e1150a797"></a>

true if CorrelationId_Optional has been explicitly set to null

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchRequest_1a1f939a058e9c9ea7ea523fcdcae52933)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchRequest_1a1f939a058e9c9ea7ea523fcdcae52933"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchRequest_1a334499f4e4b5473c56812031d5d222be)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchRequest_1a334499f4e4b5473c56812031d5d222be"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetType`](#structFRHAPI__MatchRequest_1a6a1cf1a70903e01b87a6a7902a002b14)`()` <a id="structFRHAPI__MatchRequest_1a6a1cf1a70903e01b87a6a7902a002b14"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchRequest_1a84cc028244611c5843cda74b16287633)`() const` <a id="structFRHAPI__MatchRequest_1a84cc028244611c5843cda74b16287633"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchRequest_1a2b9348d7c200b25df7bff6ce04e429c4)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a2b9348d7c200b25df7bff6ce04e429c4"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType`](#structFRHAPI__MatchRequest_1aaed2735d9e72e11e16b64fe43558a7a0)`(FString & OutValue) const` <a id="structFRHAPI__MatchRequest_1aaed2735d9e72e11e16b64fe43558a7a0"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchRequest_1a7bfbc7c0e09d1d3383002a4e18b4ffa0)`()` <a id="structFRHAPI__MatchRequest_1a7bfbc7c0e09d1d3383002a4e18b4ffa0"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchRequest_1a8582bd52ae376dee96bca805157561de)`() const` <a id="structFRHAPI__MatchRequest_1a8582bd52ae376dee96bca805157561de"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType`](#structFRHAPI__MatchRequest_1a6d38c97627d3993011a5ed52e965806b)`(const FString & NewValue)` <a id="structFRHAPI__MatchRequest_1a6d38c97627d3993011a5ed52e965806b"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline void `[`SetType`](#structFRHAPI__MatchRequest_1a55c8cfcfe17478db1276353a033eceaf)`(FString && NewValue)` <a id="structFRHAPI__MatchRequest_1a55c8cfcfe17478db1276353a033eceaf"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__MatchRequest_1af9c61838ea0b0186c0f1bd1754604ab4)`()` <a id="structFRHAPI__MatchRequest_1af9c61838ea0b0186c0f1bd1754604ab4"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline bool `[`IsTypeSet`](#structFRHAPI__MatchRequest_1a0be4953bb07975adda37dfc6a8755f7e)`() const` <a id="structFRHAPI__MatchRequest_1a0be4953bb07975adda37dfc6a8755f7e"></a>

Checks whether Type_Optional has been set.

#### `public inline void `[`SetTypeToNull`](#structFRHAPI__MatchRequest_1adf5de0ba6c4750feb03e427b62b60873)`()` <a id="structFRHAPI__MatchRequest_1adf5de0ba6c4750feb03e427b62b60873"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTypeNull`](#structFRHAPI__MatchRequest_1a8617eb58595ac576fa0e18a23feca483)`() const` <a id="structFRHAPI__MatchRequest_1a8617eb58595ac576fa0e18a23feca483"></a>

Checks whether Type_Optional is set to null.

#### `public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1aee4496f60d2152f573e3ef10a5a2544d)`()` <a id="structFRHAPI__MatchRequest_1aee4496f60d2152f573e3ef10a5a2544d"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1a2943866d9e81622206d4b6b0ba254904)`() const` <a id="structFRHAPI__MatchRequest_1a2943866d9e81622206d4b6b0ba254904"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1a0be4d3b328baac5de6f04b284601b422)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a0be4d3b328baac5de6f04b284601b422"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetState`](#structFRHAPI__MatchRequest_1a221ed2aff5ce8bcc7a772b9b440abc3f)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchRequest_1a221ed2aff5ce8bcc7a772b9b440abc3f"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchRequest_1ad5c8e6322dd352aa61d0be5fafe9190c)`()` <a id="structFRHAPI__MatchRequest_1ad5c8e6322dd352aa61d0be5fafe9190c"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchRequest_1a80b2c2749baedd5fbcfce97de135b9f6)`() const` <a id="structFRHAPI__MatchRequest_1a80b2c2749baedd5fbcfce97de135b9f6"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetState`](#structFRHAPI__MatchRequest_1a33b88e9f8d06557f7809a5ae4102646f)`(const ERHAPI_MatchState & NewValue)` <a id="structFRHAPI__MatchRequest_1a33b88e9f8d06557f7809a5ae4102646f"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

#### `public inline void `[`SetState`](#structFRHAPI__MatchRequest_1a9397c9344d58aa310d2d22d8635834ef)`(ERHAPI_MatchState && NewValue)` <a id="structFRHAPI__MatchRequest_1a9397c9344d58aa310d2d22d8635834ef"></a>

Sets the value of State_Optional and also sets State_IsSet to true using move semantics.

#### `public inline void `[`ClearState`](#structFRHAPI__MatchRequest_1a9da60b903356716a501e0925f1d4685b)`()` <a id="structFRHAPI__MatchRequest_1a9da60b903356716a501e0925f1d4685b"></a>

Clears the value of State_Optional and sets State_IsSet to false.

#### `public inline bool `[`IsStateSet`](#structFRHAPI__MatchRequest_1aa9d17d39d4439ffa3963ad42314d4b01)`() const` <a id="structFRHAPI__MatchRequest_1aa9d17d39d4439ffa3963ad42314d4b01"></a>

Checks whether State_Optional has been set.

#### `public inline void `[`SetStateToNull`](#structFRHAPI__MatchRequest_1ac109501414d0773f7ad2c19bc5447e98)`()` <a id="structFRHAPI__MatchRequest_1ac109501414d0773f7ad2c19bc5447e98"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStateNull`](#structFRHAPI__MatchRequest_1a89395138e65e0165a495a02cb6f2ddb5)`() const` <a id="structFRHAPI__MatchRequest_1a89395138e65e0165a495a02cb6f2ddb5"></a>

Checks whether State_Optional is set to null.

#### `public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1ae64469067f6df50e0952e19116b58d02)`()` <a id="structFRHAPI__MatchRequest_1ae64469067f6df50e0952e19116b58d02"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1a95818904c199263a632f9ecd7abdbcea)`() const` <a id="structFRHAPI__MatchRequest_1a95818904c199263a632f9ecd7abdbcea"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1a356f422bd6306858ea154839ea7f0a5e)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a356f422bd6306858ea154839ea7f0a5e"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1a5f372229c0ee7321badd2a62ad8e7985)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchRequest_1a5f372229c0ee7321badd2a62ad8e7985"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchRequest_1a0af7fba3cb42dd916c1afd7d5afb01f1)`()` <a id="structFRHAPI__MatchRequest_1a0af7fba3cb42dd916c1afd7d5afb01f1"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchRequest_1a68cffb94cb1fbd863c06b65ff2b4755f)`() const` <a id="structFRHAPI__MatchRequest_1a68cffb94cb1fbd863c06b65ff2b4755f"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchRequest_1a2ca064fca6d0f7b22f81b7042c12121d)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchRequest_1a2ca064fca6d0f7b22f81b7042c12121d"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchRequest_1a8df9a43704ce713e242457d2117df520)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchRequest_1a8df9a43704ce713e242457d2117df520"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchRequest_1aa739e4d9ed24db135bf6b2e7d6a430a9)`()` <a id="structFRHAPI__MatchRequest_1aa739e4d9ed24db135bf6b2e7d6a430a9"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

#### `public inline bool `[`IsStartTimestampSet`](#structFRHAPI__MatchRequest_1a70e9974bbde632f16b9e387e84d637d6)`() const` <a id="structFRHAPI__MatchRequest_1a70e9974bbde632f16b9e387e84d637d6"></a>

Checks whether StartTimestamp_Optional has been set.

#### `public inline void `[`SetStartTimestampToNull`](#structFRHAPI__MatchRequest_1a5e3451d8b9884fe2d271c00aa1cfac7b)`()` <a id="structFRHAPI__MatchRequest_1a5e3451d8b9884fe2d271c00aa1cfac7b"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStartTimestampNull`](#structFRHAPI__MatchRequest_1aacdbedc174f99907d3b4d1af0a9bd90e)`() const` <a id="structFRHAPI__MatchRequest_1aacdbedc174f99907d3b4d1af0a9bd90e"></a>

Checks whether StartTimestamp_Optional is set to null.

#### `public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1ad47cb3286be3023fd804777feb43306b)`()` <a id="structFRHAPI__MatchRequest_1ad47cb3286be3023fd804777feb43306b"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a3e6bf85813d2cb79a7087a80996f0b36)`() const` <a id="structFRHAPI__MatchRequest_1a3e6bf85813d2cb79a7087a80996f0b36"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1afb1e94b3a40d3068f01e1c66ec018d9d)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1afb1e94b3a40d3068f01e1c66ec018d9d"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a87031e36946cd13e5c2530a96711c91f)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchRequest_1a87031e36946cd13e5c2530a96711c91f"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchRequest_1a8dab562a531441f2a57fe2c6abbff1cc)`()` <a id="structFRHAPI__MatchRequest_1a8dab562a531441f2a57fe2c6abbff1cc"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchRequest_1ae5a712d582799e170b736b22d88282c6)`() const` <a id="structFRHAPI__MatchRequest_1ae5a712d582799e170b736b22d88282c6"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchRequest_1ad2c3e9bd35a890a44e8f39b9d6858bc5)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchRequest_1ad2c3e9bd35a890a44e8f39b9d6858bc5"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchRequest_1a4d13d21da676782078d6f0a0752a7a5d)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchRequest_1a4d13d21da676782078d6f0a0752a7a5d"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchRequest_1a8e7d61358ad58a7ad43f73e4c25d0d21)`()` <a id="structFRHAPI__MatchRequest_1a8e7d61358ad58a7ad43f73e4c25d0d21"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

#### `public inline bool `[`IsEndTimestampSet`](#structFRHAPI__MatchRequest_1ac82dff414fe99aaf009f8739b84e7f7f)`() const` <a id="structFRHAPI__MatchRequest_1ac82dff414fe99aaf009f8739b84e7f7f"></a>

Checks whether EndTimestamp_Optional has been set.

#### `public inline void `[`SetEndTimestampToNull`](#structFRHAPI__MatchRequest_1a4b2b88219c763f5c8297675f896a1f88)`()` <a id="structFRHAPI__MatchRequest_1a4b2b88219c763f5c8297675f896a1f88"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsEndTimestampNull`](#structFRHAPI__MatchRequest_1a033e203c81352d729f1d1f532a10e80e)`() const` <a id="structFRHAPI__MatchRequest_1a033e203c81352d729f1d1f532a10e80e"></a>

Checks whether EndTimestamp_Optional is set to null.

#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1a5c3b3a36714718eda5e1d32d1fb961ae)`()` <a id="structFRHAPI__MatchRequest_1a5c3b3a36714718eda5e1d32d1fb961ae"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1a152a65317379f79d020a96f940662819)`() const` <a id="structFRHAPI__MatchRequest_1a152a65317379f79d020a96f940662819"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1a76e2c3cc0b1bfbced133d2c37a58db42)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a76e2c3cc0b1bfbced133d2c37a58db42"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1af956d3d5e116849cbe724e763cefec61)`(int32 & OutValue) const` <a id="structFRHAPI__MatchRequest_1af956d3d5e116849cbe724e763cefec61"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchRequest_1a1cf151a8aa87950d9eb9b1766bdee008)`()` <a id="structFRHAPI__MatchRequest_1a1cf151a8aa87950d9eb9b1766bdee008"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchRequest_1a53c7b630cef20c1d00721ffca47afef7)`() const` <a id="structFRHAPI__MatchRequest_1a53c7b630cef20c1d00721ffca47afef7"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchRequest_1aa34ef31729d769d996c08f299825f516)`(const int32 & NewValue)` <a id="structFRHAPI__MatchRequest_1aa34ef31729d769d996c08f299825f516"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchRequest_1a8036da073b9e1f577ddb9e7818839b58)`(int32 && NewValue)` <a id="structFRHAPI__MatchRequest_1a8036da073b9e1f577ddb9e7818839b58"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchRequest_1a4531d9f94c88c0d046cc0666758574ef)`()` <a id="structFRHAPI__MatchRequest_1a4531d9f94c88c0d046cc0666758574ef"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchRequest_1a6de29c47221e7d8d324839c8129e841e)`() const` <a id="structFRHAPI__MatchRequest_1a6de29c47221e7d8d324839c8129e841e"></a>

Checks whether DurationSeconds_Optional has been set.

#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchRequest_1a2d84c0ebc3266f7add3e93392685b2e6)`() const` <a id="structFRHAPI__MatchRequest_1a2d84c0ebc3266f7add3e93392685b2e6"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchRequest_1a89f17c266ad68ec3092c523ff0fae25f)`()` <a id="structFRHAPI__MatchRequest_1a89f17c266ad68ec3092c523ff0fae25f"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchRequest_1a77a83fb07dcf3e24f6c0c17f32e2dbe6)`()` <a id="structFRHAPI__MatchRequest_1a77a83fb07dcf3e24f6c0c17f32e2dbe6"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchRequest_1a6b63f23d0ffc501803dcedfc642ca622)`() const` <a id="structFRHAPI__MatchRequest_1a6b63f23d0ffc501803dcedfc642ca622"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1a225da65582adb100a97da979df2c501d)`()` <a id="structFRHAPI__MatchRequest_1a225da65582adb100a97da979df2c501d"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1a8918c6aff82d5a697a1ea4f8c69a6552)`() const` <a id="structFRHAPI__MatchRequest_1a8918c6aff82d5a697a1ea4f8c69a6552"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1a83327c7e7d9a3f9dd4ebd5034867a642)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a83327c7e7d9a3f9dd4ebd5034867a642"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchRequest_1a487ab54593c98dd69ccfc13b6751781f)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchRequest_1a487ab54593c98dd69ccfc13b6751781f"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchRequest_1a2e77a38fc1b5d6f211b9260ec4ca6eb4)`()` <a id="structFRHAPI__MatchRequest_1a2e77a38fc1b5d6f211b9260ec4ca6eb4"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchRequest_1aff20746806337eaa3394b439b910f6e1)`() const` <a id="structFRHAPI__MatchRequest_1aff20746806337eaa3394b439b910f6e1"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchRequest_1a23a91dca55ae78220bc521085d0a95b8)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchRequest_1a23a91dca55ae78220bc521085d0a95b8"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchRequest_1aff5d75a0777d300762c69ad82fcd3584)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchRequest_1aff5d75a0777d300762c69ad82fcd3584"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchRequest_1ae7113f8974c51027f09948d67cdcffba)`()` <a id="structFRHAPI__MatchRequest_1ae7113f8974c51027f09948d67cdcffba"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchRequest_1a084c63c4d5d269bd447f208120470dc9)`() const` <a id="structFRHAPI__MatchRequest_1a084c63c4d5d269bd447f208120470dc9"></a>

Checks whether CustomData_Optional has been set.

#### `public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchRequest_1a974d0b78d44e482b14ee9b29d43d6a66)`()` <a id="structFRHAPI__MatchRequest_1a974d0b78d44e482b14ee9b29d43d6a66"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchRequest_1a854d5445b86c03f17895290c262bc358)`() const` <a id="structFRHAPI__MatchRequest_1a854d5445b86c03f17895290c262bc358"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1a8f7f910aaca35d09449b5cae7fa11a76)`()` <a id="structFRHAPI__MatchRequest_1a8f7f910aaca35d09449b5cae7fa11a76"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1a5953df118b9c78453b75892c6bf6ac99)`() const` <a id="structFRHAPI__MatchRequest_1a5953df118b9c78453b75892c6bf6ac99"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1ac90fc845b37ad98b8e7c0e02694249c3)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1ac90fc845b37ad98b8e7c0e02694249c3"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1af17e3de39a4e4527a49884eca0ce99cf)`(FString & OutValue) const` <a id="structFRHAPI__MatchRequest_1af17e3de39a4e4527a49884eca0ce99cf"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchRequest_1a8110090ff23c200c2b44c751e987e712)`()` <a id="structFRHAPI__MatchRequest_1a8110090ff23c200c2b44c751e987e712"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchRequest_1a27088367e43cded539657cfb8a27067c)`() const` <a id="structFRHAPI__MatchRequest_1a27088367e43cded539657cfb8a27067c"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchRequest_1ab82a0437daa90ea4af391a2f8603bfe6)`(const FString & NewValue)` <a id="structFRHAPI__MatchRequest_1ab82a0437daa90ea4af391a2f8603bfe6"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchRequest_1a68709f30be05930f0c06cf9cc2f634c2)`(FString && NewValue)` <a id="structFRHAPI__MatchRequest_1a68709f30be05930f0c06cf9cc2f634c2"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchRequest_1a48222b428b83d6591288b93689013771)`()` <a id="structFRHAPI__MatchRequest_1a48222b428b83d6591288b93689013771"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline bool `[`IsCorrelationIdSet`](#structFRHAPI__MatchRequest_1a2b463b84afea570dde0c731b0ccc2d7a)`() const` <a id="structFRHAPI__MatchRequest_1a2b463b84afea570dde0c731b0ccc2d7a"></a>

Checks whether CorrelationId_Optional has been set.

#### `public inline void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchRequest_1a7489007443af742cef1d2349b07b9cd2)`()` <a id="structFRHAPI__MatchRequest_1a7489007443af742cef1d2349b07b9cd2"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchRequest_1a40704488cb6adfde951d8b8ae5e09476)`() const` <a id="structFRHAPI__MatchRequest_1a40704488cb6adfde951d8b8ae5e09476"></a>

Checks whether CorrelationId_Optional is set to null.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1a35701f65f6d603e7f802a46be00d323c)`()` <a id="structFRHAPI__MatchRequest_1a35701f65f6d603e7f802a46be00d323c"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1a5f40f2e7c8ad850d700bffc5d057da26)`() const` <a id="structFRHAPI__MatchRequest_1a5f40f2e7c8ad850d700bffc5d057da26"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1a1a829546f94680018fd911012bedad2a)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a1a829546f94680018fd911012bedad2a"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessions`](#structFRHAPI__MatchRequest_1a0be6fb15cd2f4d583ea9a98b451f40ce)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchRequest_1a0be6fb15cd2f4d583ea9a98b451f40ce"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchRequest_1ad9125e67b4579fc791af183002f0a465)`()` <a id="structFRHAPI__MatchRequest_1ad9125e67b4579fc791af183002f0a465"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchRequest_1a03746e6e7989d0903b1e4429cb2993cd)`() const` <a id="structFRHAPI__MatchRequest_1a03746e6e7989d0903b1e4429cb2993cd"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchRequest_1a365714ac7ee09ae4eb315582f31978e2)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` <a id="structFRHAPI__MatchRequest_1a365714ac7ee09ae4eb315582f31978e2"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchRequest_1a8fffb967503f5e7cb6f564940dc5cced)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` <a id="structFRHAPI__MatchRequest_1a8fffb967503f5e7cb6f564940dc5cced"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchRequest_1a2d5c977d4b55a58006f774fd8ab10b90)`()` <a id="structFRHAPI__MatchRequest_1a2d5c977d4b55a58006f774fd8ab10b90"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline bool `[`IsSessionsSet`](#structFRHAPI__MatchRequest_1aef5aaab8f795a95efb3ad115da5a54ca)`() const` <a id="structFRHAPI__MatchRequest_1aef5aaab8f795a95efb3ad115da5a54ca"></a>

Checks whether Sessions_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1ada2c72e5408d70ac5851cb2efcc168ce)`()` <a id="structFRHAPI__MatchRequest_1ada2c72e5408d70ac5851cb2efcc168ce"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1afb51e2b37704b41d52ed4f5082fa1242)`() const` <a id="structFRHAPI__MatchRequest_1afb51e2b37704b41d52ed4f5082fa1242"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1a2a2881553cf3e64e27867c79cee2503c)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a2a2881553cf3e64e27867c79cee2503c"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstances`](#structFRHAPI__MatchRequest_1aa61fc22d7bbea363aca034faf9990c49)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchRequest_1aa61fc22d7bbea363aca034faf9990c49"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchRequest_1af6dbb87d3d016010a30b469e3662a757)`()` <a id="structFRHAPI__MatchRequest_1af6dbb87d3d016010a30b469e3662a757"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchRequest_1a8a7156166a48c9b4f6be5a03fafaeee3)`() const` <a id="structFRHAPI__MatchRequest_1a8a7156166a48c9b4f6be5a03fafaeee3"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchRequest_1adb677d72863d342d6e9d5641be69ff93)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` <a id="structFRHAPI__MatchRequest_1adb677d72863d342d6e9d5641be69ff93"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchRequest_1aa2602207e026f38b0f82dc5724920ed0)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` <a id="structFRHAPI__MatchRequest_1aa2602207e026f38b0f82dc5724920ed0"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.

#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchRequest_1a0019195267b0da04fbe8bf9e97d47de9)`()` <a id="structFRHAPI__MatchRequest_1a0019195267b0da04fbe8bf9e97d47de9"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

#### `public inline bool `[`IsInstancesSet`](#structFRHAPI__MatchRequest_1a47fe6c7c16143eb0f710f20aaf3e0086)`() const` <a id="structFRHAPI__MatchRequest_1a47fe6c7c16143eb0f710f20aaf3e0086"></a>

Checks whether Instances_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1a3a5428f7f54c1cd817baa39a5694e812)`()` <a id="structFRHAPI__MatchRequest_1a3a5428f7f54c1cd817baa39a5694e812"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1a6e145d6a1bc1f8df4d5c4923b91912f3)`() const` <a id="structFRHAPI__MatchRequest_1a6e145d6a1bc1f8df4d5c4923b91912f3"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1a87381bfbb837d519fdb4d5bb334be818)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a87381bfbb837d519fdb4d5bb334be818"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllocations`](#structFRHAPI__MatchRequest_1a71f174dadcfba5868683f2f3362da100)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchRequest_1a71f174dadcfba5868683f2f3362da100"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchRequest_1a7062168746b9e1f4813385411083f8c0)`()` <a id="structFRHAPI__MatchRequest_1a7062168746b9e1f4813385411083f8c0"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchRequest_1ad77203193f7c51cbc262123580a3952a)`() const` <a id="structFRHAPI__MatchRequest_1ad77203193f7c51cbc262123580a3952a"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchRequest_1aed5258e6e72527580851c9884e8e7f19)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` <a id="structFRHAPI__MatchRequest_1aed5258e6e72527580851c9884e8e7f19"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchRequest_1a6799e73ee0e17f1fc4132b50f28ebbee)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` <a id="structFRHAPI__MatchRequest_1a6799e73ee0e17f1fc4132b50f28ebbee"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchRequest_1a689d90c17bde84c3da9d5a528d3ad571)`()` <a id="structFRHAPI__MatchRequest_1a689d90c17bde84c3da9d5a528d3ad571"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

#### `public inline bool `[`IsAllocationsSet`](#structFRHAPI__MatchRequest_1ad5f288ada35146f38bcc6eea6c0d62d5)`() const` <a id="structFRHAPI__MatchRequest_1ad5f288ada35146f38bcc6eea6c0d62d5"></a>

Checks whether Allocations_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1aca1c4781957567eeacfbafd9fbb38c6f)`()` <a id="structFRHAPI__MatchRequest_1aca1c4781957567eeacfbafd9fbb38c6f"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1a8d51c659fdc253818e7db83f9ac014ce)`() const` <a id="structFRHAPI__MatchRequest_1a8d51c659fdc253818e7db83f9ac014ce"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1a9d38b560cb665a891914930fc375eb64)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a9d38b560cb665a891914930fc375eb64"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayers`](#structFRHAPI__MatchRequest_1af2587a886d114f308074061c342b2132)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` <a id="structFRHAPI__MatchRequest_1af2587a886d114f308074061c342b2132"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchRequest_1ae0a6567ffa69295963a9ea2ecbceeb02)`()` <a id="structFRHAPI__MatchRequest_1ae0a6567ffa69295963a9ea2ecbceeb02"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchRequest_1a4fce77781958fe63846ee06b7246c4f6)`() const` <a id="structFRHAPI__MatchRequest_1a4fce77781958fe63846ee06b7246c4f6"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchRequest_1a7189755b2996ed5dc42b3dcf987bcfd9)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` <a id="structFRHAPI__MatchRequest_1a7189755b2996ed5dc42b3dcf987bcfd9"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchRequest_1a34fd97ef66fdc1cadc8a5e6b02b654ce)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` <a id="structFRHAPI__MatchRequest_1a34fd97ef66fdc1cadc8a5e6b02b654ce"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__MatchRequest_1a474a625b191c13b7cd9a95430f5a36d0)`()` <a id="structFRHAPI__MatchRequest_1a474a625b191c13b7cd9a95430f5a36d0"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

#### `public inline bool `[`IsPlayersSet`](#structFRHAPI__MatchRequest_1af35bc96e292b9e215de6d6ede57451b3)`() const` <a id="structFRHAPI__MatchRequest_1af35bc96e292b9e215de6d6ede57451b3"></a>

Checks whether Players_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1aae5c8b0b80850e8aa311396fe10fae6d)`()` <a id="structFRHAPI__MatchRequest_1aae5c8b0b80850e8aa311396fe10fae6d"></a>

Gets the value of Segments_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1a5c001d2f2624780f522e4ed097d5a244)`() const` <a id="structFRHAPI__MatchRequest_1a5c001d2f2624780f522e4ed097d5a244"></a>

Gets the value of Segments_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1af3bd426e1b09681c6935a6a7675c3e93)`(const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1af3bd426e1b09681c6935a6a7675c3e93"></a>

Gets the value of Segments_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSegments`](#structFRHAPI__MatchRequest_1a125da882e890fe3a5a1553811ddc203e)`(TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & OutValue) const` <a id="structFRHAPI__MatchRequest_1a125da882e890fe3a5a1553811ddc203e"></a>

Fills OutValue with the value of Segments_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchRequest_1a6834b5f7ee241bae129a599bd77099fd)`()` <a id="structFRHAPI__MatchRequest_1a6834b5f7ee241bae129a599bd77099fd"></a>

Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchRequest_1a89a6b776851c0c88cfa1f3ed8aec9ff0)`() const` <a id="structFRHAPI__MatchRequest_1a89a6b776851c0c88cfa1f3ed8aec9ff0"></a>

Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSegments`](#structFRHAPI__MatchRequest_1a644afec3b28351be61d885e52070dc1c)`(const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & NewValue)` <a id="structFRHAPI__MatchRequest_1a644afec3b28351be61d885e52070dc1c"></a>

Sets the value of Segments_Optional and also sets Segments_IsSet to true.

#### `public inline void `[`SetSegments`](#structFRHAPI__MatchRequest_1ac76b847e32ef3bdda25a0fd5b83a32b9)`(TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > && NewValue)` <a id="structFRHAPI__MatchRequest_1ac76b847e32ef3bdda25a0fd5b83a32b9"></a>

Sets the value of Segments_Optional and also sets Segments_IsSet to true using move semantics.

#### `public inline void `[`ClearSegments`](#structFRHAPI__MatchRequest_1a052cf015350c63d2e2d2c3f2df2633df)`()` <a id="structFRHAPI__MatchRequest_1a052cf015350c63d2e2d2c3f2df2633df"></a>

Clears the value of Segments_Optional and sets Segments_IsSet to false.

#### `public inline bool `[`IsSegmentsSet`](#structFRHAPI__MatchRequest_1a629affbef452f10e1a82b575835af96f)`() const` <a id="structFRHAPI__MatchRequest_1a629affbef452f10e1a82b575835af96f"></a>

Checks whether Segments_Optional has been set.

