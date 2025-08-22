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
`public inline FORCEINLINE FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1aacd7215742be43ab4d3a7212132ea3c5)`()` | Gets the value of InstanceLaunchTemplateId.
`public inline FORCEINLINE const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a491738ab4be8e5e35002ac9d7859a031)`() const` | Gets the value of InstanceLaunchTemplateId.
`public inline FORCEINLINE void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1ab9557f3eb11d67cd1893f4d7f93fbbd3)`(const FGuid & NewValue)` | Sets the value of InstanceLaunchTemplateId.
`public inline FORCEINLINE void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a19944156c92e55ff56a2519d18f2d940)`(FGuid && NewValue)` | Sets the value of InstanceLaunchTemplateId using move semantics.
`public inline FORCEINLINE `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1a8de5dfb8c76b956a4c44ed50581688b0)`()` | Gets the value of MapSelectionList.
`public inline FORCEINLINE const `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1a50b972a8362c2f82fc5e3ae5bebbe31b)`() const` | Gets the value of MapSelectionList.
`public inline FORCEINLINE void `[`SetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1a32da71b8b23972db8eee1dcfe9ce9602)`(const `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` & NewValue)` | Sets the value of MapSelectionList.
`public inline FORCEINLINE void `[`SetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1a5ebf60dceda55d600028ca1db8cb76fb)`(`[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` && NewValue)` | Sets the value of MapSelectionList using move semantics.
`public inline FORCEINLINE ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a7bf09c376c123849121ba723e4e76216)`()` | Gets the value of DefaultHostType.
`public inline FORCEINLINE const ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1aab2fa0d58a9aab1212c97615b604a3ab)`() const` | Gets the value of DefaultHostType.
`public inline FORCEINLINE void `[`SetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a7cd7c00a73e09630a8fd7c6359f68a86)`(const ERHAPI_HostType & NewValue)` | Sets the value of DefaultHostType.
`public inline FORCEINLINE void `[`SetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1ac3b7938e47e149958677368f15a2d244)`(ERHAPI_HostType && NewValue)` | Sets the value of DefaultHostType using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1ab44e4204fd19075fd4f400d327fbf5e0)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a32bd59a2e2cd1193e16ba4707baebf60)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1aadacd7b91afcdd877e868a7a5e051581)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a5d9ca4daa5cd1f46f7359f72fc8806fd)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceLaunchTemplate_1a863dcc082f08865a342a84a2b8998314)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceLaunchTemplate_1a5a249d3356ec39691b56f2361106b38b)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a01c06c91cf9308331dfb7685f4a82ba6)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a1fa09222ff22cc419f4a0cadf2aa6e0a)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__InstanceLaunchTemplate_1accf875216c04898f0a996ce52e838833)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

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

#### `public inline FORCEINLINE FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1aacd7215742be43ab4d3a7212132ea3c5)`()` <a id="structFRHAPI__InstanceLaunchTemplate_1aacd7215742be43ab4d3a7212132ea3c5"></a>

Gets the value of InstanceLaunchTemplateId.

#### `public inline FORCEINLINE const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a491738ab4be8e5e35002ac9d7859a031)`() const` <a id="structFRHAPI__InstanceLaunchTemplate_1a491738ab4be8e5e35002ac9d7859a031"></a>

Gets the value of InstanceLaunchTemplateId.

#### `public inline FORCEINLINE void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1ab9557f3eb11d67cd1893f4d7f93fbbd3)`(const FGuid & NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1ab9557f3eb11d67cd1893f4d7f93fbbd3"></a>

Sets the value of InstanceLaunchTemplateId.

#### `public inline FORCEINLINE void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a19944156c92e55ff56a2519d18f2d940)`(FGuid && NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1a19944156c92e55ff56a2519d18f2d940"></a>

Sets the value of InstanceLaunchTemplateId using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1a8de5dfb8c76b956a4c44ed50581688b0)`()` <a id="structFRHAPI__InstanceLaunchTemplate_1a8de5dfb8c76b956a4c44ed50581688b0"></a>

Gets the value of MapSelectionList.

#### `public inline FORCEINLINE const `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1a50b972a8362c2f82fc5e3ae5bebbe31b)`() const` <a id="structFRHAPI__InstanceLaunchTemplate_1a50b972a8362c2f82fc5e3ae5bebbe31b"></a>

Gets the value of MapSelectionList.

#### `public inline FORCEINLINE void `[`SetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1a32da71b8b23972db8eee1dcfe9ce9602)`(const `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` & NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1a32da71b8b23972db8eee1dcfe9ce9602"></a>

Sets the value of MapSelectionList.

#### `public inline FORCEINLINE void `[`SetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1a5ebf60dceda55d600028ca1db8cb76fb)`(`[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` && NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1a5ebf60dceda55d600028ca1db8cb76fb"></a>

Sets the value of MapSelectionList using move semantics.

#### `public inline FORCEINLINE ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a7bf09c376c123849121ba723e4e76216)`()` <a id="structFRHAPI__InstanceLaunchTemplate_1a7bf09c376c123849121ba723e4e76216"></a>

Gets the value of DefaultHostType.

#### `public inline FORCEINLINE const ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1aab2fa0d58a9aab1212c97615b604a3ab)`() const` <a id="structFRHAPI__InstanceLaunchTemplate_1aab2fa0d58a9aab1212c97615b604a3ab"></a>

Gets the value of DefaultHostType.

#### `public inline FORCEINLINE void `[`SetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a7cd7c00a73e09630a8fd7c6359f68a86)`(const ERHAPI_HostType & NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1a7cd7c00a73e09630a8fd7c6359f68a86"></a>

Sets the value of DefaultHostType.

#### `public inline FORCEINLINE void `[`SetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1ac3b7938e47e149958677368f15a2d244)`(ERHAPI_HostType && NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1ac3b7938e47e149958677368f15a2d244"></a>

Sets the value of DefaultHostType using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1ab44e4204fd19075fd4f400d327fbf5e0)`()` <a id="structFRHAPI__InstanceLaunchTemplate_1ab44e4204fd19075fd4f400d327fbf5e0"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a32bd59a2e2cd1193e16ba4707baebf60)`() const` <a id="structFRHAPI__InstanceLaunchTemplate_1a32bd59a2e2cd1193e16ba4707baebf60"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1aadacd7b91afcdd877e868a7a5e051581)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InstanceLaunchTemplate_1aadacd7b91afcdd877e868a7a5e051581"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a5d9ca4daa5cd1f46f7359f72fc8806fd)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InstanceLaunchTemplate_1a5d9ca4daa5cd1f46f7359f72fc8806fd"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceLaunchTemplate_1a863dcc082f08865a342a84a2b8998314)`()` <a id="structFRHAPI__InstanceLaunchTemplate_1a863dcc082f08865a342a84a2b8998314"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceLaunchTemplate_1a5a249d3356ec39691b56f2361106b38b)`() const` <a id="structFRHAPI__InstanceLaunchTemplate_1a5a249d3356ec39691b56f2361106b38b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a01c06c91cf9308331dfb7685f4a82ba6)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1a01c06c91cf9308331dfb7685f4a82ba6"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a1fa09222ff22cc419f4a0cadf2aa6e0a)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1a1fa09222ff22cc419f4a0cadf2aa6e0a"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InstanceLaunchTemplate_1accf875216c04898f0a996ce52e838833)`()` <a id="structFRHAPI__InstanceLaunchTemplate_1accf875216c04898f0a996ce52e838833"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

