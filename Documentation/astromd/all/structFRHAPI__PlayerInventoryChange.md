---
title: FRHAPI_PlayerInventoryChange Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Represents the change that occurred to an entry in the Player&#39;s Inventory. The before fields contain the state before the change, after fields contain the state after the change.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[BeforeItemId_Optional](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a099b02773cb7d21b4c31a1b6b9cb7a5d)|The Item ID of the Item before the change.|
|bool|[BeforeItemId_IsSet](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a2d1b0dddd609db72e177f8890ecda0ec)|true if BeforeItemId_Optional has been set to a value|
|int32|[AfterItemId_Optional](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1acf803668dfe5a54fa134fdab6b6aea0f)|The Item ID of the Item after the change.|
|bool|[AfterItemId_IsSet](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a98c5e093c32ddaa28569954b14516983)|true if AfterItemId_Optional has been set to a value|
|[FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord)|[Before_Optional](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a9509ac42ceb6cb93ef1f0b1677c82ed7)||
|bool|[Before_IsSet](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a12edc14fece4272777fbc04317f5b298)|true if Before_Optional has been set to a value|
|[FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord)|[After_Optional](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1ad52a7705a82ff9bee12d8e02cfdc8269)||
|bool|[After_IsSet](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a0c4f4a03e1a551f90a70a525f80d091e)|true if After_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a420c59fa00f220dcf8a9d37e49b16bbe)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a275bc792850cfcc0802d385e99e1924f)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetBeforeItemId](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1aff06181d46709cbd96633f9702171c3a)()|Gets the value of BeforeItemId_Optional, regardless of it having been set.|
|const int32 &|[GetBeforeItemId](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a247720da5a0383bddbc7dbbf336bc34e)()|Gets the value of BeforeItemId_Optional, regardless of it having been set.|
|const int32 &|[GetBeforeItemId](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a66af782728924ca5fa9185ff1112b171)(const int32 & DefaultValue)|Gets the value of BeforeItemId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetBeforeItemId](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a2b9479d60377f667b28ea2d7bbeb3e82)(int32 & OutValue)|Fills OutValue with the value of BeforeItemId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetBeforeItemIdOrNull](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a2cdb97d2549cb2c59d7ce1a5cba038fc)()|Returns a pointer to BeforeItemId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetBeforeItemIdOrNull](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1aeed5bb600ca6056614ea4e2d061c0ba2)()|Returns a pointer to BeforeItemId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetBeforeItemId](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a1f9a76130fa65889ff4b0e30ecfcb88a)(int32 NewValue)|Sets the value of BeforeItemId_Optional and also sets BeforeItemId_IsSet to true.|
|void|[ClearBeforeItemId](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1ac3b7199cc55761932367cc9fccf61552)()|Clears the value of BeforeItemId_Optional and sets BeforeItemId_IsSet to false.|
|bool|[IsBeforeItemIdDefaultValue](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a0ac3ece749c88ebaf7992ee00751e42a)()|Returns true if BeforeItemId_Optional is set and matches the default value.|
|void|[SetBeforeItemIdToDefault](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a68ae955370302ad679ac531b4686ddf4)()|Sets the value of BeforeItemId_Optional to its default and also sets BeforeItemId_IsSet to true.|
|int32 &|[GetAfterItemId](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1ae80c29566122a2d53a57d696eac7baf8)()|Gets the value of AfterItemId_Optional, regardless of it having been set.|
|const int32 &|[GetAfterItemId](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a0487329713b8c3190065db3b51eaf858)()|Gets the value of AfterItemId_Optional, regardless of it having been set.|
|const int32 &|[GetAfterItemId](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a892ab658572edbf813cf4d550be64573)(const int32 & DefaultValue)|Gets the value of AfterItemId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAfterItemId](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a3832b2c5b4fce9966922c9c90479445c)(int32 & OutValue)|Fills OutValue with the value of AfterItemId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetAfterItemIdOrNull](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a694649c5ea96129450d5356a469443fa)()|Returns a pointer to AfterItemId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetAfterItemIdOrNull](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1aac199f6e29d9632045cb4035a22bc914)()|Returns a pointer to AfterItemId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAfterItemId](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1af2fb22253cd9543dc214cf2b9cb95239)(int32 NewValue)|Sets the value of AfterItemId_Optional and also sets AfterItemId_IsSet to true.|
|void|[ClearAfterItemId](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1aa0492de19cc02a1231a0b234f0a13ec5)()|Clears the value of AfterItemId_Optional and sets AfterItemId_IsSet to false.|
|bool|[IsAfterItemIdDefaultValue](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a88b8df2a6762a533e5a34514e826b9e1)()|Returns true if AfterItemId_Optional is set and matches the default value.|
|void|[SetAfterItemIdToDefault](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1ad083ab0241cd6f9893d69e0c7475484d)()|Sets the value of AfterItemId_Optional to its default and also sets AfterItemId_IsSet to true.|
|[FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) &|[GetBefore](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a797f4714a657aeb266a7d907547772d5)()|Gets the value of Before_Optional, regardless of it having been set.|
|const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) &|[GetBefore](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1ae88e7a8cf23b0087e863a72f600a532d)()|Gets the value of Before_Optional, regardless of it having been set.|
|const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) &|[GetBefore](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1ab8f85c4123cc9b1430c9e3026551792f)(const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) & DefaultValue)|Gets the value of Before_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetBefore](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a0964035ea169cdfa429f373692bf2c37)([FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) & OutValue)|Fills OutValue with the value of Before_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) *|[GetBeforeOrNull](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1afc6dcc539499d547ec68e5b3e441c402)()|Returns a pointer to Before_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) *|[GetBeforeOrNull](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1ac1777bcf700b94db7b0b44b35cf79769)()|Returns a pointer to Before_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetBefore](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a9db525e976342f27f6c2232bc4f5d5ab)([FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) NewValue)|Sets the value of Before_Optional and also sets Before_IsSet to true.|
|void|[ClearBefore](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1aa7af9df3dbacbe6f543e53eb39b60504)()|Clears the value of Before_Optional and sets Before_IsSet to false.|
|[FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) &|[GetAfter](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a328d895347a97c41be4780aeeb25a194)()|Gets the value of After_Optional, regardless of it having been set.|
|const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) &|[GetAfter](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a71268bb7097956f42795dc267fd34e2f)()|Gets the value of After_Optional, regardless of it having been set.|
|const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) &|[GetAfter](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1ac44ce6d7d25b6b414c70962918353165)(const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) & DefaultValue)|Gets the value of After_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAfter](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a64d59bfaeb95685bfecd9b5e83f99732)([FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) & OutValue)|Fills OutValue with the value of After_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) *|[GetAfterOrNull](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1abdaf58dea3e967035331a844c83b6534)()|Returns a pointer to After_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) *|[GetAfterOrNull](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a81cb6f5182816722ac5c68039071a084)()|Returns a pointer to After_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAfter](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a2b8f321a74ce91e14b5ff9a2fdfac4ca)([FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) NewValue)|Sets the value of After_Optional and also sets After_IsSet to true.|
|void|[ClearAfter](/unreal-plugins/all/structfrhapi__playerinventorychange/#structFRHAPI__PlayerInventoryChange_1a4ba64ef1e8e8cf43852f48e18ada18d3)()|Clears the value of After_Optional and sets After_IsSet to false.|
## Public Attributes



### `BeforeItemId_Optional` <a id="structFRHAPI__PlayerInventoryChange_1a099b02773cb7d21b4c31a1b6b9cb7a5d"></a>

`int32 FRHAPI_PlayerInventoryChange::BeforeItemId_Optional`

The Item ID of the Item before the change.




### `BeforeItemId_IsSet` <a id="structFRHAPI__PlayerInventoryChange_1a2d1b0dddd609db72e177f8890ecda0ec"></a>

`bool FRHAPI_PlayerInventoryChange::BeforeItemId_IsSet`

true if BeforeItemId_Optional has been set to a value




### `AfterItemId_Optional` <a id="structFRHAPI__PlayerInventoryChange_1acf803668dfe5a54fa134fdab6b6aea0f"></a>

`int32 FRHAPI_PlayerInventoryChange::AfterItemId_Optional`

The Item ID of the Item after the change.




### `AfterItemId_IsSet` <a id="structFRHAPI__PlayerInventoryChange_1a98c5e093c32ddaa28569954b14516983"></a>

`bool FRHAPI_PlayerInventoryChange::AfterItemId_IsSet`

true if AfterItemId_Optional has been set to a value




### `Before_Optional` <a id="structFRHAPI__PlayerInventoryChange_1a9509ac42ceb6cb93ef1f0b1677c82ed7"></a>

`FRHAPI_InventoryRecord FRHAPI_PlayerInventoryChange::Before_Optional`






### `Before_IsSet` <a id="structFRHAPI__PlayerInventoryChange_1a12edc14fece4272777fbc04317f5b298"></a>

`bool FRHAPI_PlayerInventoryChange::Before_IsSet`

true if Before_Optional has been set to a value




### `After_Optional` <a id="structFRHAPI__PlayerInventoryChange_1ad52a7705a82ff9bee12d8e02cfdc8269"></a>

`FRHAPI_InventoryRecord FRHAPI_PlayerInventoryChange::After_Optional`






### `After_IsSet` <a id="structFRHAPI__PlayerInventoryChange_1a0c4f4a03e1a551f90a70a525f80d091e"></a>

`bool FRHAPI_PlayerInventoryChange::After_IsSet`

true if After_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerInventoryChange_1a420c59fa00f220dcf8a9d37e49b16bbe"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerInventoryChange_1a275bc792850cfcc0802d385e99e1924f"></a>

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



### `GetBeforeItemId` <a id="structFRHAPI__PlayerInventoryChange_1aff06181d46709cbd96633f9702171c3a"></a>

int32 & GetBeforeItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of BeforeItemId_Optional, regardless of it having been set.




### `GetBeforeItemId` <a id="structFRHAPI__PlayerInventoryChange_1a247720da5a0383bddbc7dbbf336bc34e"></a>

const int32 & GetBeforeItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of BeforeItemId_Optional, regardless of it having been set.




### `GetBeforeItemId` <a id="structFRHAPI__PlayerInventoryChange_1a66af782728924ca5fa9185ff1112b171"></a>

const int32 & GetBeforeItemId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of BeforeItemId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetBeforeItemId` <a id="structFRHAPI__PlayerInventoryChange_1a2b9479d60377f667b28ea2d7bbeb3e82"></a>

bool GetBeforeItemId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of BeforeItemId_Optional and returns true if it has been set, otherwise returns false.




### `GetBeforeItemIdOrNull` <a id="structFRHAPI__PlayerInventoryChange_1a2cdb97d2549cb2c59d7ce1a5cba038fc"></a>

int32 * GetBeforeItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to BeforeItemId_Optional, if it has been set, otherwise returns nullptr.




### `GetBeforeItemIdOrNull` <a id="structFRHAPI__PlayerInventoryChange_1aeed5bb600ca6056614ea4e2d061c0ba2"></a>

const int32 * GetBeforeItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to BeforeItemId_Optional, if it has been set, otherwise returns nullptr.




### `SetBeforeItemId` <a id="structFRHAPI__PlayerInventoryChange_1a1f9a76130fa65889ff4b0e30ecfcb88a"></a>

void SetBeforeItemId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of BeforeItemId_Optional and also sets BeforeItemId_IsSet to true.




### `ClearBeforeItemId` <a id="structFRHAPI__PlayerInventoryChange_1ac3b7199cc55761932367cc9fccf61552"></a>

void ClearBeforeItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of BeforeItemId_Optional and sets BeforeItemId_IsSet to false.




### `IsBeforeItemIdDefaultValue` <a id="structFRHAPI__PlayerInventoryChange_1a0ac3ece749c88ebaf7992ee00751e42a"></a>

bool IsBeforeItemIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if BeforeItemId_Optional is set and matches the default value.




### `SetBeforeItemIdToDefault` <a id="structFRHAPI__PlayerInventoryChange_1a68ae955370302ad679ac531b4686ddf4"></a>

void SetBeforeItemIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of BeforeItemId_Optional to its default and also sets BeforeItemId_IsSet to true.




### `GetAfterItemId` <a id="structFRHAPI__PlayerInventoryChange_1ae80c29566122a2d53a57d696eac7baf8"></a>

int32 & GetAfterItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AfterItemId_Optional, regardless of it having been set.




### `GetAfterItemId` <a id="structFRHAPI__PlayerInventoryChange_1a0487329713b8c3190065db3b51eaf858"></a>

const int32 & GetAfterItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AfterItemId_Optional, regardless of it having been set.




### `GetAfterItemId` <a id="structFRHAPI__PlayerInventoryChange_1a892ab658572edbf813cf4d550be64573"></a>

const int32 & GetAfterItemId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of AfterItemId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAfterItemId` <a id="structFRHAPI__PlayerInventoryChange_1a3832b2c5b4fce9966922c9c90479445c"></a>

bool GetAfterItemId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of AfterItemId_Optional and returns true if it has been set, otherwise returns false.




### `GetAfterItemIdOrNull` <a id="structFRHAPI__PlayerInventoryChange_1a694649c5ea96129450d5356a469443fa"></a>

int32 * GetAfterItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AfterItemId_Optional, if it has been set, otherwise returns nullptr.




### `GetAfterItemIdOrNull` <a id="structFRHAPI__PlayerInventoryChange_1aac199f6e29d9632045cb4035a22bc914"></a>

const int32 * GetAfterItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AfterItemId_Optional, if it has been set, otherwise returns nullptr.




### `SetAfterItemId` <a id="structFRHAPI__PlayerInventoryChange_1af2fb22253cd9543dc214cf2b9cb95239"></a>

void SetAfterItemId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of AfterItemId_Optional and also sets AfterItemId_IsSet to true.




### `ClearAfterItemId` <a id="structFRHAPI__PlayerInventoryChange_1aa0492de19cc02a1231a0b234f0a13ec5"></a>

void ClearAfterItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AfterItemId_Optional and sets AfterItemId_IsSet to false.




### `IsAfterItemIdDefaultValue` <a id="structFRHAPI__PlayerInventoryChange_1a88b8df2a6762a533e5a34514e826b9e1"></a>

bool IsAfterItemIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if AfterItemId_Optional is set and matches the default value.




### `SetAfterItemIdToDefault` <a id="structFRHAPI__PlayerInventoryChange_1ad083ab0241cd6f9893d69e0c7475484d"></a>

void SetAfterItemIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of AfterItemId_Optional to its default and also sets AfterItemId_IsSet to true.




### `GetBefore` <a id="structFRHAPI__PlayerInventoryChange_1a797f4714a657aeb266a7d907547772d5"></a>

[FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) & GetBefore()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Before_Optional, regardless of it having been set.




### `GetBefore` <a id="structFRHAPI__PlayerInventoryChange_1ae88e7a8cf23b0087e863a72f600a532d"></a>

const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) & GetBefore()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Before_Optional, regardless of it having been set.




### `GetBefore` <a id="structFRHAPI__PlayerInventoryChange_1ab8f85c4123cc9b1430c9e3026551792f"></a>

const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) & GetBefore(const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) &|DefaultValue|

#### Description

Gets the value of Before_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetBefore` <a id="structFRHAPI__PlayerInventoryChange_1a0964035ea169cdfa429f373692bf2c37"></a>

bool GetBefore([FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) &|OutValue|

#### Description

Fills OutValue with the value of Before_Optional and returns true if it has been set, otherwise returns false.




### `GetBeforeOrNull` <a id="structFRHAPI__PlayerInventoryChange_1afc6dcc539499d547ec68e5b3e441c402"></a>

[FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) * GetBeforeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Before_Optional, if it has been set, otherwise returns nullptr.




### `GetBeforeOrNull` <a id="structFRHAPI__PlayerInventoryChange_1ac1777bcf700b94db7b0b44b35cf79769"></a>

const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) * GetBeforeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Before_Optional, if it has been set, otherwise returns nullptr.




### `SetBefore` <a id="structFRHAPI__PlayerInventoryChange_1a9db525e976342f27f6c2232bc4f5d5ab"></a>

void SetBefore([FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord)|NewValue|

#### Description

Sets the value of Before_Optional and also sets Before_IsSet to true.




### `ClearBefore` <a id="structFRHAPI__PlayerInventoryChange_1aa7af9df3dbacbe6f543e53eb39b60504"></a>

void ClearBefore()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Before_Optional and sets Before_IsSet to false.




### `GetAfter` <a id="structFRHAPI__PlayerInventoryChange_1a328d895347a97c41be4780aeeb25a194"></a>

[FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) & GetAfter()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of After_Optional, regardless of it having been set.




### `GetAfter` <a id="structFRHAPI__PlayerInventoryChange_1a71268bb7097956f42795dc267fd34e2f"></a>

const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) & GetAfter()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of After_Optional, regardless of it having been set.




### `GetAfter` <a id="structFRHAPI__PlayerInventoryChange_1ac44ce6d7d25b6b414c70962918353165"></a>

const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) & GetAfter(const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) &|DefaultValue|

#### Description

Gets the value of After_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAfter` <a id="structFRHAPI__PlayerInventoryChange_1a64d59bfaeb95685bfecd9b5e83f99732"></a>

bool GetAfter([FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) &|OutValue|

#### Description

Fills OutValue with the value of After_Optional and returns true if it has been set, otherwise returns false.




### `GetAfterOrNull` <a id="structFRHAPI__PlayerInventoryChange_1abdaf58dea3e967035331a844c83b6534"></a>

[FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) * GetAfterOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to After_Optional, if it has been set, otherwise returns nullptr.




### `GetAfterOrNull` <a id="structFRHAPI__PlayerInventoryChange_1a81cb6f5182816722ac5c68039071a084"></a>

const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) * GetAfterOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to After_Optional, if it has been set, otherwise returns nullptr.




### `SetAfter` <a id="structFRHAPI__PlayerInventoryChange_1a2b8f321a74ce91e14b5ff9a2fdfac4ca"></a>

void SetAfter([FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord)|NewValue|

#### Description

Sets the value of After_Optional and also sets After_IsSet to true.




### `ClearAfter` <a id="structFRHAPI__PlayerInventoryChange_1a4ba64ef1e8e8cf43852f48e18ada18d3"></a>

void ClearAfter()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of After_Optional and sets After_IsSet to false.





