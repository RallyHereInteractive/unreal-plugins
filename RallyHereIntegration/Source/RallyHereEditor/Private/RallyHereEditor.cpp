#include "RallyHereEditor.h"
#include "AssetToolsModule.h"
#include "AssetTypeActions_RallyHereItem.h"

DEFINE_LOG_CATEGORY(LogRallyHereEditor);

#define LOCTEXT_NAMESPACE "RallyHereEditor"

class FRallyHereEditorModule : public FRallyHereEditorTools
{
public:
	TSharedPtr<FAssetTypeActions_RallyHereItem> RallyHereItemAssetTypeActions;

	EAssetTypeCategories::Type RallyHereAssetCategoryBit;

public:
	virtual void StartupModule() override
	{
		UE_LOG(LogRallyHereEditor, Log, TEXT("LogRallyHereEditor: Log Started"));

		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

		// Register Asset Category
		RallyHereAssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("RallyHere")), INVTEXT("RallyHere"));

		// Register the asset type
		RallyHereItemAssetTypeActions = MakeShareable(new FAssetTypeActions_RallyHereItem(RallyHereAssetCategoryBit));
		FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get().RegisterAssetTypeActions(RallyHereItemAssetTypeActions.ToSharedRef());
	}

	virtual void ShutdownModule() override
	{
		check(RallyHereItemAssetTypeActions.IsValid());

		if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
		{
			FModuleManager::GetModuleChecked< FAssetToolsModule >("AssetTools").Get().UnregisterAssetTypeActions(RallyHereItemAssetTypeActions.ToSharedRef());
		}
		RallyHereItemAssetTypeActions.Reset();

		UE_LOG(LogRallyHereEditor, Log, TEXT("LogRallyHereEditor: Log Ended"));
	}
};

IMPLEMENT_MODULE(FRallyHereEditorModule, RallyHereEditor);

#undef LOCTEXT_NAMESPACE