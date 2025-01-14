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
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__PurgeResponse_1adf386c85e0b3ddeb3986359888355054)`()` | Gets the value of PersonId.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PurgeResponse_1a60c22797f40d8df90f3df6e8dd38995c)`() const` | Gets the value of PersonId.
`public inline void `[`SetPersonId`](#structFRHAPI__PurgeResponse_1ae2b18b987142364ab6aed9292ffb2d81)`(const FGuid & NewValue)` | Sets the value of PersonId.
`public inline void `[`SetPersonId`](#structFRHAPI__PurgeResponse_1a817678b947743d9d1d6e610ad9d04fe0)`(FGuid && NewValue)` | Sets the value of PersonId using move semantics.
`public inline FDateTime & `[`GetPurgeOn`](#structFRHAPI__PurgeResponse_1a1954a79410ade3c8cfc2cba6c8b589be)`()` | Gets the value of PurgeOn.
`public inline const FDateTime & `[`GetPurgeOn`](#structFRHAPI__PurgeResponse_1abed6965edf2afb945c64ce7550526bb6)`() const` | Gets the value of PurgeOn.
`public inline void `[`SetPurgeOn`](#structFRHAPI__PurgeResponse_1abf5b59391018705e74984239f6786585)`(const FDateTime & NewValue)` | Sets the value of PurgeOn.
`public inline void `[`SetPurgeOn`](#structFRHAPI__PurgeResponse_1a5d964bd744007867c7d476fac97d5189)`(FDateTime && NewValue)` | Sets the value of PurgeOn using move semantics.
`public inline FDateTime & `[`GetCreatedOn`](#structFRHAPI__PurgeResponse_1aa7da94e0305f29acca24cbb1b937f540)`()` | Gets the value of CreatedOn.
`public inline const FDateTime & `[`GetCreatedOn`](#structFRHAPI__PurgeResponse_1a6338f71ab76be3a573e7714de7cbe765)`() const` | Gets the value of CreatedOn.
`public inline void `[`SetCreatedOn`](#structFRHAPI__PurgeResponse_1aceccd5e8541a249b5e4f51261f696195)`(const FDateTime & NewValue)` | Sets the value of CreatedOn.
`public inline void `[`SetCreatedOn`](#structFRHAPI__PurgeResponse_1aabeb3392c637d8fa25f0ac5e4b422ff9)`(FDateTime && NewValue)` | Sets the value of CreatedOn using move semantics.
`public inline FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__PurgeResponse_1aa42ac0dd611d11f83225e031509d496d)`()` | Gets the value of LastModifiedOn.
`public inline const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__PurgeResponse_1a32547f73138e478132bd8a40cacf35b2)`() const` | Gets the value of LastModifiedOn.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__PurgeResponse_1aa35defb29ede459682467055fa60a361)`(const FDateTime & NewValue)` | Sets the value of LastModifiedOn.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__PurgeResponse_1a887397db7bfd8924fa39467a79f91557)`(FDateTime && NewValue)` | Sets the value of LastModifiedOn using move semantics.
`public inline FString & `[`GetStatus`](#structFRHAPI__PurgeResponse_1a07a7d7b89632194e742a21fda04b1ef1)`()` | Gets the value of Status.
`public inline const FString & `[`GetStatus`](#structFRHAPI__PurgeResponse_1aad6504c983354cc88ce76fe64f12ec42)`() const` | Gets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__PurgeResponse_1ac0a32dcb605ca12da1277d7edc8c5946)`(const FString & NewValue)` | Sets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__PurgeResponse_1aa07561b62631e43bae2d314e76e82837)`(FString && NewValue)` | Sets the value of Status using move semantics.

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

#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__PurgeResponse_1adf386c85e0b3ddeb3986359888355054)`()` <a id="structFRHAPI__PurgeResponse_1adf386c85e0b3ddeb3986359888355054"></a>

Gets the value of PersonId.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PurgeResponse_1a60c22797f40d8df90f3df6e8dd38995c)`() const` <a id="structFRHAPI__PurgeResponse_1a60c22797f40d8df90f3df6e8dd38995c"></a>

Gets the value of PersonId.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PurgeResponse_1ae2b18b987142364ab6aed9292ffb2d81)`(const FGuid & NewValue)` <a id="structFRHAPI__PurgeResponse_1ae2b18b987142364ab6aed9292ffb2d81"></a>

Sets the value of PersonId.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PurgeResponse_1a817678b947743d9d1d6e610ad9d04fe0)`(FGuid && NewValue)` <a id="structFRHAPI__PurgeResponse_1a817678b947743d9d1d6e610ad9d04fe0"></a>

Sets the value of PersonId using move semantics.

#### `public inline FDateTime & `[`GetPurgeOn`](#structFRHAPI__PurgeResponse_1a1954a79410ade3c8cfc2cba6c8b589be)`()` <a id="structFRHAPI__PurgeResponse_1a1954a79410ade3c8cfc2cba6c8b589be"></a>

Gets the value of PurgeOn.

#### `public inline const FDateTime & `[`GetPurgeOn`](#structFRHAPI__PurgeResponse_1abed6965edf2afb945c64ce7550526bb6)`() const` <a id="structFRHAPI__PurgeResponse_1abed6965edf2afb945c64ce7550526bb6"></a>

Gets the value of PurgeOn.

#### `public inline void `[`SetPurgeOn`](#structFRHAPI__PurgeResponse_1abf5b59391018705e74984239f6786585)`(const FDateTime & NewValue)` <a id="structFRHAPI__PurgeResponse_1abf5b59391018705e74984239f6786585"></a>

Sets the value of PurgeOn.

#### `public inline void `[`SetPurgeOn`](#structFRHAPI__PurgeResponse_1a5d964bd744007867c7d476fac97d5189)`(FDateTime && NewValue)` <a id="structFRHAPI__PurgeResponse_1a5d964bd744007867c7d476fac97d5189"></a>

Sets the value of PurgeOn using move semantics.

#### `public inline FDateTime & `[`GetCreatedOn`](#structFRHAPI__PurgeResponse_1aa7da94e0305f29acca24cbb1b937f540)`()` <a id="structFRHAPI__PurgeResponse_1aa7da94e0305f29acca24cbb1b937f540"></a>

Gets the value of CreatedOn.

#### `public inline const FDateTime & `[`GetCreatedOn`](#structFRHAPI__PurgeResponse_1a6338f71ab76be3a573e7714de7cbe765)`() const` <a id="structFRHAPI__PurgeResponse_1a6338f71ab76be3a573e7714de7cbe765"></a>

Gets the value of CreatedOn.

#### `public inline void `[`SetCreatedOn`](#structFRHAPI__PurgeResponse_1aceccd5e8541a249b5e4f51261f696195)`(const FDateTime & NewValue)` <a id="structFRHAPI__PurgeResponse_1aceccd5e8541a249b5e4f51261f696195"></a>

Sets the value of CreatedOn.

#### `public inline void `[`SetCreatedOn`](#structFRHAPI__PurgeResponse_1aabeb3392c637d8fa25f0ac5e4b422ff9)`(FDateTime && NewValue)` <a id="structFRHAPI__PurgeResponse_1aabeb3392c637d8fa25f0ac5e4b422ff9"></a>

Sets the value of CreatedOn using move semantics.

#### `public inline FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__PurgeResponse_1aa42ac0dd611d11f83225e031509d496d)`()` <a id="structFRHAPI__PurgeResponse_1aa42ac0dd611d11f83225e031509d496d"></a>

Gets the value of LastModifiedOn.

#### `public inline const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__PurgeResponse_1a32547f73138e478132bd8a40cacf35b2)`() const` <a id="structFRHAPI__PurgeResponse_1a32547f73138e478132bd8a40cacf35b2"></a>

Gets the value of LastModifiedOn.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__PurgeResponse_1aa35defb29ede459682467055fa60a361)`(const FDateTime & NewValue)` <a id="structFRHAPI__PurgeResponse_1aa35defb29ede459682467055fa60a361"></a>

Sets the value of LastModifiedOn.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__PurgeResponse_1a887397db7bfd8924fa39467a79f91557)`(FDateTime && NewValue)` <a id="structFRHAPI__PurgeResponse_1a887397db7bfd8924fa39467a79f91557"></a>

Sets the value of LastModifiedOn using move semantics.

#### `public inline FString & `[`GetStatus`](#structFRHAPI__PurgeResponse_1a07a7d7b89632194e742a21fda04b1ef1)`()` <a id="structFRHAPI__PurgeResponse_1a07a7d7b89632194e742a21fda04b1ef1"></a>

Gets the value of Status.

#### `public inline const FString & `[`GetStatus`](#structFRHAPI__PurgeResponse_1aad6504c983354cc88ce76fe64f12ec42)`() const` <a id="structFRHAPI__PurgeResponse_1aad6504c983354cc88ce76fe64f12ec42"></a>

Gets the value of Status.

#### `public inline void `[`SetStatus`](#structFRHAPI__PurgeResponse_1ac0a32dcb605ca12da1277d7edc8c5946)`(const FString & NewValue)` <a id="structFRHAPI__PurgeResponse_1ac0a32dcb605ca12da1277d7edc8c5946"></a>

Sets the value of Status.

#### `public inline void `[`SetStatus`](#structFRHAPI__PurgeResponse_1aa07561b62631e43bae2d314e76e82837)`(FString && NewValue)` <a id="structFRHAPI__PurgeResponse_1aa07561b62631e43bae2d314e76e82837"></a>

Sets the value of Status using move semantics.

