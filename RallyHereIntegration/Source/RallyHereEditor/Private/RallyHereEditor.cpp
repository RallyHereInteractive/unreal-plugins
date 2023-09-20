#include "RallyHereEditor.h"

DEFINE_LOG_CATEGORY(LogRallyHereEditor);

#define LOCTEXT_NAMESPACE "RallyHereEditor"

class FRallyHereEditorModule : public FRallyHereEditorTools
{
public:
	virtual void StartupModule() override
	{
		UE_LOG(LogRallyHereEditor, Log, TEXT("LogRallyHereEditor: Log Started"));
	}

	virtual void ShutdownModule() override
	{
		UE_LOG(LogRallyHereEditor, Log, TEXT("LogRallyHereEditor: Log Ended"));
	}
};

IMPLEMENT_MODULE(FRallyHereEditorModule, RallyHereEditor);

#undef LOCTEXT_NAMESPACE