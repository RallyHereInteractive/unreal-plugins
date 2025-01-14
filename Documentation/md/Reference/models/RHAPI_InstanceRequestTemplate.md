---
title: RHAPI_InstanceRequestTemplate
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceRequestTemplate_1aeadec3dc1e28c87120c451bbf8709d9a)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1a5761ebbf811675df2e09d32808770737)`()` | Gets the value of InstanceRequestTemplateId.
`public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1ae1c086037c575c653fa2279761607df0)`() const` | Gets the value of InstanceRequestTemplateId.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1ab00c48bd8e766ad1cafeb1f2a8c1c866)`(const FGuid & NewValue)` | Sets the value of InstanceRequestTemplateId.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1a3826403a403527c8a6a3d42ed263b9be)`(FGuid && NewValue)` | Sets the value of InstanceRequestTemplateId using move semantics.
`public inline `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1abb7f2fe062dbcd8d7ec34d9bae8199c8)`()` | Gets the value of MapSelectionList.
`public inline const `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1a7bb30229680fca20b8c16507f80258ef)`() const` | Gets the value of MapSelectionList.
`public inline void `[`SetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1a24c4c27ff67553b581e3656a4d1ea76d)`(const `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & NewValue)` | Sets the value of MapSelectionList.
`public inline void `[`SetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1afa2f838204074e26f41d57c88a450f7a)`(`[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` && NewValue)` | Sets the value of MapSelectionList using move semantics.
`public inline ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a8bd98d195bf5ce06876aee702ddee954)`()` | Gets the value of DefaultHostType.
`public inline const ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a7a093f3b7570a8d53168e7e420c60bfe)`() const` | Gets the value of DefaultHostType.
`public inline void `[`SetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a965ba6e0e3d21a8cd2e4844fa1ddfc4f)`(const ERHAPI_HostType & NewValue)` | Sets the value of DefaultHostType.
`public inline void `[`SetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a4763585e6faf1f992f11a65037fe2513)`(ERHAPI_HostType && NewValue)` | Sets the value of DefaultHostType using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a7c5ae8e278d354b3b7b4c9c92a25dec6)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a1058159dcab9e40c2a096887f27175e1)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a8a86b5eb4f0dc55ec99a4ebc63e04c36)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a4914983281b865b273142afa4b3f6ab4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequestTemplate_1a7871186a80ad055281d9e8e564384389)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequestTemplate_1a5f3d2f907cfc2951974381bbf36ed8d0)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceRequestTemplate_1aeadec3dc1e28c87120c451bbf8709d9a)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InstanceRequestTemplate_1aeadec3dc1e28c87120c451bbf8709d9a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1a5761ebbf811675df2e09d32808770737)`()` <a id="structFRHAPI__InstanceRequestTemplate_1a5761ebbf811675df2e09d32808770737"></a>

Gets the value of InstanceRequestTemplateId.

#### `public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1ae1c086037c575c653fa2279761607df0)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1ae1c086037c575c653fa2279761607df0"></a>

Gets the value of InstanceRequestTemplateId.

#### `public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1ab00c48bd8e766ad1cafeb1f2a8c1c866)`(const FGuid & NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1ab00c48bd8e766ad1cafeb1f2a8c1c866"></a>

Sets the value of InstanceRequestTemplateId.

#### `public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1a3826403a403527c8a6a3d42ed263b9be)`(FGuid && NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1a3826403a403527c8a6a3d42ed263b9be"></a>

Sets the value of InstanceRequestTemplateId using move semantics.

#### `public inline `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1abb7f2fe062dbcd8d7ec34d9bae8199c8)`()` <a id="structFRHAPI__InstanceRequestTemplate_1abb7f2fe062dbcd8d7ec34d9bae8199c8"></a>

Gets the value of MapSelectionList.

#### `public inline const `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1a7bb30229680fca20b8c16507f80258ef)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1a7bb30229680fca20b8c16507f80258ef"></a>

Gets the value of MapSelectionList.

#### `public inline void `[`SetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1a24c4c27ff67553b581e3656a4d1ea76d)`(const `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1a24c4c27ff67553b581e3656a4d1ea76d"></a>

Sets the value of MapSelectionList.

#### `public inline void `[`SetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1afa2f838204074e26f41d57c88a450f7a)`(`[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` && NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1afa2f838204074e26f41d57c88a450f7a"></a>

Sets the value of MapSelectionList using move semantics.

#### `public inline ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a8bd98d195bf5ce06876aee702ddee954)`()` <a id="structFRHAPI__InstanceRequestTemplate_1a8bd98d195bf5ce06876aee702ddee954"></a>

Gets the value of DefaultHostType.

#### `public inline const ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a7a093f3b7570a8d53168e7e420c60bfe)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1a7a093f3b7570a8d53168e7e420c60bfe"></a>

Gets the value of DefaultHostType.

#### `public inline void `[`SetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a965ba6e0e3d21a8cd2e4844fa1ddfc4f)`(const ERHAPI_HostType & NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1a965ba6e0e3d21a8cd2e4844fa1ddfc4f"></a>

Sets the value of DefaultHostType.

#### `public inline void `[`SetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a4763585e6faf1f992f11a65037fe2513)`(ERHAPI_HostType && NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1a4763585e6faf1f992f11a65037fe2513"></a>

Sets the value of DefaultHostType using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a7c5ae8e278d354b3b7b4c9c92a25dec6)`()` <a id="structFRHAPI__InstanceRequestTemplate_1a7c5ae8e278d354b3b7b4c9c92a25dec6"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a1058159dcab9e40c2a096887f27175e1)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1a1058159dcab9e40c2a096887f27175e1"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a8a86b5eb4f0dc55ec99a4ebc63e04c36)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InstanceRequestTemplate_1a8a86b5eb4f0dc55ec99a4ebc63e04c36"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a4914983281b865b273142afa4b3f6ab4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InstanceRequestTemplate_1a4914983281b865b273142afa4b3f6ab4"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequestTemplate_1a7871186a80ad055281d9e8e564384389)`()` <a id="structFRHAPI__InstanceRequestTemplate_1a7871186a80ad055281d9e8e564384389"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequestTemplate_1a5f3d2f907cfc2951974381bbf36ed8d0)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1a5f3d2f907cfc2951974381bbf36ed8d0"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceRequestTemplate_1aa026a5029fb1929dcd7f628436e84d18)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1aa026a5029fb1929dcd7f628436e84d18"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a72a223ccf5728f0931a004042ca01439)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1a72a223ccf5728f0931a004042ca01439"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InstanceRequestTemplate_1ac216c36da42fc221390416e2cd8cb2d1)`()` <a id="structFRHAPI__InstanceRequestTemplate_1ac216c36da42fc221390416e2cd8cb2d1"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__InstanceRequestTemplate_1ab8f4832521dbec60a69a723867026ee0)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1ab8f4832521dbec60a69a723867026ee0"></a>

Checks whether CustomData_Optional has been set.

