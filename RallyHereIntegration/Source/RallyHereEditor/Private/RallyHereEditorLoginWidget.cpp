// Copyright Epic Games, Inc. All Rights Reserved.

#include "RallyHereEditorLoginWidget.h"
#include "RallyHereDeveloperAPIAuthContext.h"
#include "Engine/Engine.h"
#include "RallyHereEditor.h"
#include "SWebBrowser.h"

SRallyHereEditorLoginWidget::SRallyHereEditorLoginWidget()
	: SCompoundWidget()
{
}

SRallyHereEditorLoginWidget::~SRallyHereEditorLoginWidget()
{
}
void SRallyHereEditorLoginWidget::Construct(const FArguments& InArgs, const TSharedRef<SDockTab>& ConstructUnderMajorTab, const TSharedPtr<SWindow>& ConstructUnderWindow)
{
	FDevAuthContextPtr AuthContext = FModuleManager::Get().LoadModuleChecked<FRallyHereEditorModule>(FRallyHereEditorModule::GetModuleName()).GetAuthContext();

	auto* Settings = GetDefault<URH_DevIntegrationSettings>();
	const FRH_DevSandboxConfiguration* SandboxConfig = Settings->GetSandboxConfiguration(FRallyHereEditorModule::Get().GetSandboxId());

	AuthContext->SetClientId(SandboxConfig->ClientId);
	AuthContext->SetClientSecret(SandboxConfig->ClientSecret);

	LoginStateGuid = FGuid::NewGuid();

	FString InitialURL = SandboxConfig->AuthUrl + "authorize?response_type=token&client_id=" + SandboxConfig->ClientId + "&redirect_uri=" + Settings->LoginCallbackURL + "&state=" + LoginStateGuid.ToString() + "&scope=" + Settings->LoginScopeArg + "&audience=" + Settings->LoginAudienceArg;

	ChildSlot
	[
		SNew(SWebBrowser)
		.InitialURL(InitialURL)
		.OnBeforeNavigation(this, &SRallyHereEditorLoginWidget::HandleBrowserBeforeBrowse)
		.ShowControls(false)
	];
}

bool SRallyHereEditorLoginWidget::HandleBrowserBeforeBrowse(const FString& URL, const FWebNavigationRequest& Request)
{
	auto* Settings = GetDefault<URH_DevIntegrationSettings>();
	if (URL.Contains(Settings->LoginCallbackURL) && !URL.Contains("redirect_uri="))
	{
		UE_LOG(LogRallyHereEditor, Log, TEXT("LogRallyHereEditor: URL: %s"), *URL);

		int32 LoginStateIndex = URL.Find("state=");

		if (LoginStateIndex > 0)
		{
			FString LoginState = URL.RightChop(LoginStateIndex + 6);
			int32 LoginStateEndIndex = LoginState.Find("&");
			if (LoginStateEndIndex > 0)
			{
				LoginState = LoginState.Left(LoginStateEndIndex);
			}

			if (LoginState == LoginStateGuid.ToString())
			{
				FDevAuthContextPtr AuthContext = FModuleManager::Get().LoadModuleChecked<FRallyHereEditorModule>(FRallyHereEditorModule::GetModuleName()).GetAuthContext();
				AuthContext->AuthFromWebURL(URL);
			}
		}
	}

	return false;
}