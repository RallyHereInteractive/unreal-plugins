---
title: RHAPI_PlayerReferralCode
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerReferralCode`](#structFRHAPI__PlayerReferralCode) | Represents a referral code belonging to a player.

## struct `FRHAPI_PlayerReferralCode` <a id="structFRHAPI__PlayerReferralCode"></a>

```
struct FRHAPI_PlayerReferralCode
  : public FRHAPI_Model
```

Represents a referral code belonging to a player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerReferralCode_1a7edcb437efb562f110b8bbfec8bab151) | 
`public FString `[`ReferralCode`](#structFRHAPI__PlayerReferralCode_1a887fbb8b46dcf538f1d4ecb9a3fa81a1) | 
`public FDateTime `[`CreatedDatetime`](#structFRHAPI__PlayerReferralCode_1a515b5399d608d18ddb619ad3b9723d0e) | 
`public FDateTime `[`LastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1a8cd82b9a586c6976f81ec0085f99a550) | 
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerReferralCode_1a7765b35697e66f0f61eeae5226e86cbc)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerReferralCode_1a231b0e980724062d00490784583b6276)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerReferralCode_1a781ee7cc46e107b6f5f7db23749ef003)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerReferralCode_1af7341c7c25db9f6a0b86fcc814e47f08)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerReferralCode_1ad429cb78865179819a19f5f2f785d54e)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerReferralCode_1aae0aa5ee6eed259f8267e1eddd227982)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralCode_1a8c5403b405c672ad2593063e9c6337f3)`()` | Gets the value of ReferralCode.
`public inline FORCEINLINE const FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralCode_1af9612be5bbbd1112e4fa217d9247f0ce)`() const` | Gets the value of ReferralCode.
`public inline FORCEINLINE void `[`SetReferralCode`](#structFRHAPI__PlayerReferralCode_1a4b74cebfd71c48c2ac63008896cdfeca)`(const FString & NewValue)` | Sets the value of ReferralCode.
`public inline FORCEINLINE void `[`SetReferralCode`](#structFRHAPI__PlayerReferralCode_1a016c415aa19bb3ba1846a6274dba0716)`(FString && NewValue)` | Sets the value of ReferralCode using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetCreatedDatetime`](#structFRHAPI__PlayerReferralCode_1a13eb1fc768baa2fe4ad9728198644f8a)`()` | Gets the value of CreatedDatetime.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedDatetime`](#structFRHAPI__PlayerReferralCode_1a358ee954d8e12d8a453f2e90bbf99879)`() const` | Gets the value of CreatedDatetime.
`public inline FORCEINLINE void `[`SetCreatedDatetime`](#structFRHAPI__PlayerReferralCode_1ab6f5e62e5d1d98f6f32eceb5e3354e15)`(const FDateTime & NewValue)` | Sets the value of CreatedDatetime.
`public inline FORCEINLINE void `[`SetCreatedDatetime`](#structFRHAPI__PlayerReferralCode_1ad1db62dbac27437b019b1774863bc29f)`(FDateTime && NewValue)` | Sets the value of CreatedDatetime using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1a74c94935dae81ee8806d6ba88dc246a0)`()` | Gets the value of LastModifiedTimestamp.
`public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1afc6349fac7f3b075ea7da4d463c9d6ff)`() const` | Gets the value of LastModifiedTimestamp.
`public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1ae5615f151a5730e60715b0065169434f)`(const FDateTime & NewValue)` | Sets the value of LastModifiedTimestamp.
`public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1adb75b2df546bf81bdf08e97f60761cfe)`(FDateTime && NewValue)` | Sets the value of LastModifiedTimestamp using move semantics.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerReferralCode_1a7edcb437efb562f110b8bbfec8bab151) <a id="structFRHAPI__PlayerReferralCode_1a7edcb437efb562f110b8bbfec8bab151"></a>

#### `public FString `[`ReferralCode`](#structFRHAPI__PlayerReferralCode_1a887fbb8b46dcf538f1d4ecb9a3fa81a1) <a id="structFRHAPI__PlayerReferralCode_1a887fbb8b46dcf538f1d4ecb9a3fa81a1"></a>

#### `public FDateTime `[`CreatedDatetime`](#structFRHAPI__PlayerReferralCode_1a515b5399d608d18ddb619ad3b9723d0e) <a id="structFRHAPI__PlayerReferralCode_1a515b5399d608d18ddb619ad3b9723d0e"></a>

#### `public FDateTime `[`LastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1a8cd82b9a586c6976f81ec0085f99a550) <a id="structFRHAPI__PlayerReferralCode_1a8cd82b9a586c6976f81ec0085f99a550"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerReferralCode_1a7765b35697e66f0f61eeae5226e86cbc)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerReferralCode_1a7765b35697e66f0f61eeae5226e86cbc"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerReferralCode_1a231b0e980724062d00490784583b6276)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerReferralCode_1a231b0e980724062d00490784583b6276"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerReferralCode_1a781ee7cc46e107b6f5f7db23749ef003)`()` <a id="structFRHAPI__PlayerReferralCode_1a781ee7cc46e107b6f5f7db23749ef003"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerReferralCode_1af7341c7c25db9f6a0b86fcc814e47f08)`() const` <a id="structFRHAPI__PlayerReferralCode_1af7341c7c25db9f6a0b86fcc814e47f08"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerReferralCode_1ad429cb78865179819a19f5f2f785d54e)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerReferralCode_1ad429cb78865179819a19f5f2f785d54e"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerReferralCode_1aae0aa5ee6eed259f8267e1eddd227982)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerReferralCode_1aae0aa5ee6eed259f8267e1eddd227982"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralCode_1a8c5403b405c672ad2593063e9c6337f3)`()` <a id="structFRHAPI__PlayerReferralCode_1a8c5403b405c672ad2593063e9c6337f3"></a>

Gets the value of ReferralCode.

#### `public inline FORCEINLINE const FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralCode_1af9612be5bbbd1112e4fa217d9247f0ce)`() const` <a id="structFRHAPI__PlayerReferralCode_1af9612be5bbbd1112e4fa217d9247f0ce"></a>

Gets the value of ReferralCode.

#### `public inline FORCEINLINE void `[`SetReferralCode`](#structFRHAPI__PlayerReferralCode_1a4b74cebfd71c48c2ac63008896cdfeca)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReferralCode_1a4b74cebfd71c48c2ac63008896cdfeca"></a>

Sets the value of ReferralCode.

#### `public inline FORCEINLINE void `[`SetReferralCode`](#structFRHAPI__PlayerReferralCode_1a016c415aa19bb3ba1846a6274dba0716)`(FString && NewValue)` <a id="structFRHAPI__PlayerReferralCode_1a016c415aa19bb3ba1846a6274dba0716"></a>

Sets the value of ReferralCode using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetCreatedDatetime`](#structFRHAPI__PlayerReferralCode_1a13eb1fc768baa2fe4ad9728198644f8a)`()` <a id="structFRHAPI__PlayerReferralCode_1a13eb1fc768baa2fe4ad9728198644f8a"></a>

Gets the value of CreatedDatetime.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedDatetime`](#structFRHAPI__PlayerReferralCode_1a358ee954d8e12d8a453f2e90bbf99879)`() const` <a id="structFRHAPI__PlayerReferralCode_1a358ee954d8e12d8a453f2e90bbf99879"></a>

Gets the value of CreatedDatetime.

#### `public inline FORCEINLINE void `[`SetCreatedDatetime`](#structFRHAPI__PlayerReferralCode_1ab6f5e62e5d1d98f6f32eceb5e3354e15)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerReferralCode_1ab6f5e62e5d1d98f6f32eceb5e3354e15"></a>

Sets the value of CreatedDatetime.

#### `public inline FORCEINLINE void `[`SetCreatedDatetime`](#structFRHAPI__PlayerReferralCode_1ad1db62dbac27437b019b1774863bc29f)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerReferralCode_1ad1db62dbac27437b019b1774863bc29f"></a>

Sets the value of CreatedDatetime using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1a74c94935dae81ee8806d6ba88dc246a0)`()` <a id="structFRHAPI__PlayerReferralCode_1a74c94935dae81ee8806d6ba88dc246a0"></a>

Gets the value of LastModifiedTimestamp.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1afc6349fac7f3b075ea7da4d463c9d6ff)`() const` <a id="structFRHAPI__PlayerReferralCode_1afc6349fac7f3b075ea7da4d463c9d6ff"></a>

Gets the value of LastModifiedTimestamp.

#### `public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1ae5615f151a5730e60715b0065169434f)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerReferralCode_1ae5615f151a5730e60715b0065169434f"></a>

Sets the value of LastModifiedTimestamp.

#### `public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1adb75b2df546bf81bdf08e97f60761cfe)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerReferralCode_1adb75b2df546bf81bdf08e97f60761cfe"></a>

Sets the value of LastModifiedTimestamp using move semantics.

