# RHAPI_PortalUserInfo <a id="group__RHAPI__PortalUserInfo"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PortalUserInfo`](#structFRHAPI__PortalUserInfo) | Portal user info.

## struct `FRHAPI_PortalUserInfo` <a id="structFRHAPI__PortalUserInfo"></a>

```
struct FRHAPI_PortalUserInfo
  : public FRHAPI_Model
```

Portal user info.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Platform `[`Platform`](#structFRHAPI__PortalUserInfo_1aa73e914e330ab525ca2662631fe1cc06) | Platform for the user.
`public ERHAPI_Portal `[`PortalId`](#structFRHAPI__PortalUserInfo_1adb682b56cd6f79975dedcb3c3062e644) | Portal ID. *DEPRECATED* use `platform` instead.
`public FString `[`PortalUserId`](#structFRHAPI__PortalUserInfo_1a6733dd0ddc41200cf750f32de0b83dab) | Platform User ID.
`public FString `[`DisplayName`](#structFRHAPI__PortalUserInfo_1a0ba620f7ad0e76fa03651b52221672d0) | Display name.
`public virtual bool `[`FromJson`](#structFRHAPI__PortalUserInfo_1a157222df92a9e58a8a7f4e86a8451e6e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PortalUserInfo_1a2344390b2002ec9ee2cfcb5fc80d346d)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserInfo_1a3f453744df9708c61b8d4cbc145eb71a)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserInfo_1a40e45a21d723e554b55aa7a41b4af6d1)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PortalUserInfo_1aa5016a42a179303e547de00d3d6a1134)`(ERHAPI_Platform NewValue)` | Sets the value of Platform.
`public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PortalUserInfo_1a450d1eb3a351c952f6e653df28e64152)`()` | Gets the value of PortalId.
`public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PortalUserInfo_1a30a26996c34aaa6e6ace87b335c5f983)`() const` | Gets the value of PortalId.
`public inline void `[`SetPortalId`](#structFRHAPI__PortalUserInfo_1a11ca7c43d92f81fd4a714f4dfe9f0388)`(ERHAPI_Portal NewValue)` | Sets the value of PortalId.
`public inline FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserInfo_1a02293533e662c590c4d1434fa698c8e8)`()` | Gets the value of PortalUserId.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserInfo_1add30541439590b909bdcff70ceaed762)`() const` | Gets the value of PortalUserId.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserInfo_1a94df2aa5c3d86b04e197424b6c87aef4)`(FString NewValue)` | Sets the value of PortalUserId.
`public inline FString & `[`GetDisplayName`](#structFRHAPI__PortalUserInfo_1a2db99b60ec4b0ee6d486bfcc92499af1)`()` | Gets the value of DisplayName.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserInfo_1a3748a4f9b1fe44030fc16bce07e5f092)`() const` | Gets the value of DisplayName.
`public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserInfo_1a21b0a04d9950ed600c1b0b76d3863475)`(FString NewValue)` | Sets the value of DisplayName.

#### Members

#### `public ERHAPI_Platform `[`Platform`](#structFRHAPI__PortalUserInfo_1aa73e914e330ab525ca2662631fe1cc06) <a id="structFRHAPI__PortalUserInfo_1aa73e914e330ab525ca2662631fe1cc06"></a>

Platform for the user.

<br>
#### `public ERHAPI_Portal `[`PortalId`](#structFRHAPI__PortalUserInfo_1adb682b56cd6f79975dedcb3c3062e644) <a id="structFRHAPI__PortalUserInfo_1adb682b56cd6f79975dedcb3c3062e644"></a>

Portal ID. *DEPRECATED* use `platform` instead.

<br>
#### `public FString `[`PortalUserId`](#structFRHAPI__PortalUserInfo_1a6733dd0ddc41200cf750f32de0b83dab) <a id="structFRHAPI__PortalUserInfo_1a6733dd0ddc41200cf750f32de0b83dab"></a>

Platform User ID.

<br>
#### `public FString `[`DisplayName`](#structFRHAPI__PortalUserInfo_1a0ba620f7ad0e76fa03651b52221672d0) <a id="structFRHAPI__PortalUserInfo_1a0ba620f7ad0e76fa03651b52221672d0"></a>

Display name.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PortalUserInfo_1a157222df92a9e58a8a7f4e86a8451e6e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PortalUserInfo_1a157222df92a9e58a8a7f4e86a8451e6e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PortalUserInfo_1a2344390b2002ec9ee2cfcb5fc80d346d)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PortalUserInfo_1a2344390b2002ec9ee2cfcb5fc80d346d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserInfo_1a3f453744df9708c61b8d4cbc145eb71a)`()` <a id="structFRHAPI__PortalUserInfo_1a3f453744df9708c61b8d4cbc145eb71a"></a>

Gets the value of Platform.

<br>
#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserInfo_1a40e45a21d723e554b55aa7a41b4af6d1)`() const` <a id="structFRHAPI__PortalUserInfo_1a40e45a21d723e554b55aa7a41b4af6d1"></a>

Gets the value of Platform.

<br>
#### `public inline void `[`SetPlatform`](#structFRHAPI__PortalUserInfo_1aa5016a42a179303e547de00d3d6a1134)`(ERHAPI_Platform NewValue)` <a id="structFRHAPI__PortalUserInfo_1aa5016a42a179303e547de00d3d6a1134"></a>

Sets the value of Platform.

<br>
#### `public inline ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PortalUserInfo_1a450d1eb3a351c952f6e653df28e64152)`()` <a id="structFRHAPI__PortalUserInfo_1a450d1eb3a351c952f6e653df28e64152"></a>

Gets the value of PortalId.

<br>
#### `public inline const ERHAPI_Portal & `[`GetPortalId`](#structFRHAPI__PortalUserInfo_1a30a26996c34aaa6e6ace87b335c5f983)`() const` <a id="structFRHAPI__PortalUserInfo_1a30a26996c34aaa6e6ace87b335c5f983"></a>

Gets the value of PortalId.

<br>
#### `public inline void `[`SetPortalId`](#structFRHAPI__PortalUserInfo_1a11ca7c43d92f81fd4a714f4dfe9f0388)`(ERHAPI_Portal NewValue)` <a id="structFRHAPI__PortalUserInfo_1a11ca7c43d92f81fd4a714f4dfe9f0388"></a>

Sets the value of PortalId.

<br>
#### `public inline FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserInfo_1a02293533e662c590c4d1434fa698c8e8)`()` <a id="structFRHAPI__PortalUserInfo_1a02293533e662c590c4d1434fa698c8e8"></a>

Gets the value of PortalUserId.

<br>
#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserInfo_1add30541439590b909bdcff70ceaed762)`() const` <a id="structFRHAPI__PortalUserInfo_1add30541439590b909bdcff70ceaed762"></a>

Gets the value of PortalUserId.

<br>
#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserInfo_1a94df2aa5c3d86b04e197424b6c87aef4)`(FString NewValue)` <a id="structFRHAPI__PortalUserInfo_1a94df2aa5c3d86b04e197424b6c87aef4"></a>

Sets the value of PortalUserId.

<br>
#### `public inline FString & `[`GetDisplayName`](#structFRHAPI__PortalUserInfo_1a2db99b60ec4b0ee6d486bfcc92499af1)`()` <a id="structFRHAPI__PortalUserInfo_1a2db99b60ec4b0ee6d486bfcc92499af1"></a>

Gets the value of DisplayName.

<br>
#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserInfo_1a3748a4f9b1fe44030fc16bce07e5f092)`() const` <a id="structFRHAPI__PortalUserInfo_1a3748a4f9b1fe44030fc16bce07e5f092"></a>

Gets the value of DisplayName.

<br>
#### `public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserInfo_1a21b0a04d9950ed600c1b0b76d3863475)`(FString NewValue)` <a id="structFRHAPI__PortalUserInfo_1a21b0a04d9950ed600c1b0b76d3863475"></a>

Sets the value of DisplayName.

<br>
