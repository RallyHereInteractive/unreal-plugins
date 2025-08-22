---
title: RHAPI_EpicVoipCredentialsResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_EpicVoipCredentialsResponse`](#structFRHAPI__EpicVoipCredentialsResponse) | 

## struct `FRHAPI_EpicVoipCredentialsResponse` <a id="structFRHAPI__EpicVoipCredentialsResponse"></a>

```
struct FRHAPI_EpicVoipCredentialsResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`RoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1aa3846dbca30bea58a89d1330bac45182) | Epic voice room identifier.
`public FString `[`ParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1a8eba34a467acfd952f1a28953763b304) | Token for the participant to join the Epic voice room.
`public FString `[`ClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1a685de703d8623d2910e555f87249ef5e) | Base URL for Epic voice client connections.
`public FString `[`ProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1a502c21555427ad73abed4fb1696d1401) | Epic ProductUserId for the authenticated user.
`public virtual bool `[`FromJson`](#structFRHAPI__EpicVoipCredentialsResponse_1a8ace05b4ccbcbad3427bf6551d0ab7a8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__EpicVoipCredentialsResponse_1aaeda2b439c6755532669177534df82c1)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetRoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1a4be163f460cae9127b03390d1f114e1b)`()` | Gets the value of RoomId.
`public inline FORCEINLINE const FString & `[`GetRoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1a7275cc2d56d6d5539fc78af113d44a52)`() const` | Gets the value of RoomId.
`public inline FORCEINLINE void `[`SetRoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1a4a686416a76e9be7951c1718ea9c822c)`(const FString & NewValue)` | Sets the value of RoomId.
`public inline FORCEINLINE void `[`SetRoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1ab050dd95f9c5ab3f777ec62ac4d550c3)`(FString && NewValue)` | Sets the value of RoomId using move semantics.
`public inline FORCEINLINE FString & `[`GetParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1a261b07d6c19efdabbc0676133b616973)`()` | Gets the value of ParticipantToken.
`public inline FORCEINLINE const FString & `[`GetParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1a606f76e71161f4c7b0f3b2d5ecf18456)`() const` | Gets the value of ParticipantToken.
`public inline FORCEINLINE void `[`SetParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1af5b3c8b1921878d6d3f2644ba36d9245)`(const FString & NewValue)` | Sets the value of ParticipantToken.
`public inline FORCEINLINE void `[`SetParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1ad5c1cb1d0a91878f7e6c040ff77579e2)`(FString && NewValue)` | Sets the value of ParticipantToken using move semantics.
`public inline FORCEINLINE FString & `[`GetClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1a35ec6eabde72e0014a6522e6e5718d0b)`()` | Gets the value of ClientBaseUrl.
`public inline FORCEINLINE const FString & `[`GetClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1ad2895841bea497cb24bc305e29e7ffce)`() const` | Gets the value of ClientBaseUrl.
`public inline FORCEINLINE void `[`SetClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1aef758f6c9c528ead8413ee91b59fc6cc)`(const FString & NewValue)` | Sets the value of ClientBaseUrl.
`public inline FORCEINLINE void `[`SetClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1a536708aec6617e3475424986a65eed57)`(FString && NewValue)` | Sets the value of ClientBaseUrl using move semantics.
`public inline FORCEINLINE FString & `[`GetProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1a0039b14633261840cecc89d20a7cc1ad)`()` | Gets the value of ProductUserId.
`public inline FORCEINLINE const FString & `[`GetProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1aba11bbd88fbecb780264eccc971fd6f2)`() const` | Gets the value of ProductUserId.
`public inline FORCEINLINE void `[`SetProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1a34edee75ca545780cb95504f68978242)`(const FString & NewValue)` | Sets the value of ProductUserId.
`public inline FORCEINLINE void `[`SetProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1af52eea8f963ab7eac05d5d490e4b238e)`(FString && NewValue)` | Sets the value of ProductUserId using move semantics.

### Members

#### `public FString `[`RoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1aa3846dbca30bea58a89d1330bac45182) <a id="structFRHAPI__EpicVoipCredentialsResponse_1aa3846dbca30bea58a89d1330bac45182"></a>

Epic voice room identifier.

#### `public FString `[`ParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1a8eba34a467acfd952f1a28953763b304) <a id="structFRHAPI__EpicVoipCredentialsResponse_1a8eba34a467acfd952f1a28953763b304"></a>

Token for the participant to join the Epic voice room.

#### `public FString `[`ClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1a685de703d8623d2910e555f87249ef5e) <a id="structFRHAPI__EpicVoipCredentialsResponse_1a685de703d8623d2910e555f87249ef5e"></a>

Base URL for Epic voice client connections.

#### `public FString `[`ProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1a502c21555427ad73abed4fb1696d1401) <a id="structFRHAPI__EpicVoipCredentialsResponse_1a502c21555427ad73abed4fb1696d1401"></a>

Epic ProductUserId for the authenticated user.

#### `public virtual bool `[`FromJson`](#structFRHAPI__EpicVoipCredentialsResponse_1a8ace05b4ccbcbad3427bf6551d0ab7a8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a8ace05b4ccbcbad3427bf6551d0ab7a8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__EpicVoipCredentialsResponse_1aaeda2b439c6755532669177534df82c1)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__EpicVoipCredentialsResponse_1aaeda2b439c6755532669177534df82c1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetRoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1a4be163f460cae9127b03390d1f114e1b)`()` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a4be163f460cae9127b03390d1f114e1b"></a>

Gets the value of RoomId.

#### `public inline FORCEINLINE const FString & `[`GetRoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1a7275cc2d56d6d5539fc78af113d44a52)`() const` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a7275cc2d56d6d5539fc78af113d44a52"></a>

Gets the value of RoomId.

#### `public inline FORCEINLINE void `[`SetRoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1a4a686416a76e9be7951c1718ea9c822c)`(const FString & NewValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a4a686416a76e9be7951c1718ea9c822c"></a>

Sets the value of RoomId.

#### `public inline FORCEINLINE void `[`SetRoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1ab050dd95f9c5ab3f777ec62ac4d550c3)`(FString && NewValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1ab050dd95f9c5ab3f777ec62ac4d550c3"></a>

Sets the value of RoomId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1a261b07d6c19efdabbc0676133b616973)`()` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a261b07d6c19efdabbc0676133b616973"></a>

Gets the value of ParticipantToken.

#### `public inline FORCEINLINE const FString & `[`GetParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1a606f76e71161f4c7b0f3b2d5ecf18456)`() const` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a606f76e71161f4c7b0f3b2d5ecf18456"></a>

Gets the value of ParticipantToken.

#### `public inline FORCEINLINE void `[`SetParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1af5b3c8b1921878d6d3f2644ba36d9245)`(const FString & NewValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1af5b3c8b1921878d6d3f2644ba36d9245"></a>

Sets the value of ParticipantToken.

#### `public inline FORCEINLINE void `[`SetParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1ad5c1cb1d0a91878f7e6c040ff77579e2)`(FString && NewValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1ad5c1cb1d0a91878f7e6c040ff77579e2"></a>

Sets the value of ParticipantToken using move semantics.

#### `public inline FORCEINLINE FString & `[`GetClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1a35ec6eabde72e0014a6522e6e5718d0b)`()` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a35ec6eabde72e0014a6522e6e5718d0b"></a>

Gets the value of ClientBaseUrl.

#### `public inline FORCEINLINE const FString & `[`GetClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1ad2895841bea497cb24bc305e29e7ffce)`() const` <a id="structFRHAPI__EpicVoipCredentialsResponse_1ad2895841bea497cb24bc305e29e7ffce"></a>

Gets the value of ClientBaseUrl.

#### `public inline FORCEINLINE void `[`SetClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1aef758f6c9c528ead8413ee91b59fc6cc)`(const FString & NewValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1aef758f6c9c528ead8413ee91b59fc6cc"></a>

Sets the value of ClientBaseUrl.

#### `public inline FORCEINLINE void `[`SetClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1a536708aec6617e3475424986a65eed57)`(FString && NewValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a536708aec6617e3475424986a65eed57"></a>

Sets the value of ClientBaseUrl using move semantics.

#### `public inline FORCEINLINE FString & `[`GetProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1a0039b14633261840cecc89d20a7cc1ad)`()` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a0039b14633261840cecc89d20a7cc1ad"></a>

Gets the value of ProductUserId.

#### `public inline FORCEINLINE const FString & `[`GetProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1aba11bbd88fbecb780264eccc971fd6f2)`() const` <a id="structFRHAPI__EpicVoipCredentialsResponse_1aba11bbd88fbecb780264eccc971fd6f2"></a>

Gets the value of ProductUserId.

#### `public inline FORCEINLINE void `[`SetProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1a34edee75ca545780cb95504f68978242)`(const FString & NewValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a34edee75ca545780cb95504f68978242"></a>

Sets the value of ProductUserId.

#### `public inline FORCEINLINE void `[`SetProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1af52eea8f963ab7eac05d5d490e4b238e)`(FString && NewValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1af52eea8f963ab7eac05d5d490e4b238e"></a>

Sets the value of ProductUserId using move semantics.

