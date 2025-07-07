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
`public inline FString & `[`GetRoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1a8ab849b875f69870a61857db335b1daf)`()` | Gets the value of RoomId.
`public inline const FString & `[`GetRoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1a4111c2aa51465dbd0f295eb3d4172902)`() const` | Gets the value of RoomId.
`public inline void `[`SetRoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1a9de7e8efcb0c0605794d3c1b4e89646c)`(const FString & NewValue)` | Sets the value of RoomId.
`public inline void `[`SetRoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1a39f8beb7362d2528acbdae0fdbf6735b)`(FString && NewValue)` | Sets the value of RoomId using move semantics.
`public inline FString & `[`GetParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1ac622133ba66e2fea9e908b00d85bc51d)`()` | Gets the value of ParticipantToken.
`public inline const FString & `[`GetParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1a95550252cef5ac9ec6f99f87cf3cd785)`() const` | Gets the value of ParticipantToken.
`public inline void `[`SetParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1aaad23e5ec30678c8c921af400e5ac63e)`(const FString & NewValue)` | Sets the value of ParticipantToken.
`public inline void `[`SetParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1a985f41eea83735462262d179ea3e2040)`(FString && NewValue)` | Sets the value of ParticipantToken using move semantics.
`public inline FString & `[`GetClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1a111c68cc362a6fbacb3204448c30b02f)`()` | Gets the value of ClientBaseUrl.
`public inline const FString & `[`GetClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1a541ae72a4b6f497f4fc2a17588e47796)`() const` | Gets the value of ClientBaseUrl.
`public inline void `[`SetClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1a9abb0f284674d2ae7ecf13aef82e2888)`(const FString & NewValue)` | Sets the value of ClientBaseUrl.
`public inline void `[`SetClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1a0cfea02c65472adf4b0772875402002c)`(FString && NewValue)` | Sets the value of ClientBaseUrl using move semantics.
`public inline FString & `[`GetProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1af51133dfa23bc77e4e5fd239402560d5)`()` | Gets the value of ProductUserId.
`public inline const FString & `[`GetProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1a9642fc859d058737949c2ef9ab6f7076)`() const` | Gets the value of ProductUserId.
`public inline void `[`SetProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1a32276a266a786b5ad49ee0fd19f10275)`(const FString & NewValue)` | Sets the value of ProductUserId.
`public inline void `[`SetProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1ae2d73b1456526aa9d2c12d338d490bc1)`(FString && NewValue)` | Sets the value of ProductUserId using move semantics.

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

#### `public inline FString & `[`GetRoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1a8ab849b875f69870a61857db335b1daf)`()` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a8ab849b875f69870a61857db335b1daf"></a>

Gets the value of RoomId.

#### `public inline const FString & `[`GetRoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1a4111c2aa51465dbd0f295eb3d4172902)`() const` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a4111c2aa51465dbd0f295eb3d4172902"></a>

Gets the value of RoomId.

#### `public inline void `[`SetRoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1a9de7e8efcb0c0605794d3c1b4e89646c)`(const FString & NewValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a9de7e8efcb0c0605794d3c1b4e89646c"></a>

Sets the value of RoomId.

#### `public inline void `[`SetRoomId`](#structFRHAPI__EpicVoipCredentialsResponse_1a39f8beb7362d2528acbdae0fdbf6735b)`(FString && NewValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a39f8beb7362d2528acbdae0fdbf6735b"></a>

Sets the value of RoomId using move semantics.

#### `public inline FString & `[`GetParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1ac622133ba66e2fea9e908b00d85bc51d)`()` <a id="structFRHAPI__EpicVoipCredentialsResponse_1ac622133ba66e2fea9e908b00d85bc51d"></a>

Gets the value of ParticipantToken.

#### `public inline const FString & `[`GetParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1a95550252cef5ac9ec6f99f87cf3cd785)`() const` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a95550252cef5ac9ec6f99f87cf3cd785"></a>

Gets the value of ParticipantToken.

#### `public inline void `[`SetParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1aaad23e5ec30678c8c921af400e5ac63e)`(const FString & NewValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1aaad23e5ec30678c8c921af400e5ac63e"></a>

Sets the value of ParticipantToken.

#### `public inline void `[`SetParticipantToken`](#structFRHAPI__EpicVoipCredentialsResponse_1a985f41eea83735462262d179ea3e2040)`(FString && NewValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a985f41eea83735462262d179ea3e2040"></a>

Sets the value of ParticipantToken using move semantics.

#### `public inline FString & `[`GetClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1a111c68cc362a6fbacb3204448c30b02f)`()` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a111c68cc362a6fbacb3204448c30b02f"></a>

Gets the value of ClientBaseUrl.

#### `public inline const FString & `[`GetClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1a541ae72a4b6f497f4fc2a17588e47796)`() const` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a541ae72a4b6f497f4fc2a17588e47796"></a>

Gets the value of ClientBaseUrl.

#### `public inline void `[`SetClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1a9abb0f284674d2ae7ecf13aef82e2888)`(const FString & NewValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a9abb0f284674d2ae7ecf13aef82e2888"></a>

Sets the value of ClientBaseUrl.

#### `public inline void `[`SetClientBaseUrl`](#structFRHAPI__EpicVoipCredentialsResponse_1a0cfea02c65472adf4b0772875402002c)`(FString && NewValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a0cfea02c65472adf4b0772875402002c"></a>

Sets the value of ClientBaseUrl using move semantics.

#### `public inline FString & `[`GetProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1af51133dfa23bc77e4e5fd239402560d5)`()` <a id="structFRHAPI__EpicVoipCredentialsResponse_1af51133dfa23bc77e4e5fd239402560d5"></a>

Gets the value of ProductUserId.

#### `public inline const FString & `[`GetProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1a9642fc859d058737949c2ef9ab6f7076)`() const` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a9642fc859d058737949c2ef9ab6f7076"></a>

Gets the value of ProductUserId.

#### `public inline void `[`SetProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1a32276a266a786b5ad49ee0fd19f10275)`(const FString & NewValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1a32276a266a786b5ad49ee0fd19f10275"></a>

Sets the value of ProductUserId.

#### `public inline void `[`SetProductUserId`](#structFRHAPI__EpicVoipCredentialsResponse_1ae2d73b1456526aa9d2c12d338d490bc1)`(FString && NewValue)` <a id="structFRHAPI__EpicVoipCredentialsResponse_1ae2d73b1456526aa9d2c12d338d490bc1"></a>

Sets the value of ProductUserId using move semantics.

