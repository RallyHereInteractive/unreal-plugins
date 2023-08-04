# RHAPI_PortalTokenDetailsRequest <a id="group__RHAPI__PortalTokenDetailsRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PortalTokenDetailsRequest`](#structFRHAPI__PortalTokenDetailsRequest) | 

## struct `FRHAPI_PortalTokenDetailsRequest` <a id="structFRHAPI__PortalTokenDetailsRequest"></a>

```
struct FRHAPI_PortalTokenDetailsRequest
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_PortalTokenDetailsGrantType `[`GrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a548d6c8ee9cc94951d52dad3126cf369) | 
`public FString `[`PortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1a5f955bb90686ea2875c2fe02ea524a98) | Token or secret used to authenticate the provided grant type.
`public virtual bool `[`FromJson`](#structFRHAPI__PortalTokenDetailsRequest_1a0537d65dbaeccc3403ac707d1cc4995f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PortalTokenDetailsRequest_1afef7776e0d4367f60e4298263e4cb67e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_PortalTokenDetailsGrantType & `[`GetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a6ad035d7838790f6fbb5f880bb0bfee7)`()` | Gets the value of GrantType.
`public inline const ERHAPI_PortalTokenDetailsGrantType & `[`GetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a97be8803a8e6d79aa4879a1b10cf900e)`() const` | Gets the value of GrantType.
`public inline void `[`SetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1ab18a3820e59afe35e034acd19a4f784b)`(ERHAPI_PortalTokenDetailsGrantType NewValue)` | Sets the value of GrantType.
`public inline FString & `[`GetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1a7bcd5829f00a691f006b54bd37074dd9)`()` | Gets the value of PortalAccessToken.
`public inline const FString & `[`GetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1ae1acdc8fd0cc19806a085b2059dd6271)`() const` | Gets the value of PortalAccessToken.
`public inline void `[`SetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1ab9e79f2af1ff269ead537aebedb7017f)`(FString NewValue)` | Sets the value of PortalAccessToken.

#### Members

#### `public ERHAPI_PortalTokenDetailsGrantType `[`GrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a548d6c8ee9cc94951d52dad3126cf369) <a id="structFRHAPI__PortalTokenDetailsRequest_1a548d6c8ee9cc94951d52dad3126cf369"></a>

<br>
#### `public FString `[`PortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1a5f955bb90686ea2875c2fe02ea524a98) <a id="structFRHAPI__PortalTokenDetailsRequest_1a5f955bb90686ea2875c2fe02ea524a98"></a>

Token or secret used to authenticate the provided grant type.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PortalTokenDetailsRequest_1a0537d65dbaeccc3403ac707d1cc4995f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PortalTokenDetailsRequest_1a0537d65dbaeccc3403ac707d1cc4995f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PortalTokenDetailsRequest_1afef7776e0d4367f60e4298263e4cb67e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PortalTokenDetailsRequest_1afef7776e0d4367f60e4298263e4cb67e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline ERHAPI_PortalTokenDetailsGrantType & `[`GetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a6ad035d7838790f6fbb5f880bb0bfee7)`()` <a id="structFRHAPI__PortalTokenDetailsRequest_1a6ad035d7838790f6fbb5f880bb0bfee7"></a>

Gets the value of GrantType.

<br>
#### `public inline const ERHAPI_PortalTokenDetailsGrantType & `[`GetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1a97be8803a8e6d79aa4879a1b10cf900e)`() const` <a id="structFRHAPI__PortalTokenDetailsRequest_1a97be8803a8e6d79aa4879a1b10cf900e"></a>

Gets the value of GrantType.

<br>
#### `public inline void `[`SetGrantType`](#structFRHAPI__PortalTokenDetailsRequest_1ab18a3820e59afe35e034acd19a4f784b)`(ERHAPI_PortalTokenDetailsGrantType NewValue)` <a id="structFRHAPI__PortalTokenDetailsRequest_1ab18a3820e59afe35e034acd19a4f784b"></a>

Sets the value of GrantType.

<br>
#### `public inline FString & `[`GetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1a7bcd5829f00a691f006b54bd37074dd9)`()` <a id="structFRHAPI__PortalTokenDetailsRequest_1a7bcd5829f00a691f006b54bd37074dd9"></a>

Gets the value of PortalAccessToken.

<br>
#### `public inline const FString & `[`GetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1ae1acdc8fd0cc19806a085b2059dd6271)`() const` <a id="structFRHAPI__PortalTokenDetailsRequest_1ae1acdc8fd0cc19806a085b2059dd6271"></a>

Gets the value of PortalAccessToken.

<br>
#### `public inline void `[`SetPortalAccessToken`](#structFRHAPI__PortalTokenDetailsRequest_1ab9e79f2af1ff269ead537aebedb7017f)`(FString NewValue)` <a id="structFRHAPI__PortalTokenDetailsRequest_1ab9e79f2af1ff269ead537aebedb7017f"></a>

Sets the value of PortalAccessToken.

<br>
