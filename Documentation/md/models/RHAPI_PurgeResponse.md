# group `RHAPI_PurgeResponse` <a id="group__RHAPI__PurgeResponse"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__PurgeResponse_1a88e0dc69546b865f618871dd78006032)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PurgeResponse_1a4dba4031f20426243fd8f51e0f1ba211)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__PurgeResponse_1a31b719c156406a34cef0a6ca8452cb81)`()` | Gets the value of PersonId.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PurgeResponse_1a59a525d3e22adeb4c59ccdeca4ca35d8)`() const` | Gets the value of PersonId.
`public inline void `[`SetPersonId`](#structFRHAPI__PurgeResponse_1ae2b18b987142364ab6aed9292ffb2d81)`(const FGuid & NewValue)` | Sets the value of PersonId.
`public inline void `[`SetPersonId`](#structFRHAPI__PurgeResponse_1a817678b947743d9d1d6e610ad9d04fe0)`(FGuid && NewValue)` | Sets the value of PersonId using move semantics.
`public inline FDateTime & `[`GetPurgeOn`](#structFRHAPI__PurgeResponse_1a93f492889342a7569bf8c4989e2cd266)`()` | Gets the value of PurgeOn.
`public inline const FDateTime & `[`GetPurgeOn`](#structFRHAPI__PurgeResponse_1a61d92f1d08e5efd509af0e24f6086547)`() const` | Gets the value of PurgeOn.
`public inline void `[`SetPurgeOn`](#structFRHAPI__PurgeResponse_1abf5b59391018705e74984239f6786585)`(const FDateTime & NewValue)` | Sets the value of PurgeOn.
`public inline void `[`SetPurgeOn`](#structFRHAPI__PurgeResponse_1a5d964bd744007867c7d476fac97d5189)`(FDateTime && NewValue)` | Sets the value of PurgeOn using move semantics.
`public inline FDateTime & `[`GetCreatedOn`](#structFRHAPI__PurgeResponse_1a77025ecd448e8611868eef13bad20658)`()` | Gets the value of CreatedOn.
`public inline const FDateTime & `[`GetCreatedOn`](#structFRHAPI__PurgeResponse_1a22abfeda8fffb2848ec777d0d6caa36b)`() const` | Gets the value of CreatedOn.
`public inline void `[`SetCreatedOn`](#structFRHAPI__PurgeResponse_1aceccd5e8541a249b5e4f51261f696195)`(const FDateTime & NewValue)` | Sets the value of CreatedOn.
`public inline void `[`SetCreatedOn`](#structFRHAPI__PurgeResponse_1aabeb3392c637d8fa25f0ac5e4b422ff9)`(FDateTime && NewValue)` | Sets the value of CreatedOn using move semantics.
`public inline FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__PurgeResponse_1add934610257f723e04ee481bbee432f4)`()` | Gets the value of LastModifiedOn.
`public inline const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__PurgeResponse_1ace50105c50af4f84cab5722271fc0ffa)`() const` | Gets the value of LastModifiedOn.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__PurgeResponse_1aa35defb29ede459682467055fa60a361)`(const FDateTime & NewValue)` | Sets the value of LastModifiedOn.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__PurgeResponse_1a887397db7bfd8924fa39467a79f91557)`(FDateTime && NewValue)` | Sets the value of LastModifiedOn using move semantics.
`public inline FString & `[`GetStatus`](#structFRHAPI__PurgeResponse_1a04bd8667d4e9a97f8a7e73526a489496)`()` | Gets the value of Status.
`public inline const FString & `[`GetStatus`](#structFRHAPI__PurgeResponse_1a8c598d34431dd1f38a663ab8955d9904)`() const` | Gets the value of Status.
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

#### `public virtual bool `[`FromJson`](#structFRHAPI__PurgeResponse_1a88e0dc69546b865f618871dd78006032)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PurgeResponse_1a88e0dc69546b865f618871dd78006032"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PurgeResponse_1a4dba4031f20426243fd8f51e0f1ba211)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PurgeResponse_1a4dba4031f20426243fd8f51e0f1ba211"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__PurgeResponse_1a31b719c156406a34cef0a6ca8452cb81)`()` <a id="structFRHAPI__PurgeResponse_1a31b719c156406a34cef0a6ca8452cb81"></a>

Gets the value of PersonId.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PurgeResponse_1a59a525d3e22adeb4c59ccdeca4ca35d8)`() const` <a id="structFRHAPI__PurgeResponse_1a59a525d3e22adeb4c59ccdeca4ca35d8"></a>

Gets the value of PersonId.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PurgeResponse_1ae2b18b987142364ab6aed9292ffb2d81)`(const FGuid & NewValue)` <a id="structFRHAPI__PurgeResponse_1ae2b18b987142364ab6aed9292ffb2d81"></a>

Sets the value of PersonId.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PurgeResponse_1a817678b947743d9d1d6e610ad9d04fe0)`(FGuid && NewValue)` <a id="structFRHAPI__PurgeResponse_1a817678b947743d9d1d6e610ad9d04fe0"></a>

Sets the value of PersonId using move semantics.

#### `public inline FDateTime & `[`GetPurgeOn`](#structFRHAPI__PurgeResponse_1a93f492889342a7569bf8c4989e2cd266)`()` <a id="structFRHAPI__PurgeResponse_1a93f492889342a7569bf8c4989e2cd266"></a>

Gets the value of PurgeOn.

#### `public inline const FDateTime & `[`GetPurgeOn`](#structFRHAPI__PurgeResponse_1a61d92f1d08e5efd509af0e24f6086547)`() const` <a id="structFRHAPI__PurgeResponse_1a61d92f1d08e5efd509af0e24f6086547"></a>

Gets the value of PurgeOn.

#### `public inline void `[`SetPurgeOn`](#structFRHAPI__PurgeResponse_1abf5b59391018705e74984239f6786585)`(const FDateTime & NewValue)` <a id="structFRHAPI__PurgeResponse_1abf5b59391018705e74984239f6786585"></a>

Sets the value of PurgeOn.

#### `public inline void `[`SetPurgeOn`](#structFRHAPI__PurgeResponse_1a5d964bd744007867c7d476fac97d5189)`(FDateTime && NewValue)` <a id="structFRHAPI__PurgeResponse_1a5d964bd744007867c7d476fac97d5189"></a>

Sets the value of PurgeOn using move semantics.

#### `public inline FDateTime & `[`GetCreatedOn`](#structFRHAPI__PurgeResponse_1a77025ecd448e8611868eef13bad20658)`()` <a id="structFRHAPI__PurgeResponse_1a77025ecd448e8611868eef13bad20658"></a>

Gets the value of CreatedOn.

#### `public inline const FDateTime & `[`GetCreatedOn`](#structFRHAPI__PurgeResponse_1a22abfeda8fffb2848ec777d0d6caa36b)`() const` <a id="structFRHAPI__PurgeResponse_1a22abfeda8fffb2848ec777d0d6caa36b"></a>

Gets the value of CreatedOn.

#### `public inline void `[`SetCreatedOn`](#structFRHAPI__PurgeResponse_1aceccd5e8541a249b5e4f51261f696195)`(const FDateTime & NewValue)` <a id="structFRHAPI__PurgeResponse_1aceccd5e8541a249b5e4f51261f696195"></a>

Sets the value of CreatedOn.

#### `public inline void `[`SetCreatedOn`](#structFRHAPI__PurgeResponse_1aabeb3392c637d8fa25f0ac5e4b422ff9)`(FDateTime && NewValue)` <a id="structFRHAPI__PurgeResponse_1aabeb3392c637d8fa25f0ac5e4b422ff9"></a>

Sets the value of CreatedOn using move semantics.

#### `public inline FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__PurgeResponse_1add934610257f723e04ee481bbee432f4)`()` <a id="structFRHAPI__PurgeResponse_1add934610257f723e04ee481bbee432f4"></a>

Gets the value of LastModifiedOn.

#### `public inline const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__PurgeResponse_1ace50105c50af4f84cab5722271fc0ffa)`() const` <a id="structFRHAPI__PurgeResponse_1ace50105c50af4f84cab5722271fc0ffa"></a>

Gets the value of LastModifiedOn.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__PurgeResponse_1aa35defb29ede459682467055fa60a361)`(const FDateTime & NewValue)` <a id="structFRHAPI__PurgeResponse_1aa35defb29ede459682467055fa60a361"></a>

Sets the value of LastModifiedOn.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__PurgeResponse_1a887397db7bfd8924fa39467a79f91557)`(FDateTime && NewValue)` <a id="structFRHAPI__PurgeResponse_1a887397db7bfd8924fa39467a79f91557"></a>

Sets the value of LastModifiedOn using move semantics.

#### `public inline FString & `[`GetStatus`](#structFRHAPI__PurgeResponse_1a04bd8667d4e9a97f8a7e73526a489496)`()` <a id="structFRHAPI__PurgeResponse_1a04bd8667d4e9a97f8a7e73526a489496"></a>

Gets the value of Status.

#### `public inline const FString & `[`GetStatus`](#structFRHAPI__PurgeResponse_1a8c598d34431dd1f38a663ab8955d9904)`() const` <a id="structFRHAPI__PurgeResponse_1a8c598d34431dd1f38a663ab8955d9904"></a>

Gets the value of Status.

#### `public inline void `[`SetStatus`](#structFRHAPI__PurgeResponse_1ac0a32dcb605ca12da1277d7edc8c5946)`(const FString & NewValue)` <a id="structFRHAPI__PurgeResponse_1ac0a32dcb605ca12da1277d7edc8c5946"></a>

Sets the value of Status.

#### `public inline void `[`SetStatus`](#structFRHAPI__PurgeResponse_1aa07561b62631e43bae2d314e76e82837)`(FString && NewValue)` <a id="structFRHAPI__PurgeResponse_1aa07561b62631e43bae2d314e76e82837"></a>

Sets the value of Status using move semantics.

