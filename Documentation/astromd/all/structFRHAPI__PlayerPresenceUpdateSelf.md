---
title: FRHAPI_PlayerPresenceUpdateSelf Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_OnlineStatus|[Status_Optional](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1ac48003854292c02a452bd0941631798b)|Is the player currently online?|
|bool|[Status_IsSet](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a4765400f852085d129d10814f1690b04)|true if Status_Optional has been set to a value|
|FString|[Message_Optional](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a8aac05be183c8a3d41f4c19ed2bb344b)|Optional custom message to display alongside the user's online status. Leaving this unset will not change the value.|
|bool|[Message_IsSet](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a8246fa444840c8497533024abe03587d)|true if Message_Optional has been set to a value|
|bool|[DoNotDisturb_Optional](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a90a743fc134a078e6598d988182ba714)|Disables notifications and invites. Leaving this unset will not change the value.|
|bool|[DoNotDisturb_IsSet](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a0eb359ff47b2965a35bc83bb9fa9a95e)|true if DoNotDisturb_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a6a6459645ffbea2924e505c104502775)|custom fields for the player to update about their presence. Custom data with a null value will be removed|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a4515026d48610b1eabc547ef3103d9d6)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1ad12684f1e26e9cc17d771c8b7e1b9cf7)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a95e75272cc8b192ee74f64db8639cdfc)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_OnlineStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a5a9f1c3690286fa12a0b21350fbda1b6)()|Gets the value of Status_Optional, regardless of it having been set.|
|const ERHAPI_OnlineStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a0347bf43daf63a6af5afd2a5c1158660)()|Gets the value of Status_Optional, regardless of it having been set.|
|const ERHAPI_OnlineStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a4b802d2358ba35af18fc1b9ec866906d)(const ERHAPI_OnlineStatus & DefaultValue)|Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetStatus](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a22f64155e9475da2d6e1d54051268fa6)(ERHAPI_OnlineStatus & OutValue)|Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_OnlineStatus *|[GetStatusOrNull](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a86a88724d092c6bdfe6739a4e614e61d)()|Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_OnlineStatus *|[GetStatusOrNull](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a5f0bddef0df75c52446acfcf350ef612)()|Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetStatus](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1ab9870b3446dd062473d7c6d5f1c55387)(ERHAPI_OnlineStatus NewValue)|Sets the value of Status_Optional and also sets Status_IsSet to true.|
|void|[ClearStatus](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1ae7d4d35a34722468773dbd159358b4f1)()|Clears the value of Status_Optional and sets Status_IsSet to false.|
|FString &|[GetMessage](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a176ec3c8da297e7cb33cc3d531f4009f)()|Gets the value of Message_Optional, regardless of it having been set.|
|const FString &|[GetMessage](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a836572898ef6528d3fc193bb38ed7643)()|Gets the value of Message_Optional, regardless of it having been set.|
|const FString &|[GetMessage](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a37a519b5a29b859b6953998aca22c810)(const FString & DefaultValue)|Gets the value of Message_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMessage](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a0a4e7c92e0e2c896372c8c9fd2366041)(FString & OutValue)|Fills OutValue with the value of Message_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetMessageOrNull](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a5ef335912f555d56a6c8e7c9ba38d5eb)()|Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetMessageOrNull](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1aecb32203895775f3b25692e223ecb9f9)()|Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMessage](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a1b4fb2bbb895963a452e983031d53500)(FString NewValue)|Sets the value of Message_Optional and also sets Message_IsSet to true.|
|void|[ClearMessage](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1ac3536ed08f0b68992660d8a94300cdae)()|Clears the value of Message_Optional and sets Message_IsSet to false.|
|bool &|[GetDoNotDisturb](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a151ff98631328fcb6004cb98c30ea87f)()|Gets the value of DoNotDisturb_Optional, regardless of it having been set.|
|const bool &|[GetDoNotDisturb](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1ac3a38550a776a8a30c5f026cc2c4145c)()|Gets the value of DoNotDisturb_Optional, regardless of it having been set.|
|const bool &|[GetDoNotDisturb](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a5121697bdb1cbbb2acc0f09c7df22ca5)(const bool & DefaultValue)|Gets the value of DoNotDisturb_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDoNotDisturb](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a5a81b18ac6109f6c9b9a76c8467dc6cb)(bool & OutValue)|Fills OutValue with the value of DoNotDisturb_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetDoNotDisturbOrNull](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1adba9ac34e459a7ac6d6213a69a77f9ab)()|Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetDoNotDisturbOrNull](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a90649a0bcc549b851ee8f13642d6ae75)()|Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDoNotDisturb](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a706036999eab58bc3af4816248e05a78)(bool NewValue)|Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true.|
|void|[ClearDoNotDisturb](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a356ccb6525ec805cc9339882b4092807)()|Clears the value of DoNotDisturb_Optional and sets DoNotDisturb_IsSet to false.|
|bool|[IsDoNotDisturbDefaultValue](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a9ac5d350237374eed89b2e8061d332dd)()|Returns true if DoNotDisturb_Optional is set and matches the default value.|
|void|[SetDoNotDisturbToDefault](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a85bd5cb5d6cba731b70aa62a1f74e5e0)()|Sets the value of DoNotDisturb_Optional to its default and also sets DoNotDisturb_IsSet to true.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a3f5f51a2f8bbb67a26f8839b48e27f04)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a673f570fbbf287d8777f22fdb7aa1968)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a3bee0b16fc9eca2163951010373f6137)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a37a20d1ce84afabc41ebabf109361d34)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1acc5b6d15e61fb57c84b291d041188837)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1a90b74f7392c5cf25f4af7dbdeb282684)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1adabd33ad9a29af321e00c78cc4db53bf)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__playerpresenceupdateself/#structFRHAPI__PlayerPresenceUpdateSelf_1ae1e307673be664cb960223d05a50a70e)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `Status_Optional` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ac48003854292c02a452bd0941631798b"></a>

`ERHAPI_OnlineStatus FRHAPI_PlayerPresenceUpdateSelf::Status_Optional`

Is the player currently online?




### `Status_IsSet` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a4765400f852085d129d10814f1690b04"></a>

`bool FRHAPI_PlayerPresenceUpdateSelf::Status_IsSet`

true if Status_Optional has been set to a value




### `Message_Optional` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a8aac05be183c8a3d41f4c19ed2bb344b"></a>

`FString FRHAPI_PlayerPresenceUpdateSelf::Message_Optional`

Optional custom message to display alongside the user's online status. Leaving this unset will not change the value.




### `Message_IsSet` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a8246fa444840c8497533024abe03587d"></a>

`bool FRHAPI_PlayerPresenceUpdateSelf::Message_IsSet`

true if Message_Optional has been set to a value




### `DoNotDisturb_Optional` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a90a743fc134a078e6598d988182ba714"></a>

`bool FRHAPI_PlayerPresenceUpdateSelf::DoNotDisturb_Optional`

Disables notifications and invites. Leaving this unset will not change the value.




### `DoNotDisturb_IsSet` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a0eb359ff47b2965a35bc83bb9fa9a95e"></a>

`bool FRHAPI_PlayerPresenceUpdateSelf::DoNotDisturb_IsSet`

true if DoNotDisturb_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a6a6459645ffbea2924e505c104502775"></a>

`TMap<FString, FString> FRHAPI_PlayerPresenceUpdateSelf::CustomData_Optional`

custom fields for the player to update about their presence. Custom data with a null value will be removed




### `CustomData_IsSet` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a4515026d48610b1eabc547ef3103d9d6"></a>

`bool FRHAPI_PlayerPresenceUpdateSelf::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ad12684f1e26e9cc17d771c8b7e1b9cf7"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a95e75272cc8b192ee74f64db8639cdfc"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetStatus` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a5a9f1c3690286fa12a0b21350fbda1b6"></a>

ERHAPI_OnlineStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status_Optional, regardless of it having been set.




### `GetStatus` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a0347bf43daf63a6af5afd2a5c1158660"></a>

const ERHAPI_OnlineStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status_Optional, regardless of it having been set.




### `GetStatus` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a4b802d2358ba35af18fc1b9ec866906d"></a>

const ERHAPI_OnlineStatus & GetStatus(const ERHAPI_OnlineStatus & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_OnlineStatus &|DefaultValue|

#### Description

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetStatus` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a22f64155e9475da2d6e1d54051268fa6"></a>

bool GetStatus(ERHAPI_OnlineStatus & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_OnlineStatus &|OutValue|

#### Description

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.




### `GetStatusOrNull` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a86a88724d092c6bdfe6739a4e614e61d"></a>

ERHAPI_OnlineStatus * GetStatusOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.




### `GetStatusOrNull` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a5f0bddef0df75c52446acfcf350ef612"></a>

const ERHAPI_OnlineStatus * GetStatusOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.




### `SetStatus` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ab9870b3446dd062473d7c6d5f1c55387"></a>

void SetStatus(ERHAPI_OnlineStatus NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_OnlineStatus|NewValue|

#### Description

Sets the value of Status_Optional and also sets Status_IsSet to true.




### `ClearStatus` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ae7d4d35a34722468773dbd159358b4f1"></a>

void ClearStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Status_Optional and sets Status_IsSet to false.




### `GetMessage` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a176ec3c8da297e7cb33cc3d531f4009f"></a>

FString & GetMessage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Message_Optional, regardless of it having been set.




### `GetMessage` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a836572898ef6528d3fc193bb38ed7643"></a>

const FString & GetMessage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Message_Optional, regardless of it having been set.




### `GetMessage` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a37a519b5a29b859b6953998aca22c810"></a>

const FString & GetMessage(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Message_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMessage` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a0a4e7c92e0e2c896372c8c9fd2366041"></a>

bool GetMessage(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Message_Optional and returns true if it has been set, otherwise returns false.




### `GetMessageOrNull` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a5ef335912f555d56a6c8e7c9ba38d5eb"></a>

FString * GetMessageOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.




### `GetMessageOrNull` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1aecb32203895775f3b25692e223ecb9f9"></a>

const FString * GetMessageOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.




### `SetMessage` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a1b4fb2bbb895963a452e983031d53500"></a>

void SetMessage(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Message_Optional and also sets Message_IsSet to true.




### `ClearMessage` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ac3536ed08f0b68992660d8a94300cdae"></a>

void ClearMessage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Message_Optional and sets Message_IsSet to false.




### `GetDoNotDisturb` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a151ff98631328fcb6004cb98c30ea87f"></a>

bool & GetDoNotDisturb()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DoNotDisturb_Optional, regardless of it having been set.




### `GetDoNotDisturb` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ac3a38550a776a8a30c5f026cc2c4145c"></a>

const bool & GetDoNotDisturb()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DoNotDisturb_Optional, regardless of it having been set.




### `GetDoNotDisturb` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a5121697bdb1cbbb2acc0f09c7df22ca5"></a>

const bool & GetDoNotDisturb(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of DoNotDisturb_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDoNotDisturb` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a5a81b18ac6109f6c9b9a76c8467dc6cb"></a>

bool GetDoNotDisturb(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of DoNotDisturb_Optional and returns true if it has been set, otherwise returns false.




### `GetDoNotDisturbOrNull` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1adba9ac34e459a7ac6d6213a69a77f9ab"></a>

bool * GetDoNotDisturbOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.




### `GetDoNotDisturbOrNull` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a90649a0bcc549b851ee8f13642d6ae75"></a>

const bool * GetDoNotDisturbOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.




### `SetDoNotDisturb` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a706036999eab58bc3af4816248e05a78"></a>

void SetDoNotDisturb(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true.




### `ClearDoNotDisturb` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a356ccb6525ec805cc9339882b4092807"></a>

void ClearDoNotDisturb()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of DoNotDisturb_Optional and sets DoNotDisturb_IsSet to false.




### `IsDoNotDisturbDefaultValue` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a9ac5d350237374eed89b2e8061d332dd"></a>

bool IsDoNotDisturbDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if DoNotDisturb_Optional is set and matches the default value.




### `SetDoNotDisturbToDefault` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a85bd5cb5d6cba731b70aa62a1f74e5e0"></a>

void SetDoNotDisturbToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of DoNotDisturb_Optional to its default and also sets DoNotDisturb_IsSet to true.




### `GetCustomData` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a3f5f51a2f8bbb67a26f8839b48e27f04"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a673f570fbbf287d8777f22fdb7aa1968"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a3bee0b16fc9eca2163951010373f6137"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a37a20d1ce84afabc41ebabf109361d34"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1acc5b6d15e61fb57c84b291d041188837"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1a90b74f7392c5cf25f4af7dbdeb282684"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1adabd33ad9a29af321e00c78cc4db53bf"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__PlayerPresenceUpdateSelf_1ae1e307673be664cb960223d05a50a70e"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





