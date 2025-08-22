---
title: RHAPI_InstanceStartupParams
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InstanceStartupParams`](#structFRHAPI__InstanceStartupParams) | Parameters given to an instance to change what map and mode it loads, and other gameplay behavior.

## struct `FRHAPI_InstanceStartupParams` <a id="structFRHAPI__InstanceStartupParams"></a>

```
struct FRHAPI_InstanceStartupParams
  : public FRHAPI_Model
```

Parameters given to an instance to change what map and mode it loads, and other gameplay behavior.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Map`](#structFRHAPI__InstanceStartupParams_1a8a0711c1dee8bd4388903f0f0f8163da) | Name of the map for the instance to spawn with.
`public FString `[`Mode_Optional`](#structFRHAPI__InstanceStartupParams_1ae99ccd9106b0a17af359547a835bc983) | Game mode for the instance to spawn in.
`public bool `[`Mode_IsSet`](#structFRHAPI__InstanceStartupParams_1ae0321c27d0b6ce23711c72563ad863fe) | true if Mode_Optional has been set to a value
`public FString `[`MiscParams`](#structFRHAPI__InstanceStartupParams_1acb74f767d6ab701ca1bd6be307963742) | Additional commandline parameters for the instance.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceStartupParams_1a1c84d36d36367c97c4eb24fe13b2ff43) | Custom data to pass through to the instance.
`public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceStartupParams_1ab2cb38f8bdeb7e51625f1b7dc763b647) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InstanceStartupParams_1aefcb5aa9e768ad5496c8b794d4e48b52)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceStartupParams_1a6603096c12120dd4d4e76fab4154fa57)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetMap`](#structFRHAPI__InstanceStartupParams_1ab2882b678d915936812e2c012c54fbc7)`()` | Gets the value of Map.
`public inline FORCEINLINE const FString & `[`GetMap`](#structFRHAPI__InstanceStartupParams_1a1786867f121ccb7825ab7abeeeb96094)`() const` | Gets the value of Map.
`public inline FORCEINLINE void `[`SetMap`](#structFRHAPI__InstanceStartupParams_1ac64df8a3d9672e18887f4d915ee87d48)`(const FString & NewValue)` | Sets the value of Map.
`public inline FORCEINLINE void `[`SetMap`](#structFRHAPI__InstanceStartupParams_1a93127b9499b3e26930ccbe61392ff4c6)`(FString && NewValue)` | Sets the value of Map using move semantics.
`public inline FORCEINLINE FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a7a36914a52da8bd0d6c804f6c8b6fe69)`()` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a6a28c3e224256d9402a80ac0bcafa93c)`() const` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1acea22229df052ba75ab3100e2a230e8f)`(const FString & DefaultValue) const` | Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a5bc226fd7bacce10f9039e6b034a09da)`(FString & OutValue) const` | Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetModeOrNull`](#structFRHAPI__InstanceStartupParams_1a161769b53c507ab79c67d87c68105a53)`()` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetModeOrNull`](#structFRHAPI__InstanceStartupParams_1a025d605fe7c219a1d0698ef5753de8b2)`() const` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__InstanceStartupParams_1a27c2a3c44159c5fd37d9620e1c9910c9)`(const FString & NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true.
`public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__InstanceStartupParams_1a6ecd8a12d3a5a71bd5d2ab0025755007)`(FString && NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.
`public inline void `[`ClearMode`](#structFRHAPI__InstanceStartupParams_1a1dde35553e47c5d1aad61150101c1989)`()` | Clears the value of Mode_Optional and sets Mode_IsSet to false.
`public inline FORCEINLINE FString & `[`GetMiscParams`](#structFRHAPI__InstanceStartupParams_1a17c9244432232ebb4cfb37248278eb76)`()` | Gets the value of MiscParams.
`public inline FORCEINLINE const FString & `[`GetMiscParams`](#structFRHAPI__InstanceStartupParams_1a5a7d730178c4acfc3900452cf8b70a33)`() const` | Gets the value of MiscParams.
`public inline FORCEINLINE void `[`SetMiscParams`](#structFRHAPI__InstanceStartupParams_1a2d5115d19e3fd4156b0926c6526672e8)`(const FString & NewValue)` | Sets the value of MiscParams.
`public inline FORCEINLINE void `[`SetMiscParams`](#structFRHAPI__InstanceStartupParams_1a427f5df2eca4676ba54f501ce4eed070)`(FString && NewValue)` | Sets the value of MiscParams using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1a06c990e6e22b121d102a90275d8f8709)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1aa4efee48b994ae7673ed9077142f37bc)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1ac25dda78555fcc0f791ffcdf4c3f6171)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1a5c37ee3aa272a687a606cac417dac333)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceStartupParams_1af41a55a7802fb62d0bfcc1622f338c2e)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceStartupParams_1a7c2b4eef760607b780c0eb11f81c565e)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceStartupParams_1a9dc0d43e19bb10fcc52f6dfaab7bcf0a)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceStartupParams_1ad6beb7b60e876b47d5102d949c97ac40)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__InstanceStartupParams_1ad5cd20ad691851348dd54afdf981b84b)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

### Members

#### `public FString `[`Map`](#structFRHAPI__InstanceStartupParams_1a8a0711c1dee8bd4388903f0f0f8163da) <a id="structFRHAPI__InstanceStartupParams_1a8a0711c1dee8bd4388903f0f0f8163da"></a>

Name of the map for the instance to spawn with.

#### `public FString `[`Mode_Optional`](#structFRHAPI__InstanceStartupParams_1ae99ccd9106b0a17af359547a835bc983) <a id="structFRHAPI__InstanceStartupParams_1ae99ccd9106b0a17af359547a835bc983"></a>

Game mode for the instance to spawn in.

#### `public bool `[`Mode_IsSet`](#structFRHAPI__InstanceStartupParams_1ae0321c27d0b6ce23711c72563ad863fe) <a id="structFRHAPI__InstanceStartupParams_1ae0321c27d0b6ce23711c72563ad863fe"></a>

true if Mode_Optional has been set to a value

#### `public FString `[`MiscParams`](#structFRHAPI__InstanceStartupParams_1acb74f767d6ab701ca1bd6be307963742) <a id="structFRHAPI__InstanceStartupParams_1acb74f767d6ab701ca1bd6be307963742"></a>

Additional commandline parameters for the instance.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceStartupParams_1a1c84d36d36367c97c4eb24fe13b2ff43) <a id="structFRHAPI__InstanceStartupParams_1a1c84d36d36367c97c4eb24fe13b2ff43"></a>

Custom data to pass through to the instance.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceStartupParams_1ab2cb38f8bdeb7e51625f1b7dc763b647) <a id="structFRHAPI__InstanceStartupParams_1ab2cb38f8bdeb7e51625f1b7dc763b647"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__InstanceStartupParams_1aefcb5aa9e768ad5496c8b794d4e48b52)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InstanceStartupParams_1aefcb5aa9e768ad5496c8b794d4e48b52"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceStartupParams_1a6603096c12120dd4d4e76fab4154fa57)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InstanceStartupParams_1a6603096c12120dd4d4e76fab4154fa57"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetMap`](#structFRHAPI__InstanceStartupParams_1ab2882b678d915936812e2c012c54fbc7)`()` <a id="structFRHAPI__InstanceStartupParams_1ab2882b678d915936812e2c012c54fbc7"></a>

Gets the value of Map.

#### `public inline FORCEINLINE const FString & `[`GetMap`](#structFRHAPI__InstanceStartupParams_1a1786867f121ccb7825ab7abeeeb96094)`() const` <a id="structFRHAPI__InstanceStartupParams_1a1786867f121ccb7825ab7abeeeb96094"></a>

Gets the value of Map.

#### `public inline FORCEINLINE void `[`SetMap`](#structFRHAPI__InstanceStartupParams_1ac64df8a3d9672e18887f4d915ee87d48)`(const FString & NewValue)` <a id="structFRHAPI__InstanceStartupParams_1ac64df8a3d9672e18887f4d915ee87d48"></a>

Sets the value of Map.

#### `public inline FORCEINLINE void `[`SetMap`](#structFRHAPI__InstanceStartupParams_1a93127b9499b3e26930ccbe61392ff4c6)`(FString && NewValue)` <a id="structFRHAPI__InstanceStartupParams_1a93127b9499b3e26930ccbe61392ff4c6"></a>

Sets the value of Map using move semantics.

#### `public inline FORCEINLINE FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a7a36914a52da8bd0d6c804f6c8b6fe69)`()` <a id="structFRHAPI__InstanceStartupParams_1a7a36914a52da8bd0d6c804f6c8b6fe69"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a6a28c3e224256d9402a80ac0bcafa93c)`() const` <a id="structFRHAPI__InstanceStartupParams_1a6a28c3e224256d9402a80ac0bcafa93c"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1acea22229df052ba75ab3100e2a230e8f)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceStartupParams_1acea22229df052ba75ab3100e2a230e8f"></a>

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a5bc226fd7bacce10f9039e6b034a09da)`(FString & OutValue) const` <a id="structFRHAPI__InstanceStartupParams_1a5bc226fd7bacce10f9039e6b034a09da"></a>

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetModeOrNull`](#structFRHAPI__InstanceStartupParams_1a161769b53c507ab79c67d87c68105a53)`()` <a id="structFRHAPI__InstanceStartupParams_1a161769b53c507ab79c67d87c68105a53"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetModeOrNull`](#structFRHAPI__InstanceStartupParams_1a025d605fe7c219a1d0698ef5753de8b2)`() const` <a id="structFRHAPI__InstanceStartupParams_1a025d605fe7c219a1d0698ef5753de8b2"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__InstanceStartupParams_1a27c2a3c44159c5fd37d9620e1c9910c9)`(const FString & NewValue)` <a id="structFRHAPI__InstanceStartupParams_1a27c2a3c44159c5fd37d9620e1c9910c9"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__InstanceStartupParams_1a6ecd8a12d3a5a71bd5d2ab0025755007)`(FString && NewValue)` <a id="structFRHAPI__InstanceStartupParams_1a6ecd8a12d3a5a71bd5d2ab0025755007"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.

#### `public inline void `[`ClearMode`](#structFRHAPI__InstanceStartupParams_1a1dde35553e47c5d1aad61150101c1989)`()` <a id="structFRHAPI__InstanceStartupParams_1a1dde35553e47c5d1aad61150101c1989"></a>

Clears the value of Mode_Optional and sets Mode_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetMiscParams`](#structFRHAPI__InstanceStartupParams_1a17c9244432232ebb4cfb37248278eb76)`()` <a id="structFRHAPI__InstanceStartupParams_1a17c9244432232ebb4cfb37248278eb76"></a>

Gets the value of MiscParams.

#### `public inline FORCEINLINE const FString & `[`GetMiscParams`](#structFRHAPI__InstanceStartupParams_1a5a7d730178c4acfc3900452cf8b70a33)`() const` <a id="structFRHAPI__InstanceStartupParams_1a5a7d730178c4acfc3900452cf8b70a33"></a>

Gets the value of MiscParams.

#### `public inline FORCEINLINE void `[`SetMiscParams`](#structFRHAPI__InstanceStartupParams_1a2d5115d19e3fd4156b0926c6526672e8)`(const FString & NewValue)` <a id="structFRHAPI__InstanceStartupParams_1a2d5115d19e3fd4156b0926c6526672e8"></a>

Sets the value of MiscParams.

#### `public inline FORCEINLINE void `[`SetMiscParams`](#structFRHAPI__InstanceStartupParams_1a427f5df2eca4676ba54f501ce4eed070)`(FString && NewValue)` <a id="structFRHAPI__InstanceStartupParams_1a427f5df2eca4676ba54f501ce4eed070"></a>

Sets the value of MiscParams using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1a06c990e6e22b121d102a90275d8f8709)`()` <a id="structFRHAPI__InstanceStartupParams_1a06c990e6e22b121d102a90275d8f8709"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1aa4efee48b994ae7673ed9077142f37bc)`() const` <a id="structFRHAPI__InstanceStartupParams_1aa4efee48b994ae7673ed9077142f37bc"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1ac25dda78555fcc0f791ffcdf4c3f6171)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InstanceStartupParams_1ac25dda78555fcc0f791ffcdf4c3f6171"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1a5c37ee3aa272a687a606cac417dac333)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InstanceStartupParams_1a5c37ee3aa272a687a606cac417dac333"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceStartupParams_1af41a55a7802fb62d0bfcc1622f338c2e)`()` <a id="structFRHAPI__InstanceStartupParams_1af41a55a7802fb62d0bfcc1622f338c2e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceStartupParams_1a7c2b4eef760607b780c0eb11f81c565e)`() const` <a id="structFRHAPI__InstanceStartupParams_1a7c2b4eef760607b780c0eb11f81c565e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceStartupParams_1a9dc0d43e19bb10fcc52f6dfaab7bcf0a)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InstanceStartupParams_1a9dc0d43e19bb10fcc52f6dfaab7bcf0a"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceStartupParams_1ad6beb7b60e876b47d5102d949c97ac40)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InstanceStartupParams_1ad6beb7b60e876b47d5102d949c97ac40"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InstanceStartupParams_1ad5cd20ad691851348dd54afdf981b84b)`()` <a id="structFRHAPI__InstanceStartupParams_1ad5cd20ad691851348dd54afdf981b84b"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

