---
title: PlayerOrderEntryResult.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_PlayerOrderEntryResult](/unreal-plugins/all/playerorderentryresult_8h/#PlayerOrderEntryResult_8h_1a0f30f252410fde077239156a0b9ba1c8)|Result of a Player Order Entry.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/playerorderentryresult_8h/#PlayerOrderEntryResult_8h_1abb7b106d87d28513425b026ea1688022)(const ERHAPI_PlayerOrderEntryResult & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/playerorderentryresult_8h/#PlayerOrderEntryResult_8h_1ad627b62797415a8d2323796b64250729)(const FString & EnumAsString, ERHAPI_PlayerOrderEntryResult & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/playerorderentryresult_8h/#PlayerOrderEntryResult_8h_1a767283f088fbe2801ac03d64de62e1a8)(const ERHAPI_PlayerOrderEntryResult & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/playerorderentryresult_8h/#PlayerOrderEntryResult_8h_1a3932eb8ed6db109f42f2cca4ae0e40d1)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_PlayerOrderEntryResult & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/playerorderentryresult_8h/#PlayerOrderEntryResult_8h_1abd5211c08952972f9839cfe58f43785c)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_PlayerOrderEntryResult & Value)||
## Enums




### `ERHAPI_PlayerOrderEntryResult` <a id="PlayerOrderEntryResult_8h_1a0f30f252410fde077239156a0b9ba1c8"></a>
Result of a Player Order Entry.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="The Order Entry was successful.")`|
|`UMETA`|`=(ToolTip="An internal error occurred when processing Order Entry.")`|
|`UMETA`|`=(ToolTip="Order Entry type is invalid.")`|
|`UMETA`|`=(ToolTip="Order Entry is not allowed on the current platform.")`|
|`UMETA`|`=(ToolTip="The Loot was not found.")`|
|`UMETA`|`=(ToolTip="The Loot was not active at the time of processing.")`|
|`UMETA`|`=(ToolTip="The Item was configured as the Price was not found.")`|
|`UMETA`|`=(ToolTip="The Price is not allowed for the given Loot.")`|
|`UMETA`|`=(ToolTip="The given Dynamic Bundle was invalid.")`|
|`UMETA`|`=(ToolTip="Too many requests were made in during the evaluation window.")`|
|`UMETA`|`=(ToolTip="Given Price does not match the expected Price.")`|
|`UMETA`|`=(ToolTip="Vendor version does not match the expected version.")`|
|`UMETA`|`=(ToolTip="Dynamic Bundle Loot does not match expected Loot.")`|
|`UMETA`|`=(ToolTip="Player cannot afford the given Price.")`|
|`UMETA`|`=(ToolTip="Player cannot afford the given Coupon.")`|
|`UMETA`|`=(ToolTip="Failed to spend the given Price.")`|
|`UMETA`|`=(ToolTip="Failed to spend the given Coupon.")`|
|`UMETA`|`=(ToolTip="The given Loot is not for sale with the given Price Item.")`|
|`UMETA`|`=(ToolTip="Coupons are disabled.")`|
|`UMETA`|`=(ToolTip="The Item configured for the Coupon was not found.")`|
|`UMETA`|`=(ToolTip="The Coupon Item is not active.")`|
|`UMETA`|`=(ToolTip="Coupon Item is not applicable for the given quantity.")`|
|`UMETA`|`=(ToolTip="Coupon Item is not applicable for the given Price Item.")`|
|`UMETA`|`=(ToolTip="Coupon Item is not applicable for the given Loot.")`|
|`UMETA`|`=(ToolTip="Quantity is not allowed for the given Loot.")`|
|`UMETA`|`=(ToolTip="Promotion has expired.")`|
|`UMETA`|`=(ToolTip="Promotion was not found.")`|
|`UMETA`|`=(ToolTip="Promotion has no uses left.")`|
|`UMETA`|`=(ToolTip="Promotion is not available.")`|
|`UMETA`|`=(ToolTip="Promotion has already been claimed.")`|
|`UMETA`|`=(ToolTip="Dynamic Bundles are not available.")`|
|`UMETA`|`=(ToolTip="Transient Single Loot has already been applied.")`|
|`UMETA`|`=(ToolTip="Loot is not claimable from the client.")`|
|`UMETA`|`=(ToolTip="Permission denied.")`|
|`UMETA`|`=(ToolTip="Failed to find any sub loot.")`|
|`UMETA`|`=(ToolTip="Failed to fill any sub loot.")`|
|`UMETA`|`=(ToolTip="Loot fulfillment failed because the player failed a &#x60;check_less_than&#x60; Inventory Operation. This means the Players Inventory Quantity is equal or greater than Loot&#39;s quantity.")`|
|`UMETA`|`=(ToolTip="Loot fulfillment failed because the player failed a &#x60;check_greater_than_or_equal&#x60; or &#x60;check_greater_than_or_equal_and_subtract&#x60; Inventory Operation. This means the player has less than the Loot&#39;s required quantity.")`|
|`UMETA`|`=(ToolTip="Failed to consume the given Loot required.")`|
|`UMETA`|`=(ToolTip="Failed to submit a new order.")`|
|`UMETA`|`=(ToolTip="Failed to modify inventory.")`|
|`UMETA`|`=(ToolTip="Inventory was not found.")`|
|`UMETA`|`=(ToolTip="Item was not found.")`|
|`UMETA`|`=(ToolTip="Item is not active.")`|
|`UMETA`|`=(ToolTip="Too many inventory custom attributes provided.")`|
|`UMETA`|`=(ToolTip="Always owned inventory cannot be modified.")`|
|`UMETA`|`=(ToolTip="Available until is in the past.")`|
|`UMETA`|`=(ToolTip="Order Entry was successfully fulfilled, but was rolled back.")`|
|`UMETA`|`=(ToolTip="Order Entry fulfillment has not started.")`|



## Functions



### `EnumToString` <a id="PlayerOrderEntryResult_8h_1abb7b106d87d28513425b026ea1688022"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_PlayerOrderEntryResult & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_PlayerOrderEntryResult &|EnumValue|

#### Description






### `EnumFromString` <a id="PlayerOrderEntryResult_8h_1ad627b62797415a8d2323796b64250729"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_PlayerOrderEntryResult & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_PlayerOrderEntryResult &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="PlayerOrderEntryResult_8h_1a767283f088fbe2801ac03d64de62e1a8"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_PlayerOrderEntryResult & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_PlayerOrderEntryResult &|Value|

#### Description






### `WriteJsonValue` <a id="PlayerOrderEntryResult_8h_1a3932eb8ed6db109f42f2cca4ae0e40d1"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_PlayerOrderEntryResult & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_PlayerOrderEntryResult &|Value|

#### Description






### `TryGetJsonValue` <a id="PlayerOrderEntryResult_8h_1abd5211c08952972f9839cfe58f43785c"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_PlayerOrderEntryResult & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_PlayerOrderEntryResult &|Value|

#### Description







