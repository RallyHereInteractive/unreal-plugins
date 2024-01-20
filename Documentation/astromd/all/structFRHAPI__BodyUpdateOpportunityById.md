---
title: FRHAPI_BodyUpdateOpportunityById Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_OpportunityState|[State](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a34aec65b8dce5bc71caa0e851c6249fa)|State of the opportunity.|
|ERHAPI_OpportunityAbortReason|[AbortReason_Optional](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a9095b50c820c13fa559c9f5780ae43ce)|Reason for aborting the opportunity.|
|bool|[AbortReason_IsSet](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a5b0bdfa2733c34f6cfe6c5e89e5b2791)|true if AbortReason_Optional has been set to a value|
|int32|[AbortSeconds_Optional](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1af5f563c6a06cb999e1acbec5529c3228)|Number of seconds into the video when the abort happened.|
|bool|[AbortSeconds_IsSet](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1ab6c45e4c41a80c712418dfc4d4bebb16)|true if AbortSeconds_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1ab62cdcc849edd1c8a61d149379c81f9e)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a58e1dd4c4f703fe628db9e1b083822ae)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_OpportunityState &|[GetState](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a8de0ea080658c3f1b0500e74d46ff88a)()|Gets the value of State.|
|const ERHAPI_OpportunityState &|[GetState](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a5ce8f5da8c5f5a5913c84d15b02e78e8)()|Gets the value of State.|
|void|[SetState](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1ae4ffb0650dcb1dbee639dda586bad383)(ERHAPI_OpportunityState NewValue)|Sets the value of State.|
|ERHAPI_OpportunityAbortReason &|[GetAbortReason](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a35ddba6cfa09314ca5ad65d8b80860c6)()|Gets the value of AbortReason_Optional, regardless of it having been set.|
|const ERHAPI_OpportunityAbortReason &|[GetAbortReason](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1ae05309f6a15da094c22bd28ebe1f0ffa)()|Gets the value of AbortReason_Optional, regardless of it having been set.|
|const ERHAPI_OpportunityAbortReason &|[GetAbortReason](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a08f3ad9fb9e6543ab7a00daf7ef0d432)(const ERHAPI_OpportunityAbortReason & DefaultValue)|Gets the value of AbortReason_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAbortReason](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1aa4a6dbeb6533e1c8ba5e7302e95a1588)(ERHAPI_OpportunityAbortReason & OutValue)|Fills OutValue with the value of AbortReason_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_OpportunityAbortReason *|[GetAbortReasonOrNull](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a5b30200ae487a65a8304fdcd4716587c)()|Returns a pointer to AbortReason_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_OpportunityAbortReason *|[GetAbortReasonOrNull](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a22543c5f52181ace8e83ba1e50c0744a)()|Returns a pointer to AbortReason_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAbortReason](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a32cc9d390a455b9d5b0fcc019eb0d6d4)(ERHAPI_OpportunityAbortReason NewValue)|Sets the value of AbortReason_Optional and also sets AbortReason_IsSet to true.|
|void|[ClearAbortReason](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1ae3f0cb05ba5fb7ee72632ff1f8c44efa)()|Clears the value of AbortReason_Optional and sets AbortReason_IsSet to false.|
|int32 &|[GetAbortSeconds](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1ade4df84b05a41e53730e38ec57bc3324)()|Gets the value of AbortSeconds_Optional, regardless of it having been set.|
|const int32 &|[GetAbortSeconds](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a8a2bf4770554be67faf9eec1247a0c3a)()|Gets the value of AbortSeconds_Optional, regardless of it having been set.|
|const int32 &|[GetAbortSeconds](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a62dced431ca409823b8e518dbeda2118)(const int32 & DefaultValue)|Gets the value of AbortSeconds_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAbortSeconds](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a0ea37dd712c4abbb181d2f9fe5ba7eed)(int32 & OutValue)|Fills OutValue with the value of AbortSeconds_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetAbortSecondsOrNull](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a9007e3f8f292d855e517a5c4fa6c4698)()|Returns a pointer to AbortSeconds_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetAbortSecondsOrNull](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1af79d0a714a905431fda6d1487190f000)()|Returns a pointer to AbortSeconds_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAbortSeconds](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1adbb5855b71849aed3f14e5fb78c8d38c)(int32 NewValue)|Sets the value of AbortSeconds_Optional and also sets AbortSeconds_IsSet to true.|
|void|[ClearAbortSeconds](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a9043c9a127601316de50180e50e3ee1c)()|Clears the value of AbortSeconds_Optional and sets AbortSeconds_IsSet to false.|
|bool|[IsAbortSecondsDefaultValue](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a36f8b9127d7f5d7f0d84f54449b27ee5)()|Returns true if AbortSeconds_Optional is set and matches the default value.|
|void|[SetAbortSecondsToDefault](/unreal-plugins/all/structfrhapi__bodyupdateopportunitybyid/#structFRHAPI__BodyUpdateOpportunityById_1a8df7404741bbab7707ac20df7fd1d782)()|Sets the value of AbortSeconds_Optional to its default and also sets AbortSeconds_IsSet to true.|
## Public Attributes



### `State` <a id="structFRHAPI__BodyUpdateOpportunityById_1a34aec65b8dce5bc71caa0e851c6249fa"></a>

`ERHAPI_OpportunityState FRHAPI_BodyUpdateOpportunityById::State`

State of the opportunity.




### `AbortReason_Optional` <a id="structFRHAPI__BodyUpdateOpportunityById_1a9095b50c820c13fa559c9f5780ae43ce"></a>

`ERHAPI_OpportunityAbortReason FRHAPI_BodyUpdateOpportunityById::AbortReason_Optional`

Reason for aborting the opportunity.




### `AbortReason_IsSet` <a id="structFRHAPI__BodyUpdateOpportunityById_1a5b0bdfa2733c34f6cfe6c5e89e5b2791"></a>

`bool FRHAPI_BodyUpdateOpportunityById::AbortReason_IsSet`

true if AbortReason_Optional has been set to a value




### `AbortSeconds_Optional` <a id="structFRHAPI__BodyUpdateOpportunityById_1af5f563c6a06cb999e1acbec5529c3228"></a>

`int32 FRHAPI_BodyUpdateOpportunityById::AbortSeconds_Optional`

Number of seconds into the video when the abort happened.




### `AbortSeconds_IsSet` <a id="structFRHAPI__BodyUpdateOpportunityById_1ab6c45e4c41a80c712418dfc4d4bebb16"></a>

`bool FRHAPI_BodyUpdateOpportunityById::AbortSeconds_IsSet`

true if AbortSeconds_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__BodyUpdateOpportunityById_1ab62cdcc849edd1c8a61d149379c81f9e"></a>

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



### `WriteJson` <a id="structFRHAPI__BodyUpdateOpportunityById_1a58e1dd4c4f703fe628db9e1b083822ae"></a>

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



### `GetState` <a id="structFRHAPI__BodyUpdateOpportunityById_1a8de0ea080658c3f1b0500e74d46ff88a"></a>

ERHAPI_OpportunityState & GetState()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of State.




### `GetState` <a id="structFRHAPI__BodyUpdateOpportunityById_1a5ce8f5da8c5f5a5913c84d15b02e78e8"></a>

const ERHAPI_OpportunityState & GetState()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of State.




### `SetState` <a id="structFRHAPI__BodyUpdateOpportunityById_1ae4ffb0650dcb1dbee639dda586bad383"></a>

void SetState(ERHAPI_OpportunityState NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_OpportunityState|NewValue|

#### Description

Sets the value of State.




### `GetAbortReason` <a id="structFRHAPI__BodyUpdateOpportunityById_1a35ddba6cfa09314ca5ad65d8b80860c6"></a>

ERHAPI_OpportunityAbortReason & GetAbortReason()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AbortReason_Optional, regardless of it having been set.




### `GetAbortReason` <a id="structFRHAPI__BodyUpdateOpportunityById_1ae05309f6a15da094c22bd28ebe1f0ffa"></a>

const ERHAPI_OpportunityAbortReason & GetAbortReason()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AbortReason_Optional, regardless of it having been set.




### `GetAbortReason` <a id="structFRHAPI__BodyUpdateOpportunityById_1a08f3ad9fb9e6543ab7a00daf7ef0d432"></a>

const ERHAPI_OpportunityAbortReason & GetAbortReason(const ERHAPI_OpportunityAbortReason & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_OpportunityAbortReason &|DefaultValue|

#### Description

Gets the value of AbortReason_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAbortReason` <a id="structFRHAPI__BodyUpdateOpportunityById_1aa4a6dbeb6533e1c8ba5e7302e95a1588"></a>

bool GetAbortReason(ERHAPI_OpportunityAbortReason & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_OpportunityAbortReason &|OutValue|

#### Description

Fills OutValue with the value of AbortReason_Optional and returns true if it has been set, otherwise returns false.




### `GetAbortReasonOrNull` <a id="structFRHAPI__BodyUpdateOpportunityById_1a5b30200ae487a65a8304fdcd4716587c"></a>

ERHAPI_OpportunityAbortReason * GetAbortReasonOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AbortReason_Optional, if it has been set, otherwise returns nullptr.




### `GetAbortReasonOrNull` <a id="structFRHAPI__BodyUpdateOpportunityById_1a22543c5f52181ace8e83ba1e50c0744a"></a>

const ERHAPI_OpportunityAbortReason * GetAbortReasonOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AbortReason_Optional, if it has been set, otherwise returns nullptr.




### `SetAbortReason` <a id="structFRHAPI__BodyUpdateOpportunityById_1a32cc9d390a455b9d5b0fcc019eb0d6d4"></a>

void SetAbortReason(ERHAPI_OpportunityAbortReason NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_OpportunityAbortReason|NewValue|

#### Description

Sets the value of AbortReason_Optional and also sets AbortReason_IsSet to true.




### `ClearAbortReason` <a id="structFRHAPI__BodyUpdateOpportunityById_1ae3f0cb05ba5fb7ee72632ff1f8c44efa"></a>

void ClearAbortReason()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AbortReason_Optional and sets AbortReason_IsSet to false.




### `GetAbortSeconds` <a id="structFRHAPI__BodyUpdateOpportunityById_1ade4df84b05a41e53730e38ec57bc3324"></a>

int32 & GetAbortSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AbortSeconds_Optional, regardless of it having been set.




### `GetAbortSeconds` <a id="structFRHAPI__BodyUpdateOpportunityById_1a8a2bf4770554be67faf9eec1247a0c3a"></a>

const int32 & GetAbortSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AbortSeconds_Optional, regardless of it having been set.




### `GetAbortSeconds` <a id="structFRHAPI__BodyUpdateOpportunityById_1a62dced431ca409823b8e518dbeda2118"></a>

const int32 & GetAbortSeconds(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of AbortSeconds_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAbortSeconds` <a id="structFRHAPI__BodyUpdateOpportunityById_1a0ea37dd712c4abbb181d2f9fe5ba7eed"></a>

bool GetAbortSeconds(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of AbortSeconds_Optional and returns true if it has been set, otherwise returns false.




### `GetAbortSecondsOrNull` <a id="structFRHAPI__BodyUpdateOpportunityById_1a9007e3f8f292d855e517a5c4fa6c4698"></a>

int32 * GetAbortSecondsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AbortSeconds_Optional, if it has been set, otherwise returns nullptr.




### `GetAbortSecondsOrNull` <a id="structFRHAPI__BodyUpdateOpportunityById_1af79d0a714a905431fda6d1487190f000"></a>

const int32 * GetAbortSecondsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AbortSeconds_Optional, if it has been set, otherwise returns nullptr.




### `SetAbortSeconds` <a id="structFRHAPI__BodyUpdateOpportunityById_1adbb5855b71849aed3f14e5fb78c8d38c"></a>

void SetAbortSeconds(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of AbortSeconds_Optional and also sets AbortSeconds_IsSet to true.




### `ClearAbortSeconds` <a id="structFRHAPI__BodyUpdateOpportunityById_1a9043c9a127601316de50180e50e3ee1c"></a>

void ClearAbortSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AbortSeconds_Optional and sets AbortSeconds_IsSet to false.




### `IsAbortSecondsDefaultValue` <a id="structFRHAPI__BodyUpdateOpportunityById_1a36f8b9127d7f5d7f0d84f54449b27ee5"></a>

bool IsAbortSecondsDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if AbortSeconds_Optional is set and matches the default value.




### `SetAbortSecondsToDefault` <a id="structFRHAPI__BodyUpdateOpportunityById_1a8df7404741bbab7707ac20df7fd1d782"></a>

void SetAbortSecondsToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of AbortSeconds_Optional to its default and also sets AbortSeconds_IsSet to true.





