# RHAPI_InstanceLaunchTemplate <a id="group__RHAPI__InstanceLaunchTemplate"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InstanceLaunchTemplate`](#structFRHAPI__InstanceLaunchTemplate) | 

## struct `FRHAPI_InstanceLaunchTemplate` <a id="structFRHAPI__InstanceLaunchTemplate"></a>

```
struct FRHAPI_InstanceLaunchTemplate
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`InstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1affe64ae2fe44b0b1caf1d8c858c5615d) | ID to uniquely identify this instance launch template.
`public `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` `[`MapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1af18bdd7b827122711991ea24f173fc3b) | 
`public ERHAPI_HostType `[`DefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a0b56b43efbfe4616f67e08338d568d47) | Default host type for this template. Can be overriden in instance requests.
`public TMap< FString, FString > `[`CustomData`](#structFRHAPI__InstanceLaunchTemplate_1a5d52c308863dddc67d9411d9a7a66c9b) | Custom data that will be passed to the session during the instance launch request.
`public virtual bool `[`FromJson`](#structFRHAPI__InstanceLaunchTemplate_1a9c24a5ea21de69f9bcd65c73f4d15559)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceLaunchTemplate_1ad2fe1ba96c85828d23d5122a7cd2ce95)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a645feb373f0302fd43e3a4fded7a1d5d)`()` | Gets the value of InstanceLaunchTemplateId.
`public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a0b3842d18f16d2c94079fe0c93910c9b)`() const` | Gets the value of InstanceLaunchTemplateId.
`public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a6fbb92a72bec4b09af929bb6cfc558e7)`(FGuid NewValue)` | Sets the value of InstanceLaunchTemplateId.
`public inline `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1a7550e10953986adf59b249efe55848e8)`()` | Gets the value of MapSelectionList.
`public inline const `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1aa358f8b3bdfe50ab77dc10791c9cfc81)`() const` | Gets the value of MapSelectionList.
`public inline void `[`SetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1af7f9a8e490e1a024a14c0e988744e153)`(`[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` NewValue)` | Sets the value of MapSelectionList.
`public inline ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a0b5d674190d7d7f9739caa2990c653cc)`()` | Gets the value of DefaultHostType.
`public inline const ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1af24572d24cc0ebacd287fed22c12ee89)`() const` | Gets the value of DefaultHostType.
`public inline void `[`SetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1ac7fce40f23fa5537211a45d747983bab)`(ERHAPI_HostType NewValue)` | Sets the value of DefaultHostType.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a79ceedb163febc7aa6f5608a21ddd929)`()` | Gets the value of CustomData.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a8902d8a407b6707dddf0fdd0aded5da3)`() const` | Gets the value of CustomData.
`public inline void `[`SetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1ad2e928208d7823bc216ce2c49a6c1b99)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData.

#### Members

#### `public FGuid `[`InstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1affe64ae2fe44b0b1caf1d8c858c5615d) <a id="structFRHAPI__InstanceLaunchTemplate_1affe64ae2fe44b0b1caf1d8c858c5615d"></a>

ID to uniquely identify this instance launch template.

<br>
#### `public `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` `[`MapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1af18bdd7b827122711991ea24f173fc3b) <a id="structFRHAPI__InstanceLaunchTemplate_1af18bdd7b827122711991ea24f173fc3b"></a>

<br>
#### `public ERHAPI_HostType `[`DefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a0b56b43efbfe4616f67e08338d568d47) <a id="structFRHAPI__InstanceLaunchTemplate_1a0b56b43efbfe4616f67e08338d568d47"></a>

Default host type for this template. Can be overriden in instance requests.

<br>
#### `public TMap< FString, FString > `[`CustomData`](#structFRHAPI__InstanceLaunchTemplate_1a5d52c308863dddc67d9411d9a7a66c9b) <a id="structFRHAPI__InstanceLaunchTemplate_1a5d52c308863dddc67d9411d9a7a66c9b"></a>

Custom data that will be passed to the session during the instance launch request.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__InstanceLaunchTemplate_1a9c24a5ea21de69f9bcd65c73f4d15559)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1a9c24a5ea21de69f9bcd65c73f4d15559"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceLaunchTemplate_1ad2fe1ba96c85828d23d5122a7cd2ce95)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InstanceLaunchTemplate_1ad2fe1ba96c85828d23d5122a7cd2ce95"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a645feb373f0302fd43e3a4fded7a1d5d)`()` <a id="structFRHAPI__InstanceLaunchTemplate_1a645feb373f0302fd43e3a4fded7a1d5d"></a>

Gets the value of InstanceLaunchTemplateId.

<br>
#### `public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a0b3842d18f16d2c94079fe0c93910c9b)`() const` <a id="structFRHAPI__InstanceLaunchTemplate_1a0b3842d18f16d2c94079fe0c93910c9b"></a>

Gets the value of InstanceLaunchTemplateId.

<br>
#### `public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__InstanceLaunchTemplate_1a6fbb92a72bec4b09af929bb6cfc558e7)`(FGuid NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1a6fbb92a72bec4b09af929bb6cfc558e7"></a>

Sets the value of InstanceLaunchTemplateId.

<br>
#### `public inline `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1a7550e10953986adf59b249efe55848e8)`()` <a id="structFRHAPI__InstanceLaunchTemplate_1a7550e10953986adf59b249efe55848e8"></a>

Gets the value of MapSelectionList.

<br>
#### `public inline const `[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` & `[`GetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1aa358f8b3bdfe50ab77dc10791c9cfc81)`() const` <a id="structFRHAPI__InstanceLaunchTemplate_1aa358f8b3bdfe50ab77dc10791c9cfc81"></a>

Gets the value of MapSelectionList.

<br>
#### `public inline void `[`SetMapSelectionList`](#structFRHAPI__InstanceLaunchTemplate_1af7f9a8e490e1a024a14c0e988744e153)`(`[`FRHAPI_MapSelectionList`](RHAPI_MapSelectionList.md#structFRHAPI__MapSelectionList)` NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1af7f9a8e490e1a024a14c0e988744e153"></a>

Sets the value of MapSelectionList.

<br>
#### `public inline ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1a0b5d674190d7d7f9739caa2990c653cc)`()` <a id="structFRHAPI__InstanceLaunchTemplate_1a0b5d674190d7d7f9739caa2990c653cc"></a>

Gets the value of DefaultHostType.

<br>
#### `public inline const ERHAPI_HostType & `[`GetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1af24572d24cc0ebacd287fed22c12ee89)`() const` <a id="structFRHAPI__InstanceLaunchTemplate_1af24572d24cc0ebacd287fed22c12ee89"></a>

Gets the value of DefaultHostType.

<br>
#### `public inline void `[`SetDefaultHostType`](#structFRHAPI__InstanceLaunchTemplate_1ac7fce40f23fa5537211a45d747983bab)`(ERHAPI_HostType NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1ac7fce40f23fa5537211a45d747983bab"></a>

Sets the value of DefaultHostType.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a79ceedb163febc7aa6f5608a21ddd929)`()` <a id="structFRHAPI__InstanceLaunchTemplate_1a79ceedb163febc7aa6f5608a21ddd929"></a>

Gets the value of CustomData.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1a8902d8a407b6707dddf0fdd0aded5da3)`() const` <a id="structFRHAPI__InstanceLaunchTemplate_1a8902d8a407b6707dddf0fdd0aded5da3"></a>

Gets the value of CustomData.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceLaunchTemplate_1ad2e928208d7823bc216ce2c49a6c1b99)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__InstanceLaunchTemplate_1ad2e928208d7823bc216ce2c49a6c1b99"></a>

Sets the value of CustomData.

<br>
