// Copyright 2016-2018 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "ClassViewerFilter.h"

class RALLYHEREEDITOR_API FRallyHereAssetClassParentFilter : public IClassViewerFilter
{
public:
    /** All children of these classes will be included unless filtered out by another setting. */
	//NOT_UPROPERTY - this object has a limited lifespan and not at risk of having bad data
    TSet< const UClass* > AllowedChildrenOfClasses;

    /** Disallowed class flags. */
    EClassFlags DisallowedClassFlags;

    virtual bool IsClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const UClass* InClass, TSharedRef< FClassViewerFilterFuncs > InFilterFuncs) override
    {
        return !InClass->HasAnyClassFlags(DisallowedClassFlags)
            && InFilterFuncs->IfInChildOfClassesSet(AllowedChildrenOfClasses, InClass) != EFilterReturn::Failed;
    }

    virtual bool IsUnloadedClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const TSharedRef< const IUnloadedBlueprintData > InUnloadedClassData, TSharedRef< FClassViewerFilterFuncs > InFilterFuncs) override
    {
        return !InUnloadedClassData->HasAnyClassFlags(DisallowedClassFlags)
            && InFilterFuncs->IfInChildOfClassesSet(AllowedChildrenOfClasses, InUnloadedClassData) != EFilterReturn::Failed;
    }
};

#define CONFIGURE_PROPERTIES(OutClass, BaseClass, SelectorText) \
OutClass = nullptr; \
FClassViewerModule& ClassViewerModule = FModuleManager::LoadModuleChecked<FClassViewerModule>("ClassViewer"); \
FClassViewerInitializationOptions Options; \
Options.Mode = EClassViewerMode::ClassPicker; \
TSharedPtr<FRallyHereAssetClassParentFilter> Filter = MakeShareable(new FRallyHereAssetClassParentFilter); \
Options.ClassFilters.Add(Filter.ToSharedRef()); \
Filter->DisallowedClassFlags = CLASS_Abstract | CLASS_Deprecated | CLASS_NewerVersionExists; \
Filter->AllowedChildrenOfClasses.Add(BaseClass); \
UClass* ChosenClass = nullptr; \
const bool bPressedOk = SClassPickerDialog::PickClass(SelectorText, Options, ChosenClass, BaseClass); \
if (bPressedOk) \
    OutClass = ChosenClass; \
return bPressedOk;