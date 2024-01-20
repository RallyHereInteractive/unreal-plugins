---
title: FRH_DelegateBlock Struct
---
Templated helper class defining a native and blueprint friendly delegate as a single object.

## Summary
| Kind | View | Description |
|------|------|-------------|
|DelegateType|[Delegate](/unreal-plugins/all/structfrh__delegateblock/#structFRH__DelegateBlock_1ade37e773fba5432b7829f972421a0cae)|Native-only version of the delegate.|
|DynamicDelegateType|[DynDelegate](/unreal-plugins/all/structfrh__delegateblock/#structFRH__DelegateBlock_1aff13841baef762eb21d87b0119a22ebc)|Blueprint friendly version of the delegate.|
||[FRH_DelegateBlock](/unreal-plugins/all/structfrh__delegateblock/#structFRH__DelegateBlock_1a9cc53216276cfd3e6ec1aa0addae1638)()|Default constructor leaving both delegates unbound.|
||[FRH_DelegateBlock](/unreal-plugins/all/structfrh__delegateblock/#structFRH__DelegateBlock_1aedf66ff360f54e9124a5852f76d1e6b9)(const DelegateType & InDelegate)|Constructor for binding just the native-only version of the delegate.|
||[FRH_DelegateBlock](/unreal-plugins/all/structfrh__delegateblock/#structFRH__DelegateBlock_1a8ef1217b61837b2e89eafb57c477a7df)(const DynamicDelegateType & InDynDelegate)|Constructor for binding just the blueprint friendly version of the delegate.|
|void|[ExecuteIfBound](/unreal-plugins/all/structfrh__delegateblock/#structFRH__DelegateBlock_1aa9e2440fe1a84c83218ce48353ff6364)(ParamList... params)|Executes both the native-only and blueprint friendly versions of the delegate, if they're bound.|
## Public Attributes



### `Delegate` <a id="structFRH__DelegateBlock_1ade37e773fba5432b7829f972421a0cae"></a>

`DelegateType FRH_DelegateBlock< DelegateType, DynamicDelegateType, ParamList >::Delegate`

Native-only version of the delegate.




### `DynDelegate` <a id="structFRH__DelegateBlock_1aff13841baef762eb21d87b0119a22ebc"></a>

`DynamicDelegateType FRH_DelegateBlock< DelegateType, DynamicDelegateType, ParamList >::DynDelegate`

Blueprint friendly version of the delegate.





## Public Functions



### `FRH_DelegateBlock` <a id="structFRH__DelegateBlock_1a9cc53216276cfd3e6ec1aa0addae1638"></a>

 FRH_DelegateBlock()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default constructor leaving both delegates unbound.




### `FRH_DelegateBlock` <a id="structFRH__DelegateBlock_1aedf66ff360f54e9124a5852f76d1e6b9"></a>

 FRH_DelegateBlock(const DelegateType & InDelegate)

#### Parameters

| Type | Name |
|------|------|
|const DelegateType &|InDelegate|

#### Description

Constructor for binding just the native-only version of the delegate.




### `FRH_DelegateBlock` <a id="structFRH__DelegateBlock_1a8ef1217b61837b2e89eafb57c477a7df"></a>

 FRH_DelegateBlock(const DynamicDelegateType & InDynDelegate)

#### Parameters

| Type | Name |
|------|------|
|const DynamicDelegateType &|InDynDelegate|

#### Description

Constructor for binding just the blueprint friendly version of the delegate.




### `ExecuteIfBound` <a id="structFRH__DelegateBlock_1aa9e2440fe1a84c83218ce48353ff6364"></a>

void ExecuteIfBound(ParamList... params)

#### Parameters

| Type | Name |
|------|------|
|ParamList...|params|

#### Description

Executes both the native-only and blueprint friendly versions of the delegate, if they're bound.





