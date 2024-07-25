# group `RHAPI_InstanceRequestTemplate` <a id="group__RHAPI__InstanceRequestTemplate"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InstanceRequestTemplate`](#structFRHAPI__InstanceRequestTemplate) | Configuration about how an instance should behave when it&#39;s allocated.

## struct `FRHAPI_InstanceRequestTemplate` <a id="structFRHAPI__InstanceRequestTemplate"></a>

```
struct FRHAPI_InstanceRequestTemplate
  : public FRHAPI_Model
```

Configuration about how an instance should behave when it&#39;s allocated.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`InstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1af5b45933ea6a680723d746ad01d20a6f) | ID to uniquely identify this instance launch template.
`public `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` `[`MapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1a4ef0b1d2d12365b73ba57d3f17028cd1) | A selection list of maps that can be chosen to launch into.
`public ERHAPI_HostType `[`DefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a5ba4b7d3a1cae608a8bcbc1d47e13874) | Default host type for this template. Can be overriden in instance requests.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceRequestTemplate_1ae5ca6a7369d28296f09fa18d94db571a) | Custom data that will be passed to the session during the instance launch request.
`public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceRequestTemplate_1a64805530c4189001f0d28d7e6aef6d56) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InstanceRequestTemplate_1a4c90c6f520a29d4eb59717cc1d1da771)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceRequestTemplate_1a56c75051e2c15c09e11bb07815b745e0)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1aacb4d163e889b32ad05a90a0c405bd75)`()` | Gets the value of InstanceRequestTemplateId.
`public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1a0c23e7ad0bf3901d8d9b53bfda7a9696)`() const` | Gets the value of InstanceRequestTemplateId.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1ab00c48bd8e766ad1cafeb1f2a8c1c866)`(const FGuid & NewValue)` | Sets the value of InstanceRequestTemplateId.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1a3826403a403527c8a6a3d42ed263b9be)`(FGuid && NewValue)` | Sets the value of InstanceRequestTemplateId using move semantics.
`public inline `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1a94e8e368c26b057c8609ee8b8a2280e3)`()` | Gets the value of MapSelectionList.
`public inline const `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1ad51b5d3d03e160c9ef83ce829aaaa3cc)`() const` | Gets the value of MapSelectionList.
`public inline void `[`SetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1a24c4c27ff67553b581e3656a4d1ea76d)`(const `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & NewValue)` | Sets the value of MapSelectionList.
`public inline void `[`SetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1afa2f838204074e26f41d57c88a450f7a)`(`[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` && NewValue)` | Sets the value of MapSelectionList using move semantics.
`public inline ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a72bb00a45fa50d72d01479adc7d27506)`()` | Gets the value of DefaultHostType.
`public inline const ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a3860adb1ea4174d7abf5f11a62252457)`() const` | Gets the value of DefaultHostType.
`public inline void `[`SetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a965ba6e0e3d21a8cd2e4844fa1ddfc4f)`(const ERHAPI_HostType & NewValue)` | Sets the value of DefaultHostType.
`public inline void `[`SetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a4763585e6faf1f992f11a65037fe2513)`(ERHAPI_HostType && NewValue)` | Sets the value of DefaultHostType using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a79d0d4293fa8d90635ee3c31a319982e)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a56d73bcd0efe05daf0de38bde5fc8de9)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a4ffff34289210075aee9f8d1d918ebed)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a4914983281b865b273142afa4b3f6ab4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequestTemplate_1ad5ef053599f206f032395de929b55e2c)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequestTemplate_1afa5b06288870d3774750cc8582d4d890)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__InstanceRequestTemplate_1aa026a5029fb1929dcd7f628436e84d18)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a72a223ccf5728f0931a004042ca01439)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__InstanceRequestTemplate_1ac216c36da42fc221390416e2cd8cb2d1)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__InstanceRequestTemplate_1ab8f4832521dbec60a69a723867026ee0)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public FGuid `[`InstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1af5b45933ea6a680723d746ad01d20a6f) <a id="structFRHAPI__InstanceRequestTemplate_1af5b45933ea6a680723d746ad01d20a6f"></a>

ID to uniquely identify this instance launch template.

#### `public `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` `[`MapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1a4ef0b1d2d12365b73ba57d3f17028cd1) <a id="structFRHAPI__InstanceRequestTemplate_1a4ef0b1d2d12365b73ba57d3f17028cd1"></a>

A selection list of maps that can be chosen to launch into.

#### `public ERHAPI_HostType `[`DefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a5ba4b7d3a1cae608a8bcbc1d47e13874) <a id="structFRHAPI__InstanceRequestTemplate_1a5ba4b7d3a1cae608a8bcbc1d47e13874"></a>

Default host type for this template. Can be overriden in instance requests.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceRequestTemplate_1ae5ca6a7369d28296f09fa18d94db571a) <a id="structFRHAPI__InstanceRequestTemplate_1ae5ca6a7369d28296f09fa18d94db571a"></a>

Custom data that will be passed to the session during the instance launch request.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceRequestTemplate_1a64805530c4189001f0d28d7e6aef6d56) <a id="structFRHAPI__InstanceRequestTemplate_1a64805530c4189001f0d28d7e6aef6d56"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__InstanceRequestTemplate_1a4c90c6f520a29d4eb59717cc1d1da771)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InstanceRequestTemplate_1a4c90c6f520a29d4eb59717cc1d1da771"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceRequestTemplate_1a56c75051e2c15c09e11bb07815b745e0)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InstanceRequestTemplate_1a56c75051e2c15c09e11bb07815b745e0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1aacb4d163e889b32ad05a90a0c405bd75)`()` <a id="structFRHAPI__InstanceRequestTemplate_1aacb4d163e889b32ad05a90a0c405bd75"></a>

Gets the value of InstanceRequestTemplateId.

#### `public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1a0c23e7ad0bf3901d8d9b53bfda7a9696)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1a0c23e7ad0bf3901d8d9b53bfda7a9696"></a>

Gets the value of InstanceRequestTemplateId.

#### `public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1ab00c48bd8e766ad1cafeb1f2a8c1c866)`(const FGuid & NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1ab00c48bd8e766ad1cafeb1f2a8c1c866"></a>

Sets the value of InstanceRequestTemplateId.

#### `public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1a3826403a403527c8a6a3d42ed263b9be)`(FGuid && NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1a3826403a403527c8a6a3d42ed263b9be"></a>

Sets the value of InstanceRequestTemplateId using move semantics.

#### `public inline `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1a94e8e368c26b057c8609ee8b8a2280e3)`()` <a id="structFRHAPI__InstanceRequestTemplate_1a94e8e368c26b057c8609ee8b8a2280e3"></a>

Gets the value of MapSelectionList.

#### `public inline const `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1ad51b5d3d03e160c9ef83ce829aaaa3cc)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1ad51b5d3d03e160c9ef83ce829aaaa3cc"></a>

Gets the value of MapSelectionList.

#### `public inline void `[`SetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1a24c4c27ff67553b581e3656a4d1ea76d)`(const `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1a24c4c27ff67553b581e3656a4d1ea76d"></a>

Sets the value of MapSelectionList.

#### `public inline void `[`SetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1afa2f838204074e26f41d57c88a450f7a)`(`[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` && NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1afa2f838204074e26f41d57c88a450f7a"></a>

Sets the value of MapSelectionList using move semantics.

#### `public inline ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a72bb00a45fa50d72d01479adc7d27506)`()` <a id="structFRHAPI__InstanceRequestTemplate_1a72bb00a45fa50d72d01479adc7d27506"></a>

Gets the value of DefaultHostType.

#### `public inline const ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a3860adb1ea4174d7abf5f11a62252457)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1a3860adb1ea4174d7abf5f11a62252457"></a>

Gets the value of DefaultHostType.

#### `public inline void `[`SetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a965ba6e0e3d21a8cd2e4844fa1ddfc4f)`(const ERHAPI_HostType & NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1a965ba6e0e3d21a8cd2e4844fa1ddfc4f"></a>

Sets the value of DefaultHostType.

#### `public inline void `[`SetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a4763585e6faf1f992f11a65037fe2513)`(ERHAPI_HostType && NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1a4763585e6faf1f992f11a65037fe2513"></a>

Sets the value of DefaultHostType using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a79d0d4293fa8d90635ee3c31a319982e)`()` <a id="structFRHAPI__InstanceRequestTemplate_1a79d0d4293fa8d90635ee3c31a319982e"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a56d73bcd0efe05daf0de38bde5fc8de9)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1a56d73bcd0efe05daf0de38bde5fc8de9"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a4ffff34289210075aee9f8d1d918ebed)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InstanceRequestTemplate_1a4ffff34289210075aee9f8d1d918ebed"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a4914983281b865b273142afa4b3f6ab4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InstanceRequestTemplate_1a4914983281b865b273142afa4b3f6ab4"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequestTemplate_1ad5ef053599f206f032395de929b55e2c)`()` <a id="structFRHAPI__InstanceRequestTemplate_1ad5ef053599f206f032395de929b55e2c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequestTemplate_1afa5b06288870d3774750cc8582d4d890)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1afa5b06288870d3774750cc8582d4d890"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceRequestTemplate_1aa026a5029fb1929dcd7f628436e84d18)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1aa026a5029fb1929dcd7f628436e84d18"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a72a223ccf5728f0931a004042ca01439)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1a72a223ccf5728f0931a004042ca01439"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InstanceRequestTemplate_1ac216c36da42fc221390416e2cd8cb2d1)`()` <a id="structFRHAPI__InstanceRequestTemplate_1ac216c36da42fc221390416e2cd8cb2d1"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__InstanceRequestTemplate_1ab8f4832521dbec60a69a723867026ee0)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1ab8f4832521dbec60a69a723867026ee0"></a>

Checks whether CustomData_Optional has been set.

