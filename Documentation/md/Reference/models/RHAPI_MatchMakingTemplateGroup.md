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
`public inline FGuid & `[`GetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a8c7a92d5198c38e91510366b3dd7d8fd)`()` | Gets the value of TemplateGroupId.
`public inline const FGuid & `[`GetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a1065db3eba69479aaa243a8469315421)`() const` | Gets the value of TemplateGroupId.
`public inline void `[`SetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a9893fb99fefc189808371a0e4a31cccc)`(const FGuid & NewValue)` | Sets the value of TemplateGroupId.
`public inline void `[`SetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a00aa2ac8d88ee72700921c73df1d3af5)`(FGuid && NewValue)` | Sets the value of TemplateGroupId using move semantics.
`public inline TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a1dfcb2f5d85730585082ec8da3e16037)`()` | Gets the value of TemplateOptions.
`public inline const TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1ab25acfbae5186e9045ff5abe4544a8da)`() const` | Gets the value of TemplateOptions.
`public inline void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1ad3a9258de52f386ea2e3afe2bfe8ff98)`(const TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > & NewValue)` | Sets the value of TemplateOptions.
`public inline void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a93f107fe7ef8d5b7c70ec135d03cf46a)`(TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > && NewValue)` | Sets the value of TemplateOptions using move semantics.
`public inline TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1ad441347240a666a6d1102583f7b2dbe9)`()` | Gets the value of RequiredItemIds_Optional, regardless of it having been set.
`public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1abad6b784c81e75db44c92ea49a182bf2)`() const` | Gets the value of RequiredItemIds_Optional, regardless of it having been set.
`public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a2ea262870c980f747cea6a30be65b946)`(const TSet< int32 > & DefaultValue) const` | Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a38185a19d7b89025b245ffaf3e007fc8)`(TSet< int32 > & OutValue) const` | Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroup_1a9f8840bfc1e1a5a0742655237b88cb65)`()` | Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroup_1a64f5b1cdaddf69a1545175711f4915ef)`() const` | Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a74b354e3f991d4ae9ba5a76d03165718)`(const TSet< int32 > & NewValue)` | Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.
`public inline void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a8b2ffd32cffcf860028698dc16a578e5)`(TSet< int32 > && NewValue)` | Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true using move semantics.
`public inline void `[`ClearRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a0314a2ef038598347f0d17de6fda851b)`()` | Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.
`public inline bool `[`IsRequiredItemIdsSet`](#structFRHAPI__MatchMakingTemplateGroup_1a76088870f10dd0164f74fbdfbb043702)`() const` | Checks whether RequiredItemIds_Optional has been set.

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

#### `public inline FGuid & `[`GetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a8c7a92d5198c38e91510366b3dd7d8fd)`()` <a id="structFRHAPI__MatchMakingTemplateGroup_1a8c7a92d5198c38e91510366b3dd7d8fd"></a>

Gets the value of TemplateGroupId.

#### `public inline const FGuid & `[`GetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a1065db3eba69479aaa243a8469315421)`() const` <a id="structFRHAPI__MatchMakingTemplateGroup_1a1065db3eba69479aaa243a8469315421"></a>

Gets the value of TemplateGroupId.

#### `public inline void `[`SetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a9893fb99fefc189808371a0e4a31cccc)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1a9893fb99fefc189808371a0e4a31cccc"></a>

Sets the value of TemplateGroupId.

#### `public inline void `[`SetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroup_1a00aa2ac8d88ee72700921c73df1d3af5)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1a00aa2ac8d88ee72700921c73df1d3af5"></a>

Sets the value of TemplateGroupId using move semantics.

#### `public inline TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a1dfcb2f5d85730585082ec8da3e16037)`()` <a id="structFRHAPI__MatchMakingTemplateGroup_1a1dfcb2f5d85730585082ec8da3e16037"></a>

Gets the value of TemplateOptions.

#### `public inline const TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1ab25acfbae5186e9045ff5abe4544a8da)`() const` <a id="structFRHAPI__MatchMakingTemplateGroup_1ab25acfbae5186e9045ff5abe4544a8da"></a>

Gets the value of TemplateOptions.

#### `public inline void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1ad3a9258de52f386ea2e3afe2bfe8ff98)`(const TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1ad3a9258de52f386ea2e3afe2bfe8ff98"></a>

Sets the value of TemplateOptions.

#### `public inline void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroup_1a93f107fe7ef8d5b7c70ec135d03cf46a)`(TArray< `[`FRHAPI_MatchMakingTemplate`](RHAPI_MatchMakingTemplate.md#structFRHAPI__MatchMakingTemplate)` > && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1a93f107fe7ef8d5b7c70ec135d03cf46a"></a>

Sets the value of TemplateOptions using move semantics.

#### `public inline TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1ad441347240a666a6d1102583f7b2dbe9)`()` <a id="structFRHAPI__MatchMakingTemplateGroup_1ad441347240a666a6d1102583f7b2dbe9"></a>

Gets the value of RequiredItemIds_Optional, regardless of it having been set.

#### `public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1abad6b784c81e75db44c92ea49a182bf2)`() const` <a id="structFRHAPI__MatchMakingTemplateGroup_1abad6b784c81e75db44c92ea49a182bf2"></a>

Gets the value of RequiredItemIds_Optional, regardless of it having been set.

#### `public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a2ea262870c980f747cea6a30be65b946)`(const TSet< int32 > & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateGroup_1a2ea262870c980f747cea6a30be65b946"></a>

Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a38185a19d7b89025b245ffaf3e007fc8)`(TSet< int32 > & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateGroup_1a38185a19d7b89025b245ffaf3e007fc8"></a>

Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroup_1a9f8840bfc1e1a5a0742655237b88cb65)`()` <a id="structFRHAPI__MatchMakingTemplateGroup_1a9f8840bfc1e1a5a0742655237b88cb65"></a>

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroup_1a64f5b1cdaddf69a1545175711f4915ef)`() const` <a id="structFRHAPI__MatchMakingTemplateGroup_1a64f5b1cdaddf69a1545175711f4915ef"></a>

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a74b354e3f991d4ae9ba5a76d03165718)`(const TSet< int32 > & NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1a74b354e3f991d4ae9ba5a76d03165718"></a>

Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.

#### `public inline void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a8b2ffd32cffcf860028698dc16a578e5)`(TSet< int32 > && NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroup_1a8b2ffd32cffcf860028698dc16a578e5"></a>

Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true using move semantics.

#### `public inline void `[`ClearRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroup_1a0314a2ef038598347f0d17de6fda851b)`()` <a id="structFRHAPI__MatchMakingTemplateGroup_1a0314a2ef038598347f0d17de6fda851b"></a>

Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.

#### `public inline bool `[`IsRequiredItemIdsSet`](#structFRHAPI__MatchMakingTemplateGroup_1a76088870f10dd0164f74fbdfbb043702)`() const` <a id="structFRHAPI__MatchMakingTemplateGroup_1a76088870f10dd0164f74fbdfbb043702"></a>

Checks whether RequiredItemIds_Optional has been set.

