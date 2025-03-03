---
title: RHAPI_PlayerReferral
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerReferral`](#structFRHAPI__PlayerReferral) | Represents a player referral relationship where one player was referred by another.

## struct `FRHAPI_PlayerReferral` <a id="structFRHAPI__PlayerReferral"></a>

```
struct FRHAPI_PlayerReferral
  : public FRHAPI_Model
```

Represents a player referral relationship where one player was referred by another.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`ReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a34d5cf07337d62c31ac10a04ac02f5f3) | 
`public FGuid `[`ReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1a905c954f06291e665f8e3969488177a5) | 
`public FDateTime `[`CreatedDatetime`](#structFRHAPI__PlayerReferral_1a8c52cdf389d567341654b8835e641e92) | 
`public FDateTime `[`LastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1a48816bbc61307481f3fdb15e5e5321d4) | 
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerReferral_1abebeb0c7affa26a9de43ed7e3b3bea9d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerReferral_1a27e432ccd6fa8bca79075579cdaff64f)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a5d62e4882fad695e943e6b59d389d410)`()` | Gets the value of ReferreePlayerUuid.
`public inline const FGuid & `[`GetReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1ab45964360bb09e49180e174ea032de27)`() const` | Gets the value of ReferreePlayerUuid.
`public inline void `[`SetReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a278b0f7feb73b37455d8919b78680493)`(const FGuid & NewValue)` | Sets the value of ReferreePlayerUuid.
`public inline void `[`SetReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a6031ff2c78441515c41dfc713593a12c)`(FGuid && NewValue)` | Sets the value of ReferreePlayerUuid using move semantics.
`public inline FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1aae054830cac4aabc68df2b21b5f5eb51)`()` | Gets the value of ReferrerPlayerUuid.
`public inline const FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1af54ce3648065020792e7f4e049dc6f1f)`() const` | Gets the value of ReferrerPlayerUuid.
`public inline void `[`SetReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1a8614063d0c7ca27b69bef0ebd526a560)`(const FGuid & NewValue)` | Sets the value of ReferrerPlayerUuid.
`public inline void `[`SetReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1a876e89e80c2bd0c3ec5bf8ed6fb72b5e)`(FGuid && NewValue)` | Sets the value of ReferrerPlayerUuid using move semantics.
`public inline FDateTime & `[`GetCreatedDatetime`](#structFRHAPI__PlayerReferral_1a68f9de1a1b77c28a805cb5b3e6e26f67)`()` | Gets the value of CreatedDatetime.
`public inline const FDateTime & `[`GetCreatedDatetime`](#structFRHAPI__PlayerReferral_1ae812cded0468572ed4d9dc1b93781255)`() const` | Gets the value of CreatedDatetime.
`public inline void `[`SetCreatedDatetime`](#structFRHAPI__PlayerReferral_1a4c7dbc2e0acff63503a6ff3de716c3a5)`(const FDateTime & NewValue)` | Sets the value of CreatedDatetime.
`public inline void `[`SetCreatedDatetime`](#structFRHAPI__PlayerReferral_1a6cc9600c1cb6ed88e17f576f20ec2027)`(FDateTime && NewValue)` | Sets the value of CreatedDatetime using move semantics.
`public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1af535037913207f349d6a2aa862826308)`()` | Gets the value of LastModifiedTimestamp.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1abb7adc9829d64fc2b0ec88aae8a0279f)`() const` | Gets the value of LastModifiedTimestamp.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1ab94cbdc0c7f0390a82a1d9756653acd1)`(const FDateTime & NewValue)` | Sets the value of LastModifiedTimestamp.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1a56068db53ebf528f677cbc768ae8cbe8)`(FDateTime && NewValue)` | Sets the value of LastModifiedTimestamp using move semantics.

### Members

#### `public FGuid `[`ReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a34d5cf07337d62c31ac10a04ac02f5f3) <a id="structFRHAPI__PlayerReferral_1a34d5cf07337d62c31ac10a04ac02f5f3"></a>

#### `public FGuid `[`ReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1a905c954f06291e665f8e3969488177a5) <a id="structFRHAPI__PlayerReferral_1a905c954f06291e665f8e3969488177a5"></a>

#### `public FDateTime `[`CreatedDatetime`](#structFRHAPI__PlayerReferral_1a8c52cdf389d567341654b8835e641e92) <a id="structFRHAPI__PlayerReferral_1a8c52cdf389d567341654b8835e641e92"></a>

#### `public FDateTime `[`LastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1a48816bbc61307481f3fdb15e5e5321d4) <a id="structFRHAPI__PlayerReferral_1a48816bbc61307481f3fdb15e5e5321d4"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerReferral_1abebeb0c7affa26a9de43ed7e3b3bea9d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerReferral_1abebeb0c7affa26a9de43ed7e3b3bea9d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerReferral_1a27e432ccd6fa8bca79075579cdaff64f)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerReferral_1a27e432ccd6fa8bca79075579cdaff64f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a5d62e4882fad695e943e6b59d389d410)`()` <a id="structFRHAPI__PlayerReferral_1a5d62e4882fad695e943e6b59d389d410"></a>

Gets the value of ReferreePlayerUuid.

#### `public inline const FGuid & `[`GetReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1ab45964360bb09e49180e174ea032de27)`() const` <a id="structFRHAPI__PlayerReferral_1ab45964360bb09e49180e174ea032de27"></a>

Gets the value of ReferreePlayerUuid.

#### `public inline void `[`SetReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a278b0f7feb73b37455d8919b78680493)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerReferral_1a278b0f7feb73b37455d8919b78680493"></a>

Sets the value of ReferreePlayerUuid.

#### `public inline void `[`SetReferreePlayerUuid`](#structFRHAPI__PlayerReferral_1a6031ff2c78441515c41dfc713593a12c)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerReferral_1a6031ff2c78441515c41dfc713593a12c"></a>

Sets the value of ReferreePlayerUuid using move semantics.

#### `public inline FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1aae054830cac4aabc68df2b21b5f5eb51)`()` <a id="structFRHAPI__PlayerReferral_1aae054830cac4aabc68df2b21b5f5eb51"></a>

Gets the value of ReferrerPlayerUuid.

#### `public inline const FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1af54ce3648065020792e7f4e049dc6f1f)`() const` <a id="structFRHAPI__PlayerReferral_1af54ce3648065020792e7f4e049dc6f1f"></a>

Gets the value of ReferrerPlayerUuid.

#### `public inline void `[`SetReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1a8614063d0c7ca27b69bef0ebd526a560)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerReferral_1a8614063d0c7ca27b69bef0ebd526a560"></a>

Sets the value of ReferrerPlayerUuid.

#### `public inline void `[`SetReferrerPlayerUuid`](#structFRHAPI__PlayerReferral_1a876e89e80c2bd0c3ec5bf8ed6fb72b5e)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerReferral_1a876e89e80c2bd0c3ec5bf8ed6fb72b5e"></a>

Sets the value of ReferrerPlayerUuid using move semantics.

#### `public inline FDateTime & `[`GetCreatedDatetime`](#structFRHAPI__PlayerReferral_1a68f9de1a1b77c28a805cb5b3e6e26f67)`()` <a id="structFRHAPI__PlayerReferral_1a68f9de1a1b77c28a805cb5b3e6e26f67"></a>

Gets the value of CreatedDatetime.

#### `public inline const FDateTime & `[`GetCreatedDatetime`](#structFRHAPI__PlayerReferral_1ae812cded0468572ed4d9dc1b93781255)`() const` <a id="structFRHAPI__PlayerReferral_1ae812cded0468572ed4d9dc1b93781255"></a>

Gets the value of CreatedDatetime.

#### `public inline void `[`SetCreatedDatetime`](#structFRHAPI__PlayerReferral_1a4c7dbc2e0acff63503a6ff3de716c3a5)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerReferral_1a4c7dbc2e0acff63503a6ff3de716c3a5"></a>

Sets the value of CreatedDatetime.

#### `public inline void `[`SetCreatedDatetime`](#structFRHAPI__PlayerReferral_1a6cc9600c1cb6ed88e17f576f20ec2027)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerReferral_1a6cc9600c1cb6ed88e17f576f20ec2027"></a>

Sets the value of CreatedDatetime using move semantics.

#### `public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1af535037913207f349d6a2aa862826308)`()` <a id="structFRHAPI__PlayerReferral_1af535037913207f349d6a2aa862826308"></a>

Gets the value of LastModifiedTimestamp.

#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1abb7adc9829d64fc2b0ec88aae8a0279f)`() const` <a id="structFRHAPI__PlayerReferral_1abb7adc9829d64fc2b0ec88aae8a0279f"></a>

Gets the value of LastModifiedTimestamp.

#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1ab94cbdc0c7f0390a82a1d9756653acd1)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerReferral_1ab94cbdc0c7f0390a82a1d9756653acd1"></a>

Sets the value of LastModifiedTimestamp.

#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__PlayerReferral_1a56068db53ebf528f677cbc768ae8cbe8)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerReferral_1a56068db53ebf528f677cbc768ae8cbe8"></a>

Sets the value of LastModifiedTimestamp using move semantics.

