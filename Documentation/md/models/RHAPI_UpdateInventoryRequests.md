# RHAPI_UpdateInventoryRequests <a id="group__RHAPI__UpdateInventoryRequests"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_UpdateInventoryRequests`](#structFRHAPI__UpdateInventoryRequests) | Collection of Update Inventory Requests. The Inventory referenced in the Update Inventory Requests must exist otherwise the request will fail. Each individual entry will be processed in the order they are specified in the collection. <b>Note: Partial success is possible as each request is processed individually.</b>.

## struct `FRHAPI_UpdateInventoryRequests` <a id="structFRHAPI__UpdateInventoryRequests"></a>

```
struct FRHAPI_UpdateInventoryRequests
  : public FRHAPI_Model
```

Collection of Update Inventory Requests. The Inventory referenced in the Update Inventory Requests must exist otherwise the request will fail. Each individual entry will be processed in the order they are specified in the collection. <b>Note: Partial success is possible as each request is processed individually.</b>.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__UpdateInventoryRequests_1aeb907459f6fdd297e4c2a2965497c042) | Source of this Inventory Operation.
`public bool `[`Source_IsSet`](#structFRHAPI__UpdateInventoryRequests_1a69f45a9cdcfd48725804c00c0b7e7d14) | true if Source_Optional has been set to a value
`public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__UpdateInventoryRequests_1a032df68ee260eda15df5902f492ddf46) | Arbitrary UUID that can be used by clients to correlate Order requests with Order responses.
`public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__UpdateInventoryRequests_1aa229f9716e5436352f6c4de7d30be686) | true if ClientOrderRefId_Optional has been set to a value
`public TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > `[`Inventory`](#structFRHAPI__UpdateInventoryRequests_1a51da6b11026ca23fba9c45f0a5eb972f) | Collection of Update Inventory Requests.
`public virtual bool `[`FromJson`](#structFRHAPI__UpdateInventoryRequests_1ac5d431c50c9aedba2d53279f403ff35a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UpdateInventoryRequests_1a4878a3e38b44bfaf45c97c8642af43f0)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1a2cf859b8a7524363ffd07566d74bf526)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1abf994fbfcee1b57694d6553122929e89)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1accce20b73297dfc0041d9d270218b8ee)`(const ERHAPI_Source & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1a79366bc7965bc537dfdafb254ee3975f)`(ERHAPI_Source & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequests_1acac0c3fa2cf508046c640d27416c1ea1)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequests_1ae98cb0c748edb0febba7fffa4afc513c)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__UpdateInventoryRequests_1a5b24c0d3c4a9ef60f864d871e19125ce)`(ERHAPI_Source NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`ClearSource`](#structFRHAPI__UpdateInventoryRequests_1a4636d2382659c027ac5f6d7c5413436a)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1af1f81290ae1ebbbdc4f401b94289c914)`()` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a5884d2d9a33472cae64508ff3856122e)`() const` | Gets the value of ClientOrderRefId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a6b10744de89614c7470a8eba498485d5)`(const FGuid & DefaultValue) const` | Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a954e1f64dd5becb1c49b3892bbadaf51)`(FGuid & OutValue) const` | Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequests_1ae3e35d9e8cd76094dc8aede083a64725)`()` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequests_1aba5a2e840a0ae74d659652f8a1485773)`() const` | Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a5a2f352883ea87a8299bb450843732d8)`(FGuid NewValue)` | Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.
`public inline void `[`ClearClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a9d2c82a14e5d4c2df1501637be55e602)`()` | Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.
`public inline TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > & `[`GetInventory`](#structFRHAPI__UpdateInventoryRequests_1aa3f7f39ca6239abb822c139bb0355c9a)`()` | Gets the value of Inventory.
`public inline const TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > & `[`GetInventory`](#structFRHAPI__UpdateInventoryRequests_1a16236c2da82677b936d1e02d891c1009)`() const` | Gets the value of Inventory.
`public inline void `[`SetInventory`](#structFRHAPI__UpdateInventoryRequests_1ad386c910446362cdba8b737245b2769f)`(TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > NewValue)` | Sets the value of Inventory.

#### Members

#### `public ERHAPI_Source `[`Source_Optional`](#structFRHAPI__UpdateInventoryRequests_1aeb907459f6fdd297e4c2a2965497c042) <a id="structFRHAPI__UpdateInventoryRequests_1aeb907459f6fdd297e4c2a2965497c042"></a>

Source of this Inventory Operation.

<br>
#### `public bool `[`Source_IsSet`](#structFRHAPI__UpdateInventoryRequests_1a69f45a9cdcfd48725804c00c0b7e7d14) <a id="structFRHAPI__UpdateInventoryRequests_1a69f45a9cdcfd48725804c00c0b7e7d14"></a>

true if Source_Optional has been set to a value

<br>
#### `public FGuid `[`ClientOrderRefId_Optional`](#structFRHAPI__UpdateInventoryRequests_1a032df68ee260eda15df5902f492ddf46) <a id="structFRHAPI__UpdateInventoryRequests_1a032df68ee260eda15df5902f492ddf46"></a>

Arbitrary UUID that can be used by clients to correlate Order requests with Order responses.

<br>
#### `public bool `[`ClientOrderRefId_IsSet`](#structFRHAPI__UpdateInventoryRequests_1aa229f9716e5436352f6c4de7d30be686) <a id="structFRHAPI__UpdateInventoryRequests_1aa229f9716e5436352f6c4de7d30be686"></a>

true if ClientOrderRefId_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > `[`Inventory`](#structFRHAPI__UpdateInventoryRequests_1a51da6b11026ca23fba9c45f0a5eb972f) <a id="structFRHAPI__UpdateInventoryRequests_1a51da6b11026ca23fba9c45f0a5eb972f"></a>

Collection of Update Inventory Requests.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__UpdateInventoryRequests_1ac5d431c50c9aedba2d53279f403ff35a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UpdateInventoryRequests_1ac5d431c50c9aedba2d53279f403ff35a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__UpdateInventoryRequests_1a4878a3e38b44bfaf45c97c8642af43f0)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__UpdateInventoryRequests_1a4878a3e38b44bfaf45c97c8642af43f0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1a2cf859b8a7524363ffd07566d74bf526)`()` <a id="structFRHAPI__UpdateInventoryRequests_1a2cf859b8a7524363ffd07566d74bf526"></a>

Gets the value of Source_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1abf994fbfcee1b57694d6553122929e89)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1abf994fbfcee1b57694d6553122929e89"></a>

Gets the value of Source_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_Source & `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1accce20b73297dfc0041d9d270218b8ee)`(const ERHAPI_Source & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequests_1accce20b73297dfc0041d9d270218b8ee"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSource`](#structFRHAPI__UpdateInventoryRequests_1a79366bc7965bc537dfdafb254ee3975f)`(ERHAPI_Source & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequests_1a79366bc7965bc537dfdafb254ee3975f"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequests_1acac0c3fa2cf508046c640d27416c1ea1)`()` <a id="structFRHAPI__UpdateInventoryRequests_1acac0c3fa2cf508046c640d27416c1ea1"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_Source * `[`GetSourceOrNull`](#structFRHAPI__UpdateInventoryRequests_1ae98cb0c748edb0febba7fffa4afc513c)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1ae98cb0c748edb0febba7fffa4afc513c"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSource`](#structFRHAPI__UpdateInventoryRequests_1a5b24c0d3c4a9ef60f864d871e19125ce)`(ERHAPI_Source NewValue)` <a id="structFRHAPI__UpdateInventoryRequests_1a5b24c0d3c4a9ef60f864d871e19125ce"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

<br>
#### `public inline void `[`ClearSource`](#structFRHAPI__UpdateInventoryRequests_1a4636d2382659c027ac5f6d7c5413436a)`()` <a id="structFRHAPI__UpdateInventoryRequests_1a4636d2382659c027ac5f6d7c5413436a"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

<br>
#### `public inline FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1af1f81290ae1ebbbdc4f401b94289c914)`()` <a id="structFRHAPI__UpdateInventoryRequests_1af1f81290ae1ebbbdc4f401b94289c914"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a5884d2d9a33472cae64508ff3856122e)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1a5884d2d9a33472cae64508ff3856122e"></a>

Gets the value of ClientOrderRefId_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a6b10744de89614c7470a8eba498485d5)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__UpdateInventoryRequests_1a6b10744de89614c7470a8eba498485d5"></a>

Gets the value of ClientOrderRefId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a954e1f64dd5becb1c49b3892bbadaf51)`(FGuid & OutValue) const` <a id="structFRHAPI__UpdateInventoryRequests_1a954e1f64dd5becb1c49b3892bbadaf51"></a>

Fills OutValue with the value of ClientOrderRefId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequests_1ae3e35d9e8cd76094dc8aede083a64725)`()` <a id="structFRHAPI__UpdateInventoryRequests_1ae3e35d9e8cd76094dc8aede083a64725"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetClientOrderRefIdOrNull`](#structFRHAPI__UpdateInventoryRequests_1aba5a2e840a0ae74d659652f8a1485773)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1aba5a2e840a0ae74d659652f8a1485773"></a>

Returns a pointer to ClientOrderRefId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a5a2f352883ea87a8299bb450843732d8)`(FGuid NewValue)` <a id="structFRHAPI__UpdateInventoryRequests_1a5a2f352883ea87a8299bb450843732d8"></a>

Sets the value of ClientOrderRefId_Optional and also sets ClientOrderRefId_IsSet to true.

<br>
#### `public inline void `[`ClearClientOrderRefId`](#structFRHAPI__UpdateInventoryRequests_1a9d2c82a14e5d4c2df1501637be55e602)`()` <a id="structFRHAPI__UpdateInventoryRequests_1a9d2c82a14e5d4c2df1501637be55e602"></a>

Clears the value of ClientOrderRefId_Optional and sets ClientOrderRefId_IsSet to false.

<br>
#### `public inline TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > & `[`GetInventory`](#structFRHAPI__UpdateInventoryRequests_1aa3f7f39ca6239abb822c139bb0355c9a)`()` <a id="structFRHAPI__UpdateInventoryRequests_1aa3f7f39ca6239abb822c139bb0355c9a"></a>

Gets the value of Inventory.

<br>
#### `public inline const TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > & `[`GetInventory`](#structFRHAPI__UpdateInventoryRequests_1a16236c2da82677b936d1e02d891c1009)`() const` <a id="structFRHAPI__UpdateInventoryRequests_1a16236c2da82677b936d1e02d891c1009"></a>

Gets the value of Inventory.

<br>
#### `public inline void `[`SetInventory`](#structFRHAPI__UpdateInventoryRequests_1ad386c910446362cdba8b737245b2769f)`(TArray< `[`FRHAPI_UpdateInventoryRequestById`](RHAPI_UpdateInventoryRequestById.md#structFRHAPI__UpdateInventoryRequestById)` > NewValue)` <a id="structFRHAPI__UpdateInventoryRequests_1ad386c910446362cdba8b737245b2769f"></a>

Sets the value of Inventory.

<br>
