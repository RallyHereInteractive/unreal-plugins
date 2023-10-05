#include "CoreMinimal.h"
#include "RallyHereEditor.h"
#include "RallyHereDeveloperAPIAll.h"
#include "Widgets/SWidget.h"
#include "Editor/PropertyEditor/Public/IPropertyTypeCustomization.h"

#pragma once

class FRH_RHLegacyIdToGuidCustomization : public IPropertyTypeCustomization
{
	virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
	virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override {}

protected:
	FReply	OnGenerateIdClicked();
	FReply	OnEditManuallyClicked();

	void WriteGuidToProperty(TSharedPtr<IPropertyHandle> GuidPropertyHandle, const FGuid& Guid);
	
	virtual void OnFriendlyNameSubmitted(const FString& FriendlyName) { }

	TSharedPtr<class IPropertyHandle> IdPropertyHandle;
	TSharedPtr<class IPropertyHandle> LegacyIdPropertyHandle;
};

class FRH_RHItemIdCustomization : public FRH_RHLegacyIdToGuidCustomization
{
public:
	typedef RallyHereDeveloperAPI::Traits_SandboxCreateItems TSandboxCreateItems;

	static TSharedRef<IPropertyTypeCustomization> MakeInstance()
	{
		return MakeShareable(new FRH_RHItemIdCustomization);
	}
protected:
	virtual void OnFriendlyNameSubmitted(const FString& FriendlyName) override;
	void CreateCatalogItem(const FString& FriendlyName);
	void OnCreateCatalogItemResponse(const TSandboxCreateItems::Response& Resp);
};