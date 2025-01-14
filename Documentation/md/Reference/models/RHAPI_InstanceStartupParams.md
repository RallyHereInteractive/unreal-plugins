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
`public inline FString & `[`GetMap`](#structFRHAPI__InstanceStartupParams_1a46be8f3ecbda8b3b7e4055aa92460d6d)`()` | Gets the value of Map.
`public inline const FString & `[`GetMap`](#structFRHAPI__InstanceStartupParams_1a4cd10a45e3180d81dacbb86426af0235)`() const` | Gets the value of Map.
`public inline void `[`SetMap`](#structFRHAPI__InstanceStartupParams_1af25270d20b41b7f0bf000a4cb30b616a)`(const FString & NewValue)` | Sets the value of Map.
`public inline void `[`SetMap`](#structFRHAPI__InstanceStartupParams_1a8588890990998edbc7db382e632996dd)`(FString && NewValue)` | Sets the value of Map using move semantics.
`public inline FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1ada6f3e3570bc5263621c2529ce5aa3f7)`()` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a042e21353146ac475efbcd69f839294a)`() const` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a2abedb53c3853e9b805474f702e0c5f7)`(const FString & DefaultValue) const` | Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a01ba92277f8ad9108411ba77b443519d)`(FString & OutValue) const` | Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetModeOrNull`](#structFRHAPI__InstanceStartupParams_1a2fc9949060b8acd8b56c16c2ddf44fb7)`()` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetModeOrNull`](#structFRHAPI__InstanceStartupParams_1a425fe4f08b354354e2e069905aeda4ab)`() const` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMode`](#structFRHAPI__InstanceStartupParams_1adbbba9c8fa0f52c3f9087db7281c1cb9)`(const FString & NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true.
`public inline void `[`SetMode`](#structFRHAPI__InstanceStartupParams_1a1f72bd3587417064ea052a3f777c6b52)`(FString && NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.
`public inline void `[`ClearMode`](#structFRHAPI__InstanceStartupParams_1a1dde35553e47c5d1aad61150101c1989)`()` | Clears the value of Mode_Optional and sets Mode_IsSet to false.
`public inline bool `[`IsModeSet`](#structFRHAPI__InstanceStartupParams_1a8a00a4d28af12a52159224764dbfa54a)`() const` | Checks whether Mode_Optional has been set.
`public inline FString & `[`GetMiscParams`](#structFRHAPI__InstanceStartupParams_1a6d51f484cc9e6abceae87011ca3ca31b)`()` | Gets the value of MiscParams.
`public inline const FString & `[`GetMiscParams`](#structFRHAPI__InstanceStartupParams_1a5793a7effaf515ad14f86e6f7d28e3e3)`() const` | Gets the value of MiscParams.
`public inline void `[`SetMiscParams`](#structFRHAPI__InstanceStartupParams_1abd4d28aed10d8672f10a549f8fdaf62f)`(const FString & NewValue)` | Sets the value of MiscParams.
`public inline void `[`SetMiscParams`](#structFRHAPI__InstanceStartupParams_1a20abb9ed98ef0152489a4e19c0a31000)`(FString && NewValue)` | Sets the value of MiscParams using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1a6a9a2fc97aeeed2ca100ccf42b03f544)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1a6f06e31a245f71bd5d8a7a75732de446)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1ac9bfecadd31e4f46f2ef54f095ba5298)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1a9ab750252903baa26a8cd6cafd91a57f)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceStartupParams_1a5d7e1cb129d37d6108a448e0c17184fd)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceStartupParams_1a3cbe112bfa4b6b6b867fa3eeb169237e)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceStartupParams_1a6603096c12120dd4d4e76fab4154fa57)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InstanceStartupParams_1a6603096c12120dd4d4e76fab4154fa57"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMap`](#structFRHAPI__InstanceStartupParams_1a46be8f3ecbda8b3b7e4055aa92460d6d)`()` <a id="structFRHAPI__InstanceStartupParams_1a46be8f3ecbda8b3b7e4055aa92460d6d"></a>

Gets the value of Map.

#### `public inline const FString & `[`GetMap`](#structFRHAPI__InstanceStartupParams_1a4cd10a45e3180d81dacbb86426af0235)`() const` <a id="structFRHAPI__InstanceStartupParams_1a4cd10a45e3180d81dacbb86426af0235"></a>

Gets the value of Map.

#### `public inline void `[`SetMap`](#structFRHAPI__InstanceStartupParams_1af25270d20b41b7f0bf000a4cb30b616a)`(const FString & NewValue)` <a id="structFRHAPI__InstanceStartupParams_1af25270d20b41b7f0bf000a4cb30b616a"></a>

Sets the value of Map.

#### `public inline void `[`SetMap`](#structFRHAPI__InstanceStartupParams_1a8588890990998edbc7db382e632996dd)`(FString && NewValue)` <a id="structFRHAPI__InstanceStartupParams_1a8588890990998edbc7db382e632996dd"></a>

Sets the value of Map using move semantics.

#### `public inline FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1ada6f3e3570bc5263621c2529ce5aa3f7)`()` <a id="structFRHAPI__InstanceStartupParams_1ada6f3e3570bc5263621c2529ce5aa3f7"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a042e21353146ac475efbcd69f839294a)`() const` <a id="structFRHAPI__InstanceStartupParams_1a042e21353146ac475efbcd69f839294a"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a2abedb53c3853e9b805474f702e0c5f7)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceStartupParams_1a2abedb53c3853e9b805474f702e0c5f7"></a>

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMode`](#structFRHAPI__InstanceStartupParams_1a01ba92277f8ad9108411ba77b443519d)`(FString & OutValue) const` <a id="structFRHAPI__InstanceStartupParams_1a01ba92277f8ad9108411ba77b443519d"></a>

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetModeOrNull`](#structFRHAPI__InstanceStartupParams_1a2fc9949060b8acd8b56c16c2ddf44fb7)`()` <a id="structFRHAPI__InstanceStartupParams_1a2fc9949060b8acd8b56c16c2ddf44fb7"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetModeOrNull`](#structFRHAPI__InstanceStartupParams_1a425fe4f08b354354e2e069905aeda4ab)`() const` <a id="structFRHAPI__InstanceStartupParams_1a425fe4f08b354354e2e069905aeda4ab"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMode`](#structFRHAPI__InstanceStartupParams_1adbbba9c8fa0f52c3f9087db7281c1cb9)`(const FString & NewValue)` <a id="structFRHAPI__InstanceStartupParams_1adbbba9c8fa0f52c3f9087db7281c1cb9"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true.

#### `public inline void `[`SetMode`](#structFRHAPI__InstanceStartupParams_1a1f72bd3587417064ea052a3f777c6b52)`(FString && NewValue)` <a id="structFRHAPI__InstanceStartupParams_1a1f72bd3587417064ea052a3f777c6b52"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.

#### `public inline void `[`ClearMode`](#structFRHAPI__InstanceStartupParams_1a1dde35553e47c5d1aad61150101c1989)`()` <a id="structFRHAPI__InstanceStartupParams_1a1dde35553e47c5d1aad61150101c1989"></a>

Clears the value of Mode_Optional and sets Mode_IsSet to false.

#### `public inline bool `[`IsModeSet`](#structFRHAPI__InstanceStartupParams_1a8a00a4d28af12a52159224764dbfa54a)`() const` <a id="structFRHAPI__InstanceStartupParams_1a8a00a4d28af12a52159224764dbfa54a"></a>

Checks whether Mode_Optional has been set.

#### `public inline FString & `[`GetMiscParams`](#structFRHAPI__InstanceStartupParams_1a6d51f484cc9e6abceae87011ca3ca31b)`()` <a id="structFRHAPI__InstanceStartupParams_1a6d51f484cc9e6abceae87011ca3ca31b"></a>

Gets the value of MiscParams.

#### `public inline const FString & `[`GetMiscParams`](#structFRHAPI__InstanceStartupParams_1a5793a7effaf515ad14f86e6f7d28e3e3)`() const` <a id="structFRHAPI__InstanceStartupParams_1a5793a7effaf515ad14f86e6f7d28e3e3"></a>

Gets the value of MiscParams.

#### `public inline void `[`SetMiscParams`](#structFRHAPI__InstanceStartupParams_1abd4d28aed10d8672f10a549f8fdaf62f)`(const FString & NewValue)` <a id="structFRHAPI__InstanceStartupParams_1abd4d28aed10d8672f10a549f8fdaf62f"></a>

Sets the value of MiscParams.

#### `public inline void `[`SetMiscParams`](#structFRHAPI__InstanceStartupParams_1a20abb9ed98ef0152489a4e19c0a31000)`(FString && NewValue)` <a id="structFRHAPI__InstanceStartupParams_1a20abb9ed98ef0152489a4e19c0a31000"></a>

Sets the value of MiscParams using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1a6a9a2fc97aeeed2ca100ccf42b03f544)`()` <a id="structFRHAPI__InstanceStartupParams_1a6a9a2fc97aeeed2ca100ccf42b03f544"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1a6f06e31a245f71bd5d8a7a75732de446)`() const` <a id="structFRHAPI__InstanceStartupParams_1a6f06e31a245f71bd5d8a7a75732de446"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1ac9bfecadd31e4f46f2ef54f095ba5298)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InstanceStartupParams_1ac9bfecadd31e4f46f2ef54f095ba5298"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__InstanceStartupParams_1a9ab750252903baa26a8cd6cafd91a57f)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InstanceStartupParams_1a9ab750252903baa26a8cd6cafd91a57f"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceStartupParams_1a5d7e1cb129d37d6108a448e0c17184fd)`()` <a id="structFRHAPI__InstanceStartupParams_1a5d7e1cb129d37d6108a448e0c17184fd"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceStartupParams_1a3cbe112bfa4b6b6b867fa3eeb169237e)`() const` <a id="structFRHAPI__InstanceStartupParams_1a3cbe112bfa4b6b6b867fa3eeb169237e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceStartupParams_1a25ae7fb8ef9402df5d2f8396cce8e901)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InstanceStartupParams_1a25ae7fb8ef9402df5d2f8396cce8e901"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceStartupParams_1aea4d012cc00bb42e7206d8fbc75dfddc)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InstanceStartupParams_1aea4d012cc00bb42e7206d8fbc75dfddc"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InstanceStartupParams_1ad5cd20ad691851348dd54afdf981b84b)`()` <a id="structFRHAPI__InstanceStartupParams_1ad5cd20ad691851348dd54afdf981b84b"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__InstanceStartupParams_1a2f9ca0540116b7f1ed1d9e94c1202e5b)`() const` <a id="structFRHAPI__InstanceStartupParams_1a2f9ca0540116b7f1ed1d9e94c1202e5b"></a>

Checks whether CustomData_Optional has been set.

