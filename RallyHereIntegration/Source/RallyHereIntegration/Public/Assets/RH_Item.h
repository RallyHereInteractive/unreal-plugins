#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/Object.h"
#include "RH_Item.generated.h"

/** @defgroup Assets RallyHere Item
 *  @{
 */

/**
 * @brief Basic representation of an item as an unreal asset.
 */
UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_Item : public UPrimaryDataAsset
{
    GENERATED_BODY()
public:

	/**
	* @brief Gets the item id associated with the item that matches the value in the database.
	*/
	UFUNCTION(BlueprintPure, Category = "Item")
	FORCEINLINE int32 GetItemId() const { return ItemId; }

	// #RHTODO: Using APIs create the item in the DB and return the item id. Prompt for the Friendly ItemName to place in DB.
	//UFUNCTION(CallInEditor, Category = "Configuration Deep Link")
	//void GenerateItemId();

protected:
	/**
	* @brief The item id associated with the item that matches the value in the database.
	*/
	UPROPERTY(EditDefaultsOnly, AssetRegistrySearchable, DuplicateTransient, Category = "Configuration Deep Link")
	int32 ItemId;
};

/** @} */