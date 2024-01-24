# RHAPI_PurgeResponse <a id="group__RHAPI__PurgeResponse"></a>

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

#### Summary

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
`public inline void `[`SetPersonId`](#structFRHAPI__PurgeResponse_1af33171c3f15797e12450f2a2e420ea7f)`(FGuid NewValue)` | Sets the value of PersonId.
`public inline FDateTime & `[`GetPurgeOn`](#structFRHAPI__PurgeResponse_1a93f492889342a7569bf8c4989e2cd266)`()` | Gets the value of PurgeOn.
`public inline const FDateTime & `[`GetPurgeOn`](#structFRHAPI__PurgeResponse_1a61d92f1d08e5efd509af0e24f6086547)`() const` | Gets the value of PurgeOn.
`public inline void `[`SetPurgeOn`](#structFRHAPI__PurgeResponse_1a2538e2c1c93d9da2aee884987d6a4298)`(FDateTime NewValue)` | Sets the value of PurgeOn.
`public inline FDateTime & `[`GetCreatedOn`](#structFRHAPI__PurgeResponse_1a77025ecd448e8611868eef13bad20658)`()` | Gets the value of CreatedOn.
`public inline const FDateTime & `[`GetCreatedOn`](#structFRHAPI__PurgeResponse_1a22abfeda8fffb2848ec777d0d6caa36b)`() const` | Gets the value of CreatedOn.
`public inline void `[`SetCreatedOn`](#structFRHAPI__PurgeResponse_1aa2417c1512e1ea1f29609974c4f67eae)`(FDateTime NewValue)` | Sets the value of CreatedOn.
`public inline FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__PurgeResponse_1add934610257f723e04ee481bbee432f4)`()` | Gets the value of LastModifiedOn.
`public inline const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__PurgeResponse_1ace50105c50af4f84cab5722271fc0ffa)`() const` | Gets the value of LastModifiedOn.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__PurgeResponse_1a61a7e91502c3b138728b9521dc48c1a6)`(FDateTime NewValue)` | Sets the value of LastModifiedOn.
`public inline FString & `[`GetStatus`](#structFRHAPI__PurgeResponse_1a04bd8667d4e9a97f8a7e73526a489496)`()` | Gets the value of Status.
`public inline const FString & `[`GetStatus`](#structFRHAPI__PurgeResponse_1a8c598d34431dd1f38a663ab8955d9904)`() const` | Gets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__PurgeResponse_1a637ce446f6575e52ed0dd2c6b61424da)`(FString NewValue)` | Sets the value of Status.

#### Members

#### `public FGuid `[`PersonId`](#structFRHAPI__PurgeResponse_1a5c1a68cb15784ef97033f8fdef69752f) <a id="structFRHAPI__PurgeResponse_1a5c1a68cb15784ef97033f8fdef69752f"></a>

Person ID that will be purged.

<br>
#### `public FDateTime `[`PurgeOn`](#structFRHAPI__PurgeResponse_1a76ab4b56bf8bcc1ee2717e272e15f5f5) <a id="structFRHAPI__PurgeResponse_1a76ab4b56bf8bcc1ee2717e272e15f5f5"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public FDateTime `[`CreatedOn`](#structFRHAPI__PurgeResponse_1a6215470fcde60f39e993f606ba4e2922) <a id="structFRHAPI__PurgeResponse_1a6215470fcde60f39e993f606ba4e2922"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public FDateTime `[`LastModifiedOn`](#structFRHAPI__PurgeResponse_1aa86e276e2423d1f196fa4ee24d390d12) <a id="structFRHAPI__PurgeResponse_1aa86e276e2423d1f196fa4ee24d390d12"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public FString `[`Status`](#structFRHAPI__PurgeResponse_1ab7e558d3cf6553cb712431e7aa5792e9) <a id="structFRHAPI__PurgeResponse_1ab7e558d3cf6553cb712431e7aa5792e9"></a>

Status of the purge request.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PurgeResponse_1a88e0dc69546b865f618871dd78006032)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PurgeResponse_1a88e0dc69546b865f618871dd78006032"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PurgeResponse_1a4dba4031f20426243fd8f51e0f1ba211)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PurgeResponse_1a4dba4031f20426243fd8f51e0f1ba211"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__PurgeResponse_1a31b719c156406a34cef0a6ca8452cb81)`()` <a id="structFRHAPI__PurgeResponse_1a31b719c156406a34cef0a6ca8452cb81"></a>

Gets the value of PersonId.

<br>
#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PurgeResponse_1a59a525d3e22adeb4c59ccdeca4ca35d8)`() const` <a id="structFRHAPI__PurgeResponse_1a59a525d3e22adeb4c59ccdeca4ca35d8"></a>

Gets the value of PersonId.

<br>
#### `public inline void `[`SetPersonId`](#structFRHAPI__PurgeResponse_1af33171c3f15797e12450f2a2e420ea7f)`(FGuid NewValue)` <a id="structFRHAPI__PurgeResponse_1af33171c3f15797e12450f2a2e420ea7f"></a>

Sets the value of PersonId.

<br>
#### `public inline FDateTime & `[`GetPurgeOn`](#structFRHAPI__PurgeResponse_1a93f492889342a7569bf8c4989e2cd266)`()` <a id="structFRHAPI__PurgeResponse_1a93f492889342a7569bf8c4989e2cd266"></a>

Gets the value of PurgeOn.

<br>
#### `public inline const FDateTime & `[`GetPurgeOn`](#structFRHAPI__PurgeResponse_1a61d92f1d08e5efd509af0e24f6086547)`() const` <a id="structFRHAPI__PurgeResponse_1a61d92f1d08e5efd509af0e24f6086547"></a>

Gets the value of PurgeOn.

<br>
#### `public inline void `[`SetPurgeOn`](#structFRHAPI__PurgeResponse_1a2538e2c1c93d9da2aee884987d6a4298)`(FDateTime NewValue)` <a id="structFRHAPI__PurgeResponse_1a2538e2c1c93d9da2aee884987d6a4298"></a>

Sets the value of PurgeOn.

<br>
#### `public inline FDateTime & `[`GetCreatedOn`](#structFRHAPI__PurgeResponse_1a77025ecd448e8611868eef13bad20658)`()` <a id="structFRHAPI__PurgeResponse_1a77025ecd448e8611868eef13bad20658"></a>

Gets the value of CreatedOn.

<br>
#### `public inline const FDateTime & `[`GetCreatedOn`](#structFRHAPI__PurgeResponse_1a22abfeda8fffb2848ec777d0d6caa36b)`() const` <a id="structFRHAPI__PurgeResponse_1a22abfeda8fffb2848ec777d0d6caa36b"></a>

Gets the value of CreatedOn.

<br>
#### `public inline void `[`SetCreatedOn`](#structFRHAPI__PurgeResponse_1aa2417c1512e1ea1f29609974c4f67eae)`(FDateTime NewValue)` <a id="structFRHAPI__PurgeResponse_1aa2417c1512e1ea1f29609974c4f67eae"></a>

Sets the value of CreatedOn.

<br>
#### `public inline FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__PurgeResponse_1add934610257f723e04ee481bbee432f4)`()` <a id="structFRHAPI__PurgeResponse_1add934610257f723e04ee481bbee432f4"></a>

Gets the value of LastModifiedOn.

<br>
#### `public inline const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__PurgeResponse_1ace50105c50af4f84cab5722271fc0ffa)`() const` <a id="structFRHAPI__PurgeResponse_1ace50105c50af4f84cab5722271fc0ffa"></a>

Gets the value of LastModifiedOn.

<br>
#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__PurgeResponse_1a61a7e91502c3b138728b9521dc48c1a6)`(FDateTime NewValue)` <a id="structFRHAPI__PurgeResponse_1a61a7e91502c3b138728b9521dc48c1a6"></a>

Sets the value of LastModifiedOn.

<br>
#### `public inline FString & `[`GetStatus`](#structFRHAPI__PurgeResponse_1a04bd8667d4e9a97f8a7e73526a489496)`()` <a id="structFRHAPI__PurgeResponse_1a04bd8667d4e9a97f8a7e73526a489496"></a>

Gets the value of Status.

<br>
#### `public inline const FString & `[`GetStatus`](#structFRHAPI__PurgeResponse_1a8c598d34431dd1f38a663ab8955d9904)`() const` <a id="structFRHAPI__PurgeResponse_1a8c598d34431dd1f38a663ab8955d9904"></a>

Gets the value of Status.

<br>
#### `public inline void `[`SetStatus`](#structFRHAPI__PurgeResponse_1a637ce446f6575e52ed0dd2c6b61424da)`(FString NewValue)` <a id="structFRHAPI__PurgeResponse_1a637ce446f6575e52ed0dd2c6b61424da"></a>

Sets the value of Status.

<br>
