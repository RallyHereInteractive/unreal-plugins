---
title: RHAPI_MatchMakingTemplateGroup
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchMakingTemplateGroup`](#structFRHAPI__MatchMakingTemplateGroup) | DEPRECATED A collection of MatchMakingTemplates that may be used when a session enters a queue. The first template that satisfies the necessary rules will be used.

## struct `FRHAPI_MatchMakingTemplateGroup` <a id="structFRHAPI__MatchMakingTemplateGroup"></a>

```
struct FRHAPI_MatchMakingTemplateGroup
  : public FRHAPI_Model
```

DEPRECATED A collection of MatchMakingTemplates that may be used when a session enters a queue. The first template that satisfies the necessary rules will be used.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`TemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a507a284a1e0774e35f86f92110169f51) | ID for this set of potential matchmaking templates.
`public TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > `[`TemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a48040d4429ae869814eda1b9f18c1363) | List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template.
`public TSet< int32 > `[`RequiredItemIds_Optional`](#structFRHAPI__MatchMakingTemplateGroup_1a16723c7ac8626179a27c60612d9f34e8) | Set of all the item ids that are required to validate every rule contained in this template group.
`public bool `[`RequiredItemIds_IsSet`](#structFRHAPI__MatchMakingTemplateGroup_1a3e01b3ff08aaf06e2b13085d40f00722) | true if RequiredItemIds_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingTemplateGroup_1acc88a050d788ebf1b8cdd85038ce90d6)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplateGroup_1aa6c55c8dcea42b9f70ed89d66600734f)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1ae6dca76f20c4bc44515bdffd5d9aaa93)`()` | Gets the value of TemplateGroupId.
`public inline FORCEINLINE const FGuid & `[`GetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1aa9d76b08aa792163e92acb213e6c454c)`() const` | Gets the value of TemplateGroupId.
`public inline FORCEINLINE void `[`SetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a8eb59bbcfcf4464096ea5f761c656e77)`(const FGuid & NewValue)` | Sets the value of TemplateGroupId.
`public inline FORCEINLINE void `[`SetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a0c1544687b36878de2b056ccb52a637f)`(FGuid && NewValue)` | Sets the value of TemplateGroupId using move semantics.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a1acba11ca1b3a2ccd731ed1f74f176e8)`()` | Gets the value of TemplateOptions.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a653f90142185ab49b88f3a90cdccd514)`() const` | Gets the value of TemplateOptions.
`public inline FORCEINLINE void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a34077cc191669119352f8cab6a9a34ed)`(const TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > & NewValue)` | Sets the value of TemplateOptions.
`public inline FORCEINLINE void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a50abfdd148158293f2db74bfe35ca37b)`(TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > && NewValue)` | Sets the value of TemplateOptions using move semantics.
`public inline FORCEINLINE TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a39fd688a0446dd78564c25d23d4cab07)`()` | Gets the value of RequiredItemIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a3465df6b0d46b93c4bca0590cace2e0a)`() const` | Gets the value of RequiredItemIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1abd7a145b2ded7634049523c10922c20f)`(const TSet< int32 > & DefaultValue) const` | Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a35c3201ba95e819e313a96b9296e9101)`(TSet< int32 > & OutValue) const` | Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroup_1a16291207eb4dbc8b1b042188ceb08d1b)`()` | Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroup_1af1eb24573a24e1b90eb53b8fa34eee82)`() const` | Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a72a13d481e21e069a835430ecab8cb57)`(const TSet< int32 > & NewValue)` | Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.
`public inline FORCEINLINE void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a5c4d7e33bc218e06323b2b9c52ddac8d)`(TSet< int32 > && NewValue)` | Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true using move semantics.
`public inline void `[`ClearRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a0314a2ef038598347f0d17de6fda851b)`()` | Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.

### Members

#### `public FGuid `[`TemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a507a284a1e0774e35f86f92110169f51) <a id="structFRHAPI__MatchMakingTemplateGroup_1a507a284a1e0774e35f86f92110169f51"></a>

ID for this set of potential matchmaking templates.

#### `public TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > `[`TemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a48040d4429ae869814eda1b9f18c1363) <a id="structFRHAPI__MatchMakingTemplateGroup_1a48040d4429ae869814eda1b9f18c1363"></a>

List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template.

#### `public TSet< int32 > `[`RequiredItemIds_Optional`](#structFRHAPI__MatchMakingTemplateGroup_1a16723c7ac8626179a27c60612d9f34e8) <a id="structFRHAPI__MatchMakingTemplateGroup_1a16723c7ac8626179a27c60612d9f34e8"></a>

Set of all the item ids that are required to validate every rule contained in this template group.

#### `public bool `[`RequiredItemIds_IsSet`](#structFRHAPI__MatchMakingTemplateGroup_1a3e01b3ff08aaf06e2b13085d40f00722) <a id="structFRHAPI__MatchMakingTemplateGroup_1a3e01b3ff08aaf06e2b13085d40f00722"></a>

true if RequiredItemIds_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingTemplateGroup_1acc88a050d788ebf1b8cdd85038ce90d6)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1acc88a050d788ebf1b8cdd85038ce90d6"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplateGroup_1aa6c55c8dcea42b9f70ed89d66600734f)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchMakingTemplateGroup_1aa6c55c8dcea42b9f70ed89d66600734f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1ae6dca76f20c4bc44515bdffd5d9aaa93)`()` <a id="structFRHAPI__MatchMakingTemplateGroup_1ae6dca76f20c4bc44515bdffd5d9aaa93"></a>

Gets the value of TemplateGroupId.

#### `public inline FORCEINLINE const FGuid & `[`GetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1aa9d76b08aa792163e92acb213e6c454c)`() const` <a id="structFRHAPI__MatchMakingTemplateGroup_1aa9d76b08aa792163e92acb213e6c454c"></a>

Gets the value of TemplateGroupId.

#### `public inline FORCEINLINE void `[`SetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a8eb59bbcfcf4464096ea5f761c656e77)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1a8eb59bbcfcf4464096ea5f761c656e77"></a>

Sets the value of TemplateGroupId.

#### `public inline FORCEINLINE void `[`SetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a0c1544687b36878de2b056ccb52a637f)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1a0c1544687b36878de2b056ccb52a637f"></a>

Sets the value of TemplateGroupId using move semantics.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a1acba11ca1b3a2ccd731ed1f74f176e8)`()` <a id="structFRHAPI__MatchMakingTemplateGroup_1a1acba11ca1b3a2ccd731ed1f74f176e8"></a>

Gets the value of TemplateOptions.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a653f90142185ab49b88f3a90cdccd514)`() const` <a id="structFRHAPI__MatchMakingTemplateGroup_1a653f90142185ab49b88f3a90cdccd514"></a>

Gets the value of TemplateOptions.

#### `public inline FORCEINLINE void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a34077cc191669119352f8cab6a9a34ed)`(const TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1a34077cc191669119352f8cab6a9a34ed"></a>

Sets the value of TemplateOptions.

#### `public inline FORCEINLINE void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a50abfdd148158293f2db74bfe35ca37b)`(TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1a50abfdd148158293f2db74bfe35ca37b"></a>

Sets the value of TemplateOptions using move semantics.

#### `public inline FORCEINLINE TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a39fd688a0446dd78564c25d23d4cab07)`()` <a id="structFRHAPI__MatchMakingTemplateGroup_1a39fd688a0446dd78564c25d23d4cab07"></a>

Gets the value of RequiredItemIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a3465df6b0d46b93c4bca0590cace2e0a)`() const` <a id="structFRHAPI__MatchMakingTemplateGroup_1a3465df6b0d46b93c4bca0590cace2e0a"></a>

Gets the value of RequiredItemIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1abd7a145b2ded7634049523c10922c20f)`(const TSet< int32 > & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateGroup_1abd7a145b2ded7634049523c10922c20f"></a>

Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a35c3201ba95e819e313a96b9296e9101)`(TSet< int32 > & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateGroup_1a35c3201ba95e819e313a96b9296e9101"></a>

Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroup_1a16291207eb4dbc8b1b042188ceb08d1b)`()` <a id="structFRHAPI__MatchMakingTemplateGroup_1a16291207eb4dbc8b1b042188ceb08d1b"></a>

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroup_1af1eb24573a24e1b90eb53b8fa34eee82)`() const` <a id="structFRHAPI__MatchMakingTemplateGroup_1af1eb24573a24e1b90eb53b8fa34eee82"></a>

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a72a13d481e21e069a835430ecab8cb57)`(const TSet< int32 > & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1a72a13d481e21e069a835430ecab8cb57"></a>

Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a5c4d7e33bc218e06323b2b9c52ddac8d)`(TSet< int32 > && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1a5c4d7e33bc218e06323b2b9c52ddac8d"></a>

Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true using move semantics.

#### `public inline void `[`ClearRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a0314a2ef038598347f0d17de6fda851b)`()` <a id="structFRHAPI__MatchMakingTemplateGroup_1a0314a2ef038598347f0d17de6fda851b"></a>

Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.

