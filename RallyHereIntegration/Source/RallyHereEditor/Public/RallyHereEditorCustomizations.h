// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "CoreMinimal.h"
#include "RallyHereDeveloperAPIAll.h"
#include "Widgets/SWidget.h"
#include "Editor/PropertyEditor/Public/IPropertyTypeCustomization.h"

#pragma once

class FRH_RHLegacyIdToGuidCustomization : public IPropertyTypeCustomization
{
	virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
	virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override {}

protected:
	//$$ MUL - Begin: Fix bug/id validation/handling loot id
	virtual FReply OnGenerateIdClicked() { return FReply::Unhandled(); }
	virtual FReply OnEditManuallyClicked() { return FReply::Unhandled(); }
	virtual FReply OnGetInfoClicked() { return FReply::Unhandled(); } //$$ MUL - Added get info button
	virtual void OnSetActiveClicked(ECheckBoxState NewState) {} //$$ MUL - Added get info and set loot's active

	void WriteIdToProperty(const FGuid& Id, const int32 LegacyId) const;

	virtual void OnFriendlyNameSubmitted(const FString& FriendlyName) { }
	virtual void OnNewGuidSubmitted(const FGuid& Guid) { }

	virtual FText GetIdType() { return FText(); }
	
	TSharedPtr<class IPropertyHandle> IdPropertyHandle;
	TSharedPtr<class IPropertyHandle> LegacyIdPropertyHandle;
	
	FGuid GetCurrentId() const;

	bool IsDeepLinkConfig = false; 	//$$ MUL - Add configuration deep link check
	TOptional<FString> RallyHereName; //$$ MUL - Added get info and set loot's active
	TOptional<bool> IsActive; //$$ MUL - Added get info and set loot's active
};

class FRH_RHItemIdCustomization : public FRH_RHLegacyIdToGuidCustomization
{
public:
	typedef RallyHereDeveloperAPI::Traits_SandboxCreateItems TSandboxCreateItems;
	
	typedef RallyHereDeveloperAPI::Traits_SandboxGetItemById TSandboxGetItemById;

	static TSharedRef<IPropertyTypeCustomization> MakeInstance()
	{
		return MakeShareable(new FRH_RHItemIdCustomization);
	}
protected:
	virtual FReply OnGenerateIdClicked() override;
	virtual FReply OnEditManuallyClicked() override;
	virtual FReply OnGetInfoClicked() override; //$$ MUL - Added get info and set loot's active
	
	virtual void OnFriendlyNameSubmitted(const FString& FriendlyName) override;
	virtual void OnNewGuidSubmitted(const FGuid& Guid) override;

	virtual FText GetIdType() override {return FText::FromString("Item");}

	void OnCreateCatalogItemResponse(const TSandboxCreateItems::Response& Resp);
	void OnGetItemByIdResponse(const TSandboxGetItemById::Response& Resp);
	void OnGetItemInfoByIdResponse(const TSandboxGetItemById::Response& Resp); //$$ MUL - Added get info and set loot's active
};

class FRH_RHLootIdCustomization : public FRH_RHLegacyIdToGuidCustomization
{
public:
	typedef RallyHereDeveloperAPI::Traits_SandboxGetLootById TSandboxGetLootById;
	typedef RallyHereDeveloperAPI::Traits_SandboxUpdateLoot TSandboxUpdateLoot; //$$ MUL - Added get info and set loot's active
	
	static TSharedRef<IPropertyTypeCustomization> MakeInstance()
	{
		return MakeShareable(new FRH_RHLootIdCustomization);
	}
protected:
	virtual FReply OnGenerateIdClicked() override;
	virtual FReply OnEditManuallyClicked() override;
	virtual FReply OnGetInfoClicked() override; //$$ MUL - Added get info and set loot's active
	virtual void OnSetActiveClicked(ECheckBoxState NewState) override; //$$ MUL - Added get info and set loot's active

	virtual void OnNewGuidSubmitted(const FGuid& Guid) override;

	virtual FText GetIdType() override {return FText::FromString("Loot");}

	void OnGetLootByIdResponse(const TSandboxGetLootById::Response& Resp);
//$$ MUL - Begin: Added get info and set loot's active
	void OnGetLootInfoByIdResponse(const TSandboxGetLootById::Response& Resp);
	void OnGetLootForUpdateResponse(const TSandboxGetLootById::Response& Resp);
	void OnUpdateLootResponse(const TSandboxUpdateLoot::Response& Resp);
//$$ MUL - End: Added get info and set loot's active
};
//$$ MUL - End: Fix bug/id validation/handling loot id
