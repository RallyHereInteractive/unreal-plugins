#include "RallyHereEditor.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereEditorLoginWidget.h"
#include "RallyHereEditorLootWidget.h"
#include "RallyHereEditorWebRequestWidget.h"
#include "RallyHereEditorCustomizations.h"
#include "RallyHereDeveloperAPIHttpRequester.h"
#include "Dialogs/Dialogs.h"
#include "Dialog/SCustomDialog.h"
#include "PropertyEditorModule.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "WorkspaceMenuStructure.h"
#include "WorkspaceMenuStructureModule.h"

DEFINE_LOG_CATEGORY(LogRallyHereEditor);
IMPLEMENT_MODULE(FRallyHereEditorModule, RallyHereEditor);

#define LOCTEXT_NAMESPACE "RallyHereEditor"

static const FName devLoginTabName("Rally Here Dev Portal Login");
static const FName devWebRequestTabName("Rally Here Web Requests");
static const FName devLootTabName("Rally Here Loot");

void FRallyHereEditorModule::StartupModule()
{
	UE_LOG(LogRallyHereEditor, Log, TEXT("LogRallyHereEditor: Log Started"));

	FModuleManager::LoadModuleChecked<FRallyHereDeveloperAPIModule>(FName(TEXT("RallyHereDeveloperAPI")));
	
	RallyHereEditorCategory = WorkspaceMenu::GetMenuStructure().GetToolsCategory()->AddGroup(
		LOCTEXT("RallyHereEditorCategory", "Rally Here"),
		LOCTEXT("RallyHereEditorCategory_ToolTip", "Rally Here Editor Tools"),
		FSlateIcon(),
		true);

	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(devLoginTabName, FOnSpawnTab::CreateRaw(this, &FRallyHereEditorModule::OnSpawnLoginTab))
		.SetDisplayName(LOCTEXT("RallyHereEditorLoginTab", "Login"))
		.SetGroup(RallyHereEditorCategory.ToSharedRef());

	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(devLootTabName, FOnSpawnTab::CreateRaw(this, &FRallyHereEditorModule::OnSpawnLootTab))
		.SetDisplayName(LOCTEXT("RallyHereEditorLootTab", "Loot"))
		.SetGroup(RallyHereEditorCategory.ToSharedRef());

	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(devWebRequestTabName, FOnSpawnTab::CreateRaw(this, &FRallyHereEditorModule::OnSpawnWebRequestTab))
		.SetDisplayName(LOCTEXT("RallyHereEditorWebRequestTab", "Web Requests"))
		.SetGroup(RallyHereEditorCategory.ToSharedRef());

	RegisterCustomPropertyLayouts();

	if (!Integration.IsValid())
	{
		Integration = NewObject<URH_DevIntegration>();
		Integration->AddToRoot();
		Integration->Initialize();
	}

	RallyHereDeveloperAPI::FRallyHereDeveloperAPIHttpRequester::Initialize();

	AuthContext = MakeShared<RallyHereDeveloperAPI::FAuthContext>();
	AuthContext->OnLoginRequested().AddRaw(this, &FRallyHereEditorModule::OnLoginRequested);
}

void FRallyHereEditorModule::ShutdownModule()
{
	UnregisterCustomPropertyLayouts();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(devLoginTabName);
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(devLootTabName);
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(devWebRequestTabName);

	if (Integration.IsValid())
	{
		Integration->Uninitialize();
		Integration->RemoveFromRoot();
		Integration.Reset();
	}

	RallyHereDeveloperAPI::FRallyHereDeveloperAPIHttpRequester::Uninitialize();

	UE_LOG(LogRallyHereEditor, Log, TEXT("LogRallyHereEditor: Log Ended"));
}

void FRallyHereEditorModule::RegisterCustomPropertyLayouts()
{
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.RegisterCustomPropertyTypeLayout(TEXT("RH_ItemId"), FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FRH_RHItemIdCustomization::MakeInstance));
}

void FRallyHereEditorModule::UnregisterCustomPropertyLayouts()
{
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.UnregisterCustomPropertyTypeLayout(TEXT("RH_ItemId"));
}

void FRallyHereEditorModule::OnLoginRequested()
{
	TSharedRef<SCustomDialog> CreateDialog = SNew(SCustomDialog)
	.Title(FText(LOCTEXT("LoginRequiredHeader", "Login Required")))
	.Content()
	[
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("LoginRequiredBody", "Your request could not be completed because you are not logged in.  Please log in and re-issue your request."))
		]
	]
	.Buttons({
	SCustomDialog::FButton(LOCTEXT("Login", "Login")),
	SCustomDialog::FButton(LOCTEXT("Cancel", "Cancel"))
		});

	if (CreateDialog->ShowModal() == 0)
	{
		FGlobalTabmanager::Get()->TryInvokeTab(devLoginTabName);
	}
}

TSharedRef<class SDockTab> FRallyHereEditorModule::OnSpawnLoginTab(const class FSpawnTabArgs& SpawnTabArgs)
{
	return SpawnDockTab<SRallyHereEditorLoginWidget>(SpawnTabArgs);
}

TSharedRef<class SDockTab> FRallyHereEditorModule::OnSpawnLootTab(const class FSpawnTabArgs& SpawnTabArgs)
{
	return SpawnDockTab<SRallyHereEditorLootWidget>(SpawnTabArgs);
}

TSharedRef<class SDockTab> FRallyHereEditorModule::OnSpawnWebRequestTab(const class FSpawnTabArgs& SpawnTabArgs)
{
	return SpawnDockTab<SRallyHereEditorWebRequestWidget>(SpawnTabArgs);
}

#undef LOCTEXT_NAMESPACE