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
`public inline FORCEINLINE FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1a02eb7fbbfaa947de3fb44efc8982c161)`()` | Gets the value of InstanceRequestTemplateId.
`public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1adbf9be3567d808454c73148ea75d2f9f)`() const` | Gets the value of InstanceRequestTemplateId.
`public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1ad585076ae0dc1d66a6aa906663f445d2)`(const FGuid & NewValue)` | Sets the value of InstanceRequestTemplateId.
`public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1aa3a4e950164182cbd614d734873fdd13)`(FGuid && NewValue)` | Sets the value of InstanceRequestTemplateId using move semantics.
`public inline FORCEINLINE `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1a10b21bdc73a63986214037c7509de0c1)`()` | Gets the value of MapSelectionList.
`public inline FORCEINLINE const `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1a59a92a94879c18e7287eeba342fba8ea)`() const` | Gets the value of MapSelectionList.
`public inline FORCEINLINE void `[`SetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1a99eccf9175f04078c29cbbc693f43aef)`(const `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & NewValue)` | Sets the value of MapSelectionList.
`public inline FORCEINLINE void `[`SetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1ab4061abd2b4b6d39bdff0d5970e26298)`(`[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` && NewValue)` | Sets the value of MapSelectionList using move semantics.
`public inline FORCEINLINE ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a454d3ffc5cf18110d38532e9a51c97ef)`()` | Gets the value of DefaultHostType.
`public inline FORCEINLINE const ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a8ae18bfc268f89a1c94b16c8648994de)`() const` | Gets the value of DefaultHostType.
`public inline FORCEINLINE void `[`SetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1af80d68d3766efebd2529d4436f86737b)`(const ERHAPI_HostType & NewValue)` | Sets the value of DefaultHostType.
`public inline FORCEINLINE void `[`SetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1af152ffcbc971b874857ff680d2a9819b)`(ERHAPI_HostType && NewValue)` | Sets the value of DefaultHostType using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a1a185283d8ea40ef6f94fd87f147bce4)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a49b9e1b2392aca09e814f55cf7c09902)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a9ee11bb97b61d74e6b973796e5c62fbd)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a0defb9a451c5ae6c30f2781a69a57284)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequestTemplate_1a4e5ba6886d15e1df4c0891b308334c1e)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequestTemplate_1a1be79c15c1b8745b35c86f6a868d3adc)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a358c7025c0d52fdb240726972615d789)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceRequestTemplate_1ac0f0704c0e850bde5145a064e2a871a4)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__InstanceRequestTemplate_1ac216c36da42fc221390416e2cd8cb2d1)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

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

#### `public inline FORCEINLINE FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1a02eb7fbbfaa947de3fb44efc8982c161)`()` <a id="structFRHAPI__InstanceRequestTemplate_1a02eb7fbbfaa947de3fb44efc8982c161"></a>

Gets the value of InstanceRequestTemplateId.

#### `public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1adbf9be3567d808454c73148ea75d2f9f)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1adbf9be3567d808454c73148ea75d2f9f"></a>

Gets the value of InstanceRequestTemplateId.

#### `public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1ad585076ae0dc1d66a6aa906663f445d2)`(const FGuid & NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1ad585076ae0dc1d66a6aa906663f445d2"></a>

Sets the value of InstanceRequestTemplateId.

#### `public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequestTemplate_1aa3a4e950164182cbd614d734873fdd13)`(FGuid && NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1aa3a4e950164182cbd614d734873fdd13"></a>

Sets the value of InstanceRequestTemplateId using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1a10b21bdc73a63986214037c7509de0c1)`()` <a id="structFRHAPI__InstanceRequestTemplate_1a10b21bdc73a63986214037c7509de0c1"></a>

Gets the value of MapSelectionList.

#### `public inline FORCEINLINE const `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1a59a92a94879c18e7287eeba342fba8ea)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1a59a92a94879c18e7287eeba342fba8ea"></a>

Gets the value of MapSelectionList.

#### `public inline FORCEINLINE void `[`SetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1a99eccf9175f04078c29cbbc693f43aef)`(const `[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` & NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1a99eccf9175f04078c29cbbc693f43aef"></a>

Sets the value of MapSelectionList.

#### `public inline FORCEINLINE void `[`SetMapSelectionList`](#structFRHAPI__InstanceRequestTemplate_1ab4061abd2b4b6d39bdff0d5970e26298)`(`[`FRHAPI_MapSelectionListV2`](RHAPI_MapSelectionListV2.md#structFRHAPI__MapSelectionListV2)` && NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1ab4061abd2b4b6d39bdff0d5970e26298"></a>

Sets the value of MapSelectionList using move semantics.

#### `public inline FORCEINLINE ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a454d3ffc5cf18110d38532e9a51c97ef)`()` <a id="structFRHAPI__InstanceRequestTemplate_1a454d3ffc5cf18110d38532e9a51c97ef"></a>

Gets the value of DefaultHostType.

#### `public inline FORCEINLINE const ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1a8ae18bfc268f89a1c94b16c8648994de)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1a8ae18bfc268f89a1c94b16c8648994de"></a>

Gets the value of DefaultHostType.

#### `public inline FORCEINLINE void `[`SetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1af80d68d3766efebd2529d4436f86737b)`(const ERHAPI_HostType & NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1af80d68d3766efebd2529d4436f86737b"></a>

Sets the value of DefaultHostType.

#### `public inline FORCEINLINE void `[`SetDefaultHostType`](#structFRHAPI__InstanceRequestTemplate_1af152ffcbc971b874857ff680d2a9819b)`(ERHAPI_HostType && NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1af152ffcbc971b874857ff680d2a9819b"></a>

Sets the value of DefaultHostType using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a1a185283d8ea40ef6f94fd87f147bce4)`()` <a id="structFRHAPI__InstanceRequestTemplate_1a1a185283d8ea40ef6f94fd87f147bce4"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a49b9e1b2392aca09e814f55cf7c09902)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1a49b9e1b2392aca09e814f55cf7c09902"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a9ee11bb97b61d74e6b973796e5c62fbd)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InstanceRequestTemplate_1a9ee11bb97b61d74e6b973796e5c62fbd"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a0defb9a451c5ae6c30f2781a69a57284)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InstanceRequestTemplate_1a0defb9a451c5ae6c30f2781a69a57284"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequestTemplate_1a4e5ba6886d15e1df4c0891b308334c1e)`()` <a id="structFRHAPI__InstanceRequestTemplate_1a4e5ba6886d15e1df4c0891b308334c1e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequestTemplate_1a1be79c15c1b8745b35c86f6a868d3adc)`() const` <a id="structFRHAPI__InstanceRequestTemplate_1a1be79c15c1b8745b35c86f6a868d3adc"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceRequestTemplate_1a358c7025c0d52fdb240726972615d789)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1a358c7025c0d52fdb240726972615d789"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceRequestTemplate_1ac0f0704c0e850bde5145a064e2a871a4)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InstanceRequestTemplate_1ac0f0704c0e850bde5145a064e2a871a4"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InstanceRequestTemplate_1ac216c36da42fc221390416e2cd8cb2d1)`()` <a id="structFRHAPI__InstanceRequestTemplate_1ac216c36da42fc221390416e2cd8cb2d1"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

