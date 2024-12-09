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
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceStartupParams_1a1114e0e5ead3a9b93fa6d7e6730c448e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMap`](#structFRHAPI__InstanceStartupParams_1aaa0604a2745b9f55c1b3dc19fe7a465e)`()` | Gets the value of Map.
`public inline const FString & `[`GetMap`](#structFRHAPI__InstanceStartupParams_1a20558bc02f4ca43e75d901e1f0c30e3f)`() const` | Gets the value of Map.
`public inline void `[`SetMap`](#structFRHAPI__InstanceStartupParams_1af25270d20b41b7f0bf000a4cb30b616a)`(const FString & NewValue)` | Sets the value of Map.
`public inline void `[`SetMap`](#structFRHAPI__InstanceStartupParams_1a8588890990998edbc7db382e632996dd)`(FString && NewValue)` | Sets the value of Map using move semantics.
`public inline FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a2ca1fec3b3005bec6bb9409f610dad0e)`()` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1af50805382b27551da853f645acbfdbd8)`() const` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a10804234c00bec89849f3fc5eb5e8922)`(const FString & DefaultValue) const` | Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a01ba92277f8ad9108411ba77b443519d)`(FString & OutValue) const` | Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetModeOrNull`](#structFRHAPI__InstanceStartupParams_1afc0ac3225b7dd2b26897dd34848c31f8)`()` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetModeOrNull`](#structFRHAPI__InstanceStartupParams_1ac597354579b0ea5518fb4ac514756da9)`() const` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMode`](#structFRHAPI__InstanceStartupParams_1adbbba9c8fa0f52c3f9087db7281c1cb9)`(const FString & NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true.
`public inline void `[`SetMode`](#structFRHAPI__InstanceStartupParams_1a1f72bd3587417064ea052a3f777c6b52)`(FString && NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.
`public inline void `[`ClearMode`](#structFRHAPI__InstanceStartupParams_1a1dde35553e47c5d1aad61150101c1989)`()` | Clears the value of Mode_Optional and sets Mode_IsSet to false.
`public inline bool `[`IsModeSet`](#structFRHAPI__InstanceStartupParams_1a8a00a4d28af12a52159224764dbfa54a)`() const` | Checks whether Mode_Optional has been set.
`public inline FString & `[`GetMiscParams`](#structFRHAPI__InstanceStartupParams_1a79d9fa928c511b3e4f32aec23405fbeb)`()` | Gets the value of MiscParams.
`public inline const FString & `[`GetMiscParams`](#structFRHAPI__InstanceStartupParams_1ad392457d6aea277259c05b936e092052)`() const` | Gets the value of MiscParams.
`public inline void `[`SetMiscParams`](#structFRHAPI__InstanceStartupParams_1abd4d28aed10d8672f10a549f8fdaf62f)`(const FString & NewValue)` | Sets the value of MiscParams.
`public inline void `[`SetMiscParams`](#structFRHAPI__InstanceStartupParams_1a20abb9ed98ef0152489a4e19c0a31000)`(FString && NewValue)` | Sets the value of MiscParams using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1ab5f634770b8323a3fd94bd42d5d94daf)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1a7945142dd20f19446bdba0dd7f194c48)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1adadac0821f574799506f8c2a6371aca9)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1a9ab750252903baa26a8cd6cafd91a57f)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceStartupParams_1a543ebbec72db0c64961c808451cb2466)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceStartupParams_1a7e39b3eb0f427a48b0d39e9b2b32f6f6)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__InstanceStartupParams_1a25ae7fb8ef9402df5d2f8396cce8e901)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__InstanceStartupParams_1aea4d012cc00bb42e7206d8fbc75dfddc)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__InstanceStartupParams_1ad5cd20ad691851348dd54afdf981b84b)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__InstanceStartupParams_1a2f9ca0540116b7f1ed1d9e94c1202e5b)`() const` | Checks whether CustomData_Optional has been set.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceStartupParams_1a1114e0e5ead3a9b93fa6d7e6730c448e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InstanceStartupParams_1a1114e0e5ead3a9b93fa6d7e6730c448e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMap`](#structFRHAPI__InstanceStartupParams_1aaa0604a2745b9f55c1b3dc19fe7a465e)`()` <a id="structFRHAPI__InstanceStartupParams_1aaa0604a2745b9f55c1b3dc19fe7a465e"></a>

Gets the value of Map.

#### `public inline const FString & `[`GetMap`](#structFRHAPI__InstanceStartupParams_1a20558bc02f4ca43e75d901e1f0c30e3f)`() const` <a id="structFRHAPI__InstanceStartupParams_1a20558bc02f4ca43e75d901e1f0c30e3f"></a>

Gets the value of Map.

#### `public inline void `[`SetMap`](#structFRHAPI__InstanceStartupParams_1af25270d20b41b7f0bf000a4cb30b616a)`(const FString & NewValue)` <a id="structFRHAPI__InstanceStartupParams_1af25270d20b41b7f0bf000a4cb30b616a"></a>

Sets the value of Map.

#### `public inline void `[`SetMap`](#structFRHAPI__InstanceStartupParams_1a8588890990998edbc7db382e632996dd)`(FString && NewValue)` <a id="structFRHAPI__InstanceStartupParams_1a8588890990998edbc7db382e632996dd"></a>

Sets the value of Map using move semantics.

#### `public inline FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a2ca1fec3b3005bec6bb9409f610dad0e)`()` <a id="structFRHAPI__InstanceStartupParams_1a2ca1fec3b3005bec6bb9409f610dad0e"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1af50805382b27551da853f645acbfdbd8)`() const` <a id="structFRHAPI__InstanceStartupParams_1af50805382b27551da853f645acbfdbd8"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a10804234c00bec89849f3fc5eb5e8922)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceStartupParams_1a10804234c00bec89849f3fc5eb5e8922"></a>

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a01ba92277f8ad9108411ba77b443519d)`(FString & OutValue) const` <a id="structFRHAPI__InstanceStartupParams_1a01ba92277f8ad9108411ba77b443519d"></a>

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetModeOrNull`](#structFRHAPI__InstanceStartupParams_1afc0ac3225b7dd2b26897dd34848c31f8)`()` <a id="structFRHAPI__InstanceStartupParams_1afc0ac3225b7dd2b26897dd34848c31f8"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetModeOrNull`](#structFRHAPI__InstanceStartupParams_1ac597354579b0ea5518fb4ac514756da9)`() const` <a id="structFRHAPI__InstanceStartupParams_1ac597354579b0ea5518fb4ac514756da9"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMode`](#structFRHAPI__InstanceStartupParams_1adbbba9c8fa0f52c3f9087db7281c1cb9)`(const FString & NewValue)` <a id="structFRHAPI__InstanceStartupParams_1adbbba9c8fa0f52c3f9087db7281c1cb9"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true.

#### `public inline void `[`SetMode`](#structFRHAPI__InstanceStartupParams_1a1f72bd3587417064ea052a3f777c6b52)`(FString && NewValue)` <a id="structFRHAPI__InstanceStartupParams_1a1f72bd3587417064ea052a3f777c6b52"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.

#### `public inline void `[`ClearMode`](#structFRHAPI__InstanceStartupParams_1a1dde35553e47c5d1aad61150101c1989)`()` <a id="structFRHAPI__InstanceStartupParams_1a1dde35553e47c5d1aad61150101c1989"></a>

Clears the value of Mode_Optional and sets Mode_IsSet to false.

#### `public inline bool `[`IsModeSet`](#structFRHAPI__InstanceStartupParams_1a8a00a4d28af12a52159224764dbfa54a)`() const` <a id="structFRHAPI__InstanceStartupParams_1a8a00a4d28af12a52159224764dbfa54a"></a>

Checks whether Mode_Optional has been set.

#### `public inline FString & `[`GetMiscParams`](#structFRHAPI__InstanceStartupParams_1a79d9fa928c511b3e4f32aec23405fbeb)`()` <a id="structFRHAPI__InstanceStartupParams_1a79d9fa928c511b3e4f32aec23405fbeb"></a>

Gets the value of MiscParams.

#### `public inline const FString & `[`GetMiscParams`](#structFRHAPI__InstanceStartupParams_1ad392457d6aea277259c05b936e092052)`() const` <a id="structFRHAPI__InstanceStartupParams_1ad392457d6aea277259c05b936e092052"></a>

Gets the value of MiscParams.

#### `public inline void `[`SetMiscParams`](#structFRHAPI__InstanceStartupParams_1abd4d28aed10d8672f10a549f8fdaf62f)`(const FString & NewValue)` <a id="structFRHAPI__InstanceStartupParams_1abd4d28aed10d8672f10a549f8fdaf62f"></a>

Sets the value of MiscParams.

#### `public inline void `[`SetMiscParams`](#structFRHAPI__InstanceStartupParams_1a20abb9ed98ef0152489a4e19c0a31000)`(FString && NewValue)` <a id="structFRHAPI__InstanceStartupParams_1a20abb9ed98ef0152489a4e19c0a31000"></a>

Sets the value of MiscParams using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1ab5f634770b8323a3fd94bd42d5d94daf)`()` <a id="structFRHAPI__InstanceStartupParams_1ab5f634770b8323a3fd94bd42d5d94daf"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1a7945142dd20f19446bdba0dd7f194c48)`() const` <a id="structFRHAPI__InstanceStartupParams_1a7945142dd20f19446bdba0dd7f194c48"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1adadac0821f574799506f8c2a6371aca9)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InstanceStartupParams_1adadac0821f574799506f8c2a6371aca9"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1a9ab750252903baa26a8cd6cafd91a57f)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InstanceStartupParams_1a9ab750252903baa26a8cd6cafd91a57f"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceStartupParams_1a543ebbec72db0c64961c808451cb2466)`()` <a id="structFRHAPI__InstanceStartupParams_1a543ebbec72db0c64961c808451cb2466"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceStartupParams_1a7e39b3eb0f427a48b0d39e9b2b32f6f6)`() const` <a id="structFRHAPI__InstanceStartupParams_1a7e39b3eb0f427a48b0d39e9b2b32f6f6"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceStartupParams_1a25ae7fb8ef9402df5d2f8396cce8e901)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InstanceStartupParams_1a25ae7fb8ef9402df5d2f8396cce8e901"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceStartupParams_1aea4d012cc00bb42e7206d8fbc75dfddc)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InstanceStartupParams_1aea4d012cc00bb42e7206d8fbc75dfddc"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InstanceStartupParams_1ad5cd20ad691851348dd54afdf981b84b)`()` <a id="structFRHAPI__InstanceStartupParams_1ad5cd20ad691851348dd54afdf981b84b"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__InstanceStartupParams_1a2f9ca0540116b7f1ed1d9e94c1202e5b)`() const` <a id="structFRHAPI__InstanceStartupParams_1a2f9ca0540116b7f1ed1d9e94c1202e5b"></a>

Checks whether CustomData_Optional has been set.

