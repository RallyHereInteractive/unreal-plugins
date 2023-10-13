// Copyright Epic Games, Inc. All Rights Reserved.

#include "RallyHereEditorLootWidget.h"
#include "RallyHereDeveloperAPIAuthContext.h"
#include "Widgets/Input/SNumericEntryBox.h"
#include "Widgets/Layout/SExpandableArea.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Input/SButton.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "PropertyCustomizationHelpers.h"
#include "Engine/AssetManager.h"
#include "Misc/MessageDialog.h"
#include "RH_Common.h"
#include "RH_Properties.h"
#include "Engine/Engine.h"
#include "Editor.h"
#include "Dialogs/Dialogs.h"
#include "Dialog/SCustomDialog.h"
#include "RallyHereEditor.h"

#define LOCTEXT_NAMESPACE "RallyHereEditorLootWidget"

bool GetAuthContext(FDevAuthContextPtr& AuthContext)
{
	AuthContext = FModuleManager::Get().LoadModuleChecked<FRallyHereEditorModule>(FRallyHereEditorModule::GetModuleName()).GetAuthContext();

	if (!AuthContext->IsLoggedIn())
	{
		AuthContext->Refresh();
		return false;
	}

	return true;
}

SRallyHereEditorLootWidget::SRallyHereEditorLootWidget()
	: SCompoundWidget()
{
}

SRallyHereEditorLootWidget::~SRallyHereEditorLootWidget()
{
}

void SRallyHereEditorLootWidget::Construct(const FArguments& InArgs, const TSharedRef<SDockTab>& ConstructUnderMajorTab, const TSharedPtr<SWindow>& ConstructUnderWindow)
{
	VendorsListView = SNew(SListView<TSharedPtr<FRHAPI_DevVendor>>)
		.ListItemsSource(&CachedVendors)
		.OnGenerateRow(this, &SRallyHereEditorLootWidget::MakeListViewVendorWidget)
		.ScrollbarVisibility(EVisibility::Visible)
		.AllowOverscroll(EAllowOverscroll::No)
		.ConsumeMouseWheel(EConsumeMouseWheel::WhenScrollingPossible);
		
	TSharedRef<SEditableTextBox> EditableTextBox = SNew(SEditableTextBox)
		.OnTextChanged(this, &SRallyHereEditorLootWidget::OnVendorFilterTextChanged);

	ChildSlot
	[
		SNew(SVerticalBox)
		+SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SButton)
			.Text(LOCTEXT("FetchVendors", "Get/Refresh Vendors"))
			.OnClicked(this, &SRallyHereEditorLootWidget::OnFetchVendors)
		]
		+SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.AutoWidth()
			[
				SNew(STextBlock).Text(LOCTEXT("FilterVendors", "Filter Vendors: "))
			]
			+SHorizontalBox::Slot()
			.FillWidth(1.0f)
			[
				EditableTextBox
			]
		]
		+SVerticalBox::Slot()
		.FillHeight(1.0)
		[
			VendorsListView.ToSharedRef()
		]
	];
}

FReply SRallyHereEditorLootWidget::OnFetchVendors()
{
	auto Request = TSandboxGetVendors::Request();

	if (!GetAuthContext(Request.AuthContext))
	{
		return FReply::Handled();
	}

	auto* Settings = GetDefault<URH_DevIntegrationSettings>();
	const FRH_DevSandboxConfiguration* SandboxConfig = Settings->GetSandboxConfiguration(FRallyHereEditorModule::Get().GetSandboxId());
	FGuid::Parse(SandboxConfig->SandboxGuid, Request.SandboxId);

	if (!TSandboxGetVendors::DoCall(RH_DevAPIs::GetCatalogAPI(), Request, TSandboxGetVendors::Delegate::CreateRaw(this, &SRallyHereEditorLootWidget::OnFetchVendorsResponse)))
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("FetchVendorsError", "An Error occured when attempting to get vendors."));
	}
	return FReply::Handled();
}

void SRallyHereEditorLootWidget::OnFetchVendorsResponse(const TSandboxGetVendors::Response& Resp)
{
	CachedVendors.Empty();

	if (!Resp.IsSuccessful())
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("FetchVendorsError", "An Error occured when attempting to get vendors."));
		return;
	}

	if (const auto& Data = Resp.Content.GetDataOrNull())
	{
		if ((*Data).Num() == 0)
		{
			FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("FetchVendorsNoneFoundError", "No Vendors were found."));
		}

		for (const auto& Vendor : (*Data))
		{
			CachedVendors.Add(MakeShared<FRHAPI_DevVendor>(Vendor));
		}
	}
	else
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("FetchVendorsNoneFoundError", "No Vendors were found."));
	}

	VendorsListView->RequestListRefresh();
}

void SRallyHereEditorLootWidget::OnVendorFilterTextChanged(const FText& SearchText)
{
	VendorFilter = SearchText.ToString();
	VendorsListView->RebuildList();
}

TSharedRef<ITableRow> SRallyHereEditorLootWidget::MakeListViewVendorWidget(TSharedPtr<FRHAPI_DevVendor> InItem, const TSharedRef<STableViewBase>& OwnerTable)
{
	if (VendorFilter != "" && !InItem.Get()->GetVendorId().ToString().Contains(VendorFilter) && !InItem.Get()->GetName().Contains(VendorFilter))
	{
		return SNew(STableRow<TSharedPtr<FRHAPI_DevVendor>>, OwnerTable)
				[
					SNullWidget::NullWidget
				];
	}

	return SNew(SRallyHereEditorVendorRow, OwnerTable, InItem);
}

void SRallyHereEditorVendorRow::Construct(const FArguments& InArgs, const TSharedRef<STableViewBase>& OwnerTable, TSharedPtr<FRHAPI_DevVendor> InVendor)
{
	Vendor = InVendor;
	OnUpdateLoot.BindSP(this, &SRallyHereEditorVendorRow::UpdateCachedLoot);
	OnDeleteLoot.BindSP(this, &SRallyHereEditorVendorRow::RemoveCachedLoot);

	LootListView = SNew(SListView<TSharedPtr<FRHAPI_DevLoot>>)
		.ListItemsSource(&CachedLoot)
		.OnGenerateRow(this, &SRallyHereEditorVendorRow::MakeListViewLootWidget)
		.ScrollbarVisibility(EVisibility::Visible)
		.AllowOverscroll(EAllowOverscroll::No)
		.ConsumeMouseWheel(EConsumeMouseWheel::WhenScrollingPossible);

	TSharedRef<SEditableTextBox> EditableTextBox = SNew(SEditableTextBox)
		.OnTextChanged(this, &SRallyHereEditorVendorRow::OnLootFilterTextChanged);

	if (const auto& LootData = Vendor.Get()->GetLootOrNull())
	{
		for (const auto& Loot : (*LootData))
		{
			CachedLoot.Add(MakeShared<FRHAPI_DevLoot>(Loot));
		}
	}

	STableRow<TSharedPtr<FRHAPI_DevVendor>>::Construct(
		STableRow<TSharedPtr<FRHAPI_DevVendor>>::FArguments()
		.Content()
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.FillWidth(1.0f)
			.Padding(FMargin(0.0f, 2.0f, 0.0f, 2.0f))
			[
				SNew(SExpandableArea)
				.InitiallyCollapsed(true)
				.Padding(0.0f)
				.AreaTitle(FText::FromString(FString::Printf(TEXT("Vendor Id: (%s) - %s"), *InVendor.Get()->GetVendorId().ToString(EGuidFormats::DigitsWithHyphens), *InVendor.Get()->GetName())))
				.BodyContent()
				[
					SNew(SVerticalBox)
					+SVerticalBox::Slot()
					.AutoHeight()
					[
						SNew(SButton)
						.Text(LOCTEXT("FetchLoot", "Get/Refresh Loot"))
						.OnClicked(this, &SRallyHereEditorVendorRow::OnFetchLoot)
					]
					+SVerticalBox::Slot()
					.AutoHeight()
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						.AutoWidth()
						[
							SNew(STextBlock).Text(LOCTEXT("FilterLoot", "Filter Loot: "))
						]
						+SHorizontalBox::Slot()
						.FillWidth(1.0f)
						[
							EditableTextBox
						]
					]
					+SVerticalBox::Slot()
					.AutoHeight()
					[
						SNew(SButton)
						.Text(LOCTEXT("CreateNewLoot", "Create New Loot"))
						.OnClicked_Lambda([this]()
						{
							FRHAPI_DevLoot NewLoot;
							NewLoot.SetVendorId(Vendor.Get()->GetVendorId());
							CachedLoot.Insert(MakeShared<FRHAPI_DevLoot>(NewLoot), 0);
							LootListView->RebuildList();
							// Update the local vendor data as well So if we close and reopen the section it will have it cached.
							if (const auto& LootData = Vendor.Get()->GetLootOrNull())
							{
								(*LootData).Insert(NewLoot, 0);
							}
							return FReply::Handled();
						})
						.Visibility_Lambda([this]
						{
							for (const auto& Loot : CachedLoot)
							{
								if (!Loot.Get()->GetLootId().IsValid())
								{
									return EVisibility::Collapsed;
								}
							}
							return EVisibility::Visible;
						})
					]
					+SVerticalBox::Slot()
					.FillHeight(1.0)
					[
						LootListView.ToSharedRef()
					]
				]
			]
		]
		, OwnerTable);
}

FReply SRallyHereEditorVendorRow::OnFetchLoot()
{
	auto Request = TSandboxGetLoot::Request();

	if (!GetAuthContext(Request.AuthContext))
	{
		return FReply::Handled();
	}

	auto* Settings = GetDefault<URH_DevIntegrationSettings>();
	const FRH_DevSandboxConfiguration* SandboxConfig = Settings->GetSandboxConfiguration(FRallyHereEditorModule::Get().GetSandboxId());
	FGuid::Parse(SandboxConfig->SandboxGuid, Request.SandboxId);

	Request.VendorIds = { Vendor.Get()->GetVendorId() };

	if (!TSandboxGetLoot::DoCall(RH_DevAPIs::GetCatalogAPI(), Request, TSandboxGetLoot::Delegate::CreateRaw(this, &SRallyHereEditorVendorRow::OnFetchLootResponse)))
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("FetchLootError", "An Error occured when attempting to get loot."));
	}
	return FReply::Handled();
}

void SRallyHereEditorVendorRow::OnFetchLootResponse(const TSandboxGetLoot::Response& Resp)
{
	CachedLoot.Empty();

	if (!Resp.IsSuccessful())
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("FetchLootError", "An Error occured when attempting to get loot."));
		return;
	}

	if (const auto& Data = Resp.Content.GetDataOrNull())
	{
		if ((*Data).Num() == 0)
		{
			FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("FetchLootNoneFoundError", "No Loot was found."));
		}

		for (const auto& Loot : (*Data))
		{
			CachedLoot.Add(MakeShared<FRHAPI_DevLoot>(Loot));
		}
	}
	else
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("FetchLootNoneFoundError", "No Loot was found."));
	}

	LootListView->RebuildList();
}

void SRallyHereEditorVendorRow::OnLootFilterTextChanged(const FText& SearchText)
{
	LootFilter = SearchText.ToString();
	LootListView->RebuildList();
}

void SRallyHereEditorVendorRow::RemoveCachedLoot(const FGuid& LootId, TSharedPtr<FRHAPI_DevLoot> Loot)
{
	CachedLoot.Remove(Loot);
	if (const auto& LootData = Vendor.Get()->GetLootOrNull())
	{
		for (int32 i = 0; i < (*LootData).Num(); ++i)
		{
			if ((*LootData)[i].GetLootId() == LootId)
			{
				(*LootData).RemoveAt(i);
				break;
			}
		}
	}
	LootListView->RebuildList();
}

void SRallyHereEditorVendorRow::UpdateCachedLoot(const FGuid& LootId, TSharedPtr<FRHAPI_DevLoot> Loot)
{
	for (auto& LootEntry : CachedLoot)
	{
		if (LootEntry.Get()->GetLootId() == LootId)
		{
			LootEntry = Loot;
			break;
		}
	}

	if (const auto& LootData = Vendor.Get()->GetLootOrNull())
	{
		for (int32 i = 0; i < (*LootData).Num(); ++i)
		{
			if ((*LootData)[i].GetLootId() == LootId)
			{
				(*LootData)[i] = *Loot.Get();
				break;
			}
		}
	}
	LootListView->RebuildList();
}

TSharedRef<ITableRow> SRallyHereEditorVendorRow::MakeListViewLootWidget(TSharedPtr<FRHAPI_DevLoot> InItem, const TSharedRef<STableViewBase>& OwnerTable)
{
	if (!InItem.Get())
	{
		return SNew(STableRow<TSharedPtr<FRHAPI_DevVendor>>, OwnerTable)
			[
				SNullWidget::NullWidget
			];
	}

	if (LootFilter != "" && !InItem.Get()->GetLootId().ToString().Contains(LootFilter) && !InItem.Get()->GetName().Contains(LootFilter))
	{
		return SNew(STableRow<TSharedPtr<FRHAPI_DevVendor>>, OwnerTable)
			[
				SNullWidget::NullWidget
			];
	}

	return SNew(SRallyHereEditorLootRow, OwnerTable, InItem, OnDeleteLoot, OnUpdateLoot);
}

#define LOOT_BOOL(Variable, DisplayName, DefaultValue) \
	+SVerticalBox::Slot() \
	.AutoHeight() \
	[ \
		SNew(SHorizontalBox) \
		+SHorizontalBox::Slot() \
		.Padding(FMargin(0.0f, 2.0f, 0.0f, 2.0f)) \
		.AutoWidth() \
		[ \
			SNew(STextBlock).Text(LOCTEXT("LootProp" #Variable, #DisplayName ": ")) \
		] \
		+SHorizontalBox::Slot() \
		.AutoWidth() \
		[ \
			SNew(SCheckBox) \
			.IsChecked_Lambda([this] \
			{ \
				bool Value = LootUpdateRequest.Get##Variable(DefaultValue); \
				return Value ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; \
			}) \
			.OnCheckStateChanged_Lambda([this](ECheckBoxState NewState) \
			{ \
				LootUpdateRequest.Set##Variable(NewState == ECheckBoxState::Checked); \
				IsDirty = true; \
				LootDirtyBox.Get()->Invalidate(EInvalidateWidget::Visibility); \
			}) \
		] \
	]

#define LOOT_INTEGER(Variable, DisplayName, DefaultValue) \
	+SVerticalBox::Slot() \
	.Padding(FMargin(0.0f, 2.0f, 0.0f, 2.0f)) \
	.AutoHeight() \
	[ \
		SNew(SNumericEntryBox<int32>) \
		.MinValue(0) \
		.Value_Lambda([this] \
		{ \
			return LootUpdateRequest.Get##Variable(DefaultValue); \
		}) \
		.OnValueChanged(SNumericEntryBox<int32>::FOnValueChanged::CreateLambda([this](int32 Value) \
		{ \
			LootUpdateRequest.Set##Variable(Value); \
			IsDirty = true; \
			LootDirtyBox.Get()->Invalidate(EInvalidateWidget::Visibility); \
		})) \
		.LabelPadding(0) \
		.Label() \
		[ \
			SNumericEntryBox<int32>::BuildLabel(LOCTEXT("LootProp" #Variable, #DisplayName ": "), FLinearColor::White, FLinearColor::Transparent) \
		] \
	]

#define LOOT_ENUM(Variable, DisplayName, EnumName) \
	+SVerticalBox::Slot() \
	.AutoHeight() \
	[ \
		SNew(SHorizontalBox) \
		+SHorizontalBox::Slot() \
		.Padding(FMargin(0.0f, 2.0f, 0.0f, 2.0f)) \
		.AutoWidth() \
		[ \
			SNew(STextBlock).Text(LOCTEXT("LootProp" #Variable, #DisplayName ": ")) \
		] \
		+SHorizontalBox::Slot() \
		.AutoWidth() \
		[ \
			SNew(SComboButton) \
			.OnGetMenuContent_Lambda([this]() \
			{ \
				FMenuBuilder MenuBuilder(true, NULL); \
				UEnum* EnumType = FindObject<UEnum>(nullptr, TEXT("/Script/RallyHereDeveloperAPI." #EnumName), true); \
				int32 EnumCount = EnumType->NumEnums(); \
				for (int32 EnumIndex = 0; EnumIndex < EnumCount - 1; ++EnumIndex) \
				{ \
					FUIAction ItemAction(FExecuteAction::CreateLambda([this, EnumIndex]() \
					{ \
						IsDirty = true; \
						LootUpdateRequest.Set##Variable(EnumName(EnumIndex)); \
					})); \
					MenuBuilder.AddMenuEntry(EnumType->GetDisplayNameTextByIndex(EnumIndex), TAttribute<FText>(), FSlateIcon(), ItemAction); \
				} \
				return MenuBuilder.MakeWidget(); \
			}) \
			.ContentPadding(FMargin(2.0f, 2.0f)) \
			.ButtonContent() \
			[ \
				SNew(STextBlock) \
				.Text_Lambda([this] \
				{ \
					return FText::FromString(RH_GETENUMSTRING("/Script/RallyHereDeveloperAPI", "" #EnumName, LootUpdateRequest.Get##Variable())); \
				}) \
			] \
		] \
	]

#define LOOT_GUID_FROM_CONTENT(Variable, IdType, DisplayName, TextBlock) \
	+SVerticalBox::Slot() \
	.AutoHeight() \
	[ \
		SNew(SHorizontalBox) \
		+SHorizontalBox::Slot() \
		.Padding(FMargin(0.0f, 2.0f, 0.0f, 2.0f)) \
		.AutoWidth() \
		[ \
			SNew(STextBlock).Text(LOCTEXT("LootProp" #Variable, #DisplayName ": ")) \
		] \
		+SHorizontalBox::Slot() \
		.AutoWidth() \
		.VAlign(VAlign_Center) \
		[ \
			TextBlock.ToSharedRef() \
		] \
		+SHorizontalBox::Slot() \
		.AutoWidth() \
		.VAlign(VAlign_Center) \
		[ \
			PropertyCustomizationHelpers::MakeUseSelectedButton(FSimpleDelegate::CreateLambda([this] \
			{ \
				FGuid NewGuid; \
				if (GetSelectedAsset##IdType(NewGuid)) \
				{ \
					LootUpdateRequest.Set##Variable(NewGuid); \
				} \
				else \
				{ \
					LootUpdateRequest.Clear##Variable(); \
				} \
				IsDirty = true; \
				LootDirtyBox.Get()->Invalidate(EInvalidateWidget::Visibility); \
				TextBlock.Get()->SetText(FText::FromString(FString::Printf(TEXT("(%s)"), *LootUpdateRequest.Get##Variable(FGuid()).ToString(EGuidFormats::DigitsWithHyphens)))); \
			})) \
		] \
		+SHorizontalBox::Slot() \
		.AutoWidth() \
		.VAlign(VAlign_Center) \
		[ \
			PropertyCustomizationHelpers::MakeBrowseButton(FSimpleDelegate::CreateLambda([this] \
			{ \
				OnBrowseTo##IdType(LootUpdateRequest.Get##Variable()); \
			})) \
		] \
		+SHorizontalBox::Slot() \
		.AutoWidth() \
		.VAlign(VAlign_Center) \
		[ \
			PropertyCustomizationHelpers::MakeClearButton(FSimpleDelegate::CreateLambda([this] \
			{ \
				IsDirty = true; \
				LootUpdateRequest.Clear##Variable(); \
				TextBlock.Get()->SetText(FText::FromString(FString::Printf(TEXT("(%s)"), *LootUpdateRequest.Get##Variable(FGuid()).ToString(EGuidFormats::DigitsWithHyphens)))); \
			})) \
		] \
	] \

#define LOOT_STRING(Variable, DisplayName, DefaultValue) \
	+SVerticalBox::Slot() \
	.AutoHeight() \
	[ \
		SNew(SHorizontalBox) \
		+SHorizontalBox::Slot() \
		.Padding(FMargin(0.0f, 2.0f, 0.0f, 2.0f)) \
		.AutoWidth() \
		[ \
			SNew(STextBlock).Text(LOCTEXT("LootProp" #Variable, #DisplayName ": ")) \
		] \
		+SHorizontalBox::Slot() \
		.FillWidth(1.0) \
		[ \
			SNew(SEditableTextBox) \
			.Text_Lambda([this] \
			{ \
				return FText::FromString(LootUpdateRequest.Get##Variable(DefaultValue)); \
			}) \
			.OnTextCommitted_Lambda([this](const FText& InNewText, ETextCommit::Type InCommitType) \
			{ \
				LootUpdateRequest.Set##Variable(InNewText.ToString()); \
				IsDirty = true; \
				LootDirtyBox.Get()->Invalidate(EInvalidateWidget::Visibility); \
			}) \
		] \
	]

void SRallyHereEditorLootRow::Construct(const FArguments& InArgs, const TSharedRef<STableViewBase>& OwnerTable, TSharedPtr<FRHAPI_DevLoot> InLoot, FRH_OnLootUpdate& OnDeleteLootDelegate, FRH_OnLootUpdate& InLootUpdateDelegate)
{
	Loot = InLoot;
	IsNewLoot = !InLoot.Get()->GetLootId().IsValid();
	OnLootUpdateDelegate = InLootUpdateDelegate;
	OnLootDeleteDelegate = OnDeleteLootDelegate;
	HydrateLootUpdateRequest();

	ItemIdText = SNew(STextBlock).Text(FText::FromString(FString::Printf(TEXT("(%s)"), *InLoot.Get()->GetItemId().ToString(EGuidFormats::DigitsWithHyphens))));
	RequiredItemIdText = SNew(STextBlock).Text(FText::FromString(FString::Printf(TEXT("(%s)"), *InLoot.Get()->GetRequiredItemId(FGuid()).ToString(EGuidFormats::DigitsWithHyphens))));
	QuantityMultiInventoryItemIdText = SNew(STextBlock).Text(FText::FromString(FString::Printf(TEXT("(%s)"), *Loot.Get()->GetQuantityMultiInventoryItemId(FGuid()).ToString(EGuidFormats::DigitsWithHyphens))));
	NameText = SNew(STextBlock).Text(FText::FromString(FString::Printf(TEXT("%s"), *Loot.Get()->GetName(""))));
	DescriptionText = SNew(STextBlock).Text(FText::FromString(FString::Printf(TEXT("%s"), *Loot.Get()->GetDescription(""))));

	CustomData = SNew(SRallyHereEditorCustomDataWidget);
	CustomData.Get()->SetCustomData(Loot.Get()->GetCustomData());
	CustomData.Get()->OnCustomDataUpdated.BindRaw(this, &SRallyHereEditorLootRow::OnCustomDataUpdated);

	if (IsNewLoot)
	{
		LootDirtyBox = SNew(SHorizontalBox)
				.Visibility_Lambda([this]()
				{
					return IsDirty ? EVisibility::Visible : EVisibility::Collapsed;
				})
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(SButton)
					.Text(LOCTEXT("ClearNewLoot", "Reset To Default"))
					.OnClicked(this, &SRallyHereEditorLootRow::OnRevertLoot)
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(SButton)
					.Text(LOCTEXT("CreateNewLoot", "Create Loot"))
					.OnClicked(this, &SRallyHereEditorLootRow::OnCreateLoot)
				];
	}
	else
	{
		LootDirtyBox = SNew(SHorizontalBox)
				.Visibility_Lambda([this]()
				{
					return IsDirty ? EVisibility::Visible : EVisibility::Collapsed;
				})
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(SButton)
					.Text(LOCTEXT("RevertChanges", "Revert Changes"))
					.OnClicked(this, &SRallyHereEditorLootRow::OnRevertLoot)
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(SButton)
					.Text(LOCTEXT("SaveChanges", "Save Changes"))
					.OnClicked(this, &SRallyHereEditorLootRow::OnUpdateLoot)
				];
	}

	FText AreaTitle = !IsNewLoot ?
		FText::FromString(FString::Printf(TEXT("Loot Id: (%s) - %s"), *InLoot.Get()->GetLootId().ToString(EGuidFormats::DigitsWithHyphens), *GetLootRowName())) :
		LOCTEXT("CreateNewTitle", "New Loot");

	LootExpandableArea = SNew(SExpandableArea)
				.InitiallyCollapsed(!IsNewLoot)
				.AreaTitle(AreaTitle)
				.BodyContent()
				[
					SNew(SVerticalBox)
					+SVerticalBox::Slot()
					.AutoHeight()
					[
						LootDirtyBox.ToSharedRef()
					]
					LOOT_STRING(Name, Name, "")
					LOOT_STRING(Description, Description, "")
					LOOT_GUID_FROM_CONTENT(ItemId, ItemId, Item Id, ItemIdText)
					// #RHTODO: Let this pull from a list of all vendor ids, or make a searchable list in editor for this
					+SVerticalBox::Slot()
					.Padding(FMargin(0.0f, 2.0f, 0.0f, 2.0f))
					.AutoHeight()
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						.Padding(FMargin(0.0f, 2.0f, 0.0f, 2.0f))
						.AutoWidth()
						[
							SNew(STextBlock).Text(LOCTEXT("LootPropSubVendorId", "Sub Vendor Id: "))
						]
						+SHorizontalBox::Slot()
						.AutoWidth()
						[
							SNew(SEditableTextBox)
							.Text_Lambda([this]
							{
								return FText::FromString(LootUpdateRequest.GetSubVendorId(FGuid()).ToString(EGuidFormats::DigitsWithHyphens));
							})
							.OnTextCommitted_Lambda([this](const FText& InNewText, ETextCommit::Type InCommitType)
							{
								FGuid InValue;
								FGuid::Parse(InNewText.ToString(), InValue);
								LootUpdateRequest.SetSubVendorId(InValue);
								IsDirty = true;
								LootDirtyBox.Get()->Invalidate(EInvalidateWidget::Visibility);
							})
						]
					]
					LOOT_BOOL(Active, Active, false)
					LOOT_INTEGER(Quantity, Quantity, 1)
					LOOT_ENUM(QuantityType, Quantity Type, ERHAPI_DevQuantityType)
					LOOT_ENUM(InventorySelectorType, Inv Selector Type, ERHAPI_DevInventorySelector)
					// #RHTODO: Improve this to a dropdown of valid timeframe guids
					+SVerticalBox::Slot()
					.Padding(FMargin(0.0f, 2.0f, 0.0f, 2.0f))
					.AutoHeight()
					[
						SNew(SHorizontalBox)
						.Visibility_Lambda([this]
						{
							return LootUpdateRequest.GetInventorySelectorType() == ERHAPI_DevInventorySelector::RentTimeframeLocked ? EVisibility::Visible : EVisibility::Collapsed;
						})
						+SHorizontalBox::Slot()
						.Padding(FMargin(0.0f, 2.0f, 0.0f, 2.0f))
						.AutoWidth()
						[
							SNew(STextBlock).Text(LOCTEXT("LootPropTimeFrameId", "Time Frame Id: "))
						]
						+SHorizontalBox::Slot()
						.AutoWidth()
						[
							SNew(SEditableTextBox)
							.Text_Lambda([this]
							{
								return FText::FromString(LootUpdateRequest.GetTimeFrameId(FGuid()).ToString(EGuidFormats::DigitsWithHyphens));
							})
							.OnTextCommitted_Lambda([this](const FText& InNewText, ETextCommit::Type InCommitType)
							{
								FGuid InValue;
								FGuid::Parse(InNewText.ToString(), InValue);
								LootUpdateRequest.SetTimeFrameId(InValue);
								IsDirty = true;
								LootDirtyBox.Get()->Invalidate(EInvalidateWidget::Visibility);
							})
						]
					]
					LOOT_ENUM(InventoryOperation, Inv Operation, ERHAPI_DevInventoryOperation)
					LOOT_INTEGER(SortOrder, Sort Order, 0)
					LOOT_ENUM(UseInventoryBucket, Use Inventory Bucket, ERHAPI_DevInventoryBucket)
					LOOT_BOOL(IsClaimableByClient, Is Claimable By Client, false)
					LOOT_INTEGER(DropWeight, Drop Weight, 0)
					LOOT_BOOL(AllowPartialBundles, Allow Partial Bundles, true)
					LOOT_BOOL(FillInNewOrder, Fill In New Orders, false)
					LOOT_INTEGER(StackLimit, Stack Limit, 0)
					LOOT_INTEGER(HardQuantityMaximum, Hard Quantity Maximum, 0)
					LOOT_GUID_FROM_CONTENT(QuantityMultiInventoryItemId, ItemId, Quantity Multi Inventory Item Id, QuantityMultiInventoryItemIdText)
					LOOT_GUID_FROM_CONTENT(RequiredItemId, ItemId, Required Item Id, RequiredItemIdText)
					// #RHTODO: Make macro take visibility rules for a field
					LOOT_INTEGER(RequiredItemCount, Required Item Count, 0)
					LOOT_ENUM(XpQuantityTransformType, Xp Quantity Transform Type, ERHAPI_DevXpQuantityTransform)
					// #RHTODO: Improve this to a dropdown of valid pricepoint guids
					+SVerticalBox::Slot()
					.Padding(FMargin(0.0f, 2.0f, 0.0f, 2.0f))
					.AutoHeight()
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						.Padding(FMargin(0.0f, 2.0f, 0.0f, 2.0f))
						.AutoWidth()
						[
							SNew(STextBlock).Text(LOCTEXT("LootPropCurrentPricePointId", "Current Price Point Id: "))
						]
						+SHorizontalBox::Slot()
						.AutoWidth()
						[
							SNew(SEditableTextBox)
							.Text_Lambda([this]
							{
								return FText::FromString(LootUpdateRequest.GetCurrentPricePointId(FGuid()).ToString(EGuidFormats::DigitsWithHyphens));
							})
							.OnTextCommitted_Lambda([this](const FText& InNewText, ETextCommit::Type InCommitType)
							{
								FGuid InValue;
								FGuid::Parse(InNewText.ToString(), InValue);
								LootUpdateRequest.SetCurrentPricePointId(InValue);
								IsDirty = true;
								LootDirtyBox.Get()->Invalidate(EInvalidateWidget::Visibility);
							})
						]
					]
					+SVerticalBox::Slot()
					.Padding(FMargin(0.0f, 2.0f, 0.0f, 2.0f))
					.AutoHeight()
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						.Padding(FMargin(0.0f, 2.0f, 0.0f, 2.0f))
						.AutoWidth()
						[
							SNew(STextBlock).Text(LOCTEXT("LootPropPreSalePricePointId", "Pre Sale Price Point Id: "))
						]
						+SHorizontalBox::Slot()
						.AutoWidth()
						[
							SNew(SEditableTextBox)
							.Text_Lambda([this]
							{
								return FText::FromString(LootUpdateRequest.GetPreSalePricePointId(FGuid()).ToString(EGuidFormats::DigitsWithHyphens));
							})
							.OnTextCommitted_Lambda([this](const FText& InNewText, ETextCommit::Type InCommitType)
							{
								FGuid InValue;
								FGuid::Parse(InNewText.ToString(), InValue);
								LootUpdateRequest.SetPreSalePricePointId(InValue);
								IsDirty = true;
								LootDirtyBox.Get()->Invalidate(EInvalidateWidget::Visibility);
							})
						]
					]
					+SVerticalBox::Slot()
					.Padding(FMargin(0.0f, 2.0f, 0.0f, 2.0f))
					.AutoHeight()
					[
						CustomData.ToSharedRef()
					]
					+SVerticalBox::Slot()
					.Padding(FMargin(0.0f, 2.0f, 0.0f, 2.0f))
					.AutoHeight()
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						.AutoWidth()
						[
							SNew(SButton)
							.Visibility_Lambda([this]
							{
								return IsNewLoot ? EVisibility::Visible : EVisibility::Collapsed;
								})
							.Text(LOCTEXT("CancelLootCreation", "Cancel New Loot"))
							.OnClicked_Lambda([this]()
								{
									OnLootDeleteDelegate.ExecuteIfBound(Loot.Get()->GetLootId(), Loot);
									return FReply::Handled();
								})
						]
						+SHorizontalBox::Slot()
						.AutoWidth()
						[
							SNew(SButton)
							.Visibility_Lambda([this]
								{
									return !IsNewLoot ? EVisibility::Visible : EVisibility::Collapsed;
								})
							.Text(LOCTEXT("DeleteLootItem", "Delete Loot"))
							.OnClicked(this, &SRallyHereEditorLootRow::OnDeleteLoot)
						]
					]
				];

	STableRow<TSharedPtr<FRHAPI_DevLoot>>::Construct(
		STableRow<TSharedPtr<FRHAPI_DevLoot>>::FArguments()
		.Content()
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.FillWidth(1.0f)
			.Padding(FMargin(20.0f, 2.0f, 0.0f, 2.0f))
			[
				LootExpandableArea.ToSharedRef()
			]
		]
		, OwnerTable);
}

#define COPY_OPTIONAL_VALUE(PropertyName, Source, Target) \
	if (const auto Value = Source.Get##PropertyName##OrNull()) \
	{ \
		Target.Set##PropertyName(*Value); \
	} \
	else \
	{ \
		Target.Clear##PropertyName(); \
	}

#define COPY_OPTIONAL_VALUE_WITH_DEFAULT(PropertyName, Source, Target, DefaultValue) \
	if (const auto Value = Source.Get##PropertyName##OrNull()) \
	{ \
		Target.Set##PropertyName(*Value); \
	} \
	else \
	{ \
		Target.Set##PropertyName(DefaultValue); \
	}

void SRallyHereEditorLootRow::HydrateLootUpdateRequest()
{
	IsDirty = false;

	COPY_OPTIONAL_VALUE(CustomData, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(Name, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(Description, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(ItemId, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(SubVendorId, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(Quantity, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(Active, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(SortOrder, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(DropWeight, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(FillInNewOrder, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(AllowPartialBundles, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(RequiredItemId, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(RequiredItemCount, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(StackLimit, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(QuantityType, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(QuantityMultiInventoryItemId, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(IsClaimableByClient, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(TimeFrameId, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(UseInventoryBucket, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(XpQuantityTransformType, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(CurrentPricePointId, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(PreSalePricePointId, (*Loot), LootUpdateRequest)
	COPY_OPTIONAL_VALUE(HardQuantityMaximum, (*Loot), LootUpdateRequest)
	LootUpdateRequest.SetInventorySelectorType(Loot.Get()->GetInventorySelectorType());
	LootUpdateRequest.SetInventoryOperation(Loot.Get()->GetInventoryOperation());
	LootUpdateRequest.SetVendorId(Loot.Get()->GetVendorId());
}

FReply SRallyHereEditorLootRow::OnRevertLoot()
{
	HydrateLootUpdateRequest();
	ItemIdText.Get()->SetText(FText::FromString(FString::Printf(TEXT("(%s)"), *Loot.Get()->GetLootId().ToString(EGuidFormats::DigitsWithHyphens))));
	RequiredItemIdText.Get()->SetText(FText::FromString(FString::Printf(TEXT("(%s)"), *Loot.Get()->GetRequiredItemId(FGuid()).ToString(EGuidFormats::DigitsWithHyphens))));
	QuantityMultiInventoryItemIdText.Get()->SetText(FText::FromString(FString::Printf(TEXT("(%s)"), *Loot.Get()->GetQuantityMultiInventoryItemId(FGuid()).ToString(EGuidFormats::DigitsWithHyphens))));
	NameText.Get()->SetText(FText::FromString(FString::Printf(TEXT("%s"), *Loot.Get()->GetName(""))));
	DescriptionText.Get()->SetText(FText::FromString(FString::Printf(TEXT("%s"), *Loot.Get()->GetDescription(""))));
	LootDirtyBox.Get()->Invalidate(EInvalidateWidget::Visibility);
	CustomData.Get()->SetCustomData(Loot.Get()->GetCustomData());
	return FReply::Handled();
}

void SRallyHereEditorLootRow::OnCustomDataUpdated()
{
	LootUpdateRequest.SetCustomData(CustomData.Get()->GetCustomData());
	IsDirty = true;
	LootDirtyBox.Get()->Invalidate(EInvalidateWidget::Visibility);
}

FReply SRallyHereEditorLootRow::OnUpdateLoot()
{
	auto Request = TSandboxUpdateLoot::Request();

	if (!GetAuthContext(Request.AuthContext))
	{
		return FReply::Handled();
	}

	auto* Settings = GetDefault<URH_DevIntegrationSettings>();
	const FRH_DevSandboxConfiguration* SandboxConfig = Settings->GetSandboxConfiguration(FRallyHereEditorModule::Get().GetSandboxId());
	FGuid::Parse(SandboxConfig->SandboxGuid, Request.SandboxId);

	// If the Loot Reuqest Type is not Timeframe locked rental clear out our timeframe ID if one is set before submitting
	if (LootUpdateRequest.GetInventorySelectorType() != ERHAPI_DevInventorySelector::RentTimeframeLocked)
	{
		LootUpdateRequest.ClearTimeFrameId();
	}

	Request.LootId = Loot.Get()->GetLootId();
	Request.UpdateLootRequest = LootUpdateRequest;

	if (!TSandboxUpdateLoot::DoCall(RH_DevAPIs::GetCatalogAPI(), Request, TSandboxUpdateLoot::Delegate::CreateRaw(this, &SRallyHereEditorLootRow::OnCatalogUpdateLootResponse)))
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("UpdateLootError", "An Error occured when attempting to update the loot."));
	}

	return FReply::Handled();
}

void SRallyHereEditorLootRow::OnCatalogUpdateLootResponse(const TSandboxUpdateLoot::Response& Resp)
{
	if (Resp.IsSuccessful())
	{
		Loot = MakeShared<FRHAPI_DevLoot>(Resp.Content);
		HydrateLootUpdateRequest();
		LootDirtyBox.Get()->Invalidate(EInvalidateWidget::Visibility);
		OnLootUpdateDelegate.ExecuteIfBound(Loot->GetLootId(), Loot);
	}
	else
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("UpdateLootError", "An Error occured when attempting to update the loot."));
	}
}

FReply SRallyHereEditorLootRow::OnCreateLoot()
{
	auto Request = TSandboxCreateLoot::Request();

	if (!GetAuthContext(Request.AuthContext))
	{
		return FReply::Handled();
	}

	auto* Settings = GetDefault<URH_DevIntegrationSettings>();
	const FRH_DevSandboxConfiguration* SandboxConfig = Settings->GetSandboxConfiguration(FRallyHereEditorModule::Get().GetSandboxId());
	FGuid::Parse(SandboxConfig->SandboxGuid, Request.SandboxId);

	// If the Loot Reuqest Type is not Timeframe locked rental clear out our timeframe ID if one is set before submitting
	if (LootUpdateRequest.GetInventorySelectorType() != ERHAPI_DevInventorySelector::RentTimeframeLocked)
	{
		LootUpdateRequest.ClearTimeFrameId();
	}

	FRHAPI_DevCreateLootRequest CreateLootRequest;

	COPY_OPTIONAL_VALUE(CustomData, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(Name, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(Description, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(ItemId, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(SubVendorId, LootUpdateRequest, CreateLootRequest)
	// Override the default to 1 in quantity from 0 for ease of use.
	COPY_OPTIONAL_VALUE_WITH_DEFAULT(Quantity, LootUpdateRequest, CreateLootRequest, 1)
	COPY_OPTIONAL_VALUE(Active, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(SortOrder, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(DropWeight, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(FillInNewOrder, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(AllowPartialBundles, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(RequiredItemId, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(RequiredItemCount, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(StackLimit, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(QuantityType, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(QuantityMultiInventoryItemId, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(IsClaimableByClient, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(TimeFrameId, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(UseInventoryBucket, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(XpQuantityTransformType, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(CurrentPricePointId, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(PreSalePricePointId, LootUpdateRequest, CreateLootRequest)
	COPY_OPTIONAL_VALUE(HardQuantityMaximum, LootUpdateRequest, CreateLootRequest)
	CreateLootRequest.SetVendorId(Loot.Get()->GetVendorId());
	CreateLootRequest.SetInventorySelectorType(LootUpdateRequest.GetInventorySelectorType());
	CreateLootRequest.SetInventoryOperation(LootUpdateRequest.GetInventoryOperation());

	TArray<FRHAPI_DevCreateLootRequest> CreateCollection;
	CreateCollection.Add(CreateLootRequest);
	Request.CreateLootCollection.SetData(CreateCollection);

	if (!TSandboxCreateLoot::DoCall(RH_DevAPIs::GetCatalogAPI(), Request, TSandboxCreateLoot::Delegate::CreateRaw(this, &SRallyHereEditorLootRow::OnCatalogCreateLootResponse)))
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("CreateLootError", "An Error occured when attempting to create the loot."));
	}

	return FReply::Handled();
}

void SRallyHereEditorLootRow::OnCatalogCreateLootResponse(const TSandboxCreateLoot::Response& Resp)
{
	if (Resp.IsSuccessful() && Resp.Content.Num())
	{
		Loot = MakeShared<FRHAPI_DevLoot>(Resp.Content[0]);
		HydrateLootUpdateRequest();
		LootDirtyBox.Get()->Invalidate(EInvalidateWidget::Visibility);
		// Update based on old unset loot guid with new loot data
		OnLootUpdateDelegate.ExecuteIfBound(FGuid(), Loot);
	}
	else
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("CreateLootError", "An Error occured when attempting to create the loot."));
	}
}

FReply SRallyHereEditorLootRow::OnDeleteLoot()
{
	TSharedRef<SCustomDialog> CreateDialog = SNew(SCustomDialog)
		.Title(FText(LOCTEXT("ConfirmDeleteLoot", "Delete Loot")))
		.Content()
		[
			SNew(SVerticalBox)
			+SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(STextBlock)
				.Text(LOCTEXT("ConfirmDeletePrompt", "Confirm the deletion of the loot"))
			]
		]
		.Buttons({
			SCustomDialog::FButton(LOCTEXT("Confirm", "Confirm")),
			SCustomDialog::FButton(LOCTEXT("Cancel", "Cancel"))
		});

	if (CreateDialog->ShowModal() == 0)
	{
		auto Request = TSandboxDeleteLoot::Request();

		if (!GetAuthContext(Request.AuthContext))
		{
			return FReply::Handled();
		}

		auto* Settings = GetDefault<URH_DevIntegrationSettings>();
		const FRH_DevSandboxConfiguration* SandboxConfig = Settings->GetSandboxConfiguration(FRallyHereEditorModule::Get().GetSandboxId());
		FGuid::Parse(SandboxConfig->SandboxGuid, Request.SandboxId);

		Request.LootId = Loot.Get()->GetLootId();

		if (!TSandboxDeleteLoot::DoCall(RH_DevAPIs::GetCatalogAPI(), Request, TSandboxDeleteLoot::Delegate::CreateRaw(this, &SRallyHereEditorLootRow::OnCatalogDeleteLootResponse)))
		{
			FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("DeleteLootError", "An Error occured when attempting to delete the loot."));
		}
	}

	return FReply::Handled();
}

void SRallyHereEditorLootRow::OnCatalogDeleteLootResponse(const TSandboxDeleteLoot::Response& Resp)
{
	if (Resp.IsSuccessful())
	{
		OnLootDeleteDelegate.ExecuteIfBound(Loot.Get()->GetLootId(), Loot);
	}
	else
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("DeleteLootError", "An Error occured when attempting to delete the loot."));
	}
}

FString SRallyHereEditorLootRow::GetLootRowName()
{
	FString RowName = "";

	FGuid Id;

	if (LootUpdateRequest.GetItemId(Id))
	{
		RowName += "Item: (" + Id.ToString(EGuidFormats::DigitsWithHyphens) + ") ";
	}
	
	if (LootUpdateRequest.GetSubVendorId(Id))
	{
		RowName += "SubVendor: (" + Id.ToString(EGuidFormats::DigitsWithHyphens) + ")";
	}

	return RowName;
}

void SRallyHereEditorLootRow::OnBrowseToItemId(const FGuid& ItemId)
{
	// This searches all registered assets with the asset manager for any assets whose data has a member named based on the ItemIdPropertyName setting that is marked Asset Registry Searchable.
	static const FName nmItemId(TEXT("ItemId"));
	if (ItemId.IsValid())
	{
		// Search for item id in asset manager
		UAssetManager& AssetManager = UAssetManager::Get();
		TArray<FSoftObjectPath> AssetArray;

		TArray<FPrimaryAssetTypeInfo> TypeList;
		AssetManager.GetPrimaryAssetTypeInfoList(TypeList);

		for (const FPrimaryAssetTypeInfo& TypeInfo : TypeList)
		{
			AssetManager.GetPrimaryAssetPathList(TypeInfo.PrimaryAssetType, AssetArray);
		}

		auto* Settings = GetDefault<URH_DevIntegrationSettings>();
		
		FAssetData AssetData;
		for (const FSoftObjectPath& Path : AssetArray)
		{
			if (AssetManager.GetAssetDataForPath(Path, AssetData))
			{
				FString ItemIdAsString;
				if (AssetData.GetTagValue(Settings->ItemIdPropertyName, ItemIdAsString))
				{
					if (ItemIdAsString.Contains("Id="))
					{
						int32 GuidIndex = ItemIdAsString.Find("Id=");
						FString GuidAsString = ItemIdAsString.RightChop(GuidIndex + 3).Left(32);
						FGuid AssetItemId;
						FGuid::Parse(GuidAsString, AssetItemId);

						if (ItemId == AssetItemId)
						{
							TArray<FAssetData> SyncAssets;
							SyncAssets.Add(AssetData);
							GEditor->SyncBrowserToObjects(SyncAssets);
							return;
						}
					}
				}
			}
		}
	}

	FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("BrowseToAssetError", "Could not find an asset that matched this item id."));
}

bool SRallyHereEditorLootRow::GetSelectedAssetItemId(FGuid& Id) const
{
	auto* Settings = GetDefault<URH_DevIntegrationSettings>();
	TArray<FAssetData> SelectedAssets;
	GEditor->GetContentBrowserSelections(SelectedAssets);

	for (const FAssetData& AssetData : SelectedAssets)
	{
		FString ItemIdAsString;
		if (AssetData.GetTagValue(Settings->ItemIdPropertyName, ItemIdAsString))
		{
			if (ItemIdAsString.Contains("Id="))
			{
				int32 GuidIndex = ItemIdAsString.Find("Id=");
				FString GuidAsString = ItemIdAsString.RightChop(GuidIndex + 3).Left(32);
				FGuid::Parse(GuidAsString, Id);
				return true;
			}
		}
	}

	return false;
}
#undef LOCTEXT_NAMESPACE