# group `RHAPI_InstanceHealthStatusResponse` <a id="group__RHAPI__InstanceHealthStatusResponse"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceHealthStatusResponse_1aa5be70cb0700483aaa90c635f5959d2e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_InstanceHealthStatus & `[`GetUpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1ac26b0bbfd237bdadd4ed172c543030d0)`()` | Gets the value of UpdatedInstanceHealth.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetUpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1a5ce08ac2c8e4fb15ac43a8ff6f15f258)`() const` | Gets the value of UpdatedInstanceHealth.
`public inline void `[`SetUpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1a1aab0cbab929fa9f5e0c145da6fd548d)`(const ERHAPI_InstanceHealthStatus & NewValue)` | Sets the value of UpdatedInstanceHealth.
`public inline void `[`SetUpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1a84859652c802d388f561584fbf90f160)`(ERHAPI_InstanceHealthStatus && NewValue)` | Sets the value of UpdatedInstanceHealth using move semantics.

### Members

#### `public ERHAPI_InstanceHealthStatus `[`UpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1a5353d047babab8d0085993f33d3a82a8) <a id="structFRHAPI__InstanceHealthStatusResponse_1a5353d047babab8d0085993f33d3a82a8"></a>

The new health status of the instance. It may not match the status sent up if too few health checks are being recieved.

#### `public virtual bool `[`FromJson`](#structFRHAPI__InstanceHealthStatusResponse_1aa9bca781bf2f7fd6288cd95951e41b09)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InstanceHealthStatusResponse_1aa9bca781bf2f7fd6288cd95951e41b09"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceHealthStatusResponse_1aa5be70cb0700483aaa90c635f5959d2e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InstanceHealthStatusResponse_1aa5be70cb0700483aaa90c635f5959d2e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_InstanceHealthStatus & `[`GetUpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1ac26b0bbfd237bdadd4ed172c543030d0)`()` <a id="structFRHAPI__InstanceHealthStatusResponse_1ac26b0bbfd237bdadd4ed172c543030d0"></a>

Gets the value of UpdatedInstanceHealth.

#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetUpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1a5ce08ac2c8e4fb15ac43a8ff6f15f258)`() const` <a id="structFRHAPI__InstanceHealthStatusResponse_1a5ce08ac2c8e4fb15ac43a8ff6f15f258"></a>

Gets the value of UpdatedInstanceHealth.

#### `public inline void `[`SetUpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1a1aab0cbab929fa9f5e0c145da6fd548d)`(const ERHAPI_InstanceHealthStatus & NewValue)` <a id="structFRHAPI__InstanceHealthStatusResponse_1a1aab0cbab929fa9f5e0c145da6fd548d"></a>

Sets the value of UpdatedInstanceHealth.

#### `public inline void `[`SetUpdatedInstanceHealth`](#structFRHAPI__InstanceHealthStatusResponse_1a84859652c802d388f561584fbf90f160)`(ERHAPI_InstanceHealthStatus && NewValue)` <a id="structFRHAPI__InstanceHealthStatusResponse_1a84859652c802d388f561584fbf90f160"></a>

Sets the value of UpdatedInstanceHealth using move semantics.

