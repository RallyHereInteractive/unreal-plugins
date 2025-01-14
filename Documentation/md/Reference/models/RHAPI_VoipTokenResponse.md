---
title: RHAPI_VoipTokenResponse
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__VoipTokenResponse_1aeebd222bc19550e43a5b8e7d3f952c0a)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetToken`](#structFRHAPI__VoipTokenResponse_1a88275e6e3a1e58299748e92095add751)`()` | Gets the value of Token.
`public inline const FString & `[`GetToken`](#structFRHAPI__VoipTokenResponse_1ab070faf1c025600173d6291d9ebc2158)`() const` | Gets the value of Token.
`public inline void `[`SetToken`](#structFRHAPI__VoipTokenResponse_1a663094ae6c0d41f5df38e053f0950a51)`(const FString & NewValue)` | Sets the value of Token.
`public inline void `[`SetToken`](#structFRHAPI__VoipTokenResponse_1a9c50e4a03bb060cbbcb30a37edde1b21)`(FString && NewValue)` | Sets the value of Token using move semantics.
`public inline FString & `[`GetIssuer`](#structFRHAPI__VoipTokenResponse_1a1aff458b618708aa86701e78893c0b76)`()` | Gets the value of Issuer.
`public inline const FString & `[`GetIssuer`](#structFRHAPI__VoipTokenResponse_1a58aa65d0348f392dea74b0ce9693b58f)`() const` | Gets the value of Issuer.
`public inline void `[`SetIssuer`](#structFRHAPI__VoipTokenResponse_1a4feb20ab6ece4b7a995361d5d278adfb)`(const FString & NewValue)` | Sets the value of Issuer.
`public inline void `[`SetIssuer`](#structFRHAPI__VoipTokenResponse_1a4063ec91c4044dbacf49547dc136181e)`(FString && NewValue)` | Sets the value of Issuer using move semantics.
`public inline FString & `[`GetServer`](#structFRHAPI__VoipTokenResponse_1a22a1ebd49c7e82b9a3ac15a1cfa3b93b)`()` | Gets the value of Server.
`public inline const FString & `[`GetServer`](#structFRHAPI__VoipTokenResponse_1ab5a174d2b40e894ba78feaaca26ea48a)`() const` | Gets the value of Server.
`public inline void `[`SetServer`](#structFRHAPI__VoipTokenResponse_1a24519da94f1e862b226eb748c12584e6)`(const FString & NewValue)` | Sets the value of Server.
`public inline void `[`SetServer`](#structFRHAPI__VoipTokenResponse_1af05c2a509cb5b87e2ab476e51a41df49)`(FString && NewValue)` | Sets the value of Server using move semantics.
`public inline FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1ac0b806045ec9cfacac94656b9135bf22)`()` | Gets the value of ChannelName_Optional, regardless of it having been set.
`public inline const FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1ac7d6f20b5bff2781a8b24802dfa51a8a)`() const` | Gets the value of ChannelName_Optional, regardless of it having been set.
`public inline const FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1a1d820ba62a528d271484d14df9c3f20a)`(const FString & DefaultValue) const` | Gets the value of ChannelName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1a77478a14f4e9f31621726b784c9c7fac)`(FString & OutValue) const` | Fills OutValue with the value of ChannelName_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetChannelNameOrNull`](#structFRHAPI__VoipTokenResponse_1a5da30443ba2b389310017583abe36f4e)`()` | Returns a pointer to ChannelName_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetChannelNameOrNull`](#structFRHAPI__VoipTokenResponse_1ab04a4f288da696218c90c03304d22f38)`() const` | Returns a pointer to ChannelName_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__VoipTokenResponse_1aeebd222bc19550e43a5b8e7d3f952c0a)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__VoipTokenResponse_1aeebd222bc19550e43a5b8e7d3f952c0a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetToken`](#structFRHAPI__VoipTokenResponse_1a88275e6e3a1e58299748e92095add751)`()` <a id="structFRHAPI__VoipTokenResponse_1a88275e6e3a1e58299748e92095add751"></a>

Gets the value of Token.

#### `public inline const FString & `[`GetToken`](#structFRHAPI__VoipTokenResponse_1ab070faf1c025600173d6291d9ebc2158)`() const` <a id="structFRHAPI__VoipTokenResponse_1ab070faf1c025600173d6291d9ebc2158"></a>

Gets the value of Token.

#### `public inline void `[`SetToken`](#structFRHAPI__VoipTokenResponse_1a663094ae6c0d41f5df38e053f0950a51)`(const FString & NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a663094ae6c0d41f5df38e053f0950a51"></a>

Sets the value of Token.

#### `public inline void `[`SetToken`](#structFRHAPI__VoipTokenResponse_1a9c50e4a03bb060cbbcb30a37edde1b21)`(FString && NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a9c50e4a03bb060cbbcb30a37edde1b21"></a>

Sets the value of Token using move semantics.

#### `public inline FString & `[`GetIssuer`](#structFRHAPI__VoipTokenResponse_1a1aff458b618708aa86701e78893c0b76)`()` <a id="structFRHAPI__VoipTokenResponse_1a1aff458b618708aa86701e78893c0b76"></a>

Gets the value of Issuer.

#### `public inline const FString & `[`GetIssuer`](#structFRHAPI__VoipTokenResponse_1a58aa65d0348f392dea74b0ce9693b58f)`() const` <a id="structFRHAPI__VoipTokenResponse_1a58aa65d0348f392dea74b0ce9693b58f"></a>

Gets the value of Issuer.

#### `public inline void `[`SetIssuer`](#structFRHAPI__VoipTokenResponse_1a4feb20ab6ece4b7a995361d5d278adfb)`(const FString & NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a4feb20ab6ece4b7a995361d5d278adfb"></a>

Sets the value of Issuer.

#### `public inline void `[`SetIssuer`](#structFRHAPI__VoipTokenResponse_1a4063ec91c4044dbacf49547dc136181e)`(FString && NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a4063ec91c4044dbacf49547dc136181e"></a>

Sets the value of Issuer using move semantics.

#### `public inline FString & `[`GetServer`](#structFRHAPI__VoipTokenResponse_1a22a1ebd49c7e82b9a3ac15a1cfa3b93b)`()` <a id="structFRHAPI__VoipTokenResponse_1a22a1ebd49c7e82b9a3ac15a1cfa3b93b"></a>

Gets the value of Server.

#### `public inline const FString & `[`GetServer`](#structFRHAPI__VoipTokenResponse_1ab5a174d2b40e894ba78feaaca26ea48a)`() const` <a id="structFRHAPI__VoipTokenResponse_1ab5a174d2b40e894ba78feaaca26ea48a"></a>

Gets the value of Server.

#### `public inline void `[`SetServer`](#structFRHAPI__VoipTokenResponse_1a24519da94f1e862b226eb748c12584e6)`(const FString & NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a24519da94f1e862b226eb748c12584e6"></a>

Sets the value of Server.

#### `public inline void `[`SetServer`](#structFRHAPI__VoipTokenResponse_1af05c2a509cb5b87e2ab476e51a41df49)`(FString && NewValue)` <a id="structFRHAPI__VoipTokenResponse_1af05c2a509cb5b87e2ab476e51a41df49"></a>

Sets the value of Server using move semantics.

#### `public inline FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1ac0b806045ec9cfacac94656b9135bf22)`()` <a id="structFRHAPI__VoipTokenResponse_1ac0b806045ec9cfacac94656b9135bf22"></a>

Gets the value of ChannelName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1ac7d6f20b5bff2781a8b24802dfa51a8a)`() const` <a id="structFRHAPI__VoipTokenResponse_1ac7d6f20b5bff2781a8b24802dfa51a8a"></a>

Gets the value of ChannelName_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1a1d820ba62a528d271484d14df9c3f20a)`(const FString & DefaultValue) const` <a id="structFRHAPI__VoipTokenResponse_1a1d820ba62a528d271484d14df9c3f20a"></a>

Gets the value of ChannelName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1a77478a14f4e9f31621726b784c9c7fac)`(FString & OutValue) const` <a id="structFRHAPI__VoipTokenResponse_1a77478a14f4e9f31621726b784c9c7fac"></a>

Fills OutValue with the value of ChannelName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetChannelNameOrNull`](#structFRHAPI__VoipTokenResponse_1a5da30443ba2b389310017583abe36f4e)`()` <a id="structFRHAPI__VoipTokenResponse_1a5da30443ba2b389310017583abe36f4e"></a>

Returns a pointer to ChannelName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetChannelNameOrNull`](#structFRHAPI__VoipTokenResponse_1ab04a4f288da696218c90c03304d22f38)`() const` <a id="structFRHAPI__VoipTokenResponse_1ab04a4f288da696218c90c03304d22f38"></a>

Returns a pointer to ChannelName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetChannelName`](#structFRHAPI__VoipTokenResponse_1a81bcf39d2d3bf0f5da299351c9e359dd)`(const FString & NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a81bcf39d2d3bf0f5da299351c9e359dd"></a>

Sets the value of ChannelName_Optional and also sets ChannelName_IsSet to true.

#### `public inline void `[`SetChannelName`](#structFRHAPI__VoipTokenResponse_1ab16c9bd130178c22c14c2595c4f34ceb)`(FString && NewValue)` <a id="structFRHAPI__VoipTokenResponse_1ab16c9bd130178c22c14c2595c4f34ceb"></a>

Sets the value of ChannelName_Optional and also sets ChannelName_IsSet to true using move semantics.

#### `public inline void `[`ClearChannelName`](#structFRHAPI__VoipTokenResponse_1ac7d22ae186e4828c29db4d3f36499df8)`()` <a id="structFRHAPI__VoipTokenResponse_1ac7d22ae186e4828c29db4d3f36499df8"></a>

Clears the value of ChannelName_Optional and sets ChannelName_IsSet to false.

#### `public inline bool `[`IsChannelNameSet`](#structFRHAPI__VoipTokenResponse_1a8ece730e6aaa84501855d48862cf22cc)`() const` <a id="structFRHAPI__VoipTokenResponse_1a8ece730e6aaa84501855d48862cf22cc"></a>

Checks whether ChannelName_Optional has been set.

