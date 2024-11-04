// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "Common/RH_AsyncWeb.h"
#include "Misc/FileHelper.h"
#include "Misc/Compression.h"
#include "UObject/UnrealNames.h"

TArray<TSharedRef<FRH_AsyncTaskHelper>> FRH_AsyncTaskHelper::OngoingRequests = TArray<TSharedRef<FRH_AsyncTaskHelper>>();
bool FRH_AsyncTaskHelper::bInitialized = false;


bool FRH_HttpResponseSerializable::ExportToFile(const FString& FilePath, bool bCanCompress) const
{
	// do not allow serializing a failed request
	if (!EHttpResponseCodes::IsOk(ResponseCode)
#if RH_FROM_ENGINE_VERSION(5,4)
		|| Status != EHttpRequestStatus::Succeeded
		|| FailureReason != EHttpFailureReason::None
#endif
		)
	{
		return false;
	}
	
	TArray<FString> FileContents;
	FileContents.AddDefaulted(RH_SerializableHttpFormat::LineIndex::Max);
	FileContents[RH_SerializableHttpFormat::LineIndex::ResponseCode] = FString::Printf(TEXT("%d"), ResponseCode);
	FileContents[RH_SerializableHttpFormat::LineIndex::URL] = URL;
#if RH_FROM_ENGINE_VERSION(5,4)
	FileContents[RH_SerializableHttpFormat::LineIndex::EffectiveURL] = EffectiveURL;
#endif
	FileContents[RH_SerializableHttpFormat::LineIndex::ContentLength] = FString::Printf(TEXT("%lld"), ContentLength);
	FileContents[RH_SerializableHttpFormat::LineIndex::ContentType] = ContentType;

	const FString HeadersString = FString::Join(Headers, TEXT("\n"));
	FileContents[RH_SerializableHttpFormat::LineIndex::Headers] = FBase64::Encode(HeadersString);

	// compress the content if requested, and mark as such in the flags
	// default to not compressing
	FileContents[RH_SerializableHttpFormat::LineIndex::CompressionFormat] = LexToString(NAME_None);
	FileContents[RH_SerializableHttpFormat::LineIndex::UncompressedSize] = FString::Printf(TEXT("%d"), Content.Num());
	
	if (bCanCompress && Content.Num() > 0)
	{
		TArray<uint8> CompressedContent;
		CompressedContent.AddZeroed(Content.Num()); // worst case scenario, the compressed content is the same size as the original
		int32 CompressedSize = 0;
		FName CompressionFormat = NAME_Zlib;
		const int MinBytesSaved = 1024;
		const float MinPercentSaved = 0.3f;
		int32 InOutSize = CompressedContent.Num();
		
		if (FCompression::CompressMemoryIfWorthDecompressing(CompressionFormat, MinBytesSaved, MinPercentSaved,
			CompressedContent.GetData(), InOutSize, Content.GetData(), Content.Num()))
		{
			CompressedContent.SetNum(InOutSize, false);
			// mark as compressed
			FileContents[RH_SerializableHttpFormat::LineIndex::CompressionFormat] = CompressionFormat.ToString();
			FileContents[RH_SerializableHttpFormat::LineIndex::Content] = FBase64::Encode(CompressedContent.GetData(), CompressedContent.Num());
		}
		else
		{
			// not worth compressing, just store the content as is
			FileContents[RH_SerializableHttpFormat::LineIndex::Content] = FBase64::Encode(Content.GetData(), Content.Num());
		}
	}
	else
	{
		FileContents[RH_SerializableHttpFormat::LineIndex::Content] = FBase64::Encode(Content.GetData(), Content.Num());
	}
		
	return FFileHelper::SaveStringArrayToFile(FileContents, *FilePath);
}

bool FRH_HttpResponseSerializable::ImportFromFile(const FString& FilePath)
{
	TArray<FString> FileContents;
	if (!FFileHelper::LoadFileToStringArray(FileContents, *FilePath))
	{
		return false;
	}

	if (FileContents.Num() != RH_SerializableHttpFormat::LineIndex::Max) // must at least have basics (headers and content not required)
	{
		return false;
	}

	ResponseCode = FCString::Atoi(*FileContents[RH_SerializableHttpFormat::LineIndex::ResponseCode]);
	URL = FileContents[RH_SerializableHttpFormat::LineIndex::URL];
#if RH_FROM_ENGINE_VERSION(5,4)
	EffectiveURL = FileContents[RH_SerializableHttpFormat::LineIndex::EffectiveURL];
#endif
	ContentLength = FCString::Atoi64(*FileContents[RH_SerializableHttpFormat::LineIndex::ContentLength]);
	ContentType = FileContents[RH_SerializableHttpFormat::LineIndex::ContentType];

	FString HeadersString;
	if (!FBase64::Decode(FileContents[RH_SerializableHttpFormat::LineIndex::Headers], HeadersString))	// even if the list is empty, it should not fail to decode
	{
		return false;
	}
	HeadersString.ParseIntoArrayLines(Headers);

	// content is always encoded as base64, so first decode it
	const auto& ContentBase64 = FileContents[RH_SerializableHttpFormat::LineIndex::Content];
	TArray<uint8> ContentTemp;
	if (!FBase64::Decode(FileContents[RH_SerializableHttpFormat::LineIndex::Content], ContentTemp))
	{
		return false;
	}

	// content may be compressed, check the compression flag and decompress if necessary
	const auto& CompressionFormatString = FileContents[RH_SerializableHttpFormat::LineIndex::CompressionFormat];
	const auto CompressionFormat = FName(*CompressionFormatString);
	auto UncompressedSize = FCString::Atoi64(*FileContents[RH_SerializableHttpFormat::LineIndex::UncompressedSize]);
	if (CompressionFormat != NAME_None && UncompressedSize > 0)
	{
		// decompress the content
		Content.SetNumUninitialized(UncompressedSize);
		if (!FCompression::UncompressMemory(CompressionFormat, Content.GetData(), Content.Num(), ContentTemp.GetData(), ContentTemp.Num()))
		{
			Content.Empty();
			return false;
		}
	}
	else
	{
		Content = MoveTemp(ContentTemp);
	}
	
	return true;
}
