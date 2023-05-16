// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Stats/Stats.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogRallyHereDebugTool, Log, All);

DECLARE_MULTICAST_DELEGATE_OneParam(FRHDTSpawnTool, class URallyHereDebugTool*);
DECLARE_MULTICAST_DELEGATE_OneParam(FRHDTCleanupTool, class URallyHereDebugTool*);

/**
 * The public interface to this module
 */
class IRallyHereDebugToolModule : public IModuleInterface
{

public:

    /**
         * Singleton-like access to this module's interface.  This is just for convenience!
         * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
         *
         * @return Returns singleton instance, loading the module on demand if needed
         */
    static inline IRallyHereDebugToolModule& Get()
    {
        QUICK_SCOPE_CYCLE_COUNTER(STAT_IRallyHereDebugToolModule_Get);
        static IRallyHereDebugToolModule& Singleton = FModuleManager::LoadModuleChecked< IRallyHereDebugToolModule >("RallyHereDebugTool");
        return Singleton;
    }

    /**
     * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
     *
     * @return True if the module is loaded and ready to use
     */
    static inline bool IsAvailable()
    {
        QUICK_SCOPE_CYCLE_COUNTER(STAT_IRallyHereDebugToolModule_IsAvailable);
        return FModuleManager::Get().IsModuleLoaded("RallyHereDebugTool");
    }

	virtual void UpdateImGuiInputState() = 0;
	virtual FRHDTSpawnTool& GetSpawnToolDelegate() = 0;
	virtual FRHDTCleanupTool& GetCleanupToolDelegate() = 0;
	virtual class URallyHereDebugTool* GetDebugTool(class UWorld* InWorld) const = 0;
};