// Copyright 2016-2018 Hi-Rez Studios, Inc. All Rights Reserved.

#pragma once

#include "Factories/Factory.h"
#include "Assets/RH_Item.h"
#include "RH_ItemFactory.generated.h"

/**
 *
 */

UCLASS(MinimalAPI, HideCategories=Object)
class URH_ItemFactory : public UFactory
{
    GENERATED_BODY()

public:
	URH_ItemFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
    UPROPERTY(EditAnywhere, Category = "Item")
    TSubclassOf<URH_Item> RHItemClass;

    // UFactory interface
    virtual bool ConfigureProperties() override;
    virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
    // End of UFactory interface
};