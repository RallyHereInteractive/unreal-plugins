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
`public inline FORCEINLINE FString & `[`GetToken`](#structFRHAPI__VoipTokenResponse_1aaf90157367b1b69231ca28c3c66ab365)`()` | Gets the value of Token.
`public inline FORCEINLINE const FString & `[`GetToken`](#structFRHAPI__VoipTokenResponse_1a62e8393b4a967c02b5ea77f2956fc6ea)`() const` | Gets the value of Token.
`public inline FORCEINLINE void `[`SetToken`](#structFRHAPI__VoipTokenResponse_1a768667864b2324471d1558c2738168a8)`(const FString & NewValue)` | Sets the value of Token.
`public inline FORCEINLINE void `[`SetToken`](#structFRHAPI__VoipTokenResponse_1a5af16f8900e0407f976db02307082403)`(FString && NewValue)` | Sets the value of Token using move semantics.
`public inline FORCEINLINE FString & `[`GetIssuer`](#structFRHAPI__VoipTokenResponse_1ac891c8129b85d3e2dd8426ec6ed443ac)`()` | Gets the value of Issuer.
`public inline FORCEINLINE const FString & `[`GetIssuer`](#structFRHAPI__VoipTokenResponse_1a215b23edcce9e4de0e92f74435d699fe)`() const` | Gets the value of Issuer.
`public inline FORCEINLINE void `[`SetIssuer`](#structFRHAPI__VoipTokenResponse_1acb10d8ef39f6b85d984e116d24bfc31e)`(const FString & NewValue)` | Sets the value of Issuer.
`public inline FORCEINLINE void `[`SetIssuer`](#structFRHAPI__VoipTokenResponse_1a874c72f795e254cc41f8cec3258ab054)`(FString && NewValue)` | Sets the value of Issuer using move semantics.
`public inline FORCEINLINE FString & `[`GetServer`](#structFRHAPI__VoipTokenResponse_1a61b957aad2a45abb38740665f49bc497)`()` | Gets the value of Server.
`public inline FORCEINLINE const FString & `[`GetServer`](#structFRHAPI__VoipTokenResponse_1a57789a093ead3f4a8a81548b8845c440)`() const` | Gets the value of Server.
`public inline FORCEINLINE void `[`SetServer`](#structFRHAPI__VoipTokenResponse_1afe8371a163d3fb169c8180e21e065f90)`(const FString & NewValue)` | Sets the value of Server.
`public inline FORCEINLINE void `[`SetServer`](#structFRHAPI__VoipTokenResponse_1a24ba7518604827fab9f85787578fa4ce)`(FString && NewValue)` | Sets the value of Server using move semantics.
`public inline FORCEINLINE FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1a78aa3a035abbdca0a891e5b94bbbfce1)`()` | Gets the value of ChannelName_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1aae8b143088445712262f460ed74f3fe0)`() const` | Gets the value of ChannelName_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1a322aa589fd9b6a3c1b849afb522e273e)`(const FString & DefaultValue) const` | Gets the value of ChannelName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1aa653dc789430c7ddee445fc5e4d6733e)`(FString & OutValue) const` | Fills OutValue with the value of ChannelName_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetChannelNameOrNull`](#structFRHAPI__VoipTokenResponse_1aabfaa2b763a0933cc91e99aa7cd45c21)`()` | Returns a pointer to ChannelName_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetChannelNameOrNull`](#structFRHAPI__VoipTokenResponse_1a5e5cb61324a7f271d523ce326bcd625e)`() const` | Returns a pointer to ChannelName_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetChannelName`](#structFRHAPI__VoipTokenResponse_1a0ac0d99ea06412fffd5f92ec9ddd3f74)`(const FString & NewValue)` | Sets the value of ChannelName_Optional and also sets ChannelName_IsSet to true.
`public inline FORCEINLINE void `[`SetChannelName`](#structFRHAPI__VoipTokenResponse_1a3d0415e05643dc9a470bd7ae195d1bad)`(FString && NewValue)` | Sets the value of ChannelName_Optional and also sets ChannelName_IsSet to true using move semantics.
`public inline void `[`ClearChannelName`](#structFRHAPI__VoipTokenResponse_1ac7d22ae186e4828c29db4d3f36499df8)`()` | Clears the value of ChannelName_Optional and sets ChannelName_IsSet to false.

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

#### `public inline FORCEINLINE FString & `[`GetToken`](#structFRHAPI__VoipTokenResponse_1aaf90157367b1b69231ca28c3c66ab365)`()` <a id="structFRHAPI__VoipTokenResponse_1aaf90157367b1b69231ca28c3c66ab365"></a>

Gets the value of Token.

#### `public inline FORCEINLINE const FString & `[`GetToken`](#structFRHAPI__VoipTokenResponse_1a62e8393b4a967c02b5ea77f2956fc6ea)`() const` <a id="structFRHAPI__VoipTokenResponse_1a62e8393b4a967c02b5ea77f2956fc6ea"></a>

Gets the value of Token.

#### `public inline FORCEINLINE void `[`SetToken`](#structFRHAPI__VoipTokenResponse_1a768667864b2324471d1558c2738168a8)`(const FString & NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a768667864b2324471d1558c2738168a8"></a>

Sets the value of Token.

#### `public inline FORCEINLINE void `[`SetToken`](#structFRHAPI__VoipTokenResponse_1a5af16f8900e0407f976db02307082403)`(FString && NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a5af16f8900e0407f976db02307082403"></a>

Sets the value of Token using move semantics.

#### `public inline FORCEINLINE FString & `[`GetIssuer`](#structFRHAPI__VoipTokenResponse_1ac891c8129b85d3e2dd8426ec6ed443ac)`()` <a id="structFRHAPI__VoipTokenResponse_1ac891c8129b85d3e2dd8426ec6ed443ac"></a>

Gets the value of Issuer.

#### `public inline FORCEINLINE const FString & `[`GetIssuer`](#structFRHAPI__VoipTokenResponse_1a215b23edcce9e4de0e92f74435d699fe)`() const` <a id="structFRHAPI__VoipTokenResponse_1a215b23edcce9e4de0e92f74435d699fe"></a>

Gets the value of Issuer.

#### `public inline FORCEINLINE void `[`SetIssuer`](#structFRHAPI__VoipTokenResponse_1acb10d8ef39f6b85d984e116d24bfc31e)`(const FString & NewValue)` <a id="structFRHAPI__VoipTokenResponse_1acb10d8ef39f6b85d984e116d24bfc31e"></a>

Sets the value of Issuer.

#### `public inline FORCEINLINE void `[`SetIssuer`](#structFRHAPI__VoipTokenResponse_1a874c72f795e254cc41f8cec3258ab054)`(FString && NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a874c72f795e254cc41f8cec3258ab054"></a>

Sets the value of Issuer using move semantics.

#### `public inline FORCEINLINE FString & `[`GetServer`](#structFRHAPI__VoipTokenResponse_1a61b957aad2a45abb38740665f49bc497)`()` <a id="structFRHAPI__VoipTokenResponse_1a61b957aad2a45abb38740665f49bc497"></a>

Gets the value of Server.

#### `public inline FORCEINLINE const FString & `[`GetServer`](#structFRHAPI__VoipTokenResponse_1a57789a093ead3f4a8a81548b8845c440)`() const` <a id="structFRHAPI__VoipTokenResponse_1a57789a093ead3f4a8a81548b8845c440"></a>

Gets the value of Server.

#### `public inline FORCEINLINE void `[`SetServer`](#structFRHAPI__VoipTokenResponse_1afe8371a163d3fb169c8180e21e065f90)`(const FString & NewValue)` <a id="structFRHAPI__VoipTokenResponse_1afe8371a163d3fb169c8180e21e065f90"></a>

Sets the value of Server.

#### `public inline FORCEINLINE void `[`SetServer`](#structFRHAPI__VoipTokenResponse_1a24ba7518604827fab9f85787578fa4ce)`(FString && NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a24ba7518604827fab9f85787578fa4ce"></a>

Sets the value of Server using move semantics.

#### `public inline FORCEINLINE FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1a78aa3a035abbdca0a891e5b94bbbfce1)`()` <a id="structFRHAPI__VoipTokenResponse_1a78aa3a035abbdca0a891e5b94bbbfce1"></a>

Gets the value of ChannelName_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1aae8b143088445712262f460ed74f3fe0)`() const` <a id="structFRHAPI__VoipTokenResponse_1aae8b143088445712262f460ed74f3fe0"></a>

Gets the value of ChannelName_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1a322aa589fd9b6a3c1b849afb522e273e)`(const FString & DefaultValue) const` <a id="structFRHAPI__VoipTokenResponse_1a322aa589fd9b6a3c1b849afb522e273e"></a>

Gets the value of ChannelName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetChannelName`](#structFRHAPI__VoipTokenResponse_1aa653dc789430c7ddee445fc5e4d6733e)`(FString & OutValue) const` <a id="structFRHAPI__VoipTokenResponse_1aa653dc789430c7ddee445fc5e4d6733e"></a>

Fills OutValue with the value of ChannelName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetChannelNameOrNull`](#structFRHAPI__VoipTokenResponse_1aabfaa2b763a0933cc91e99aa7cd45c21)`()` <a id="structFRHAPI__VoipTokenResponse_1aabfaa2b763a0933cc91e99aa7cd45c21"></a>

Returns a pointer to ChannelName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetChannelNameOrNull`](#structFRHAPI__VoipTokenResponse_1a5e5cb61324a7f271d523ce326bcd625e)`() const` <a id="structFRHAPI__VoipTokenResponse_1a5e5cb61324a7f271d523ce326bcd625e"></a>

Returns a pointer to ChannelName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetChannelName`](#structFRHAPI__VoipTokenResponse_1a0ac0d99ea06412fffd5f92ec9ddd3f74)`(const FString & NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a0ac0d99ea06412fffd5f92ec9ddd3f74"></a>

Sets the value of ChannelName_Optional and also sets ChannelName_IsSet to true.

#### `public inline FORCEINLINE void `[`SetChannelName`](#structFRHAPI__VoipTokenResponse_1a3d0415e05643dc9a470bd7ae195d1bad)`(FString && NewValue)` <a id="structFRHAPI__VoipTokenResponse_1a3d0415e05643dc9a470bd7ae195d1bad"></a>

Sets the value of ChannelName_Optional and also sets ChannelName_IsSet to true using move semantics.

#### `public inline void `[`ClearChannelName`](#structFRHAPI__VoipTokenResponse_1ac7d22ae186e4828c29db4d3f36499df8)`()` <a id="structFRHAPI__VoipTokenResponse_1ac7d22ae186e4828c29db4d3f36499df8"></a>

Clears the value of ChannelName_Optional and sets ChannelName_IsSet to false.

