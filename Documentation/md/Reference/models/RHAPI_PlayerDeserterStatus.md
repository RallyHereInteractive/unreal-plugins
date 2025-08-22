---
title: RHAPI_PlayerDeserterStatus
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerDeserterStatus`](#structFRHAPI__PlayerDeserterStatus) | 

## struct `FRHAPI_PlayerDeserterStatus` <a id="structFRHAPI__PlayerDeserterStatus"></a>

```
struct FRHAPI_PlayerDeserterStatus
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`DeserterId`](#structFRHAPI__PlayerDeserterStatus_1a2e94ff1712e6c03ad044e6c80824e422) | ID for which type of deserter this is.
`public bool `[`DeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a0b9b6e02cc73cfcfb7e0ad3e54924d1e) | Flag of whether or not the player is a deserter.
`public FDateTime `[`DeserterExpiration_Optional`](#structFRHAPI__PlayerDeserterStatus_1a634163e27e36eb0490e11b908a79e12a) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`DeserterExpiration_IsSet`](#structFRHAPI__PlayerDeserterStatus_1aec5ec90e840054b4a283fa5fd46998f6) | true if DeserterExpiration_Optional has been set to a value
`public FDateTime `[`DeserterReset_Optional`](#structFRHAPI__PlayerDeserterStatus_1adcfe9f953c774807a2d357054a646b11) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`DeserterReset_IsSet`](#structFRHAPI__PlayerDeserterStatus_1a0337ce3e6912dd71f16d706d0d1a40cc) | true if DeserterReset_Optional has been set to a value
`public int32 `[`DeserterCount_Optional`](#structFRHAPI__PlayerDeserterStatus_1a9c79cb405361439be29a9f04070d80e5) | The number of times a player has deserted before the expiration.
`public bool `[`DeserterCount_IsSet`](#structFRHAPI__PlayerDeserterStatus_1ab71fa5d9d6aa151f80e62cf32c3602b4) | true if DeserterCount_Optional has been set to a value
`public FDateTime `[`LastUpdated_Optional`](#structFRHAPI__PlayerDeserterStatus_1a67ff00c88097d7be61acf767910ecc03) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`LastUpdated_IsSet`](#structFRHAPI__PlayerDeserterStatus_1a99a402b66ae47401403fbd02f3d83f93) | true if LastUpdated_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerDeserterStatus_1aeeacbbdfd3683bcecbda095d64d14641) | Custom data about a players desertion status.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerDeserterStatus_1a22be5f2d7a13fc498f5795bb665c346c) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerDeserterStatus_1a8982bd8e590c45cde96822d003cd402e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerDeserterStatus_1a908c8d76f794fb7f17ecb0539d8730f9)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1a32f76757c90499574862952ec076864c)`()` | Gets the value of DeserterId.
`public inline FORCEINLINE const FString & `[`GetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1ac4ff42ec8e0bc103033e71272c5bb6dc)`() const` | Gets the value of DeserterId.
`public inline FORCEINLINE void `[`SetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1aa521dc6a0e81ca17bd60bb60e545474c)`(const FString & NewValue)` | Sets the value of DeserterId.
`public inline FORCEINLINE void `[`SetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1ac4a193d1b4588e73e44f39d7835e9878)`(FString && NewValue)` | Sets the value of DeserterId using move semantics.
`public inline FORCEINLINE bool & `[`GetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a706904aab86143ba322bab4eab714513)`()` | Gets the value of DeserterStatus.
`public inline FORCEINLINE const bool & `[`GetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a23373b29ffbddc5d04f1f1e1d1cd061a)`() const` | Gets the value of DeserterStatus.
`public inline FORCEINLINE void `[`SetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a7b881253dbc87516e932d6c2eaac61f6)`(const bool & NewValue)` | Sets the value of DeserterStatus.
`public inline FORCEINLINE void `[`SetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1ac4c367a093d3cad03c9b3abe3f26e90d)`(bool && NewValue)` | Sets the value of DeserterStatus using move semantics.
`public inline FORCEINLINE bool `[`GetDefaultValue_DeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a7da236fe4ef947556457077b461bd46e)`()` | Returns the default value of DeserterStatus.
`public inline FORCEINLINE FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ac583885cf6b6cde0a8d384eb8701344b)`()` | Gets the value of DeserterExpiration_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1a433bdf0d144019ab80333a67736af621)`() const` | Gets the value of DeserterExpiration_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ac9fbb3397d1e6acbc2fdd6e29912e850)`(const FDateTime & DefaultValue) const` | Gets the value of DeserterExpiration_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ad18ab2661c266ab4544d2d57b3733b75)`(FDateTime & OutValue) const` | Fills OutValue with the value of DeserterExpiration_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetDeserterExpirationOrNull`](#structFRHAPI__PlayerDeserterStatus_1ab7033b340f4e17454f8df348505f6240)`()` | Returns a pointer to DeserterExpiration_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetDeserterExpirationOrNull`](#structFRHAPI__PlayerDeserterStatus_1af78fdc868b6502c2501d7fdc253c7a6f)`() const` | Returns a pointer to DeserterExpiration_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ad30bda869d58d5dfbc67edacd801f511)`(const FDateTime & NewValue)` | Sets the value of DeserterExpiration_Optional and also sets DeserterExpiration_IsSet to true.
`public inline FORCEINLINE void `[`SetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1afeb59dc115289ddd78816db0eb6049c4)`(FDateTime && NewValue)` | Sets the value of DeserterExpiration_Optional and also sets DeserterExpiration_IsSet to true using move semantics.
`public inline void `[`ClearDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ad3dbbeafc82edc9873b439047a74c805)`()` | Clears the value of DeserterExpiration_Optional and sets DeserterExpiration_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a7c47d134632b425df2c265f21d6ca2f3)`()` | Gets the value of DeserterReset_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1ab97e3a500666c524dbf9fff7cc570139)`() const` | Gets the value of DeserterReset_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a6c60d2d3121eeb3a2e993d67cdcdb6f4)`(const FDateTime & DefaultValue) const` | Gets the value of DeserterReset_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a3ac214a2c8e4a4fd029f87553a99d6f5)`(FDateTime & OutValue) const` | Fills OutValue with the value of DeserterReset_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetDeserterResetOrNull`](#structFRHAPI__PlayerDeserterStatus_1aebd689e6076752a2fa0078045b7933b1)`()` | Returns a pointer to DeserterReset_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetDeserterResetOrNull`](#structFRHAPI__PlayerDeserterStatus_1a9ae2e36987eebb68543dacf03e3be14b)`() const` | Returns a pointer to DeserterReset_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a9396e389c11c6ea2ba6052b1f343cfcc)`(const FDateTime & NewValue)` | Sets the value of DeserterReset_Optional and also sets DeserterReset_IsSet to true.
`public inline FORCEINLINE void `[`SetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a680a8141f260bf8342a49c6eb4ca01c2)`(FDateTime && NewValue)` | Sets the value of DeserterReset_Optional and also sets DeserterReset_IsSet to true using move semantics.
`public inline void `[`ClearDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a52df775528e0a7ba9af986a5d3dffdde)`()` | Clears the value of DeserterReset_Optional and sets DeserterReset_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1ab4aa17f7ca2ff786d9f04b4cd243b92b)`()` | Gets the value of DeserterCount_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1ac0b35c07c167b90fe1b7b549dd7c7631)`() const` | Gets the value of DeserterCount_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a83f3cfc12aab4a62ea25f7933704af0c)`(const int32 & DefaultValue) const` | Gets the value of DeserterCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a9f9147c04d8b0db0f50adf0a5e2ae68c)`(int32 & OutValue) const` | Fills OutValue with the value of DeserterCount_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetDeserterCountOrNull`](#structFRHAPI__PlayerDeserterStatus_1a95a46758b974e05652c0045fe3d92dc1)`()` | Returns a pointer to DeserterCount_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetDeserterCountOrNull`](#structFRHAPI__PlayerDeserterStatus_1acd4c082eb72e6d1c039eb1aece7e2304)`() const` | Returns a pointer to DeserterCount_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a26efccd4f6925361ab6cc9af197c4250)`(const int32 & NewValue)` | Sets the value of DeserterCount_Optional and also sets DeserterCount_IsSet to true.
`public inline FORCEINLINE void `[`SetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1ac5772649f832cfc817bb4f1ee8d8f7cd)`(int32 && NewValue)` | Sets the value of DeserterCount_Optional and also sets DeserterCount_IsSet to true using move semantics.
`public inline void `[`ClearDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a4895724214bc6062a70449a90bae819d)`()` | Clears the value of DeserterCount_Optional and sets DeserterCount_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_DeserterCount`](#structFRHAPI__PlayerDeserterStatus_1aed3c83689f287fd7a3a32b013465dfc4)`()` | Returns the default value of DeserterCount.
`public inline FORCEINLINE FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a0c3bc7322426f54c3e8313cfda12e208)`()` | Gets the value of LastUpdated_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1aa9e5e154af61ea81d259e1312a68ea80)`() const` | Gets the value of LastUpdated_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a746356033ec0b4771bed2d9f12ad3db8)`(const FDateTime & DefaultValue) const` | Gets the value of LastUpdated_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a9ab2e9f1f33004e80fada07bb1a2866c)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastUpdated_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetLastUpdatedOrNull`](#structFRHAPI__PlayerDeserterStatus_1a9d9f9985ab9d5a68abf4c9323767759f)`()` | Returns a pointer to LastUpdated_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetLastUpdatedOrNull`](#structFRHAPI__PlayerDeserterStatus_1a4b413cf52efce932a61508ddfde9bc0a)`() const` | Returns a pointer to LastUpdated_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1ad5b91ad61dfcdc11fffd28bc86f07964)`(const FDateTime & NewValue)` | Sets the value of LastUpdated_Optional and also sets LastUpdated_IsSet to true.
`public inline FORCEINLINE void `[`SetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a8f0a52a43bddccc26d82469aa7dff90d)`(FDateTime && NewValue)` | Sets the value of LastUpdated_Optional and also sets LastUpdated_IsSet to true using move semantics.
`public inline void `[`ClearLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1aa3f49a37da22919a8848dd3b3f2654b5)`()` | Clears the value of LastUpdated_Optional and sets LastUpdated_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a148eed579ea4ba5cca96299842a8e44a)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1af3f12eeb4038cc348fc25eb02ade7508)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a73ec53abf3e07012982834bf5dbb4211)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a235b1b5d72c3f60e03a0c53ca7af6916)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerDeserterStatus_1a3aba2ca99ba3e442c2220be6ab03e274)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerDeserterStatus_1aaa7376580488dbd4047bed6250a7d408)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerDeserterStatus_1acf389005b869d1d5ad06697f5a42deb6)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerDeserterStatus_1aba5de16980ba24c537ea72ed79d69173)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerDeserterStatus_1af541cc96826985547c67e58683ce0700)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

### Members

#### `public FString `[`DeserterId`](#structFRHAPI__PlayerDeserterStatus_1a2e94ff1712e6c03ad044e6c80824e422) <a id="structFRHAPI__PlayerDeserterStatus_1a2e94ff1712e6c03ad044e6c80824e422"></a>

ID for which type of deserter this is.

#### `public bool `[`DeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a0b9b6e02cc73cfcfb7e0ad3e54924d1e) <a id="structFRHAPI__PlayerDeserterStatus_1a0b9b6e02cc73cfcfb7e0ad3e54924d1e"></a>

Flag of whether or not the player is a deserter.

#### `public FDateTime `[`DeserterExpiration_Optional`](#structFRHAPI__PlayerDeserterStatus_1a634163e27e36eb0490e11b908a79e12a) <a id="structFRHAPI__PlayerDeserterStatus_1a634163e27e36eb0490e11b908a79e12a"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`DeserterExpiration_IsSet`](#structFRHAPI__PlayerDeserterStatus_1aec5ec90e840054b4a283fa5fd46998f6) <a id="structFRHAPI__PlayerDeserterStatus_1aec5ec90e840054b4a283fa5fd46998f6"></a>

true if DeserterExpiration_Optional has been set to a value

#### `public FDateTime `[`DeserterReset_Optional`](#structFRHAPI__PlayerDeserterStatus_1adcfe9f953c774807a2d357054a646b11) <a id="structFRHAPI__PlayerDeserterStatus_1adcfe9f953c774807a2d357054a646b11"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`DeserterReset_IsSet`](#structFRHAPI__PlayerDeserterStatus_1a0337ce3e6912dd71f16d706d0d1a40cc) <a id="structFRHAPI__PlayerDeserterStatus_1a0337ce3e6912dd71f16d706d0d1a40cc"></a>

true if DeserterReset_Optional has been set to a value

#### `public int32 `[`DeserterCount_Optional`](#structFRHAPI__PlayerDeserterStatus_1a9c79cb405361439be29a9f04070d80e5) <a id="structFRHAPI__PlayerDeserterStatus_1a9c79cb405361439be29a9f04070d80e5"></a>

The number of times a player has deserted before the expiration.

#### `public bool `[`DeserterCount_IsSet`](#structFRHAPI__PlayerDeserterStatus_1ab71fa5d9d6aa151f80e62cf32c3602b4) <a id="structFRHAPI__PlayerDeserterStatus_1ab71fa5d9d6aa151f80e62cf32c3602b4"></a>

true if DeserterCount_Optional has been set to a value

#### `public FDateTime `[`LastUpdated_Optional`](#structFRHAPI__PlayerDeserterStatus_1a67ff00c88097d7be61acf767910ecc03) <a id="structFRHAPI__PlayerDeserterStatus_1a67ff00c88097d7be61acf767910ecc03"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`LastUpdated_IsSet`](#structFRHAPI__PlayerDeserterStatus_1a99a402b66ae47401403fbd02f3d83f93) <a id="structFRHAPI__PlayerDeserterStatus_1a99a402b66ae47401403fbd02f3d83f93"></a>

true if LastUpdated_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerDeserterStatus_1aeeacbbdfd3683bcecbda095d64d14641) <a id="structFRHAPI__PlayerDeserterStatus_1aeeacbbdfd3683bcecbda095d64d14641"></a>

Custom data about a players desertion status.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerDeserterStatus_1a22be5f2d7a13fc498f5795bb665c346c) <a id="structFRHAPI__PlayerDeserterStatus_1a22be5f2d7a13fc498f5795bb665c346c"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerDeserterStatus_1a8982bd8e590c45cde96822d003cd402e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a8982bd8e590c45cde96822d003cd402e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerDeserterStatus_1a908c8d76f794fb7f17ecb0539d8730f9)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerDeserterStatus_1a908c8d76f794fb7f17ecb0539d8730f9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1a32f76757c90499574862952ec076864c)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a32f76757c90499574862952ec076864c"></a>

Gets the value of DeserterId.

#### `public inline FORCEINLINE const FString & `[`GetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1ac4ff42ec8e0bc103033e71272c5bb6dc)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1ac4ff42ec8e0bc103033e71272c5bb6dc"></a>

Gets the value of DeserterId.

#### `public inline FORCEINLINE void `[`SetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1aa521dc6a0e81ca17bd60bb60e545474c)`(const FString & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1aa521dc6a0e81ca17bd60bb60e545474c"></a>

Sets the value of DeserterId.

#### `public inline FORCEINLINE void `[`SetDeserterId`](#structFRHAPI__PlayerDeserterStatus_1ac4a193d1b4588e73e44f39d7835e9878)`(FString && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1ac4a193d1b4588e73e44f39d7835e9878"></a>

Sets the value of DeserterId using move semantics.

#### `public inline FORCEINLINE bool & `[`GetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a706904aab86143ba322bab4eab714513)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a706904aab86143ba322bab4eab714513"></a>

Gets the value of DeserterStatus.

#### `public inline FORCEINLINE const bool & `[`GetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a23373b29ffbddc5d04f1f1e1d1cd061a)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a23373b29ffbddc5d04f1f1e1d1cd061a"></a>

Gets the value of DeserterStatus.

#### `public inline FORCEINLINE void `[`SetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a7b881253dbc87516e932d6c2eaac61f6)`(const bool & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a7b881253dbc87516e932d6c2eaac61f6"></a>

Sets the value of DeserterStatus.

#### `public inline FORCEINLINE void `[`SetDeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1ac4c367a093d3cad03c9b3abe3f26e90d)`(bool && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1ac4c367a093d3cad03c9b3abe3f26e90d"></a>

Sets the value of DeserterStatus using move semantics.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_DeserterStatus`](#structFRHAPI__PlayerDeserterStatus_1a7da236fe4ef947556457077b461bd46e)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a7da236fe4ef947556457077b461bd46e"></a>

Returns the default value of DeserterStatus.

#### `public inline FORCEINLINE FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ac583885cf6b6cde0a8d384eb8701344b)`()` <a id="structFRHAPI__PlayerDeserterStatus_1ac583885cf6b6cde0a8d384eb8701344b"></a>

Gets the value of DeserterExpiration_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1a433bdf0d144019ab80333a67736af621)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a433bdf0d144019ab80333a67736af621"></a>

Gets the value of DeserterExpiration_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ac9fbb3397d1e6acbc2fdd6e29912e850)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1ac9fbb3397d1e6acbc2fdd6e29912e850"></a>

Gets the value of DeserterExpiration_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ad18ab2661c266ab4544d2d57b3733b75)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1ad18ab2661c266ab4544d2d57b3733b75"></a>

Fills OutValue with the value of DeserterExpiration_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetDeserterExpirationOrNull`](#structFRHAPI__PlayerDeserterStatus_1ab7033b340f4e17454f8df348505f6240)`()` <a id="structFRHAPI__PlayerDeserterStatus_1ab7033b340f4e17454f8df348505f6240"></a>

Returns a pointer to DeserterExpiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetDeserterExpirationOrNull`](#structFRHAPI__PlayerDeserterStatus_1af78fdc868b6502c2501d7fdc253c7a6f)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1af78fdc868b6502c2501d7fdc253c7a6f"></a>

Returns a pointer to DeserterExpiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ad30bda869d58d5dfbc67edacd801f511)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1ad30bda869d58d5dfbc67edacd801f511"></a>

Sets the value of DeserterExpiration_Optional and also sets DeserterExpiration_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1afeb59dc115289ddd78816db0eb6049c4)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1afeb59dc115289ddd78816db0eb6049c4"></a>

Sets the value of DeserterExpiration_Optional and also sets DeserterExpiration_IsSet to true using move semantics.

#### `public inline void `[`ClearDeserterExpiration`](#structFRHAPI__PlayerDeserterStatus_1ad3dbbeafc82edc9873b439047a74c805)`()` <a id="structFRHAPI__PlayerDeserterStatus_1ad3dbbeafc82edc9873b439047a74c805"></a>

Clears the value of DeserterExpiration_Optional and sets DeserterExpiration_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a7c47d134632b425df2c265f21d6ca2f3)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a7c47d134632b425df2c265f21d6ca2f3"></a>

Gets the value of DeserterReset_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1ab97e3a500666c524dbf9fff7cc570139)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1ab97e3a500666c524dbf9fff7cc570139"></a>

Gets the value of DeserterReset_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a6c60d2d3121eeb3a2e993d67cdcdb6f4)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a6c60d2d3121eeb3a2e993d67cdcdb6f4"></a>

Gets the value of DeserterReset_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a3ac214a2c8e4a4fd029f87553a99d6f5)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a3ac214a2c8e4a4fd029f87553a99d6f5"></a>

Fills OutValue with the value of DeserterReset_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetDeserterResetOrNull`](#structFRHAPI__PlayerDeserterStatus_1aebd689e6076752a2fa0078045b7933b1)`()` <a id="structFRHAPI__PlayerDeserterStatus_1aebd689e6076752a2fa0078045b7933b1"></a>

Returns a pointer to DeserterReset_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetDeserterResetOrNull`](#structFRHAPI__PlayerDeserterStatus_1a9ae2e36987eebb68543dacf03e3be14b)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a9ae2e36987eebb68543dacf03e3be14b"></a>

Returns a pointer to DeserterReset_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a9396e389c11c6ea2ba6052b1f343cfcc)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a9396e389c11c6ea2ba6052b1f343cfcc"></a>

Sets the value of DeserterReset_Optional and also sets DeserterReset_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a680a8141f260bf8342a49c6eb4ca01c2)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a680a8141f260bf8342a49c6eb4ca01c2"></a>

Sets the value of DeserterReset_Optional and also sets DeserterReset_IsSet to true using move semantics.

#### `public inline void `[`ClearDeserterReset`](#structFRHAPI__PlayerDeserterStatus_1a52df775528e0a7ba9af986a5d3dffdde)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a52df775528e0a7ba9af986a5d3dffdde"></a>

Clears the value of DeserterReset_Optional and sets DeserterReset_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1ab4aa17f7ca2ff786d9f04b4cd243b92b)`()` <a id="structFRHAPI__PlayerDeserterStatus_1ab4aa17f7ca2ff786d9f04b4cd243b92b"></a>

Gets the value of DeserterCount_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1ac0b35c07c167b90fe1b7b549dd7c7631)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1ac0b35c07c167b90fe1b7b549dd7c7631"></a>

Gets the value of DeserterCount_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a83f3cfc12aab4a62ea25f7933704af0c)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a83f3cfc12aab4a62ea25f7933704af0c"></a>

Gets the value of DeserterCount_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a9f9147c04d8b0db0f50adf0a5e2ae68c)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a9f9147c04d8b0db0f50adf0a5e2ae68c"></a>

Fills OutValue with the value of DeserterCount_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetDeserterCountOrNull`](#structFRHAPI__PlayerDeserterStatus_1a95a46758b974e05652c0045fe3d92dc1)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a95a46758b974e05652c0045fe3d92dc1"></a>

Returns a pointer to DeserterCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetDeserterCountOrNull`](#structFRHAPI__PlayerDeserterStatus_1acd4c082eb72e6d1c039eb1aece7e2304)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1acd4c082eb72e6d1c039eb1aece7e2304"></a>

Returns a pointer to DeserterCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a26efccd4f6925361ab6cc9af197c4250)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a26efccd4f6925361ab6cc9af197c4250"></a>

Sets the value of DeserterCount_Optional and also sets DeserterCount_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1ac5772649f832cfc817bb4f1ee8d8f7cd)`(int32 && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1ac5772649f832cfc817bb4f1ee8d8f7cd"></a>

Sets the value of DeserterCount_Optional and also sets DeserterCount_IsSet to true using move semantics.

#### `public inline void `[`ClearDeserterCount`](#structFRHAPI__PlayerDeserterStatus_1a4895724214bc6062a70449a90bae819d)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a4895724214bc6062a70449a90bae819d"></a>

Clears the value of DeserterCount_Optional and sets DeserterCount_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_DeserterCount`](#structFRHAPI__PlayerDeserterStatus_1aed3c83689f287fd7a3a32b013465dfc4)`()` <a id="structFRHAPI__PlayerDeserterStatus_1aed3c83689f287fd7a3a32b013465dfc4"></a>

Returns the default value of DeserterCount.

#### `public inline FORCEINLINE FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a0c3bc7322426f54c3e8313cfda12e208)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a0c3bc7322426f54c3e8313cfda12e208"></a>

Gets the value of LastUpdated_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1aa9e5e154af61ea81d259e1312a68ea80)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1aa9e5e154af61ea81d259e1312a68ea80"></a>

Gets the value of LastUpdated_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a746356033ec0b4771bed2d9f12ad3db8)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a746356033ec0b4771bed2d9f12ad3db8"></a>

Gets the value of LastUpdated_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a9ab2e9f1f33004e80fada07bb1a2866c)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a9ab2e9f1f33004e80fada07bb1a2866c"></a>

Fills OutValue with the value of LastUpdated_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetLastUpdatedOrNull`](#structFRHAPI__PlayerDeserterStatus_1a9d9f9985ab9d5a68abf4c9323767759f)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a9d9f9985ab9d5a68abf4c9323767759f"></a>

Returns a pointer to LastUpdated_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetLastUpdatedOrNull`](#structFRHAPI__PlayerDeserterStatus_1a4b413cf52efce932a61508ddfde9bc0a)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1a4b413cf52efce932a61508ddfde9bc0a"></a>

Returns a pointer to LastUpdated_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1ad5b91ad61dfcdc11fffd28bc86f07964)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1ad5b91ad61dfcdc11fffd28bc86f07964"></a>

Sets the value of LastUpdated_Optional and also sets LastUpdated_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1a8f0a52a43bddccc26d82469aa7dff90d)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1a8f0a52a43bddccc26d82469aa7dff90d"></a>

Sets the value of LastUpdated_Optional and also sets LastUpdated_IsSet to true using move semantics.

#### `public inline void `[`ClearLastUpdated`](#structFRHAPI__PlayerDeserterStatus_1aa3f49a37da22919a8848dd3b3f2654b5)`()` <a id="structFRHAPI__PlayerDeserterStatus_1aa3f49a37da22919a8848dd3b3f2654b5"></a>

Clears the value of LastUpdated_Optional and sets LastUpdated_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a148eed579ea4ba5cca96299842a8e44a)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a148eed579ea4ba5cca96299842a8e44a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1af3f12eeb4038cc348fc25eb02ade7508)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1af3f12eeb4038cc348fc25eb02ade7508"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a73ec53abf3e07012982834bf5dbb4211)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a73ec53abf3e07012982834bf5dbb4211"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerDeserterStatus_1a235b1b5d72c3f60e03a0c53ca7af6916)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerDeserterStatus_1a235b1b5d72c3f60e03a0c53ca7af6916"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerDeserterStatus_1a3aba2ca99ba3e442c2220be6ab03e274)`()` <a id="structFRHAPI__PlayerDeserterStatus_1a3aba2ca99ba3e442c2220be6ab03e274"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerDeserterStatus_1aaa7376580488dbd4047bed6250a7d408)`() const` <a id="structFRHAPI__PlayerDeserterStatus_1aaa7376580488dbd4047bed6250a7d408"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerDeserterStatus_1acf389005b869d1d5ad06697f5a42deb6)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1acf389005b869d1d5ad06697f5a42deb6"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerDeserterStatus_1aba5de16980ba24c537ea72ed79d69173)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerDeserterStatus_1aba5de16980ba24c537ea72ed79d69173"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerDeserterStatus_1af541cc96826985547c67e58683ce0700)`()` <a id="structFRHAPI__PlayerDeserterStatus_1af541cc96826985547c67e58683ce0700"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

