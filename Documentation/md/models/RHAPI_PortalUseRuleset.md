# RHAPI_PortalUseRuleset <a id="group__RHAPI__PortalUseRuleset"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PortalUseRuleset`](#structFRHAPI__PortalUseRuleset) | A collection of Portal Use Rules.

## struct `FRHAPI_PortalUseRuleset` <a id="structFRHAPI__PortalUseRuleset"></a>

```
struct FRHAPI_PortalUseRuleset
  : public FRHAPI_Model
```

A collection of Portal Use Rules.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, TArray< ERHAPI_InventoryPortal > > `[`Rules_Optional`](#structFRHAPI__PortalUseRuleset_1a0839868d3a302e421c134111d6a23239) | 
`public bool `[`Rules_IsSet`](#structFRHAPI__PortalUseRuleset_1a4b92c8c7449f8bf0d67daad6a98b75bf) | true if Rules_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PortalUseRuleset_1ab7077b18224b06098343e0764e593b91) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__PortalUseRuleset_1ab75284e0d03bb879671ab86cfc3c39c6) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PortalUseRuleset_1a65364871150a621def88d653d1fbe84f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PortalUseRuleset_1a3f150d25c90a137c73a99bcb87d824b8)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, TArray< ERHAPI_InventoryPortal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a8c522e8de05ec2ab20cc171123d63278)`()` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< ERHAPI_InventoryPortal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a964d5e4e1b86f59cece224cd0302168d)`() const` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< ERHAPI_InventoryPortal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a25360c135dd33a58c46b66899ba335fa)`(const TMap< FString, TArray< ERHAPI_InventoryPortal >> & DefaultValue) const` | Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRules`](#structFRHAPI__PortalUseRuleset_1ac21c132d9f9df3686b75923d290e6185)`(TMap< FString, TArray< ERHAPI_InventoryPortal >> & OutValue) const` | Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, TArray< ERHAPI_InventoryPortal > > * `[`GetRulesOrNull`](#structFRHAPI__PortalUseRuleset_1a63f615cdadc4765c87370e379b6dbfcc)`()` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, TArray< ERHAPI_InventoryPortal > > * `[`GetRulesOrNull`](#structFRHAPI__PortalUseRuleset_1acd7bb3c54cc0390aab6c2ee906cd7c61)`() const` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRules`](#structFRHAPI__PortalUseRuleset_1a0b547f18b0e4d7ad8f9d1fb183ca6b24)`(TMap< FString, TArray< ERHAPI_InventoryPortal >> NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true.
`public inline void `[`ClearRules`](#structFRHAPI__PortalUseRuleset_1a38ee7a5b93aff6ea5030f958048f659a)`()` | Clears the value of Rules_Optional and sets Rules_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1aac077b206dbaae186847763a14aeacca)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1aee6cbc1d50ef03d3b634e722e4197f50)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1ac9f2c10a981c13ac21cc340a56851c75)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a95234561f173380061e5cd93b291cdc0)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRuleset_1ac427dedc5c87e6863d3c623d660c497b)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRuleset_1a196c5c6b2b0c78c7b37aa95ff4eb6fbf)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a54d60f54ae600b984fbd0e637c89cfd4)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PortalUseRuleset_1a5ae2c6f9376d8697d0b23b3b029666e3)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### Members

#### `public TMap< FString, TArray< ERHAPI_InventoryPortal > > `[`Rules_Optional`](#structFRHAPI__PortalUseRuleset_1a0839868d3a302e421c134111d6a23239) <a id="structFRHAPI__PortalUseRuleset_1a0839868d3a302e421c134111d6a23239"></a>

<br>
#### `public bool `[`Rules_IsSet`](#structFRHAPI__PortalUseRuleset_1a4b92c8c7449f8bf0d67daad6a98b75bf) <a id="structFRHAPI__PortalUseRuleset_1a4b92c8c7449f8bf0d67daad6a98b75bf"></a>

true if Rules_Optional has been set to a value

<br>
#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PortalUseRuleset_1ab7077b18224b06098343e0764e593b91) <a id="structFRHAPI__PortalUseRuleset_1ab7077b18224b06098343e0764e593b91"></a>

<br>
#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__PortalUseRuleset_1ab75284e0d03bb879671ab86cfc3c39c6) <a id="structFRHAPI__PortalUseRuleset_1ab75284e0d03bb879671ab86cfc3c39c6"></a>

true if CacheInfo_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PortalUseRuleset_1a65364871150a621def88d653d1fbe84f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PortalUseRuleset_1a65364871150a621def88d653d1fbe84f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PortalUseRuleset_1a3f150d25c90a137c73a99bcb87d824b8)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PortalUseRuleset_1a3f150d25c90a137c73a99bcb87d824b8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TMap< FString, TArray< ERHAPI_InventoryPortal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a8c522e8de05ec2ab20cc171123d63278)`()` <a id="structFRHAPI__PortalUseRuleset_1a8c522e8de05ec2ab20cc171123d63278"></a>

Gets the value of Rules_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, TArray< ERHAPI_InventoryPortal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a964d5e4e1b86f59cece224cd0302168d)`() const` <a id="structFRHAPI__PortalUseRuleset_1a964d5e4e1b86f59cece224cd0302168d"></a>

Gets the value of Rules_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, TArray< ERHAPI_InventoryPortal > > & `[`GetRules`](#structFRHAPI__PortalUseRuleset_1a25360c135dd33a58c46b66899ba335fa)`(const TMap< FString, TArray< ERHAPI_InventoryPortal >> & DefaultValue) const` <a id="structFRHAPI__PortalUseRuleset_1a25360c135dd33a58c46b66899ba335fa"></a>

Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRules`](#structFRHAPI__PortalUseRuleset_1ac21c132d9f9df3686b75923d290e6185)`(TMap< FString, TArray< ERHAPI_InventoryPortal >> & OutValue) const` <a id="structFRHAPI__PortalUseRuleset_1ac21c132d9f9df3686b75923d290e6185"></a>

Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, TArray< ERHAPI_InventoryPortal > > * `[`GetRulesOrNull`](#structFRHAPI__PortalUseRuleset_1a63f615cdadc4765c87370e379b6dbfcc)`()` <a id="structFRHAPI__PortalUseRuleset_1a63f615cdadc4765c87370e379b6dbfcc"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, TArray< ERHAPI_InventoryPortal > > * `[`GetRulesOrNull`](#structFRHAPI__PortalUseRuleset_1acd7bb3c54cc0390aab6c2ee906cd7c61)`() const` <a id="structFRHAPI__PortalUseRuleset_1acd7bb3c54cc0390aab6c2ee906cd7c61"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRules`](#structFRHAPI__PortalUseRuleset_1a0b547f18b0e4d7ad8f9d1fb183ca6b24)`(TMap< FString, TArray< ERHAPI_InventoryPortal >> NewValue)` <a id="structFRHAPI__PortalUseRuleset_1a0b547f18b0e4d7ad8f9d1fb183ca6b24"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true.

<br>
#### `public inline void `[`ClearRules`](#structFRHAPI__PortalUseRuleset_1a38ee7a5b93aff6ea5030f958048f659a)`()` <a id="structFRHAPI__PortalUseRuleset_1a38ee7a5b93aff6ea5030f958048f659a"></a>

Clears the value of Rules_Optional and sets Rules_IsSet to false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1aac077b206dbaae186847763a14aeacca)`()` <a id="structFRHAPI__PortalUseRuleset_1aac077b206dbaae186847763a14aeacca"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1aee6cbc1d50ef03d3b634e722e4197f50)`() const` <a id="structFRHAPI__PortalUseRuleset_1aee6cbc1d50ef03d3b634e722e4197f50"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1ac9f2c10a981c13ac21cc340a56851c75)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PortalUseRuleset_1ac9f2c10a981c13ac21cc340a56851c75"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a95234561f173380061e5cd93b291cdc0)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PortalUseRuleset_1a95234561f173380061e5cd93b291cdc0"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRuleset_1ac427dedc5c87e6863d3c623d660c497b)`()` <a id="structFRHAPI__PortalUseRuleset_1ac427dedc5c87e6863d3c623d660c497b"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PortalUseRuleset_1a196c5c6b2b0c78c7b37aa95ff4eb6fbf)`() const` <a id="structFRHAPI__PortalUseRuleset_1a196c5c6b2b0c78c7b37aa95ff4eb6fbf"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PortalUseRuleset_1a54d60f54ae600b984fbd0e637c89cfd4)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__PortalUseRuleset_1a54d60f54ae600b984fbd0e637c89cfd4"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

<br>
#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PortalUseRuleset_1a5ae2c6f9376d8697d0b23b3b029666e3)`()` <a id="structFRHAPI__PortalUseRuleset_1a5ae2c6f9376d8697d0b23b3b029666e3"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

<br>
