// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "RallyHereEditor.h"
#include "RallyHereEditorCustomDataWidget.h"
#include "Widgets/Docking/SDockTab.h"

DECLARE_DELEGATE_TwoParams(FRH_OnLootUpdate, const FGuid&, TSharedPtr<FRHAPI_DevLoot>);

class SRallyHereEditorLootWidget : public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS(SRallyHereEditorLootWidget)
	{
	}
	SLATE_END_ARGS()

public:
	SRallyHereEditorLootWidget();
	virtual ~SRallyHereEditorLootWidget();

	typedef RallyHereDeveloperAPI::Traits_SandboxGetVendors TSandboxGetVendors;

	void Construct(const FArguments& InArgs, const TSharedRef<SDockTab>& ConstructUnderMajorTab, const TSharedPtr<SWindow>& ConstructUnderWindow);

	virtual bool SupportsKeyboardFocus() const override { return true; }

protected:
	FReply OnFetchVendors();
	void OnFetchVendorsResponse(const TSandboxGetVendors::Response& Resp);
	void OnVendorFilterTextChanged(const FText& SearchText);

	TSharedPtr<SListView<TSharedPtr<FRHAPI_DevVendor>>> VendorsListView;
	TSharedRef<ITableRow> MakeListViewVendorWidget(TSharedPtr<FRHAPI_DevVendor> InItem, const TSharedRef<STableViewBase>& OwnerTable);

	FString VendorFilter;
	TArray<TSharedPtr<FRHAPI_DevVendor>> CachedVendors;
};

class SRallyHereEditorVendorRow : public STableRow<TSharedPtr<FRHAPI_DevVendor>>
{
	SLATE_BEGIN_ARGS(SRallyHereEditorVendorRow) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, const TSharedRef<STableViewBase>& OwnerTable, TSharedPtr<FRHAPI_DevVendor> InVendor);
	void RemoveCachedLoot(const FGuid& LootId, TSharedPtr<FRHAPI_DevLoot> Loot);
	void UpdateCachedLoot(const FGuid& LootId, TSharedPtr<FRHAPI_DevLoot> Loot);

protected:
	FReply OnFetchLoot();
	//void OnFetchLootResponse(const TSandboxGetVendors::Response& Resp);
	void OnLootFilterTextChanged(const FText& SearchText);
	TSharedRef<ITableRow> MakeListViewLootWidget(TSharedPtr<FRHAPI_DevLoot> InItem, const TSharedRef<STableViewBase>& OwnerTable);

	FRH_OnLootUpdate OnDeleteLoot;
	FRH_OnLootUpdate OnUpdateLoot;

	TSharedPtr<SListView<TSharedPtr<FRHAPI_DevLoot>>> LootListView;
	TSharedPtr<FRHAPI_DevVendor> Vendor;
	FString LootFilter;
	TArray<TSharedPtr<FRHAPI_DevLoot>> CachedLoot;
};

class SRallyHereEditorLootRow : public STableRow<TSharedPtr<FRHAPI_DevLoot>>
{
	SLATE_BEGIN_ARGS(SRallyHereEditorLootRow) {}
	SLATE_END_ARGS()

	typedef RallyHereDeveloperAPI::Traits_SandboxUpdateLoot TSandboxUpdateLoot;
	typedef RallyHereDeveloperAPI::Traits_SandboxCreateLoot TSandboxCreateLoot;
	typedef RallyHereDeveloperAPI::Traits_SandboxDeleteSingleLoot TSandboxDeleteLoot;

	void Construct(const FArguments& InArgs, const TSharedRef<STableViewBase>& OwnerTable, TSharedPtr<FRHAPI_DevLoot> InLoot, FRH_OnLootUpdate& OnDeleteLootItemDelegate, FRH_OnLootUpdate& InLootItemUpdateDelegate);

protected:
	FString GetLootRowName();
	void HydrateLootUpdateRequest();

	bool GetSelectedAssetItemId(FGuid& Id) const;
	void OnBrowseToItemId(const FGuid& ItemId);

	void OnCustomDataUpdated();

	FReply OnRevertLoot();
	FReply OnUpdateLoot();
	FReply OnCreateLoot();
	FReply OnDeleteLoot();

	void OnCatalogUpdateLootResponse(const TSandboxUpdateLoot::Response& Resp);
	void OnCatalogCreateLootResponse(const TSandboxCreateLoot::Response& Resp);
	void OnCatalogDeleteLootResponse(const TSandboxDeleteLoot::Response& Resp);
	
	bool IsNewLoot;
	bool IsDirty;
	TSharedPtr<FRHAPI_DevLoot> Loot;
	FRHAPI_DevUpdateLootRequest LootUpdateRequest;

	FRH_OnLootUpdate OnLootUpdateDelegate;
	FRH_OnLootUpdate OnLootDeleteDelegate;

	TSharedPtr<SExpandableArea> LootExpandableArea;
	TSharedPtr<SHorizontalBox> LootDirtyBox;
	TSharedPtr<SRallyHereEditorCustomDataWidget> CustomData;

	TSharedPtr<STextBlock> NameText;
	TSharedPtr<STextBlock> DescriptionText;
	TSharedPtr<STextBlock> ItemIdText;
	TSharedPtr<STextBlock> RequiredItemIdText;
	TSharedPtr<STextBlock> QuantityMultiInventoryItemIdText;
};
