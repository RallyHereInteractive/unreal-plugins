// Copyright 2016-2018 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RH_ItemFactory.h"

#include "Kismet2/SClassPickerDialog.h"

#include "RallyHereAssetClassParentFilter.h"
#include "ClassViewerModule.h"

URH_ItemFactory::URH_ItemFactory(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    SupportedClass = URH_Item::StaticClass();
    bCreateNew = true;
    bEditAfterNew = true;
}

bool URH_ItemFactory::ConfigureProperties()
{
    const FText TitleText = INVTEXT("Pick Item Class");
    CONFIGURE_PROPERTIES(RHItemClass, URH_Item::StaticClass(), TitleText)
}

UObject* URH_ItemFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	URH_Item* NewItem = nullptr;

	if (RHItemClass != nullptr)
	{
		NewItem = NewObject<URH_Item>(InParent, RHItemClass, Name, Flags | RF_Transactional);
	}
	else
	{
		// if we have no data asset class, use the passed-in class instead
		check(Class->IsChildOf(URH_Item::StaticClass()));
		NewItem = NewObject<URH_Item>(InParent, Class, Name, Flags);
	}

	return NewItem;
}