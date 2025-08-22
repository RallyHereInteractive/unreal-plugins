// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RallyHereEditor.h"
#include "RallyHereEditorCustomizations.h"

#include "IPropertyUtilities.h"
#include "Misc/MessageDialog.h"
#include "Dialog/SCustomDialog.h"
#include "ScopedTransaction.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "PropertyHandle.h"
#include "PropertyCustomizationHelpers.h"
#include "Engine/AssetManager.h" //$$ MUL - Fix bug/id validation/handling loot id
#include "Widgets/Input/SNumericEntryBox.h"

#define LOCTEXT_NAMESPACE "RallyHereEditorCustomization"

static const FName DeepLinkConfigurationName("Configuration Deep Link"); //$$ MUL - Add configuration deep link check

void FRH_RHLegacyIdToGuidCustomization::CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	uint32 NumChildren;
	StructPropertyHandle->GetNumChildren(NumChildren);

	const FSimpleDelegate OnValueChanged = FSimpleDelegate::CreateLambda([&StructCustomizationUtils]()
		{
			StructCustomizationUtils.GetPropertyUtilities()->ForceRefresh();
		});

	for (uint32 ChildIndex = 0; ChildIndex < NumChildren; ++ChildIndex)
	{
		const TSharedRef< IPropertyHandle > ChildHandle = StructPropertyHandle->GetChildHandle(ChildIndex).ToSharedRef();

		if (ChildHandle->GetProperty()->GetName() == TEXT("Id"))
		{
			IdPropertyHandle = ChildHandle; //$$ MUL - Fix bug/id validation/handling loot id
		}

		if (ChildHandle->GetProperty()->GetName() == TEXT("LegacyId"))
		{
			LegacyIdPropertyHandle = ChildHandle;
			ChildHandle->SetOnPropertyValueChanged(OnValueChanged);
		}
	}

	check(IdPropertyHandle.IsValid());
	check(LegacyIdPropertyHandle.IsValid());

	//$$ MUL - Begin: Add configuration deep link check
	const FName CategoryName = StructPropertyHandle->GetDefaultCategoryName();
	IsDeepLinkConfig = CategoryName.IsEqual(DeepLinkConfigurationName);
	//$$ MUL - End

	FText Name;

	TArray<void*> RawData;
	IdPropertyHandle->AccessRawData(RawData);

	FGuid Id = GetCurrentId(); //$$ MUL - Fix bug/id validation/handling loot id

	int32 LegacyId = 0;
	LegacyIdPropertyHandle.Get()->GetValue(LegacyId);

	TSharedRef<SHorizontalBox> ButtonArray = SNew(SHorizontalBox);
	const FText& IdType = GetIdType(); //$$ MUL - Fix bug/id validation/handling loot id

	if (!Id.IsValid())
	{
		ButtonArray->AddSlot()
			.AutoWidth()
			[
				SNew(SButton)
				.Text(LOCTEXT("CreateIdButton", "Create")) //$$ MUL - Fix bug/id validation/handling loot id
				.OnClicked(this, &FRH_RHLegacyIdToGuidCustomization::OnGenerateIdClicked)
			];
	}

	ButtonArray->AddSlot()
	.AutoWidth()
	[
		SNew(SButton)
		.Text(LOCTEXT("SetIdButton", "Set")) //$$ MUL - Fix bug/id validation/handling loot id
		.OnClicked(this, &FRH_RHLegacyIdToGuidCustomization::OnEditManuallyClicked)
	];

	//$$ MUL - Begin: Added get info and set loot's active
	ButtonArray->AddSlot()
	.AutoWidth()
	[
		SNew(SButton)
		.Text(LOCTEXT("GetInfoButton", "Get Info"))
		.OnClicked(this, &FRH_RHLegacyIdToGuidCustomization::OnGetInfoClicked)
		.Visibility_Lambda([this]
		{
			const FGuid CurrentId = GetCurrentId();
			return !RallyHereName.IsSet() && !IsActive.IsSet() && CurrentId.IsValid() ? EVisibility::Visible : EVisibility::Collapsed;
		})
	];
	//$$ MUL - End

	HeaderRow.NameContent()
		[
			StructPropertyHandle->CreatePropertyNameWidget()
		]
	.ValueContent()
		[
			SNew(SVerticalBox)
			+SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(FText::Format(LOCTEXT("Id", "{0} Id:"),IdType)) //$$ MUL - Fix bug/id validation/handling loot id
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(FText::FromString(FString::Printf(L"%s", *Id.ToString(EGuidFormats::DigitsWithHyphensLower))))
				]
			]
			+SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(FText::Format(LOCTEXT("LegacyId", "Legacy {0} Id:"), IdType)) //$$ MUL - Fix bug/id validation/handling loot id
					
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(FText::FromString(FString::Printf(L"%d", LegacyId)))
				]
			]
			//$$ MUL - Begin: Added get info and set loot's active
			+SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(FText::Format(LOCTEXT("Name", "{0} Name:"), IdType))
					.Visibility_Lambda([this]{return RallyHereName.IsSet() ? EVisibility::Visible : EVisibility::Collapsed;})
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text_Lambda([this]{ return RallyHereName.IsSet() ? FText::FromString(RallyHereName.GetValue()) : FText();})
					.Visibility_Lambda([this]{return RallyHereName.IsSet() ? EVisibility::Visible : EVisibility::Collapsed;})
				]
			]
			+SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(FText::Format(LOCTEXT("Active", "{0} Active: "), IdType))
					.Visibility_Lambda([this]{return IsActive.IsSet() ? EVisibility::Visible : EVisibility::Collapsed;})
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(SCheckBox)
					.IsChecked_Lambda([this]{ return IsActive.IsSet() && IsActive.GetValue() ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
					.Visibility_Lambda([this]{ return IsActive.IsSet() ? EVisibility::Visible : EVisibility::Collapsed; })
					.OnCheckStateChanged(this, &FRH_RHLegacyIdToGuidCustomization::OnSetActiveClicked)
				]
			]
			//$$ MUL - End
			+SVerticalBox::Slot()
			.AutoHeight()
			[
				ButtonArray
			]

		];
}


FReply FRH_RHItemIdCustomization::OnGenerateIdClicked()
{
	//$$ MUL - Removed login check here

	TSharedRef<SEditableTextBox> EditableTextBox = SNew(SEditableTextBox);

	TSharedRef<SCustomDialog> CreateDialog = SNew(SCustomDialog)
		.Title(FText(LOCTEXT("CreateItem", "Create Item Id")))
		.Content()
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("CreateItemPrompt", "Input a FriendlyName (Developer Facing Only) for this item to be displayed in the Dev Portal"))
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			EditableTextBox
		]
		]
	.Buttons({
	SCustomDialog::FButton(LOCTEXT("Create", "Create")),
	SCustomDialog::FButton(LOCTEXT("Cancel", "Cancel"))
		});

	if (CreateDialog->ShowModal() == 0)
	{
		OnFriendlyNameSubmitted(EditableTextBox->GetText().ToString());
	}

	return FReply::Handled();
}

//$$ MUL - Fix bug/id validation/handling loot id
FReply FRH_RHItemIdCustomization::OnEditManuallyClicked()
{
	//$$ MUL - Begin: Added setting id with Legacy Id
	TSharedRef<SEditableTextBox> EditableTextBoxGuid = SNew(SEditableTextBox);
	uint64 LegacyId = 0;
	TSharedRef<SNumericEntryBox<uint32>> NumericEntryBoxLegacyId = SNew(SNumericEntryBox<uint32>)
		.OnValueChanged_Lambda([&LegacyId](uint32 NewValue) { LegacyId = NewValue; })
		.Value_Lambda([&LegacyId]{return LegacyId;})
		.MaxValue(MAX_uint32);
	
	TSharedRef<SCustomDialog> CreateDialog = SNew(SCustomDialog)
		.Title(FText(LOCTEXT("SetItemId", "Set Item Id")))
		.Content()
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(STextBlock)
				.Text(LOCTEXT("SetItemIdPrompt", "Input the Specific Item Id for this item"))
			]
			+ SVerticalBox::Slot()
			.Padding(0,3,0,0)
			.AutoHeight()
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(FText::FromString("Guid: "))
				]
				+SHorizontalBox::Slot()
				.FillWidth(1)
				[
					EditableTextBoxGuid
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(FText::FromString("LegacyId: "))
				]
				+SHorizontalBox::Slot()
				.FillWidth(1)
				[
					NumericEntryBoxLegacyId
				]
			]
		]
	.Buttons({
	SCustomDialog::FButton(LOCTEXT("Set", "Set")),
	SCustomDialog::FButton(LOCTEXT("Cancel", "Cancel"))
		});

	if (CreateDialog->ShowModal() == 0)
	{
		FGuid InputGuid;
		if(!FGuid::Parse(EditableTextBoxGuid->GetText().ToString(), InputGuid))
		{
			InputGuid.D = LegacyId;
		}
		//$$ MUL - End: Added setting id with Legacy Id
		
		//$$ MUL - Begin: Fix bug/id validation/handling loot id
		if(!InputGuid.IsValid())
		{
			FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("CreateItemErrorGuid", "Invalid Guid Input for Item Id."));
		}
		else if(const FGuid& CurrentId = GetCurrentId(); CurrentId.IsValid() && CurrentId == InputGuid)
		{
			FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("CreateItemWarningGuid", "Same Guid Input for Item Id."));
		}	
		else
		{
			if(IsDeepLinkConfig)
			{
				if (UAssetManager* AssetManager = Cast<UAssetManager>(UAssetManager::GetIfInitialized()))
				{
					const FPrimaryAssetId* PrimaryAssetId = AssetManager->GetPrimaryAssetIdByItemId(InputGuid, FCString::Strtoi(*InputGuid.ToString(), nullptr, 16));
					if(PrimaryAssetId && PrimaryAssetId->IsValid())
					{
						FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(FString::Printf(TEXT("Found a primary asset with the same item id:\n%s"), *PrimaryAssetId->PrimaryAssetName.ToString()))) ;
						return FReply::Handled();
					}
				}
				else
				{
					FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("SetItemWarning", "Unable to get Asset Manager to check the item id validation."));
				}
			}

			OnNewGuidSubmitted(InputGuid);
		}
		//$$ MUL - End: Fix bug/id validation/handling loot id
	}

	return FReply::Handled();
}

//$$ MUL - Begin: Added get info and set loot's active
FReply FRH_RHItemIdCustomization::OnGetInfoClicked()
{
	const FGuid Id = GetCurrentId();
	if(!Id.IsValid())
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("OnGetNameError", "Id is not valid."));
	}
	
	auto Request = TSandboxGetItemById::Request();

	Request.AuthContext = FModuleManager::Get().LoadModuleChecked<FRallyHereEditorModule>(FRallyHereEditorModule::GetModuleName()).GetAuthContext();

	FGuid::Parse(FRallyHereEditorModule::Get().GetSandboxId(), Request.SandboxId);

	Request.ItemId = Id;

	if (!TSandboxGetItemById::DoCall(RH_DevAPIs::GetCatalogAPI(), Request, TSandboxGetItemById::Delegate::CreateRaw(this, &FRH_RHItemIdCustomization::OnGetItemInfoByIdResponse))) //$$ MUL - Begin: Added get info and set loot's active
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("GetItemByIdError", "An Error occured when attempting to get the item."));
	}
	return FReply::Handled();
}
//$$ MUL - End

//$$ MUL - Begin: Fix bug/id validation/handling loot id
void FRH_RHLegacyIdToGuidCustomization::WriteIdToProperty(const FGuid& Id, const int32 LegacyId) const
{
	// Update Guid
	FScopedTransaction Transaction(FText::Format(LOCTEXT("EditGuidPropertyTransaction", "Edit {0}"), IdPropertyHandle->GetPropertyDisplayName()));

	IdPropertyHandle->NotifyPreChange();
	for (uint32 ChildIndex = 0; ChildIndex < 4; ++ChildIndex)
	{
		// Do not want a transaction on each individual set call as our scope transaction will handle it all
		// Need to mark first 3 as interactive so that post edit doesn't reinstance anything until we're done
		EPropertyValueSetFlags::Type GuidComponentFlags = EPropertyValueSetFlags::NotTransactable;
		TSharedRef<IPropertyHandle> ChildHandle = IdPropertyHandle->GetChildHandle(ChildIndex).ToSharedRef();
		ChildHandle->SetValue((int32)Id[ChildIndex], ChildIndex != 3 ? GuidComponentFlags | EPropertyValueSetFlags::InteractiveChange : GuidComponentFlags);
	}

	IdPropertyHandle->NotifyPostChange(EPropertyChangeType::ValueSet);

	// Update Legacy Id
	LegacyIdPropertyHandle->SetValue(LegacyId);
}

FGuid FRH_RHLegacyIdToGuidCustomization::GetCurrentId() const
{
	TArray<void*> RawData;
	IdPropertyHandle->AccessRawData(RawData);

	FGuid Id = FGuid();
	if (RawData.Num() > 0)
	{
		if (static_cast<FGuid*>(RawData[0]))
		{
			Id = *static_cast<FGuid*>(RawData[0]);
		}
	}

	return Id;
}
//$$ MUL - End: Fix bug/id validation/handling loot id
void FRH_RHItemIdCustomization::OnFriendlyNameSubmitted(const FString& FriendlyName)
{
	auto Request = TSandboxCreateItems::Request();

	Request.AuthContext = FModuleManager::Get().LoadModuleChecked<FRallyHereEditorModule>(FRallyHereEditorModule::GetModuleName()).GetAuthContext();

	//$$ MUL - Fix bug/id validation/handling loot id (Removed login check here)
	FGuid::Parse(FRallyHereEditorModule::Get().GetSandboxId(), Request.SandboxId);

	FRHAPI_DevCreateItemCollection ItemCollection;
	TArray<FRHAPI_DevCreateItemRequest> NewItems;
	FRHAPI_DevCreateItemRequest NewItem;
	NewItem.SetName(FriendlyName);
	NewItems.Push(NewItem);
	ItemCollection.SetData(NewItems);

	Request.CreateItemCollection = ItemCollection;

	if (!TSandboxCreateItems::DoCall(RH_DevAPIs::GetCatalogAPI(), Request, TSandboxCreateItems::Delegate::CreateRaw(this, &FRH_RHItemIdCustomization::OnCreateCatalogItemResponse)))
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("CreateItemError", "An Error occured when attempting to create the item."));
	}
}

//$$ MUL - Begin: Fix bug/id validation/handling loot id
void FRH_RHItemIdCustomization::OnNewGuidSubmitted(const FGuid& Guid)
{
	auto Request = TSandboxGetItemById::Request();

	Request.AuthContext = FModuleManager::Get().LoadModuleChecked<FRallyHereEditorModule>(FRallyHereEditorModule::GetModuleName()).GetAuthContext();

	FGuid::Parse(FRallyHereEditorModule::Get().GetSandboxId(), Request.SandboxId);

	Request.ItemId = Guid;

	if (!TSandboxGetItemById::DoCall(RH_DevAPIs::GetCatalogAPI(), Request, TSandboxGetItemById::Delegate::CreateRaw(this, &FRH_RHItemIdCustomization::OnGetItemByIdResponse)))
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("GetItemByIdError", "An Error occured when attempting to get the item by id."));
	}
}
//$$ MUL - End: Fix bug/id validation/handling loot id

void FRH_RHItemIdCustomization::OnCreateCatalogItemResponse(const TSandboxCreateItems::Response& Resp)
{
	if (!Resp.Content.Num() || !Resp.IsSuccessful())
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("CreateItemError", "An Error occured when attempting to create the item."));
		return;
	}

//$$ MUL - Begin: Fix bug/id validation/handling loot id
	WriteIdToProperty(Resp.Content[0].GetItemId(), Resp.Content[0].GetLegacyItemId());
}

void FRH_RHItemIdCustomization::OnGetItemByIdResponse(const TSandboxGetItemById::Response& Resp)
{
	if (!Resp.IsSuccessful())
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("GetItemByIdError", "We weren't able to find any item corresponding to this id."));
		return;
	}

	WriteIdToProperty(Resp.Content.GetItemId(), Resp.Content.GetLegacyItemId());
}

//$$ MUL - Begin: Added get info and set loot's active
void FRH_RHItemIdCustomization::OnGetItemInfoByIdResponse(const TSandboxGetItemById::Response& Resp)
{
	if (!Resp.IsSuccessful())
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("GetItemByIdError", "We weren't able to find any item corresponding to this id."));
		return;
	}

	RallyHereName = Resp.Content.GetName();
}
//$$ MUL - End

FReply FRH_RHLootIdCustomization::OnGenerateIdClicked()
{
	FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("CreateLootmWarningGuid", "Creating a new loot id is currently not supported."));
	return FReply::Handled();
}

FReply FRH_RHLootIdCustomization::OnEditManuallyClicked()
{
	//$$ MUL - Begin: Added setting id with Legacy Id
	TSharedRef<SEditableTextBox> EditableTextBoxGuid = SNew(SEditableTextBox);
	uint64 LegacyId = 0;
	TSharedRef<SNumericEntryBox<uint32>> NumericEntryBoxLegacyId = SNew(SNumericEntryBox<uint32>)
		.OnValueChanged_Lambda([&LegacyId](uint32 NewValue) { LegacyId = NewValue; })
		.Value_Lambda([&LegacyId]{return LegacyId;})
		.MaxValue(MAX_uint32);

	TSharedRef<SCustomDialog> CreateDialog = SNew(SCustomDialog)
		.Title(FText(LOCTEXT("SetLootId", "Set Loot Id")))
		.Content()
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(STextBlock)
				.Text(LOCTEXT("SetLootIdPrompt", "Input the Specific Loot Id for this loot"))
			]
			+ SVerticalBox::Slot()
			.Padding(0,3,0,0)
			.AutoHeight()
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(FText::FromString("Guid: "))
				]
				+SHorizontalBox::Slot()
				.FillWidth(1)
				[
					EditableTextBoxGuid
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(FText::FromString("LegacyId: "))
				]
				+SHorizontalBox::Slot()
				.FillWidth(1)
				[
					NumericEntryBoxLegacyId
				]
			]
		]
	.Buttons({
	SCustomDialog::FButton(LOCTEXT("Set", "Set")),
	SCustomDialog::FButton(LOCTEXT("Cancel", "Cancel"))
		});

	if (CreateDialog->ShowModal() == 0)
	{
		FGuid InputGuid;
		if(!FGuid::Parse(EditableTextBoxGuid->GetText().ToString(), InputGuid))
		{
			InputGuid.D = LegacyId;
		}
		//$$ MUL - End: Added setting id with Legacy Id
		
		if(!InputGuid.IsValid())
		{
			FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("CreateLootErrorGuid", "Invalid Guid Input for Loot Id."));
		}
		else
		{
			OnNewGuidSubmitted(InputGuid);
		}
	}

	return FReply::Handled();
}

//$$ MUL - Begin: Added get info and set loot's active
FReply FRH_RHLootIdCustomization::OnGetInfoClicked()
{
	const FGuid Id = GetCurrentId();
	if(!Id.IsValid())
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("OnGetNameError", "Id is not valid."));
	}
	
	auto Request = TSandboxGetLootById::Request();

	Request.AuthContext = FModuleManager::Get().LoadModuleChecked<FRallyHereEditorModule>(FRallyHereEditorModule::GetModuleName()).GetAuthContext();

	FGuid::Parse(FRallyHereEditorModule::Get().GetSandboxId(), Request.SandboxId);

	Request.LootId = Id;

	if (!TSandboxGetLootById::DoCall(RH_DevAPIs::GetCatalogAPI(), Request, TSandboxGetLootById::Delegate::CreateRaw(this, &FRH_RHLootIdCustomization::OnGetLootInfoByIdResponse)))
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("GetLootByIdError", "An Error occured when attempting to get the loot by id."));
	}
	return FReply::Handled();
}

void FRH_RHLootIdCustomization::OnSetActiveClicked(ECheckBoxState NewState)
{
	TSharedRef<SEditableTextBox> EditableTextBox = SNew(SEditableTextBox);

	const FString& CurrentActive = IsActive.GetValue() ? "ACTIVE" : "INACTIVE";
	const FString& NewActive = !IsActive.GetValue() ? "ACTIVE" : "INACTIVE";
	
	TSharedRef<SCustomDialog> CustomDialog = SNew(SCustomDialog)
		.Title(FText(LOCTEXT("SetLootActive", "Set Loot Active")))
		.Content()
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(STextBlock)
				.Text(FText::FromString(FString::Printf(TEXT("Currently \"%s\", set \"%s\"?"), *CurrentActive, *NewActive)))
			]
		]
		.Buttons({
		SCustomDialog::FButton(FText::FromString("YES")),
		SCustomDialog::FButton(FText::FromString("NO"))
		});

	if (CustomDialog->ShowModal() == 0)
	{
		auto Request = TSandboxGetLootById::Request();

		Request.AuthContext = FModuleManager::Get().LoadModuleChecked<FRallyHereEditorModule>(FRallyHereEditorModule::GetModuleName()).GetAuthContext();

		FGuid::Parse(FRallyHereEditorModule::Get().GetSandboxId(), Request.SandboxId);

		Request.LootId = GetCurrentId();

		if (!TSandboxGetLootById::DoCall(RH_DevAPIs::GetCatalogAPI(), Request, TSandboxGetLootById::Delegate::CreateRaw(this, &FRH_RHLootIdCustomization::OnGetLootForUpdateResponse)))
		{
			FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("GetLootByIdError", "An Error occured when attempting to get the loot by id."));
		}
	}
}

//$$ MUL - End: Added get info and set loot's active

void FRH_RHLootIdCustomization::OnNewGuidSubmitted(const FGuid& Guid)
{
	auto Request = TSandboxGetLootById::Request();

	Request.AuthContext = FModuleManager::Get().LoadModuleChecked<FRallyHereEditorModule>(FRallyHereEditorModule::GetModuleName()).GetAuthContext();

	FGuid::Parse(FRallyHereEditorModule::Get().GetSandboxId(), Request.SandboxId);

	Request.LootId = Guid;

	if (!TSandboxGetLootById::DoCall(RH_DevAPIs::GetCatalogAPI(), Request, TSandboxGetLootById::Delegate::CreateRaw(this, &FRH_RHLootIdCustomization::OnGetLootByIdResponse)))
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("GetLootByIdError", "An Error occured when attempting to get the loot by id."));
	}
}

void FRH_RHLootIdCustomization::OnGetLootByIdResponse(const TSandboxGetLootById::Response& Resp)
{
	if (!Resp.IsSuccessful())
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("GetLootByIdError", "We weren't able to find any loot corresponding to this id."));
		return;
	}
	
	WriteIdToProperty(Resp.Content.GetLootId(), Resp.Content.GetLegacyLootId());
}

//$$ MUL - Begin: Added get info and set loot's active
void FRH_RHLootIdCustomization::OnGetLootInfoByIdResponse(const TSandboxGetLootById::Response& Resp)
{
	if (!Resp.IsSuccessful())
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("GetLootByIdError", "We weren't able to find any loot corresponding to this id."));
		return;
	}

	RallyHereName = Resp.Content.GetName();
	IsActive = Resp.Content.GetActive();
}

void FRH_RHLootIdCustomization::OnGetLootForUpdateResponse(const TSandboxGetLootById::Response& Resp)
{
	if (!Resp.IsSuccessful())
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("GetLootByIdError", "We weren't able to find any loot corresponding to this id."));
		return;
	}

	auto Request = TSandboxUpdateLoot::Request();

	Request.AuthContext = FModuleManager::Get().LoadModuleChecked<FRallyHereEditorModule>(FRallyHereEditorModule::GetModuleName()).GetAuthContext();

	FGuid::Parse(FRallyHereEditorModule::Get().GetSandboxId(), Request.SandboxId);

	Request.LootId = Resp.Content.LootId;
	
	FString String;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&String);
	Resp.Content.WriteJson(Writer);
	Writer->Close();
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(String);
	TSharedPtr<FJsonValue> JsonValue;
	FJsonSerializer::Deserialize(Reader, JsonValue);
	Request.UpdateLootRequest.FromJson(JsonValue);

	if(IsActive.IsSet())
	{
		Request.UpdateLootRequest.SetActive(!IsActive.GetValue());
	}
	
	if (!TSandboxUpdateLoot::DoCall(RH_DevAPIs::GetCatalogAPI(), Request, TSandboxUpdateLoot::Delegate::CreateRaw(this, &FRH_RHLootIdCustomization::OnUpdateLootResponse)))
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("UpdateLootError", "An Error occured when attempting to update the loot."));
	}
}

void FRH_RHLootIdCustomization::OnUpdateLootResponse(const TSandboxUpdateLoot::Response& Resp)
{
	if (!Resp.IsSuccessful())
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("UpdateLootError", "An Error occured when attempting to update the loot."));
	}
	else
	{
		IsActive = !IsActive.GetValue();
	}
}

//$$ MUL - End: Added get info and set loot's active

//$$ MUL -End: Fix bug/id validation/handling loot id


#undef LOCTEXT_NAMESPACE
