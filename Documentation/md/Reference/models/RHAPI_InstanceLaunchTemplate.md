---
title: RHAPI_InstanceLaunchTemplate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InstanceLaunchTemplate`](#structFRHAPI__InstanceLaunchTemplate) | **DEPRECATED** Configuration about how an instance should behave when it&#39;s allocated

## struct `FRHAPI_InstanceLaunchTemplate` <a id="structFRHAPI__InstanceLaunchTemplate"></a>

```
struct FRHAPI_InstanceLaunchTemplate
  : public FRHAPI_Model
```

**DEPRECATED** Configuration about how an instance should behave when it&#39;s allocated

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`InstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1affe64ae2fe44b0b1caf1d8c858c5615d) | ID to uniquely identify this instance launch template.
`public `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` `[`MapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1af18bdd7b827122711991ea24f173fc3b) | A selection list of maps that can be chosen to launch into.
`public ERHAPI_HostType `[`DefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a0b56b43efbfe4616f67e08338d568d47) | Default host type for this template. Can be overriden in instance requests.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceLaunchTemplate_1a6bf36189794fec0d38e69a55b4135363) | Custom data that will be passed to the session during the instance launch request.
`public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceLaunchTemplate_1a364303f0bb7d6d6f0e90eb75c41ac937) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InstanceLaunchTemplate_1a387cb5e47813e6272589cfb2063a977e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceLaunchTemplate_1aa8c369ff2a6768b6b1bf3a35800e341b)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a4f496e1fc36355fd6b00f4ae4c685a80)`()` | Gets the value of InstanceLaunchTemplateId.
`public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a78c542aea6a41dbd92be5c3ca75aecdc)`() const` | Gets the value of InstanceLaunchTemplateId.
`public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a3bc4212567aa2e3680f46dc5639ba8b4)`(const FGuid & NewValue)` | Sets the value of InstanceLaunchTemplateId.
`public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a3426195d541d08004a7539f41600c007)`(FGuid && NewValue)` | Sets the value of InstanceLaunchTemplateId using move semantics.
`public inline `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1ad8d683ad089caa9abac46dc159fdd837)`()` | Gets the value of MapSelectionList.
`public inline const `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1a7c9d3d25ab271ed6b36761445272cb3b)`() const` | Gets the value of MapSelectionList.
`public inline void `[`SetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1a2a7d3d49cb4c26e1c34154d96171e0bb)`(const `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` & NewValue)` | Sets the value of MapSelectionList.
`public inline void `[`SetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1aade4109fc2898082579338ec5b9f3a24)`(`[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` && NewValue)` | Sets the value of MapSelectionList using move semantics.
`public inline ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a565716f1a5023620d0ca9f07e4fc506b)`()` | Gets the value of DefaultHostType.
`public inline const ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a95bd50ab6e3037f4fb9e22efbbb35a9a)`() const` | Gets the value of DefaultHostType.
`public inline void `[`SetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a32c140e58d9e51087dd5c49aaec10224)`(const ERHAPI_HostType & NewValue)` | Sets the value of DefaultHostType.
`public inline void `[`SetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a1a43b406f8003fcb98910e327f7cd960)`(ERHAPI_HostType && NewValue)` | Sets the value of DefaultHostType using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a4fd3566306c1fca71d78d9f38d6bc3da)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a67409b5a9e4a42ed4ccf764071e3bf86)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a87595254ec0e1fbdf0b6d0f560f02a61)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a2c4b1a89f7008b6a896f0b698ad16ec4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceLaunchTemplate_1ae3bf304bb7d39469cdeac733899f88ae)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceLaunchTemplate_1afa5c2aa2a8aeb80212ad8fc040d08a2c)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1ab47861711e09857401a9e4618918727c)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1ac3511caecbc2a9851a13b8ff6d761ab9)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__InstanceLaunchTemplate_1accf875216c04898f0a996ce52e838833)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__InstanceLaunchTemplate_1a11b1e5cffb2fd79075ecffe055775e54)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public FGuid `[`InstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1affe64ae2fe44b0b1caf1d8c858c5615d) <a id="structFRHAPI__InstanceLaunchTemplate_1affe64ae2fe44b0b1caf1d8c858c5615d"></a>

ID to uniquely identify this instance launch template.

#### `public `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` `[`MapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1af18bdd7b827122711991ea24f173fc3b) <a id="structFRHAPI__InstanceLaunchTemplate_1af18bdd7b827122711991ea24f173fc3b"></a>

A selection list of maps that can be chosen to launch into.

#### `public ERHAPI_HostType `[`DefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a0b56b43efbfe4616f67e08338d568d47) <a id="structFRHAPI__InstanceLaunchTemplate_1a0b56b43efbfe4616f67e08338d568d47"></a>

Default host type for this template. Can be overriden in instance requests.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceLaunchTemplate_1a6bf36189794fec0d38e69a55b4135363) <a id="structFRHAPI__InstanceLaunchTemplate_1a6bf36189794fec0d38e69a55b4135363"></a>

Custom data that will be passed to the session during the instance launch request.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceLaunchTemplate_1a364303f0bb7d6d6f0e90eb75c41ac937) <a id="structFRHAPI__InstanceLaunchTemplate_1a364303f0bb7d6d6f0e90eb75c41ac937"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__InstanceLaunchTemplate_1a387cb5e47813e6272589cfb2063a977e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1a387cb5e47813e6272589cfb2063a977e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceLaunchTemplate_1aa8c369ff2a6768b6b1bf3a35800e341b)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InstanceLaunchTemplate_1aa8c369ff2a6768b6b1bf3a35800e341b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a4f496e1fc36355fd6b00f4ae4c685a80)`()` <a id="structFRHAPI__InstanceLaunchTemplate_1a4f496e1fc36355fd6b00f4ae4c685a80"></a>

Gets the value of InstanceLaunchTemplateId.

#### `public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a78c542aea6a41dbd92be5c3ca75aecdc)`() const` <a id="structFRHAPI__InstanceLaunchTemplate_1a78c542aea6a41dbd92be5c3ca75aecdc"></a>

Gets the value of InstanceLaunchTemplateId.

#### `public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a3bc4212567aa2e3680f46dc5639ba8b4)`(const FGuid & NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1a3bc4212567aa2e3680f46dc5639ba8b4"></a>

Sets the value of InstanceLaunchTemplateId.

#### `public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a3426195d541d08004a7539f41600c007)`(FGuid && NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1a3426195d541d08004a7539f41600c007"></a>

Sets the value of InstanceLaunchTemplateId using move semantics.

#### `public inline `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1ad8d683ad089caa9abac46dc159fdd837)`()` <a id="structFRHAPI__InstanceLaunchTemplate_1ad8d683ad089caa9abac46dc159fdd837"></a>

Gets the value of MapSelectionList.

#### `public inline const `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1a7c9d3d25ab271ed6b36761445272cb3b)`() const` <a id="structFRHAPI__InstanceLaunchTemplate_1a7c9d3d25ab271ed6b36761445272cb3b"></a>

Gets the value of MapSelectionList.

#### `public inline void `[`SetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1a2a7d3d49cb4c26e1c34154d96171e0bb)`(const `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` & NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1a2a7d3d49cb4c26e1c34154d96171e0bb"></a>

Sets the value of MapSelectionList.

#### `public inline void `[`SetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1aade4109fc2898082579338ec5b9f3a24)`(`[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` && NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1aade4109fc2898082579338ec5b9f3a24"></a>

Sets the value of MapSelectionList using move semantics.

#### `public inline ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a565716f1a5023620d0ca9f07e4fc506b)`()` <a id="structFRHAPI__InstanceLaunchTemplate_1a565716f1a5023620d0ca9f07e4fc506b"></a>

Gets the value of DefaultHostType.

#### `public inline const ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a95bd50ab6e3037f4fb9e22efbbb35a9a)`() const` <a id="structFRHAPI__InstanceLaunchTemplate_1a95bd50ab6e3037f4fb9e22efbbb35a9a"></a>

Gets the value of DefaultHostType.

#### `public inline void `[`SetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a32c140e58d9e51087dd5c49aaec10224)`(const ERHAPI_HostType & NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1a32c140e58d9e51087dd5c49aaec10224"></a>

Sets the value of DefaultHostType.

#### `public inline void `[`SetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a1a43b406f8003fcb98910e327f7cd960)`(ERHAPI_HostType && NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1a1a43b406f8003fcb98910e327f7cd960"></a>

Sets the value of DefaultHostType using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a4fd3566306c1fca71d78d9f38d6bc3da)`()` <a id="structFRHAPI__InstanceLaunchTemplate_1a4fd3566306c1fca71d78d9f38d6bc3da"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a67409b5a9e4a42ed4ccf764071e3bf86)`() const` <a id="structFRHAPI__InstanceLaunchTemplate_1a67409b5a9e4a42ed4ccf764071e3bf86"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a87595254ec0e1fbdf0b6d0f560f02a61)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InstanceLaunchTemplate_1a87595254ec0e1fbdf0b6d0f560f02a61"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a2c4b1a89f7008b6a896f0b698ad16ec4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InstanceLaunchTemplate_1a2c4b1a89f7008b6a896f0b698ad16ec4"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceLaunchTemplate_1ae3bf304bb7d39469cdeac733899f88ae)`()` <a id="structFRHAPI__InstanceLaunchTemplate_1ae3bf304bb7d39469cdeac733899f88ae"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceLaunchTemplate_1afa5c2aa2a8aeb80212ad8fc040d08a2c)`() const` <a id="structFRHAPI__InstanceLaunchTemplate_1afa5c2aa2a8aeb80212ad8fc040d08a2c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1ab47861711e09857401a9e4618918727c)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1ab47861711e09857401a9e4618918727c"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1ac3511caecbc2a9851a13b8ff6d761ab9)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1ac3511caecbc2a9851a13b8ff6d761ab9"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InstanceLaunchTemplate_1accf875216c04898f0a996ce52e838833)`()` <a id="structFRHAPI__InstanceLaunchTemplate_1accf875216c04898f0a996ce52e838833"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__InstanceLaunchTemplate_1a11b1e5cffb2fd79075ecffe055775e54)`() const` <a id="structFRHAPI__InstanceLaunchTemplate_1a11b1e5cffb2fd79075ecffe055775e54"></a>

Checks whether CustomData_Optional has been set.

