// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "RallyHereDeveloperAPIAuthContext.h"
#include "Widgets/Docking/SDockTab.h"
#include "RH_DevIntegration.h"

DECLARE_LOG_CATEGORY_EXTERN(LogRallyHereEditor, All, All)

static const FName devLoginTabName("Rally Here Dev Portal Login");
static const FName devWebRequestTabName("Rally Here Web Requests");
static const FName devLootTabName("Rally Here Loot");

class FToolBarBuilder;
class FMenuBuilder;

class FRallyHereEditorTools : public FDefaultModuleImpl
{
};

class SRallyHereEditorWindowDockTab : public SDockTab
{
	virtual bool SupportsKeyboardFocus() const override { return true; }
};

class FRallyHereEditorModule : public FRallyHereEditorTools
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	/** @brief Returns the module name. */
	static inline FName GetModuleName()
	{
		static const FName ModuleName(TEXT("RallyHereEditor"));
		return ModuleName;
	}
	/** @brief Checks if the module is loaded. */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded(GetModuleName());
	}
	/** @brief Gets the module, lazy loads it if needed. */
	static inline URH_DevIntegration& Get()
	{
		return FModuleManager::Get().LoadModuleChecked<FRallyHereEditorModule>(GetModuleName()).GetIntegration();
	}
	/** @brief Gets the Integration class fromt he module. */
	inline URH_DevIntegration& GetIntegration() const
	{
		return *Integration;
	}

	FDevAuthContextPtr GetAuthContext() { return AuthContext; }

protected:
	void RegisterMenus();
	void RegisterCustomPropertyLayouts();
	void UnregisterCustomPropertyLayouts();

	void OnLoginRequested();

	TSharedRef<class SDockTab> OnSpawnLoginTab(const class FSpawnTabArgs& SpawnTabArgs);
	TSharedRef<class SDockTab> OnSpawnWebRequestTab(const class FSpawnTabArgs& SpawnTabArgs);
	TSharedRef<class SDockTab> OnSpawnLootTab(const class FSpawnTabArgs& SpawnTabArgs);

	template <typename T>
	TSharedRef<class SDockTab> SpawnDockTab(const class FSpawnTabArgs& SpawnTabArgs)
	{
		const TSharedRef<SDockTab> MajorTab = SNew(SRallyHereEditorWindowDockTab).TabRole(ETabRole::NomadTab);
		TSharedPtr<SWidget> TabContent = SNew(T, MajorTab, SpawnTabArgs.GetOwnerWindow());
		MajorTab->SetContent(TabContent.ToSharedRef());
		return MajorTab;
	}

	TWeakObjectPtr<URH_DevIntegration> Integration;

	TSharedPtr<FWorkspaceItem> RallyHereEditorCategory;

	FDevAuthContextPtr AuthContext;
};

// shortener for the above lookup
namespace RH_DevAPIs
{
	FORCEINLINE static RallyHereDeveloperAPI::FRallyHereDeveloperAPIAll& GetAPIs() { return FRallyHereEditorModule::Get().GetAPIs(); }
	FORCEINLINE static RallyHereDeveloperAPI::FCatalogAPI& GetCatalogAPI() { return GetAPIs().GetCatalog(); }
}
