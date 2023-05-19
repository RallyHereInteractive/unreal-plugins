// Copyright 1998-2020 Hi-Rez Studios, Inc. All Rights Reserved.

#include "OnlineTitleFileHotfix.h"
#include "HotfixJsonToUnrealTranslator.h"

#include "Dom/JsonObject.h"
#include "Dom/JsonValue.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"

#include "Engine/GameEngine.h"
#include "Engine/GameInstance.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_ConfigSubsystem.h"

#define LOCTEXT_NAMESPACE "OnlineTitleFileHotfix"

DEFINE_LOG_CATEGORY(LogOnlineHotfix);

FOnlineTitleFileHotfix::FOnlineTitleFileHotfix()
	: IOnlineTitleFile()
	, FileHeaders()
	, ReadFiles()
{
}

bool FOnlineTitleFileHotfix::GetFileContents(const FString& FileName, TArray<uint8>& FileContents)
{
	FHotfix_ConfigFile* FoundFile = ReadFiles.Find(FileName);
	if (FoundFile != nullptr)
	{
        FileContents.Empty();
        for (TArray<uint8>& FileContent : FoundFile->FileContents)
        {
            FileContents.Append(FileContent);
        }
		return true;
	}
	return false;
}

bool FOnlineTitleFileHotfix::ClearFiles()
{
	//ReadFiles.Empty();
	return true;
}

bool FOnlineTitleFileHotfix::ClearFile(const FString& FileName)
{
	//return ReadFiles.Remove(FileName) > 0;
	return true;
}

void FOnlineTitleFileHotfix::DeleteCachedFiles(bool bSkipEnumerated)
{

}

struct CloudFileHeaderNameCompare
{
public:
    CloudFileHeaderNameCompare(const FString& InCompareName)
        : CompareName(InCompareName)
    {
    }

    ~CloudFileHeaderNameCompare()
    {
    }

    FORCEINLINE bool operator()(const FCloudFileHeader& Other) const
    {
        return Other.FileName.Equals(CompareName, ESearchCase::IgnoreCase);
    }

private:
    FString CompareName;
};

bool FOnlineTitleFileHotfix::EnumerateFiles(const FPagedQuery& Page /*= FPagedQuery()*/)
{
	FileHeaders.Empty(FileHeaders.Num());

	UWorld* firstWorld = nullptr;
	for (auto Context : GEngine->GetWorldContexts())
	{
		firstWorld = Context.World();
		break;
	}

	if (firstWorld == nullptr)
	{
		TriggerOnEnumerateFilesCompleteDelegates(false, TEXT("No world found"));
		return false;
	}

	auto* pGI = firstWorld->GetGameInstance();
	auto* pGISS = pGI != nullptr ? pGI->GetSubsystem<URH_GameInstanceSubsystem>() : nullptr;
	auto* pConfig = pGISS != nullptr ? pGISS->GetConfigSubsystem() : nullptr;

	if (pConfig == nullptr)
	{
		TriggerOnEnumerateFilesCompleteDelegates(false, TEXT("No config subsystem found"));
		return false;
	}

	static const FString strHotfixEnable(TEXT("Hotfix.enable")); // todo - make configurable

	bool bEnabled = false;
	FString EnableValueString;
	if (pConfig->GetAppSetting(strHotfixEnable, EnableValueString) && EnableValueString.ToBool())
	{
		bEnabled = true;
	}

    ReadFiles.Empty();

    if (!bEnabled)
    {
        // Hotfixing is currently disabled. Do not enumerate files.
        TriggerOnEnumerateFilesCompleteDelegates(true, TEXT(""));
        return true;
    }

	static FString HotfixPrefix(TEXT("Hotfix."));

    auto ProcessHotfixSetting = [&](const FString& SettingValue, FText& ErrorReason) -> bool
    {      
        TSharedRef<TJsonReader<TCHAR>> JsonReaderRef = FJsonStringReader::Create(SettingValue);

        TSharedPtr<FJsonObject> JSONRoot(nullptr);
        if (!FJsonSerializer::Deserialize(JsonReaderRef, JSONRoot) || !JSONRoot.IsValid())
        {
            ErrorReason = LOCTEXT("HotfixBadSyntax", "Game Override string has bad syntax.");
            return false;
        }

        if (JSONRoot->Values.Num() == 0)
        {
            // This blob contains no fields.
            return true;
        }

        for (const TPair<FString, TSharedPtr<FJsonValue>>& Pair : JSONRoot->Values)
        {
            if (Pair.Key.EndsWith(TEXT(".INI")) && Pair.Value.IsValid() && Pair.Value->Type == EJson::Object)
            {
                FHotfixJsonToUnrealTranslator NewCfgFile(Pair.Value->AsObject());
                if (NewCfgFile.IsValid())
                {
                    FHotfix_ConfigFile& Entry = ReadFiles.FindOrAdd(Pair.Key);
                    Entry.FileName = Pair.Key;
                    int32 Index = Entry.FileContents.Add(TArray<uint8>());

                    auto Src = StringCast<ANSICHAR>(*NewCfgFile.GetString(), NewCfgFile.GetString().Len());
                    Entry.FileContents[Index].SetNumUninitialized(Src.Length() * sizeof(ANSICHAR));
                    FMemory::Memcpy(Entry.FileContents[Index].GetData(), Src.Get(), Src.Length() * sizeof(ANSICHAR));

                    int32 HeaderIndex = FileHeaders.IndexOfByPredicate(CloudFileHeaderNameCompare(Pair.Key));
                    if (HeaderIndex == INDEX_NONE)
                    {
                        HeaderIndex = FileHeaders.Add(FCloudFileHeader(Pair.Key, Pair.Key, Entry.FileContents[Index].Num()));
                    }

                    FCloudFileHeader& NewHeader = FileHeaders[HeaderIndex];
                    NewHeader.FileSize = Entry.FileContents[Index].Num();
                    static const FName nmCrc(TEXT("CRC"));
                    NewHeader.HashType = nmCrc;
                    NewHeader.Hash = FString::Printf(TEXT("%d"), FCrc::MemCrc32(Entry.FileContents[Index].GetData(), Entry.FileContents[Index].Num() * sizeof(uint8)));

                }
            }
        }

        return true;
    };

	for (const auto& SettingPair : pConfig->GetAppSettings())
	{
		if (SettingPair.Key.StartsWith(HotfixPrefix) && SettingPair.Key != strHotfixEnable && SettingPair.Value.Len() > 0)
		{
			FText OutErrorReason;
			if (!ProcessHotfixSetting(SettingPair.Value, OutErrorReason))
			{
				UE_LOG(LogOnlineHotfix, Warning, TEXT("%s error: %s"), *SettingPair.Key, *OutErrorReason.ToString());
			}
		}
	}

	TriggerOnEnumerateFilesCompleteDelegates(true, TEXT(""));
	return true;
}

void FOnlineTitleFileHotfix::GetFileList(TArray<FCloudFileHeader>& Files)
{
	Files = FileHeaders;
}

bool FOnlineTitleFileHotfix::ReadFile(const FString& FileName)
{
	FHotfix_ConfigFile* FoundFile = ReadFiles.Find(FileName);
	if (FoundFile != nullptr)
	{
		TriggerOnReadFileCompleteDelegates(true, FileName);
		return true;
	}

	TriggerOnReadFileCompleteDelegates(false, FileName);
	return false;
}

void FOnlineTitleFileHotfix::Init()
{

}

#undef LOCTEXT_NAMESPACE
