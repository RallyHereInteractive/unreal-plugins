
#include "RallyHereEditor.h"
#include "RallyHereEditorCustomizations.h"

#include "IPropertyUtilities.h"
#include "Misc/MessageDialog.h"
#include "Dialogs/Dialogs.h"
#include "Dialog/SCustomDialog.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "PropertyHandle.h"
#include "PropertyCustomizationHelpers.h"

#define LOCTEXT_NAMESPACE "RallyHereEditorCustomization"

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
			IdPropertyHandle = ChildHandle;
			ChildHandle->SetOnPropertyValueChanged(OnValueChanged);
		}

		if (ChildHandle->GetProperty()->GetName() == TEXT("LegacyId"))
		{
			LegacyIdPropertyHandle = ChildHandle;
			ChildHandle->SetOnPropertyValueChanged(OnValueChanged);
		}
	}

	check(IdPropertyHandle.IsValid());
	check(LegacyIdPropertyHandle.IsValid());

	FText Name;

	TArray<void*> RawData;
	IdPropertyHandle->AccessRawData(RawData);

	FGuid Id = FGuid();
	if (RawData.Num() > 0)
	{
		Id = *static_cast<FGuid*>(RawData[0]);
	}

	int32 LegacyId = 0;
	LegacyIdPropertyHandle.Get()->GetValue(LegacyId);

	TSharedRef<SHorizontalBox> ButtonArray = SNew(SHorizontalBox);

	if (!Id.IsValid())
	{
		ButtonArray->AddSlot()
			.AutoWidth()
			[
				SNew(SButton)
				.Text(LOCTEXT("CreateItemButton", "Create"))
				.OnClicked(this, &FRH_RHLegacyIdToGuidCustomization::OnGenerateIdClicked)
			];
	}

	ButtonArray->AddSlot()
	.AutoWidth()
	[
		SNew(SButton)
		.Text(LOCTEXT("SetItemIdButton", "Set"))
		.OnClicked(this, &FRH_RHLegacyIdToGuidCustomization::OnEditManuallyClicked)
	];

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
					.Text(LOCTEXT("ItemId", "Item Id:"))
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(FText::FromString(FString::Printf(L"%s", *Id.ToString(EGuidFormats::DigitsWithHyphens))))
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
					.Text(LOCTEXT("LegacyItemId", "Legacy Item Id:"))
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(FText::FromString(FString::Printf(L"%d", LegacyId)))
				]
			]
			+SVerticalBox::Slot()
			.AutoHeight()
			[
				ButtonArray
			]

		];
}

FReply FRH_RHLegacyIdToGuidCustomization::OnGenerateIdClicked()
{
	// Check if we are logged in before prompting to make this call, if we are not logged in, promt for getting a new login access token.
	auto AuthContext = FModuleManager::Get().LoadModuleChecked<FRallyHereEditorModule>(FRallyHereEditorModule::GetModuleName()).GetAuthContext();
	if (!AuthContext->IsLoggedIn())
	{
		AuthContext->Refresh();
		return FReply::Handled();
	}

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

FReply FRH_RHLegacyIdToGuidCustomization::OnEditManuallyClicked()
{
	TSharedRef<SEditableTextBox> EditableTextBox = SNew(SEditableTextBox);

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
		.AutoHeight()
		[
			EditableTextBox
		]
		]
	.Buttons({
	SCustomDialog::FButton(LOCTEXT("Set", "Set")),
	SCustomDialog::FButton(LOCTEXT("Cancel", "Cancel"))
		});

	if (CreateDialog->ShowModal() == 0)
	{
		FGuid InputGuid;
		FGuid::Parse(EditableTextBox->GetText().ToString(), InputGuid);
		if (InputGuid.IsValid())
		{
			WriteGuidToProperty(IdPropertyHandle, InputGuid);
		}
		else
		{
			FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("CreateItemErrorGuid", "Invalid Guid Input for Item Id."));
		}
	}

	return FReply::Handled();
}

void FRH_RHLegacyIdToGuidCustomization::WriteGuidToProperty(TSharedPtr<IPropertyHandle> GuidPropertyHandle, const FGuid& Guid)
{
	FScopedTransaction Transaction(FText::Format(LOCTEXT("EditGuidPropertyTransaction", "Edit {0}"), GuidPropertyHandle->GetPropertyDisplayName()));

	GuidPropertyHandle->NotifyPreChange();

	for (uint32 ChildIndex = 0; ChildIndex < 4; ++ChildIndex)
	{
		// Do not want a transaction on each individual set call as our scope transaction will handle it all
		// Need to mark first 3 as interactive so that post edit doesn't reinstance anything until we're done
		EPropertyValueSetFlags::Type GuidComponentFlags = EPropertyValueSetFlags::NotTransactable;
		TSharedRef<IPropertyHandle> ChildHandle = GuidPropertyHandle->GetChildHandle(ChildIndex).ToSharedRef();
		ChildHandle->SetValue((int32)Guid[ChildIndex], ChildIndex != 3 ? GuidComponentFlags | EPropertyValueSetFlags::InteractiveChange : GuidComponentFlags);
	}

	GuidPropertyHandle->NotifyPostChange(EPropertyChangeType::ValueSet);
}







void FRH_RHItemIdCustomization::OnFriendlyNameSubmitted(const FString& FriendlyName)
{
	auto Request = TSandboxCreateItems::Request();

	Request.AuthContext = FModuleManager::Get().LoadModuleChecked<FRallyHereEditorModule>(FRallyHereEditorModule::GetModuleName()).GetAuthContext();

	if (!Request.AuthContext->IsLoggedIn())
	{
		Request.AuthContext->Refresh();
		return;
	}
	
	auto* Settings = GetDefault<URH_DevIntegrationSettings>();
	const FRH_DevSandboxConfiguration* SandboxConfig = Settings->GetSandboxConfiguration(FRallyHereEditorModule::Get().GetSandboxId());
	FGuid::Parse(SandboxConfig->SandboxGuid, Request.SandboxId);
	
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

void FRH_RHItemIdCustomization::OnCreateCatalogItemResponse(const TSandboxCreateItems::Response& Resp)
{
	if (!Resp.Content.Num() || !Resp.IsSuccessful())
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("CreateItemError", "An Error occured when attempting to create the item."));
		return;
	}

	WriteGuidToProperty(IdPropertyHandle, Resp.Content[0].GetItemId());
	LegacyIdPropertyHandle->SetValue(Resp.Content[0].GetLegacyItemId());
}


#undef LOCTEXT_NAMESPACE