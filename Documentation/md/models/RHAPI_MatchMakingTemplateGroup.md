# RHAPI_MatchMakingTemplateGroup <a id="group__RHAPI__MatchMakingTemplateGroup"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`TemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a507a284a1e0774e35f86f92110169f51) | ID for this set of potential matchmaking templates.
`public TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > `[`TemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a48040d4429ae869814eda1b9f18c1363) | List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template.
`public TSet< int32 > `[`RequiredItemIds_Optional`](#structFRHAPI__MatchMakingTemplateGroup_1a16723c7ac8626179a27c60612d9f34e8) | Set of all the item ids that are required to validate every rule contained in this template group.
`public bool `[`RequiredItemIds_IsSet`](#structFRHAPI__MatchMakingTemplateGroup_1a3e01b3ff08aaf06e2b13085d40f00722) | true if RequiredItemIds_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingTemplateGroup_1abd695116d91d7ae35a4ce0c6ad56ba9b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplateGroup_1acd5701b5cf12bc29251d060e4a60f2b1)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a6e102e2662b46623917c5aea1b005b2e)`()` | Gets the value of TemplateGroupId.
`public inline const FGuid & `[`GetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a9aae93ee73e27baeb7af048ac67f8bc5)`() const` | Gets the value of TemplateGroupId.
`public inline void `[`SetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1aee97946d133efb63271bc40eded4c30b)`(FGuid NewValue)` | Sets the value of TemplateGroupId.
`public inline TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a70f8640a14690d8777179d6b689982c6)`()` | Gets the value of TemplateOptions.
`public inline const TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a44782fb67720b6a26da7756d07e13c81)`() const` | Gets the value of TemplateOptions.
`public inline void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1ac1e8196c2d6ba14ccac41e6a9b21764e)`(TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > NewValue)` | Sets the value of TemplateOptions.
`public inline TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a254f4844b266761013351898f84b5786)`()` | Gets the value of RequiredItemIds_Optional, regardless of it having been set.
`public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1aacb075beaf0fcfbdefc3ea3b746289ac)`() const` | Gets the value of RequiredItemIds_Optional, regardless of it having been set.
`public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1aa5a6727b43cc185c4ac9c5295a222122)`(const TSet< int32 > & DefaultValue) const` | Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a38185a19d7b89025b245ffaf3e007fc8)`(TSet< int32 > & OutValue) const` | Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroup_1ab9e18e09f0bc09d9bb41db8e9c26982c)`()` | Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroup_1aed62f7f1d290c797889da913eb337228)`() const` | Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a3fcf1eb0b7eddb98d0af02c855f2592f)`(TSet< int32 > NewValue)` | Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.
`public inline void `[`ClearRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a0314a2ef038598347f0d17de6fda851b)`()` | Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.

#### Members

#### `public FGuid `[`TemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a507a284a1e0774e35f86f92110169f51) <a id="structFRHAPI__MatchMakingTemplateGroup_1a507a284a1e0774e35f86f92110169f51"></a>

ID for this set of potential matchmaking templates.

<br>
#### `public TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > `[`TemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a48040d4429ae869814eda1b9f18c1363) <a id="structFRHAPI__MatchMakingTemplateGroup_1a48040d4429ae869814eda1b9f18c1363"></a>

List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template.

<br>
#### `public TSet< int32 > `[`RequiredItemIds_Optional`](#structFRHAPI__MatchMakingTemplateGroup_1a16723c7ac8626179a27c60612d9f34e8) <a id="structFRHAPI__MatchMakingTemplateGroup_1a16723c7ac8626179a27c60612d9f34e8"></a>

Set of all the item ids that are required to validate every rule contained in this template group.

<br>
#### `public bool `[`RequiredItemIds_IsSet`](#structFRHAPI__MatchMakingTemplateGroup_1a3e01b3ff08aaf06e2b13085d40f00722) <a id="structFRHAPI__MatchMakingTemplateGroup_1a3e01b3ff08aaf06e2b13085d40f00722"></a>

true if RequiredItemIds_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingTemplateGroup_1abd695116d91d7ae35a4ce0c6ad56ba9b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1abd695116d91d7ae35a4ce0c6ad56ba9b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplateGroup_1acd5701b5cf12bc29251d060e4a60f2b1)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchMakingTemplateGroup_1acd5701b5cf12bc29251d060e4a60f2b1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FGuid & `[`GetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a6e102e2662b46623917c5aea1b005b2e)`()` <a id="structFRHAPI__MatchMakingTemplateGroup_1a6e102e2662b46623917c5aea1b005b2e"></a>

Gets the value of TemplateGroupId.

<br>
#### `public inline const FGuid & `[`GetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a9aae93ee73e27baeb7af048ac67f8bc5)`() const` <a id="structFRHAPI__MatchMakingTemplateGroup_1a9aae93ee73e27baeb7af048ac67f8bc5"></a>

Gets the value of TemplateGroupId.

<br>
#### `public inline void `[`SetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1aee97946d133efb63271bc40eded4c30b)`(FGuid NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1aee97946d133efb63271bc40eded4c30b"></a>

Sets the value of TemplateGroupId.

<br>
#### `public inline TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a70f8640a14690d8777179d6b689982c6)`()` <a id="structFRHAPI__MatchMakingTemplateGroup_1a70f8640a14690d8777179d6b689982c6"></a>

Gets the value of TemplateOptions.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a44782fb67720b6a26da7756d07e13c81)`() const` <a id="structFRHAPI__MatchMakingTemplateGroup_1a44782fb67720b6a26da7756d07e13c81"></a>

Gets the value of TemplateOptions.

<br>
#### `public inline void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1ac1e8196c2d6ba14ccac41e6a9b21764e)`(TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1ac1e8196c2d6ba14ccac41e6a9b21764e"></a>

Sets the value of TemplateOptions.

<br>
#### `public inline TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a254f4844b266761013351898f84b5786)`()` <a id="structFRHAPI__MatchMakingTemplateGroup_1a254f4844b266761013351898f84b5786"></a>

Gets the value of RequiredItemIds_Optional, regardless of it having been set.

<br>
#### `public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1aacb075beaf0fcfbdefc3ea3b746289ac)`() const` <a id="structFRHAPI__MatchMakingTemplateGroup_1aacb075beaf0fcfbdefc3ea3b746289ac"></a>

Gets the value of RequiredItemIds_Optional, regardless of it having been set.

<br>
#### `public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1aa5a6727b43cc185c4ac9c5295a222122)`(const TSet< int32 > & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateGroup_1aa5a6727b43cc185c4ac9c5295a222122"></a>

Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a38185a19d7b89025b245ffaf3e007fc8)`(TSet< int32 > & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateGroup_1a38185a19d7b89025b245ffaf3e007fc8"></a>

Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroup_1ab9e18e09f0bc09d9bb41db8e9c26982c)`()` <a id="structFRHAPI__MatchMakingTemplateGroup_1ab9e18e09f0bc09d9bb41db8e9c26982c"></a>

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroup_1aed62f7f1d290c797889da913eb337228)`() const` <a id="structFRHAPI__MatchMakingTemplateGroup_1aed62f7f1d290c797889da913eb337228"></a>

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a3fcf1eb0b7eddb98d0af02c855f2592f)`(TSet< int32 > NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1a3fcf1eb0b7eddb98d0af02c855f2592f"></a>

Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.

<br>
#### `public inline void `[`ClearRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a0314a2ef038598347f0d17de6fda851b)`()` <a id="structFRHAPI__MatchMakingTemplateGroup_1a0314a2ef038598347f0d17de6fda851b"></a>

Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.

<br>
