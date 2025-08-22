---
title: RHAPI_PurgeResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PurgeResponse`](#structFRHAPI__PurgeResponse) | Purge response from a purge request.

## struct `FRHAPI_PurgeResponse` <a id="structFRHAPI__PurgeResponse"></a>

```
struct FRHAPI_PurgeResponse
  : public FRHAPI_Model
```

Purge response from a purge request.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PersonId`](#structFRHAPI__PurgeResponse_1a5c1a68cb15784ef97033f8fdef69752f) | Person ID that will be purged.
`public FDateTime `[`PurgeOn`](#structFRHAPI__PurgeResponse_1a76ab4b56bf8bcc1ee2717e272e15f5f5) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public FDateTime `[`CreatedOn`](#structFRHAPI__PurgeResponse_1a6215470fcde60f39e993f606ba4e2922) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public FDateTime `[`LastModifiedOn`](#structFRHAPI__PurgeResponse_1aa86e276e2423d1f196fa4ee24d390d12) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public FString `[`Status`](#structFRHAPI__PurgeResponse_1ab7e558d3cf6553cb712431e7aa5792e9) | Status of the purge request.
`public virtual bool `[`FromJson`](#structFRHAPI__PurgeResponse_1abe0fe09f2a2b15c52d504a6878e4f708)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PurgeResponse_1ac9359010ec6a7883a8451f191ea429ab)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__PurgeResponse_1aaacb0d87f356c6f264ef3a882ecb99f3)`()` | Gets the value of PersonId.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__PurgeResponse_1a7a94df8b7a1e843045a6e0d16bda8eb7)`() const` | Gets the value of PersonId.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PurgeResponse_1af53304b9890bde19a5f300f5c80e5ddf)`(const FGuid & NewValue)` | Sets the value of PersonId.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PurgeResponse_1af86c8c398747480e1377cbcc68b8d331)`(FGuid && NewValue)` | Sets the value of PersonId using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetPurgeOn`](#structFRHAPI__PurgeResponse_1a636c09bc994a19cc54c5a7af7f43ce47)`()` | Gets the value of PurgeOn.
`public inline FORCEINLINE const FDateTime & `[`GetPurgeOn`](#structFRHAPI__PurgeResponse_1ade16bcea59c5dc8f48ae07d5b1db616c)`() const` | Gets the value of PurgeOn.
`public inline FORCEINLINE void `[`SetPurgeOn`](#structFRHAPI__PurgeResponse_1a8898542dd038226f20aa2f725ad37b7d)`(const FDateTime & NewValue)` | Sets the value of PurgeOn.
`public inline FORCEINLINE void `[`SetPurgeOn`](#structFRHAPI__PurgeResponse_1a86b51103489c64517e047c3484631b58)`(FDateTime && NewValue)` | Sets the value of PurgeOn using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetCreatedOn`](#structFRHAPI__PurgeResponse_1a1a33c6eae6028fcf2639855101cc17c4)`()` | Gets the value of CreatedOn.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedOn`](#structFRHAPI__PurgeResponse_1a385d98719d22fd3cd9e4934ab4efaf58)`() const` | Gets the value of CreatedOn.
`public inline FORCEINLINE void `[`SetCreatedOn`](#structFRHAPI__PurgeResponse_1a1891ae9a2badd57f94ddbc2ef9f99549)`(const FDateTime & NewValue)` | Sets the value of CreatedOn.
`public inline FORCEINLINE void `[`SetCreatedOn`](#structFRHAPI__PurgeResponse_1ad6dd9d5e86b4da80b324badaf37bb4e1)`(FDateTime && NewValue)` | Sets the value of CreatedOn using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__PurgeResponse_1a47aa21389f950b56c6fd0189af988eff)`()` | Gets the value of LastModifiedOn.
`public inline FORCEINLINE const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__PurgeResponse_1a5b1ae209e5bbf857bd5d779dcac2dfb0)`() const` | Gets the value of LastModifiedOn.
`public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__PurgeResponse_1a68c36d669cb17eb7e34e3dd7bde0d27d)`(const FDateTime & NewValue)` | Sets the value of LastModifiedOn.
`public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__PurgeResponse_1a0b4c3b489783ca324d3720dbb71111c1)`(FDateTime && NewValue)` | Sets the value of LastModifiedOn using move semantics.
`public inline FORCEINLINE FString & `[`GetStatus`](#structFRHAPI__PurgeResponse_1a1e3f19a5870c3c37f2d5406e5550cc0e)`()` | Gets the value of Status.
`public inline FORCEINLINE const FString & `[`GetStatus`](#structFRHAPI__PurgeResponse_1a417bee732f5c73bf432715260fe274e4)`() const` | Gets the value of Status.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PurgeResponse_1a5f403da76dfd3f7fb90ce74b96f90207)`(const FString & NewValue)` | Sets the value of Status.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PurgeResponse_1a6798846aea1a29427699a5a0f00ee0fc)`(FString && NewValue)` | Sets the value of Status using move semantics.

### Members

#### `public FGuid `[`PersonId`](#structFRHAPI__PurgeResponse_1a5c1a68cb15784ef97033f8fdef69752f) <a id="structFRHAPI__PurgeResponse_1a5c1a68cb15784ef97033f8fdef69752f"></a>

Person ID that will be purged.

#### `public FDateTime `[`PurgeOn`](#structFRHAPI__PurgeResponse_1a76ab4b56bf8bcc1ee2717e272e15f5f5) <a id="structFRHAPI__PurgeResponse_1a76ab4b56bf8bcc1ee2717e272e15f5f5"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public FDateTime `[`CreatedOn`](#structFRHAPI__PurgeResponse_1a6215470fcde60f39e993f606ba4e2922) <a id="structFRHAPI__PurgeResponse_1a6215470fcde60f39e993f606ba4e2922"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public FDateTime `[`LastModifiedOn`](#structFRHAPI__PurgeResponse_1aa86e276e2423d1f196fa4ee24d390d12) <a id="structFRHAPI__PurgeResponse_1aa86e276e2423d1f196fa4ee24d390d12"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public FString `[`Status`](#structFRHAPI__PurgeResponse_1ab7e558d3cf6553cb712431e7aa5792e9) <a id="structFRHAPI__PurgeResponse_1ab7e558d3cf6553cb712431e7aa5792e9"></a>

Status of the purge request.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PurgeResponse_1abe0fe09f2a2b15c52d504a6878e4f708)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PurgeResponse_1abe0fe09f2a2b15c52d504a6878e4f708"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PurgeResponse_1ac9359010ec6a7883a8451f191ea429ab)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PurgeResponse_1ac9359010ec6a7883a8451f191ea429ab"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__PurgeResponse_1aaacb0d87f356c6f264ef3a882ecb99f3)`()` <a id="structFRHAPI__PurgeResponse_1aaacb0d87f356c6f264ef3a882ecb99f3"></a>

Gets the value of PersonId.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__PurgeResponse_1a7a94df8b7a1e843045a6e0d16bda8eb7)`() const` <a id="structFRHAPI__PurgeResponse_1a7a94df8b7a1e843045a6e0d16bda8eb7"></a>

Gets the value of PersonId.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PurgeResponse_1af53304b9890bde19a5f300f5c80e5ddf)`(const FGuid & NewValue)` <a id="structFRHAPI__PurgeResponse_1af53304b9890bde19a5f300f5c80e5ddf"></a>

Sets the value of PersonId.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PurgeResponse_1af86c8c398747480e1377cbcc68b8d331)`(FGuid && NewValue)` <a id="structFRHAPI__PurgeResponse_1af86c8c398747480e1377cbcc68b8d331"></a>

Sets the value of PersonId using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetPurgeOn`](#structFRHAPI__PurgeResponse_1a636c09bc994a19cc54c5a7af7f43ce47)`()` <a id="structFRHAPI__PurgeResponse_1a636c09bc994a19cc54c5a7af7f43ce47"></a>

Gets the value of PurgeOn.

#### `public inline FORCEINLINE const FDateTime & `[`GetPurgeOn`](#structFRHAPI__PurgeResponse_1ade16bcea59c5dc8f48ae07d5b1db616c)`() const` <a id="structFRHAPI__PurgeResponse_1ade16bcea59c5dc8f48ae07d5b1db616c"></a>

Gets the value of PurgeOn.

#### `public inline FORCEINLINE void `[`SetPurgeOn`](#structFRHAPI__PurgeResponse_1a8898542dd038226f20aa2f725ad37b7d)`(const FDateTime & NewValue)` <a id="structFRHAPI__PurgeResponse_1a8898542dd038226f20aa2f725ad37b7d"></a>

Sets the value of PurgeOn.

#### `public inline FORCEINLINE void `[`SetPurgeOn`](#structFRHAPI__PurgeResponse_1a86b51103489c64517e047c3484631b58)`(FDateTime && NewValue)` <a id="structFRHAPI__PurgeResponse_1a86b51103489c64517e047c3484631b58"></a>

Sets the value of PurgeOn using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetCreatedOn`](#structFRHAPI__PurgeResponse_1a1a33c6eae6028fcf2639855101cc17c4)`()` <a id="structFRHAPI__PurgeResponse_1a1a33c6eae6028fcf2639855101cc17c4"></a>

Gets the value of CreatedOn.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedOn`](#structFRHAPI__PurgeResponse_1a385d98719d22fd3cd9e4934ab4efaf58)`() const` <a id="structFRHAPI__PurgeResponse_1a385d98719d22fd3cd9e4934ab4efaf58"></a>

Gets the value of CreatedOn.

#### `public inline FORCEINLINE void `[`SetCreatedOn`](#structFRHAPI__PurgeResponse_1a1891ae9a2badd57f94ddbc2ef9f99549)`(const FDateTime & NewValue)` <a id="structFRHAPI__PurgeResponse_1a1891ae9a2badd57f94ddbc2ef9f99549"></a>

Sets the value of CreatedOn.

#### `public inline FORCEINLINE void `[`SetCreatedOn`](#structFRHAPI__PurgeResponse_1ad6dd9d5e86b4da80b324badaf37bb4e1)`(FDateTime && NewValue)` <a id="structFRHAPI__PurgeResponse_1ad6dd9d5e86b4da80b324badaf37bb4e1"></a>

Sets the value of CreatedOn using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__PurgeResponse_1a47aa21389f950b56c6fd0189af988eff)`()` <a id="structFRHAPI__PurgeResponse_1a47aa21389f950b56c6fd0189af988eff"></a>

Gets the value of LastModifiedOn.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__PurgeResponse_1a5b1ae209e5bbf857bd5d779dcac2dfb0)`() const` <a id="structFRHAPI__PurgeResponse_1a5b1ae209e5bbf857bd5d779dcac2dfb0"></a>

Gets the value of LastModifiedOn.

#### `public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__PurgeResponse_1a68c36d669cb17eb7e34e3dd7bde0d27d)`(const FDateTime & NewValue)` <a id="structFRHAPI__PurgeResponse_1a68c36d669cb17eb7e34e3dd7bde0d27d"></a>

Sets the value of LastModifiedOn.

#### `public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__PurgeResponse_1a0b4c3b489783ca324d3720dbb71111c1)`(FDateTime && NewValue)` <a id="structFRHAPI__PurgeResponse_1a0b4c3b489783ca324d3720dbb71111c1"></a>

Sets the value of LastModifiedOn using move semantics.

#### `public inline FORCEINLINE FString & `[`GetStatus`](#structFRHAPI__PurgeResponse_1a1e3f19a5870c3c37f2d5406e5550cc0e)`()` <a id="structFRHAPI__PurgeResponse_1a1e3f19a5870c3c37f2d5406e5550cc0e"></a>

Gets the value of Status.

#### `public inline FORCEINLINE const FString & `[`GetStatus`](#structFRHAPI__PurgeResponse_1a417bee732f5c73bf432715260fe274e4)`() const` <a id="structFRHAPI__PurgeResponse_1a417bee732f5c73bf432715260fe274e4"></a>

Gets the value of Status.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PurgeResponse_1a5f403da76dfd3f7fb90ce74b96f90207)`(const FString & NewValue)` <a id="structFRHAPI__PurgeResponse_1a5f403da76dfd3f7fb90ce74b96f90207"></a>

Sets the value of Status.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PurgeResponse_1a6798846aea1a29427699a5a0f00ee0fc)`(FString && NewValue)` <a id="structFRHAPI__PurgeResponse_1a6798846aea1a29427699a5a0f00ee0fc"></a>

Sets the value of Status using move semantics.

