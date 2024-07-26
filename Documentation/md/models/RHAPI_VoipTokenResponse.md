# group `RHAPI_VoipTokenResponse` <a id="group__RHAPI__VoipTokenResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_VoipTokenResponse`](#structFRHAPI__VoipTokenResponse) | 

## struct `FRHAPI_VoipTokenResponse` <a id="structFRHAPI__VoipTokenResponse"></a>

```
struct FRHAPI_VoipTokenResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Token`](#structFRHAPI__VoipTokenResponse_1ae6904f560d8ec1c2b0c90866fe0d43a4) | Signed auth voip login token for a specific client.
`public FString `[`Issuer`](#structFRHAPI__VoipTokenResponse_1a3ef6834648d120f241f43bba202b5819) | Issuer for client's login token.
`public FString `[`Server`](#structFRHAPI__VoipTokenResponse_1ac370e4ee2d897d829a74163a82c2779b) | Server for voip login.
`public FString `[`ChannelName_Optional`](#structFRHAPI__VoipTokenResponse_1aacd5e00c0c520fa5b0a7b4e499883d99) | Channel name for the generated token if relevant.
`public bool `[`ChannelName_IsSet`](#structFRHAPI__VoipTokenResponse_1a4e401b7a77066ac81b68c59a2513749f) | true if ChannelName_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__VoipTokenResponse_1ac7f2dcaea02fdd1c6f1bbc8bd8e3b8f8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__VoipTokenResponse_1ab1f16a3807ba44fc9f4df09f2a1b9156)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetToken`](#structFRHAPI__VoipTokenResponse_1ab8b89ac989950fe7c3deef96d739c90b)`()` | Gets the value of Token.
`public inline const FString & `[`GetToken`](#structFRHAPI__VoipTokenResponse_1acced7605884ab515351552cf18c50dcb)`() const` | Gets the value of Token.
`public inline void `[`SetToken`](#structFRHAPI__VoipTokenResponse_1a663094ae6c0d41f5df38e053f0950a51)`(const FString & NewValue)` | Sets the value of Token.
`public inline void `[`SetToken`](#structFRHAPI__VoipTokenResponse_1a9c50e4a03bb060cbbcb30a37edde1b21)`(FString && NewValue)` | Sets the value of Token using move semantics.
`public inline FString & `[`GetIssuer`](#structFRHAPI__VoipTokenResponse_1ab60052b9178fc10d07601b51aa63a0a2)`()` | Gets the value of Issuer.
`public inline const FString & `[`GetIssuer`](#structFRHAPI__VoipTokenResponse_1ae00dbda58fd5019114adc8e558bada96)`() const` | Gets the value of Issuer.
`public inline void `[`SetIssuer`](#structFRHAPI__VoipTokenResponse_1a4feb20ab6ece4b7a995361d5d278adfb)`(const FString & NewValue)` | Sets the value of Issuer.
`public inline void `[`SetIssuer`](#structFRHAPI__VoipTokenResponse_1a4063ec91c4044dbacf49547dc136181e)`(FString && NewValue)` | Sets the value of Issuer using move semantics.
`public inline FString & `[`GetServer`](#structFRHAPI__VoipTokenResponse_1a41068de0cdc5e7cf37fdd7f43fd7699a)`()` | Gets the value of Server.
`public inline const FString & `[`GetServer`](#structFRHAPI__VoipTokenResponse_1ae9b0e0324a69c2077d86956aa58f9b5e)`() const` | Gets the value of Server.
`public inline void `[`SetServer`](#structFRHAPI__VoipTokenResponse_1a24519da94f1e862b226eb748c12584e6)`(const FString & NewValue)` | Sets the value of Server.
`public inline void `[`SetServer`](#structFRHAPI__VoipTokenResponse_1af05c2a509cb5b87e2ab476e51a41df49)`(FString && NewValue)` | Sets the value of Server using move semantics.
`public inline FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1a894dfe8f875e4d0d3c1942d42ad0344d)`()` | Gets the value of ChannelName_Optional, regardless of it having been set.
`public inline const FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1ae9519815b90e077e01a7d1f88ede822c)`() const` | Gets the value of ChannelName_Optional, regardless of it having been set.
`public inline const FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1a212c478ae94af4875307964abc26f1da)`(const FString & DefaultValue) const` | Gets the value of ChannelName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1a77478a14f4e9f31621726b784c9c7fac)`(FString & OutValue) const` | Fills OutValue with the value of ChannelName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetChannelNameOrNull`](#structFRHAPI__VoipTokenResponse_1aaada01c6793b8296a7cfcf83f4de755b)`()` | Returns a pointer to ChannelName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetChannelNameOrNull`](#structFRHAPI__VoipTokenResponse_1afd48ea75f03405c7cb831fa9bd8bbd7e)`() const` | Returns a pointer to ChannelName_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetChannelName`](#structFRHAPI__VoipTokenResponse_1a81bcf39d2d3bf0f5da299351c9e359dd)`(const FString & NewValue)` | Sets the value of ChannelName_Optional and also sets ChannelName_IsSet to true.
`public inline void `[`SetChannelName`](#structFRHAPI__VoipTokenResponse_1ab16c9bd130178c22c14c2595c4f34ceb)`(FString && NewValue)` | Sets the value of ChannelName_Optional and also sets ChannelName_IsSet to true using move semantics.
`public inline void `[`ClearChannelName`](#structFRHAPI__VoipTokenResponse_1ac7d22ae186e4828c29db4d3f36499df8)`()` | Clears the value of ChannelName_Optional and sets ChannelName_IsSet to false.
`public inline bool `[`IsChannelNameSet`](#structFRHAPI__VoipTokenResponse_1a8ece730e6aaa84501855d48862cf22cc)`() const` | Checks whether ChannelName_Optional has been set.

### Members

#### `public FString `[`Token`](#structFRHAPI__VoipTokenResponse_1ae6904f560d8ec1c2b0c90866fe0d43a4) <a id="structFRHAPI__VoipTokenResponse_1ae6904f560d8ec1c2b0c90866fe0d43a4"></a>

Signed auth voip login token for a specific client.

#### `public FString `[`Issuer`](#structFRHAPI__VoipTokenResponse_1a3ef6834648d120f241f43bba202b5819) <a id="structFRHAPI__VoipTokenResponse_1a3ef6834648d120f241f43bba202b5819"></a>

Issuer for client's login token.

#### `public FString `[`Server`](#structFRHAPI__VoipTokenResponse_1ac370e4ee2d897d829a74163a82c2779b) <a id="structFRHAPI__VoipTokenResponse_1ac370e4ee2d897d829a74163a82c2779b"></a>

Server for voip login.

#### `public FString `[`ChannelName_Optional`](#structFRHAPI__VoipTokenResponse_1aacd5e00c0c520fa5b0a7b4e499883d99) <a id="structFRHAPI__VoipTokenResponse_1aacd5e00c0c520fa5b0a7b4e499883d99"></a>

Channel name for the generated token if relevant.

#### `public bool `[`ChannelName_IsSet`](#structFRHAPI__VoipTokenResponse_1a4e401b7a77066ac81b68c59a2513749f) <a id="structFRHAPI__VoipTokenResponse_1a4e401b7a77066ac81b68c59a2513749f"></a>

true if ChannelName_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__VoipTokenResponse_1ac7f2dcaea02fdd1c6f1bbc8bd8e3b8f8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__VoipTokenResponse_1ac7f2dcaea02fdd1c6f1bbc8bd8e3b8f8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__VoipTokenResponse_1ab1f16a3807ba44fc9f4df09f2a1b9156)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__VoipTokenResponse_1ab1f16a3807ba44fc9f4df09f2a1b9156"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetToken`](#structFRHAPI__VoipTokenResponse_1ab8b89ac989950fe7c3deef96d739c90b)`()` <a id="structFRHAPI__VoipTokenResponse_1ab8b89ac989950fe7c3deef96d739c90b"></a>

Gets the value of Token.

#### `public inline const FString & `[`GetToken`](#structFRHAPI__VoipTokenResponse_1acced7605884ab515351552cf18c50dcb)`() const` <a id="structFRHAPI__VoipTokenResponse_1acced7605884ab515351552cf18c50dcb"></a>

Gets the value of Token.

#### `public inline void `[`SetToken`](#structFRHAPI__VoipTokenResponse_1a663094ae6c0d41f5df38e053f0950a51)`(const FString & NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a663094ae6c0d41f5df38e053f0950a51"></a>

Sets the value of Token.

#### `public inline void `[`SetToken`](#structFRHAPI__VoipTokenResponse_1a9c50e4a03bb060cbbcb30a37edde1b21)`(FString && NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a9c50e4a03bb060cbbcb30a37edde1b21"></a>

Sets the value of Token using move semantics.

#### `public inline FString & `[`GetIssuer`](#structFRHAPI__VoipTokenResponse_1ab60052b9178fc10d07601b51aa63a0a2)`()` <a id="structFRHAPI__VoipTokenResponse_1ab60052b9178fc10d07601b51aa63a0a2"></a>

Gets the value of Issuer.

#### `public inline const FString & `[`GetIssuer`](#structFRHAPI__VoipTokenResponse_1ae00dbda58fd5019114adc8e558bada96)`() const` <a id="structFRHAPI__VoipTokenResponse_1ae00dbda58fd5019114adc8e558bada96"></a>

Gets the value of Issuer.

#### `public inline void `[`SetIssuer`](#structFRHAPI__VoipTokenResponse_1a4feb20ab6ece4b7a995361d5d278adfb)`(const FString & NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a4feb20ab6ece4b7a995361d5d278adfb"></a>

Sets the value of Issuer.

#### `public inline void `[`SetIssuer`](#structFRHAPI__VoipTokenResponse_1a4063ec91c4044dbacf49547dc136181e)`(FString && NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a4063ec91c4044dbacf49547dc136181e"></a>

Sets the value of Issuer using move semantics.

#### `public inline FString & `[`GetServer`](#structFRHAPI__VoipTokenResponse_1a41068de0cdc5e7cf37fdd7f43fd7699a)`()` <a id="structFRHAPI__VoipTokenResponse_1a41068de0cdc5e7cf37fdd7f43fd7699a"></a>

Gets the value of Server.

#### `public inline const FString & `[`GetServer`](#structFRHAPI__VoipTokenResponse_1ae9b0e0324a69c2077d86956aa58f9b5e)`() const` <a id="structFRHAPI__VoipTokenResponse_1ae9b0e0324a69c2077d86956aa58f9b5e"></a>

Gets the value of Server.

#### `public inline void `[`SetServer`](#structFRHAPI__VoipTokenResponse_1a24519da94f1e862b226eb748c12584e6)`(const FString & NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a24519da94f1e862b226eb748c12584e6"></a>

Sets the value of Server.

#### `public inline void `[`SetServer`](#structFRHAPI__VoipTokenResponse_1af05c2a509cb5b87e2ab476e51a41df49)`(FString && NewValue)` <a id="structFRHAPI__VoipTokenResponse_1af05c2a509cb5b87e2ab476e51a41df49"></a>

Sets the value of Server using move semantics.

#### `public inline FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1a894dfe8f875e4d0d3c1942d42ad0344d)`()` <a id="structFRHAPI__VoipTokenResponse_1a894dfe8f875e4d0d3c1942d42ad0344d"></a>

Gets the value of ChannelName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1ae9519815b90e077e01a7d1f88ede822c)`() const` <a id="structFRHAPI__VoipTokenResponse_1ae9519815b90e077e01a7d1f88ede822c"></a>

Gets the value of ChannelName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1a212c478ae94af4875307964abc26f1da)`(const FString & DefaultValue) const` <a id="structFRHAPI__VoipTokenResponse_1a212c478ae94af4875307964abc26f1da"></a>

Gets the value of ChannelName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1a77478a14f4e9f31621726b784c9c7fac)`(FString & OutValue) const` <a id="structFRHAPI__VoipTokenResponse_1a77478a14f4e9f31621726b784c9c7fac"></a>

Fills OutValue with the value of ChannelName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetChannelNameOrNull`](#structFRHAPI__VoipTokenResponse_1aaada01c6793b8296a7cfcf83f4de755b)`()` <a id="structFRHAPI__VoipTokenResponse_1aaada01c6793b8296a7cfcf83f4de755b"></a>

Returns a pointer to ChannelName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetChannelNameOrNull`](#structFRHAPI__VoipTokenResponse_1afd48ea75f03405c7cb831fa9bd8bbd7e)`() const` <a id="structFRHAPI__VoipTokenResponse_1afd48ea75f03405c7cb831fa9bd8bbd7e"></a>

Returns a pointer to ChannelName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetChannelName`](#structFRHAPI__VoipTokenResponse_1a81bcf39d2d3bf0f5da299351c9e359dd)`(const FString & NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a81bcf39d2d3bf0f5da299351c9e359dd"></a>

Sets the value of ChannelName_Optional and also sets ChannelName_IsSet to true.

#### `public inline void `[`SetChannelName`](#structFRHAPI__VoipTokenResponse_1ab16c9bd130178c22c14c2595c4f34ceb)`(FString && NewValue)` <a id="structFRHAPI__VoipTokenResponse_1ab16c9bd130178c22c14c2595c4f34ceb"></a>

Sets the value of ChannelName_Optional and also sets ChannelName_IsSet to true using move semantics.

#### `public inline void `[`ClearChannelName`](#structFRHAPI__VoipTokenResponse_1ac7d22ae186e4828c29db4d3f36499df8)`()` <a id="structFRHAPI__VoipTokenResponse_1ac7d22ae186e4828c29db4d3f36499df8"></a>

Clears the value of ChannelName_Optional and sets ChannelName_IsSet to false.

#### `public inline bool `[`IsChannelNameSet`](#structFRHAPI__VoipTokenResponse_1a8ece730e6aaa84501855d48862cf22cc)`() const` <a id="structFRHAPI__VoipTokenResponse_1a8ece730e6aaa84501855d48862cf22cc"></a>

Checks whether ChannelName_Optional has been set.

