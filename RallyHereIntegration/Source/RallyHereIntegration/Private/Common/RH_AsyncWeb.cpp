// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "Common/RH_AsyncWeb.h"
#include "Misc/FileHelper.h"

TArray<TSharedRef<FRH_AsyncTaskHelper>> FRH_AsyncTaskHelper::OngoingRequests = TArray<TSharedRef<FRH_AsyncTaskHelper>>();
bool FRH_AsyncTaskHelper::bInitialized = false;


bool FRH_HttpResponseSerializable::ExportToFile(const FString& FilePath)
{
	TArray<FString> FileContents;
	FileContents.Add(FString::Printf(TEXT("%d"), ResponseCode)); // FileContents[0]
	FileContents.Add(URL); // FileContents[1]
	FileContents.Add(FString::Printf(TEXT("%lld"), ContentLength)); // FileContents[2]
	FileContents.Add(ContentType); // FileContents[3]

	FileContents.Append(Headers); // FileContents[4] to FileContents[n-1]
		
	FileContents.Add(FBase64::Encode(Content.GetData(), Content.Num())); // // FileContents[n]
		
	return FFileHelper::SaveStringArrayToFile(FileContents, *FilePath);
}

bool FRH_HttpResponseSerializable::ImportFromFile(const FString& FilePath)
{
	TArray<FString> FileContents;
	if (!FFileHelper::LoadFileToStringArray(FileContents, *FilePath))
	{
		return false;
	}

	if (FileContents.Num() < 4) // must at least have basics (headers and content not required)
	{
		return false;
	}

	ResponseCode = FCString::Atoi(*FileContents[0]);
	URL = FileContents[1];
	ContentLength = FCString::Atoi64(*FileContents[2]);
	ContentType = FileContents[3];

	for (int i=4; i < FileContents.Num() - 1; ++i)
	{
		Headers.Add(FileContents[i]);
	}
		
	return FBase64::Decode(FileContents[FileContents.Num() - 1], Content);
}
