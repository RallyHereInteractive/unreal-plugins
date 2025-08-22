---
title: RHAPI_InstanceHealthStatusResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InstanceHealthStatusResponse`](#structFRHAPI__InstanceHealthStatusResponse) | Response body for an instance health check.

## struct `FRHAPI_InstanceHealthStatusResponse` <a id="structFRHAPI__InstanceHealthStatusResponse"></a>

```
struct FRHAPI_InstanceHealthStatusResponse
  : public FRHAPI_Model
```

Response body for an instance health check.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_InstanceHealthStatus `[`UpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1a5353d047babab8d0085993f33d3a82a8) | The new health status of the instance. It may not match the status sent up if too few health checks are being recieved.
`public virtual bool `[`FromJson`](#structFRHAPI__InstanceHealthStatusResponse_1aa9bca781bf2f7fd6288cd95951e41b09)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceHealthStatusResponse_1aaa01464b90fe7f5414351b5281fcf1a4)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_InstanceHealthStatus & `[`GetUpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1a12b3914f7b5e921a367eff464829265b)`()` | Gets the value of UpdatedInstanceHealth.
`public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetUpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1ac27a6af7c4a950c49881703adf0b4072)`() const` | Gets the value of UpdatedInstanceHealth.
`public inline FORCEINLINE void `[`SetUpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1ad89cac0835facfe6be4e5a3de0ba77d0)`(const ERHAPI_InstanceHealthStatus & NewValue)` | Sets the value of UpdatedInstanceHealth.
`public inline FORCEINLINE void `[`SetUpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1afb40e8ababa5238b11832d41f3758df5)`(ERHAPI_InstanceHealthStatus && NewValue)` | Sets the value of UpdatedInstanceHealth using move semantics.

### Members

#### `public ERHAPI_InstanceHealthStatus `[`UpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1a5353d047babab8d0085993f33d3a82a8) <a id="structFRHAPI__InstanceHealthStatusResponse_1a5353d047babab8d0085993f33d3a82a8"></a>

The new health status of the instance. It may not match the status sent up if too few health checks are being recieved.

#### `public virtual bool `[`FromJson`](#structFRHAPI__InstanceHealthStatusResponse_1aa9bca781bf2f7fd6288cd95951e41b09)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InstanceHealthStatusResponse_1aa9bca781bf2f7fd6288cd95951e41b09"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceHealthStatusResponse_1aaa01464b90fe7f5414351b5281fcf1a4)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InstanceHealthStatusResponse_1aaa01464b90fe7f5414351b5281fcf1a4"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_InstanceHealthStatus & `[`GetUpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1a12b3914f7b5e921a367eff464829265b)`()` <a id="structFRHAPI__InstanceHealthStatusResponse_1a12b3914f7b5e921a367eff464829265b"></a>

Gets the value of UpdatedInstanceHealth.

#### `public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetUpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1ac27a6af7c4a950c49881703adf0b4072)`() const` <a id="structFRHAPI__InstanceHealthStatusResponse_1ac27a6af7c4a950c49881703adf0b4072"></a>

Gets the value of UpdatedInstanceHealth.

#### `public inline FORCEINLINE void `[`SetUpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1ad89cac0835facfe6be4e5a3de0ba77d0)`(const ERHAPI_InstanceHealthStatus & NewValue)` <a id="structFRHAPI__InstanceHealthStatusResponse_1ad89cac0835facfe6be4e5a3de0ba77d0"></a>

Sets the value of UpdatedInstanceHealth.

#### `public inline FORCEINLINE void `[`SetUpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1afb40e8ababa5238b11832d41f3758df5)`(ERHAPI_InstanceHealthStatus && NewValue)` <a id="structFRHAPI__InstanceHealthStatusResponse_1afb40e8ababa5238b11832d41f3758df5"></a>

Sets the value of UpdatedInstanceHealth using move semantics.

