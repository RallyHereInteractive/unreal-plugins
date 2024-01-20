---
title: FRHAPI_LoginRequestV1 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_GrantType|[GrantType](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a5652f06d62aeb59dbb1b27481aef0f75)|The grant type to use for authentication.|
|FString|[PortalAccessToken_Optional](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a4a5fc4127eb3b9d333dd8ee017a6cac2)|Token or secret used to authenticate the provided grant type.|
|bool|[PortalAccessToken_IsSet](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aad18b9609d6bd7138a7c5c69fd15f2f7)|true if PortalAccessToken_Optional has been set to a value|
|FString|[PortalDisplayName_Optional](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a1c037515a08c315751b058d6ddf86072)|Some grant types support client-provided names.|
|bool|[PortalDisplayName_IsSet](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1ac8e03fda49feff561c4881f61445dd2a)|true if PortalDisplayName_Optional has been set to a value|
|FString|[PortalParentAccessToken_Optional](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a32ed174ff27dd780d9d043c8568dc23d)|Some grant types have 2 tier authentication and require a second token/secret.|
|bool|[PortalParentAccessToken_IsSet](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a0a33be078d1a4be49d34b854274db998)|true if PortalParentAccessToken_Optional has been set to a value|
|FString|[PortalParentDisplayName_Optional](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aad759eada48cc1d902fea93eef176107)|Some grant types have 2 tier authentication and support a second display name.|
|bool|[PortalParentDisplayName_IsSet](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1ac38a9eeaa42fe49b1afe001300fe1537)|true if PortalParentDisplayName_Optional has been set to a value|
|bool|[IncludeRefresh_Optional](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1ab9e6144c919f8968d72a5de9f1bebe1e)|Indicates if the client wants a refresh token returned.|
|bool|[IncludeRefresh_IsSet](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a09bc6d1ee1551c4c01554ce440d6ec94)|true if IncludeRefresh_Optional has been set to a value|
|bool|[AcceptEula_Optional](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a444499cfb141928c2441a47dfab1cc62)|If true, the user has accepted the EULA.|
|bool|[AcceptEula_IsSet](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a305c9fbca31912e05edba91758eee181)|true if AcceptEula_Optional has been set to a value|
|bool|[AcceptTos_Optional](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a517f59a0050a2919652bb24db02b0deb)|If true, the user has accepted the Terms of Service.|
|bool|[AcceptTos_IsSet](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a9fe0e50766802bf249674d17b5472a0c)|true if AcceptTos_Optional has been set to a value|
|bool|[AcceptPrivacyPolicy_Optional](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a964804d16178c88b296410732f5be293)|If true, the user has accepted the Privacy Policy.|
|bool|[AcceptPrivacyPolicy_IsSet](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a0d79c6d0a330b85e6ce4ea3dfa7225d2)|true if AcceptPrivacyPolicy_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1af6cb42d74d6be35b1cf28ef26da96045)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1afb34e361a832a5965fc3f279d7366de1)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_GrantType &|[GetGrantType](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aba328ef0495c5e7f8de2dad1725c4e67)()|Gets the value of GrantType.|
|const ERHAPI_GrantType &|[GetGrantType](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a154a10b14c2931d90684345db5225116)()|Gets the value of GrantType.|
|void|[SetGrantType](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1affd35ca62a54def818ef0f2f7f919ead)(ERHAPI_GrantType NewValue)|Sets the value of GrantType.|
|FString &|[GetPortalAccessToken](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a500cfdd5b03970a615295709ef4f71c6)()|Gets the value of PortalAccessToken_Optional, regardless of it having been set.|
|const FString &|[GetPortalAccessToken](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aa4121210b97dbe16c7eb87056eabfff7)()|Gets the value of PortalAccessToken_Optional, regardless of it having been set.|
|const FString &|[GetPortalAccessToken](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1abfbf4f8290626aa6741fcb1ebd9cde0f)(const FString & DefaultValue)|Gets the value of PortalAccessToken_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPortalAccessToken](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a279c5f65ccb418628f06bf6c99e215ce)(FString & OutValue)|Fills OutValue with the value of PortalAccessToken_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetPortalAccessTokenOrNull](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1ab198a6684bcdcbb6fb0988dcef3e0c79)()|Returns a pointer to PortalAccessToken_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetPortalAccessTokenOrNull](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aa0c2dcb877fa366ab1b304e564c5fd24)()|Returns a pointer to PortalAccessToken_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPortalAccessToken](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a4fcbb03230869519b4dc4d6769d6d2ae)(FString NewValue)|Sets the value of PortalAccessToken_Optional and also sets PortalAccessToken_IsSet to true.|
|void|[ClearPortalAccessToken](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a6f5f63b9a84c1480633c04d024b1f359)()|Clears the value of PortalAccessToken_Optional and sets PortalAccessToken_IsSet to false.|
|bool|[IsPortalAccessTokenDefaultValue](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1abc9e48df88f10f0beb57b98cade49f29)()|Returns true if PortalAccessToken_Optional is set and matches the default value.|
|void|[SetPortalAccessTokenToDefault](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1af668f553eb393e4124e0f3ebe0a261c0)()|Sets the value of PortalAccessToken_Optional to its default and also sets PortalAccessToken_IsSet to true.|
|FString &|[GetPortalDisplayName](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aa7c7b24f58418ffe09990898041ce416)()|Gets the value of PortalDisplayName_Optional, regardless of it having been set.|
|const FString &|[GetPortalDisplayName](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a8f45c6004925b665f43dafbb13072809)()|Gets the value of PortalDisplayName_Optional, regardless of it having been set.|
|const FString &|[GetPortalDisplayName](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a37e7a6121e17557a4a9a377ec30c48dd)(const FString & DefaultValue)|Gets the value of PortalDisplayName_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPortalDisplayName](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a2ef397bdba4436c2ce3b0092acec86ef)(FString & OutValue)|Fills OutValue with the value of PortalDisplayName_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetPortalDisplayNameOrNull](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a2c3b54c262c258bec602acc0d9ee00ba)()|Returns a pointer to PortalDisplayName_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetPortalDisplayNameOrNull](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a8d97a6e1fb62de68b13285f83cda94a2)()|Returns a pointer to PortalDisplayName_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPortalDisplayName](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1ae4df2aba7332f33d89512aa773edb17d)(FString NewValue)|Sets the value of PortalDisplayName_Optional and also sets PortalDisplayName_IsSet to true.|
|void|[ClearPortalDisplayName](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1ab6d75d6ed5717f0a4fc920c480561f10)()|Clears the value of PortalDisplayName_Optional and sets PortalDisplayName_IsSet to false.|
|bool|[IsPortalDisplayNameDefaultValue](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a5d07c7544437f18f977ed60748c63d80)()|Returns true if PortalDisplayName_Optional is set and matches the default value.|
|void|[SetPortalDisplayNameToDefault](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a34499db17134bd2404dc3ad90012f79b)()|Sets the value of PortalDisplayName_Optional to its default and also sets PortalDisplayName_IsSet to true.|
|FString &|[GetPortalParentAccessToken](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a73bc91eaca44ab266015581552872671)()|Gets the value of PortalParentAccessToken_Optional, regardless of it having been set.|
|const FString &|[GetPortalParentAccessToken](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aff9f6677ed15c45fcc7b530f666bd762)()|Gets the value of PortalParentAccessToken_Optional, regardless of it having been set.|
|const FString &|[GetPortalParentAccessToken](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1af0685ca91490ae927940b4163fd002d7)(const FString & DefaultValue)|Gets the value of PortalParentAccessToken_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPortalParentAccessToken](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aa80708f79901750929ae9df4385d870c)(FString & OutValue)|Fills OutValue with the value of PortalParentAccessToken_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetPortalParentAccessTokenOrNull](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a859e53a2cc9ff794d536997221744989)()|Returns a pointer to PortalParentAccessToken_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetPortalParentAccessTokenOrNull](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a33bfb0e8c6c596cc79879cd6e5b03dd2)()|Returns a pointer to PortalParentAccessToken_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPortalParentAccessToken](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a05166d93077849fe75e9e7b0063dd4fe)(FString NewValue)|Sets the value of PortalParentAccessToken_Optional and also sets PortalParentAccessToken_IsSet to true.|
|void|[ClearPortalParentAccessToken](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aa6e2e26c9db08a28c88571332f901b60)()|Clears the value of PortalParentAccessToken_Optional and sets PortalParentAccessToken_IsSet to false.|
|bool|[IsPortalParentAccessTokenDefaultValue](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a294cb9fee89003b898f8f1fbcc05bdc0)()|Returns true if PortalParentAccessToken_Optional is set and matches the default value.|
|void|[SetPortalParentAccessTokenToDefault](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a499de88fbdfd9c318e19a7e52164d1c9)()|Sets the value of PortalParentAccessToken_Optional to its default and also sets PortalParentAccessToken_IsSet to true.|
|FString &|[GetPortalParentDisplayName](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a87248cc8e11cfa9bb4e62217f1896e50)()|Gets the value of PortalParentDisplayName_Optional, regardless of it having been set.|
|const FString &|[GetPortalParentDisplayName](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a49878d9109c30ff70ef367ade8f143ac)()|Gets the value of PortalParentDisplayName_Optional, regardless of it having been set.|
|const FString &|[GetPortalParentDisplayName](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1ae47f983f548d89d186587368fa51bd15)(const FString & DefaultValue)|Gets the value of PortalParentDisplayName_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPortalParentDisplayName](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aafb09e32a58bb4638c94cc2e74401e5d)(FString & OutValue)|Fills OutValue with the value of PortalParentDisplayName_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetPortalParentDisplayNameOrNull](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aa54106c578ff3ceac90f1872a813b84c)()|Returns a pointer to PortalParentDisplayName_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetPortalParentDisplayNameOrNull](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a3ceb4dfc8e731a0a81cd4579d2862259)()|Returns a pointer to PortalParentDisplayName_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPortalParentDisplayName](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aa8a00604555cac731a7a02728232556d)(FString NewValue)|Sets the value of PortalParentDisplayName_Optional and also sets PortalParentDisplayName_IsSet to true.|
|void|[ClearPortalParentDisplayName](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a66e53166395f1d797f95122c25c772e6)()|Clears the value of PortalParentDisplayName_Optional and sets PortalParentDisplayName_IsSet to false.|
|bool|[IsPortalParentDisplayNameDefaultValue](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a446a83239fedd24f9e73457914ed047d)()|Returns true if PortalParentDisplayName_Optional is set and matches the default value.|
|void|[SetPortalParentDisplayNameToDefault](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a1164bbe730b05f565c4a13ed43185deb)()|Sets the value of PortalParentDisplayName_Optional to its default and also sets PortalParentDisplayName_IsSet to true.|
|bool &|[GetIncludeRefresh](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1af589970e7df955399675bc80f9e4261d)()|Gets the value of IncludeRefresh_Optional, regardless of it having been set.|
|const bool &|[GetIncludeRefresh](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a0ceb79ec47eb2944111b39c4d33628a0)()|Gets the value of IncludeRefresh_Optional, regardless of it having been set.|
|const bool &|[GetIncludeRefresh](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1adbbba6ed9a7ea3675fa40360ff5535b4)(const bool & DefaultValue)|Gets the value of IncludeRefresh_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetIncludeRefresh](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a8a65c714e437b56c9f659c300faaf896)(bool & OutValue)|Fills OutValue with the value of IncludeRefresh_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetIncludeRefreshOrNull](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aaef275d69e673715780f5692960c3138)()|Returns a pointer to IncludeRefresh_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetIncludeRefreshOrNull](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a3128f61e92909f8127a4ab5230dc1a75)()|Returns a pointer to IncludeRefresh_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetIncludeRefresh](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a189f961fd3ab79793d4fab7bfb9f3fe5)(bool NewValue)|Sets the value of IncludeRefresh_Optional and also sets IncludeRefresh_IsSet to true.|
|void|[ClearIncludeRefresh](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a4d32f474e3ebfb2f98e1651b1ce5fb6e)()|Clears the value of IncludeRefresh_Optional and sets IncludeRefresh_IsSet to false.|
|bool|[IsIncludeRefreshDefaultValue](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a57a046c28fb74bba94aa6dfe43a29c9b)()|Returns true if IncludeRefresh_Optional is set and matches the default value.|
|void|[SetIncludeRefreshToDefault](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a742c7d1a4e064be2c1469662a2a7dbf0)()|Sets the value of IncludeRefresh_Optional to its default and also sets IncludeRefresh_IsSet to true.|
|bool &|[GetAcceptEula](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a823ae34c85aa46552ac971090bc950fe)()|Gets the value of AcceptEula_Optional, regardless of it having been set.|
|const bool &|[GetAcceptEula](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aed8670d00320ed87aaa67dc7dc6e46c3)()|Gets the value of AcceptEula_Optional, regardless of it having been set.|
|const bool &|[GetAcceptEula](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aa209e8bbbcc1dd72936c0bf5e6cb7256)(const bool & DefaultValue)|Gets the value of AcceptEula_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAcceptEula](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a18503c58dd0f2b019d9c0934d854d2d3)(bool & OutValue)|Fills OutValue with the value of AcceptEula_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetAcceptEulaOrNull](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a6b21d626ffdbbf55a7e19004ad40528d)()|Returns a pointer to AcceptEula_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetAcceptEulaOrNull](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a37e30d178b51efa7be1125dff98c84d7)()|Returns a pointer to AcceptEula_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAcceptEula](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a3c0ee2f2175d9110a53bee55617c2cfd)(bool NewValue)|Sets the value of AcceptEula_Optional and also sets AcceptEula_IsSet to true.|
|void|[ClearAcceptEula](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a9b51780e9816a5cb2ca47c9f340385d2)()|Clears the value of AcceptEula_Optional and sets AcceptEula_IsSet to false.|
|bool|[IsAcceptEulaDefaultValue](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aef4204a66417da2e0395e78b5137de5b)()|Returns true if AcceptEula_Optional is set and matches the default value.|
|void|[SetAcceptEulaToDefault](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aebff83f31849866bcd7698a35726408c)()|Sets the value of AcceptEula_Optional to its default and also sets AcceptEula_IsSet to true.|
|bool &|[GetAcceptTos](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a880c5b33c9497a319d947fcafd529dd8)()|Gets the value of AcceptTos_Optional, regardless of it having been set.|
|const bool &|[GetAcceptTos](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a8b7912427704ac14a9d681bc4756e634)()|Gets the value of AcceptTos_Optional, regardless of it having been set.|
|const bool &|[GetAcceptTos](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a8d699baa2294a26b55cf2b657da36c43)(const bool & DefaultValue)|Gets the value of AcceptTos_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAcceptTos](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1ae7448deed42325473e4e99c6628ae2f3)(bool & OutValue)|Fills OutValue with the value of AcceptTos_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetAcceptTosOrNull](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a3790b5ab75143c91907de5c50c8ef65a)()|Returns a pointer to AcceptTos_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetAcceptTosOrNull](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1ac37c5bffd50c47a4b8d8af85a08eb613)()|Returns a pointer to AcceptTos_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAcceptTos](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1aa1c5d72aead560fe730db4ecb3d69290)(bool NewValue)|Sets the value of AcceptTos_Optional and also sets AcceptTos_IsSet to true.|
|void|[ClearAcceptTos](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1adabb1d08ab991ccc72c1fca427a2de5a)()|Clears the value of AcceptTos_Optional and sets AcceptTos_IsSet to false.|
|bool|[IsAcceptTosDefaultValue](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a8da59ecd9c57753f3174f98bdc3500f6)()|Returns true if AcceptTos_Optional is set and matches the default value.|
|void|[SetAcceptTosToDefault](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1ae5b328b14a4122950055ff4c7b45a3b6)()|Sets the value of AcceptTos_Optional to its default and also sets AcceptTos_IsSet to true.|
|bool &|[GetAcceptPrivacyPolicy](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a72c49774a7d06305b1e70adf2f9f16b0)()|Gets the value of AcceptPrivacyPolicy_Optional, regardless of it having been set.|
|const bool &|[GetAcceptPrivacyPolicy](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a5211f25c09278ed8b505def309bd819e)()|Gets the value of AcceptPrivacyPolicy_Optional, regardless of it having been set.|
|const bool &|[GetAcceptPrivacyPolicy](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a9c04422a54ce634b6a5b615bfa3425da)(const bool & DefaultValue)|Gets the value of AcceptPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAcceptPrivacyPolicy](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a6e0492e3cbe4783d21105757d5818ca6)(bool & OutValue)|Fills OutValue with the value of AcceptPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetAcceptPrivacyPolicyOrNull](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a465ac74d30cfd19db80b02c392a17e70)()|Returns a pointer to AcceptPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetAcceptPrivacyPolicyOrNull](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1ac70c479de53ed15e6b2f215e93a22daa)()|Returns a pointer to AcceptPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAcceptPrivacyPolicy](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1a9b846e726e9468dd7026d5ca52c16c88)(bool NewValue)|Sets the value of AcceptPrivacyPolicy_Optional and also sets AcceptPrivacyPolicy_IsSet to true.|
|void|[ClearAcceptPrivacyPolicy](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1ae6935f79cb6cf3b44b05b88925e457be)()|Clears the value of AcceptPrivacyPolicy_Optional and sets AcceptPrivacyPolicy_IsSet to false.|
|bool|[IsAcceptPrivacyPolicyDefaultValue](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1ad54685034fe9ad2ab281134c099d2f9e)()|Returns true if AcceptPrivacyPolicy_Optional is set and matches the default value.|
|void|[SetAcceptPrivacyPolicyToDefault](/unreal-plugins/all/structfrhapi__loginrequestv1/#structFRHAPI__LoginRequestV1_1acd55a9f76eddf263489516ccf5bb712d)()|Sets the value of AcceptPrivacyPolicy_Optional to its default and also sets AcceptPrivacyPolicy_IsSet to true.|
## Public Attributes



### `GrantType` <a id="structFRHAPI__LoginRequestV1_1a5652f06d62aeb59dbb1b27481aef0f75"></a>

`ERHAPI_GrantType FRHAPI_LoginRequestV1::GrantType`

The grant type to use for authentication.




### `PortalAccessToken_Optional` <a id="structFRHAPI__LoginRequestV1_1a4a5fc4127eb3b9d333dd8ee017a6cac2"></a>

`FString FRHAPI_LoginRequestV1::PortalAccessToken_Optional`

Token or secret used to authenticate the provided grant type.




### `PortalAccessToken_IsSet` <a id="structFRHAPI__LoginRequestV1_1aad18b9609d6bd7138a7c5c69fd15f2f7"></a>

`bool FRHAPI_LoginRequestV1::PortalAccessToken_IsSet`

true if PortalAccessToken_Optional has been set to a value




### `PortalDisplayName_Optional` <a id="structFRHAPI__LoginRequestV1_1a1c037515a08c315751b058d6ddf86072"></a>

`FString FRHAPI_LoginRequestV1::PortalDisplayName_Optional`

Some grant types support client-provided names.




### `PortalDisplayName_IsSet` <a id="structFRHAPI__LoginRequestV1_1ac8e03fda49feff561c4881f61445dd2a"></a>

`bool FRHAPI_LoginRequestV1::PortalDisplayName_IsSet`

true if PortalDisplayName_Optional has been set to a value




### `PortalParentAccessToken_Optional` <a id="structFRHAPI__LoginRequestV1_1a32ed174ff27dd780d9d043c8568dc23d"></a>

`FString FRHAPI_LoginRequestV1::PortalParentAccessToken_Optional`

Some grant types have 2 tier authentication and require a second token/secret.




### `PortalParentAccessToken_IsSet` <a id="structFRHAPI__LoginRequestV1_1a0a33be078d1a4be49d34b854274db998"></a>

`bool FRHAPI_LoginRequestV1::PortalParentAccessToken_IsSet`

true if PortalParentAccessToken_Optional has been set to a value




### `PortalParentDisplayName_Optional` <a id="structFRHAPI__LoginRequestV1_1aad759eada48cc1d902fea93eef176107"></a>

`FString FRHAPI_LoginRequestV1::PortalParentDisplayName_Optional`

Some grant types have 2 tier authentication and support a second display name.




### `PortalParentDisplayName_IsSet` <a id="structFRHAPI__LoginRequestV1_1ac38a9eeaa42fe49b1afe001300fe1537"></a>

`bool FRHAPI_LoginRequestV1::PortalParentDisplayName_IsSet`

true if PortalParentDisplayName_Optional has been set to a value




### `IncludeRefresh_Optional` <a id="structFRHAPI__LoginRequestV1_1ab9e6144c919f8968d72a5de9f1bebe1e"></a>

`bool FRHAPI_LoginRequestV1::IncludeRefresh_Optional`

Indicates if the client wants a refresh token returned.




### `IncludeRefresh_IsSet` <a id="structFRHAPI__LoginRequestV1_1a09bc6d1ee1551c4c01554ce440d6ec94"></a>

`bool FRHAPI_LoginRequestV1::IncludeRefresh_IsSet`

true if IncludeRefresh_Optional has been set to a value




### `AcceptEula_Optional` <a id="structFRHAPI__LoginRequestV1_1a444499cfb141928c2441a47dfab1cc62"></a>

`bool FRHAPI_LoginRequestV1::AcceptEula_Optional`

If true, the user has accepted the EULA.




### `AcceptEula_IsSet` <a id="structFRHAPI__LoginRequestV1_1a305c9fbca31912e05edba91758eee181"></a>

`bool FRHAPI_LoginRequestV1::AcceptEula_IsSet`

true if AcceptEula_Optional has been set to a value




### `AcceptTos_Optional` <a id="structFRHAPI__LoginRequestV1_1a517f59a0050a2919652bb24db02b0deb"></a>

`bool FRHAPI_LoginRequestV1::AcceptTos_Optional`

If true, the user has accepted the Terms of Service.




### `AcceptTos_IsSet` <a id="structFRHAPI__LoginRequestV1_1a9fe0e50766802bf249674d17b5472a0c"></a>

`bool FRHAPI_LoginRequestV1::AcceptTos_IsSet`

true if AcceptTos_Optional has been set to a value




### `AcceptPrivacyPolicy_Optional` <a id="structFRHAPI__LoginRequestV1_1a964804d16178c88b296410732f5be293"></a>

`bool FRHAPI_LoginRequestV1::AcceptPrivacyPolicy_Optional`

If true, the user has accepted the Privacy Policy.




### `AcceptPrivacyPolicy_IsSet` <a id="structFRHAPI__LoginRequestV1_1a0d79c6d0a330b85e6ce4ea3dfa7225d2"></a>

`bool FRHAPI_LoginRequestV1::AcceptPrivacyPolicy_IsSet`

true if AcceptPrivacyPolicy_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__LoginRequestV1_1af6cb42d74d6be35b1cf28ef26da96045"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__LoginRequestV1_1afb34e361a832a5965fc3f279d7366de1"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetGrantType` <a id="structFRHAPI__LoginRequestV1_1aba328ef0495c5e7f8de2dad1725c4e67"></a>

ERHAPI_GrantType & GetGrantType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of GrantType.




### `GetGrantType` <a id="structFRHAPI__LoginRequestV1_1a154a10b14c2931d90684345db5225116"></a>

const ERHAPI_GrantType & GetGrantType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of GrantType.




### `SetGrantType` <a id="structFRHAPI__LoginRequestV1_1affd35ca62a54def818ef0f2f7f919ead"></a>

void SetGrantType(ERHAPI_GrantType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_GrantType|NewValue|

#### Description

Sets the value of GrantType.




### `GetPortalAccessToken` <a id="structFRHAPI__LoginRequestV1_1a500cfdd5b03970a615295709ef4f71c6"></a>

FString & GetPortalAccessToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalAccessToken_Optional, regardless of it having been set.




### `GetPortalAccessToken` <a id="structFRHAPI__LoginRequestV1_1aa4121210b97dbe16c7eb87056eabfff7"></a>

const FString & GetPortalAccessToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalAccessToken_Optional, regardless of it having been set.




### `GetPortalAccessToken` <a id="structFRHAPI__LoginRequestV1_1abfbf4f8290626aa6741fcb1ebd9cde0f"></a>

const FString & GetPortalAccessToken(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of PortalAccessToken_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPortalAccessToken` <a id="structFRHAPI__LoginRequestV1_1a279c5f65ccb418628f06bf6c99e215ce"></a>

bool GetPortalAccessToken(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of PortalAccessToken_Optional and returns true if it has been set, otherwise returns false.




### `GetPortalAccessTokenOrNull` <a id="structFRHAPI__LoginRequestV1_1ab198a6684bcdcbb6fb0988dcef3e0c79"></a>

FString * GetPortalAccessTokenOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalAccessToken_Optional, if it has been set, otherwise returns nullptr.




### `GetPortalAccessTokenOrNull` <a id="structFRHAPI__LoginRequestV1_1aa0c2dcb877fa366ab1b304e564c5fd24"></a>

const FString * GetPortalAccessTokenOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalAccessToken_Optional, if it has been set, otherwise returns nullptr.




### `SetPortalAccessToken` <a id="structFRHAPI__LoginRequestV1_1a4fcbb03230869519b4dc4d6769d6d2ae"></a>

void SetPortalAccessToken(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PortalAccessToken_Optional and also sets PortalAccessToken_IsSet to true.




### `ClearPortalAccessToken` <a id="structFRHAPI__LoginRequestV1_1a6f5f63b9a84c1480633c04d024b1f359"></a>

void ClearPortalAccessToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PortalAccessToken_Optional and sets PortalAccessToken_IsSet to false.




### `IsPortalAccessTokenDefaultValue` <a id="structFRHAPI__LoginRequestV1_1abc9e48df88f10f0beb57b98cade49f29"></a>

bool IsPortalAccessTokenDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PortalAccessToken_Optional is set and matches the default value.




### `SetPortalAccessTokenToDefault` <a id="structFRHAPI__LoginRequestV1_1af668f553eb393e4124e0f3ebe0a261c0"></a>

void SetPortalAccessTokenToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PortalAccessToken_Optional to its default and also sets PortalAccessToken_IsSet to true.




### `GetPortalDisplayName` <a id="structFRHAPI__LoginRequestV1_1aa7c7b24f58418ffe09990898041ce416"></a>

FString & GetPortalDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalDisplayName_Optional, regardless of it having been set.




### `GetPortalDisplayName` <a id="structFRHAPI__LoginRequestV1_1a8f45c6004925b665f43dafbb13072809"></a>

const FString & GetPortalDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalDisplayName_Optional, regardless of it having been set.




### `GetPortalDisplayName` <a id="structFRHAPI__LoginRequestV1_1a37e7a6121e17557a4a9a377ec30c48dd"></a>

const FString & GetPortalDisplayName(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of PortalDisplayName_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPortalDisplayName` <a id="structFRHAPI__LoginRequestV1_1a2ef397bdba4436c2ce3b0092acec86ef"></a>

bool GetPortalDisplayName(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of PortalDisplayName_Optional and returns true if it has been set, otherwise returns false.




### `GetPortalDisplayNameOrNull` <a id="structFRHAPI__LoginRequestV1_1a2c3b54c262c258bec602acc0d9ee00ba"></a>

FString * GetPortalDisplayNameOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalDisplayName_Optional, if it has been set, otherwise returns nullptr.




### `GetPortalDisplayNameOrNull` <a id="structFRHAPI__LoginRequestV1_1a8d97a6e1fb62de68b13285f83cda94a2"></a>

const FString * GetPortalDisplayNameOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalDisplayName_Optional, if it has been set, otherwise returns nullptr.




### `SetPortalDisplayName` <a id="structFRHAPI__LoginRequestV1_1ae4df2aba7332f33d89512aa773edb17d"></a>

void SetPortalDisplayName(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PortalDisplayName_Optional and also sets PortalDisplayName_IsSet to true.




### `ClearPortalDisplayName` <a id="structFRHAPI__LoginRequestV1_1ab6d75d6ed5717f0a4fc920c480561f10"></a>

void ClearPortalDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PortalDisplayName_Optional and sets PortalDisplayName_IsSet to false.




### `IsPortalDisplayNameDefaultValue` <a id="structFRHAPI__LoginRequestV1_1a5d07c7544437f18f977ed60748c63d80"></a>

bool IsPortalDisplayNameDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PortalDisplayName_Optional is set and matches the default value.




### `SetPortalDisplayNameToDefault` <a id="structFRHAPI__LoginRequestV1_1a34499db17134bd2404dc3ad90012f79b"></a>

void SetPortalDisplayNameToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PortalDisplayName_Optional to its default and also sets PortalDisplayName_IsSet to true.




### `GetPortalParentAccessToken` <a id="structFRHAPI__LoginRequestV1_1a73bc91eaca44ab266015581552872671"></a>

FString & GetPortalParentAccessToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalParentAccessToken_Optional, regardless of it having been set.




### `GetPortalParentAccessToken` <a id="structFRHAPI__LoginRequestV1_1aff9f6677ed15c45fcc7b530f666bd762"></a>

const FString & GetPortalParentAccessToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalParentAccessToken_Optional, regardless of it having been set.




### `GetPortalParentAccessToken` <a id="structFRHAPI__LoginRequestV1_1af0685ca91490ae927940b4163fd002d7"></a>

const FString & GetPortalParentAccessToken(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of PortalParentAccessToken_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPortalParentAccessToken` <a id="structFRHAPI__LoginRequestV1_1aa80708f79901750929ae9df4385d870c"></a>

bool GetPortalParentAccessToken(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of PortalParentAccessToken_Optional and returns true if it has been set, otherwise returns false.




### `GetPortalParentAccessTokenOrNull` <a id="structFRHAPI__LoginRequestV1_1a859e53a2cc9ff794d536997221744989"></a>

FString * GetPortalParentAccessTokenOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalParentAccessToken_Optional, if it has been set, otherwise returns nullptr.




### `GetPortalParentAccessTokenOrNull` <a id="structFRHAPI__LoginRequestV1_1a33bfb0e8c6c596cc79879cd6e5b03dd2"></a>

const FString * GetPortalParentAccessTokenOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalParentAccessToken_Optional, if it has been set, otherwise returns nullptr.




### `SetPortalParentAccessToken` <a id="structFRHAPI__LoginRequestV1_1a05166d93077849fe75e9e7b0063dd4fe"></a>

void SetPortalParentAccessToken(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PortalParentAccessToken_Optional and also sets PortalParentAccessToken_IsSet to true.




### `ClearPortalParentAccessToken` <a id="structFRHAPI__LoginRequestV1_1aa6e2e26c9db08a28c88571332f901b60"></a>

void ClearPortalParentAccessToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PortalParentAccessToken_Optional and sets PortalParentAccessToken_IsSet to false.




### `IsPortalParentAccessTokenDefaultValue` <a id="structFRHAPI__LoginRequestV1_1a294cb9fee89003b898f8f1fbcc05bdc0"></a>

bool IsPortalParentAccessTokenDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PortalParentAccessToken_Optional is set and matches the default value.




### `SetPortalParentAccessTokenToDefault` <a id="structFRHAPI__LoginRequestV1_1a499de88fbdfd9c318e19a7e52164d1c9"></a>

void SetPortalParentAccessTokenToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PortalParentAccessToken_Optional to its default and also sets PortalParentAccessToken_IsSet to true.




### `GetPortalParentDisplayName` <a id="structFRHAPI__LoginRequestV1_1a87248cc8e11cfa9bb4e62217f1896e50"></a>

FString & GetPortalParentDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalParentDisplayName_Optional, regardless of it having been set.




### `GetPortalParentDisplayName` <a id="structFRHAPI__LoginRequestV1_1a49878d9109c30ff70ef367ade8f143ac"></a>

const FString & GetPortalParentDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalParentDisplayName_Optional, regardless of it having been set.




### `GetPortalParentDisplayName` <a id="structFRHAPI__LoginRequestV1_1ae47f983f548d89d186587368fa51bd15"></a>

const FString & GetPortalParentDisplayName(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of PortalParentDisplayName_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPortalParentDisplayName` <a id="structFRHAPI__LoginRequestV1_1aafb09e32a58bb4638c94cc2e74401e5d"></a>

bool GetPortalParentDisplayName(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of PortalParentDisplayName_Optional and returns true if it has been set, otherwise returns false.




### `GetPortalParentDisplayNameOrNull` <a id="structFRHAPI__LoginRequestV1_1aa54106c578ff3ceac90f1872a813b84c"></a>

FString * GetPortalParentDisplayNameOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalParentDisplayName_Optional, if it has been set, otherwise returns nullptr.




### `GetPortalParentDisplayNameOrNull` <a id="structFRHAPI__LoginRequestV1_1a3ceb4dfc8e731a0a81cd4579d2862259"></a>

const FString * GetPortalParentDisplayNameOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalParentDisplayName_Optional, if it has been set, otherwise returns nullptr.




### `SetPortalParentDisplayName` <a id="structFRHAPI__LoginRequestV1_1aa8a00604555cac731a7a02728232556d"></a>

void SetPortalParentDisplayName(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PortalParentDisplayName_Optional and also sets PortalParentDisplayName_IsSet to true.




### `ClearPortalParentDisplayName` <a id="structFRHAPI__LoginRequestV1_1a66e53166395f1d797f95122c25c772e6"></a>

void ClearPortalParentDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PortalParentDisplayName_Optional and sets PortalParentDisplayName_IsSet to false.




### `IsPortalParentDisplayNameDefaultValue` <a id="structFRHAPI__LoginRequestV1_1a446a83239fedd24f9e73457914ed047d"></a>

bool IsPortalParentDisplayNameDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PortalParentDisplayName_Optional is set and matches the default value.




### `SetPortalParentDisplayNameToDefault` <a id="structFRHAPI__LoginRequestV1_1a1164bbe730b05f565c4a13ed43185deb"></a>

void SetPortalParentDisplayNameToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PortalParentDisplayName_Optional to its default and also sets PortalParentDisplayName_IsSet to true.




### `GetIncludeRefresh` <a id="structFRHAPI__LoginRequestV1_1af589970e7df955399675bc80f9e4261d"></a>

bool & GetIncludeRefresh()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of IncludeRefresh_Optional, regardless of it having been set.




### `GetIncludeRefresh` <a id="structFRHAPI__LoginRequestV1_1a0ceb79ec47eb2944111b39c4d33628a0"></a>

const bool & GetIncludeRefresh()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of IncludeRefresh_Optional, regardless of it having been set.




### `GetIncludeRefresh` <a id="structFRHAPI__LoginRequestV1_1adbbba6ed9a7ea3675fa40360ff5535b4"></a>

const bool & GetIncludeRefresh(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of IncludeRefresh_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetIncludeRefresh` <a id="structFRHAPI__LoginRequestV1_1a8a65c714e437b56c9f659c300faaf896"></a>

bool GetIncludeRefresh(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of IncludeRefresh_Optional and returns true if it has been set, otherwise returns false.




### `GetIncludeRefreshOrNull` <a id="structFRHAPI__LoginRequestV1_1aaef275d69e673715780f5692960c3138"></a>

bool * GetIncludeRefreshOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to IncludeRefresh_Optional, if it has been set, otherwise returns nullptr.




### `GetIncludeRefreshOrNull` <a id="structFRHAPI__LoginRequestV1_1a3128f61e92909f8127a4ab5230dc1a75"></a>

const bool * GetIncludeRefreshOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to IncludeRefresh_Optional, if it has been set, otherwise returns nullptr.




### `SetIncludeRefresh` <a id="structFRHAPI__LoginRequestV1_1a189f961fd3ab79793d4fab7bfb9f3fe5"></a>

void SetIncludeRefresh(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of IncludeRefresh_Optional and also sets IncludeRefresh_IsSet to true.




### `ClearIncludeRefresh` <a id="structFRHAPI__LoginRequestV1_1a4d32f474e3ebfb2f98e1651b1ce5fb6e"></a>

void ClearIncludeRefresh()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of IncludeRefresh_Optional and sets IncludeRefresh_IsSet to false.




### `IsIncludeRefreshDefaultValue` <a id="structFRHAPI__LoginRequestV1_1a57a046c28fb74bba94aa6dfe43a29c9b"></a>

bool IsIncludeRefreshDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if IncludeRefresh_Optional is set and matches the default value.




### `SetIncludeRefreshToDefault` <a id="structFRHAPI__LoginRequestV1_1a742c7d1a4e064be2c1469662a2a7dbf0"></a>

void SetIncludeRefreshToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of IncludeRefresh_Optional to its default and also sets IncludeRefresh_IsSet to true.




### `GetAcceptEula` <a id="structFRHAPI__LoginRequestV1_1a823ae34c85aa46552ac971090bc950fe"></a>

bool & GetAcceptEula()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AcceptEula_Optional, regardless of it having been set.




### `GetAcceptEula` <a id="structFRHAPI__LoginRequestV1_1aed8670d00320ed87aaa67dc7dc6e46c3"></a>

const bool & GetAcceptEula()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AcceptEula_Optional, regardless of it having been set.




### `GetAcceptEula` <a id="structFRHAPI__LoginRequestV1_1aa209e8bbbcc1dd72936c0bf5e6cb7256"></a>

const bool & GetAcceptEula(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of AcceptEula_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAcceptEula` <a id="structFRHAPI__LoginRequestV1_1a18503c58dd0f2b019d9c0934d854d2d3"></a>

bool GetAcceptEula(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of AcceptEula_Optional and returns true if it has been set, otherwise returns false.




### `GetAcceptEulaOrNull` <a id="structFRHAPI__LoginRequestV1_1a6b21d626ffdbbf55a7e19004ad40528d"></a>

bool * GetAcceptEulaOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AcceptEula_Optional, if it has been set, otherwise returns nullptr.




### `GetAcceptEulaOrNull` <a id="structFRHAPI__LoginRequestV1_1a37e30d178b51efa7be1125dff98c84d7"></a>

const bool * GetAcceptEulaOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AcceptEula_Optional, if it has been set, otherwise returns nullptr.




### `SetAcceptEula` <a id="structFRHAPI__LoginRequestV1_1a3c0ee2f2175d9110a53bee55617c2cfd"></a>

void SetAcceptEula(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of AcceptEula_Optional and also sets AcceptEula_IsSet to true.




### `ClearAcceptEula` <a id="structFRHAPI__LoginRequestV1_1a9b51780e9816a5cb2ca47c9f340385d2"></a>

void ClearAcceptEula()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AcceptEula_Optional and sets AcceptEula_IsSet to false.




### `IsAcceptEulaDefaultValue` <a id="structFRHAPI__LoginRequestV1_1aef4204a66417da2e0395e78b5137de5b"></a>

bool IsAcceptEulaDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if AcceptEula_Optional is set and matches the default value.




### `SetAcceptEulaToDefault` <a id="structFRHAPI__LoginRequestV1_1aebff83f31849866bcd7698a35726408c"></a>

void SetAcceptEulaToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of AcceptEula_Optional to its default and also sets AcceptEula_IsSet to true.




### `GetAcceptTos` <a id="structFRHAPI__LoginRequestV1_1a880c5b33c9497a319d947fcafd529dd8"></a>

bool & GetAcceptTos()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AcceptTos_Optional, regardless of it having been set.




### `GetAcceptTos` <a id="structFRHAPI__LoginRequestV1_1a8b7912427704ac14a9d681bc4756e634"></a>

const bool & GetAcceptTos()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AcceptTos_Optional, regardless of it having been set.




### `GetAcceptTos` <a id="structFRHAPI__LoginRequestV1_1a8d699baa2294a26b55cf2b657da36c43"></a>

const bool & GetAcceptTos(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of AcceptTos_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAcceptTos` <a id="structFRHAPI__LoginRequestV1_1ae7448deed42325473e4e99c6628ae2f3"></a>

bool GetAcceptTos(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of AcceptTos_Optional and returns true if it has been set, otherwise returns false.




### `GetAcceptTosOrNull` <a id="structFRHAPI__LoginRequestV1_1a3790b5ab75143c91907de5c50c8ef65a"></a>

bool * GetAcceptTosOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AcceptTos_Optional, if it has been set, otherwise returns nullptr.




### `GetAcceptTosOrNull` <a id="structFRHAPI__LoginRequestV1_1ac37c5bffd50c47a4b8d8af85a08eb613"></a>

const bool * GetAcceptTosOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AcceptTos_Optional, if it has been set, otherwise returns nullptr.




### `SetAcceptTos` <a id="structFRHAPI__LoginRequestV1_1aa1c5d72aead560fe730db4ecb3d69290"></a>

void SetAcceptTos(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of AcceptTos_Optional and also sets AcceptTos_IsSet to true.




### `ClearAcceptTos` <a id="structFRHAPI__LoginRequestV1_1adabb1d08ab991ccc72c1fca427a2de5a"></a>

void ClearAcceptTos()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AcceptTos_Optional and sets AcceptTos_IsSet to false.




### `IsAcceptTosDefaultValue` <a id="structFRHAPI__LoginRequestV1_1a8da59ecd9c57753f3174f98bdc3500f6"></a>

bool IsAcceptTosDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if AcceptTos_Optional is set and matches the default value.




### `SetAcceptTosToDefault` <a id="structFRHAPI__LoginRequestV1_1ae5b328b14a4122950055ff4c7b45a3b6"></a>

void SetAcceptTosToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of AcceptTos_Optional to its default and also sets AcceptTos_IsSet to true.




### `GetAcceptPrivacyPolicy` <a id="structFRHAPI__LoginRequestV1_1a72c49774a7d06305b1e70adf2f9f16b0"></a>

bool & GetAcceptPrivacyPolicy()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AcceptPrivacyPolicy_Optional, regardless of it having been set.




### `GetAcceptPrivacyPolicy` <a id="structFRHAPI__LoginRequestV1_1a5211f25c09278ed8b505def309bd819e"></a>

const bool & GetAcceptPrivacyPolicy()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AcceptPrivacyPolicy_Optional, regardless of it having been set.




### `GetAcceptPrivacyPolicy` <a id="structFRHAPI__LoginRequestV1_1a9c04422a54ce634b6a5b615bfa3425da"></a>

const bool & GetAcceptPrivacyPolicy(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of AcceptPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAcceptPrivacyPolicy` <a id="structFRHAPI__LoginRequestV1_1a6e0492e3cbe4783d21105757d5818ca6"></a>

bool GetAcceptPrivacyPolicy(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of AcceptPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false.




### `GetAcceptPrivacyPolicyOrNull` <a id="structFRHAPI__LoginRequestV1_1a465ac74d30cfd19db80b02c392a17e70"></a>

bool * GetAcceptPrivacyPolicyOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AcceptPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.




### `GetAcceptPrivacyPolicyOrNull` <a id="structFRHAPI__LoginRequestV1_1ac70c479de53ed15e6b2f215e93a22daa"></a>

const bool * GetAcceptPrivacyPolicyOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AcceptPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr.




### `SetAcceptPrivacyPolicy` <a id="structFRHAPI__LoginRequestV1_1a9b846e726e9468dd7026d5ca52c16c88"></a>

void SetAcceptPrivacyPolicy(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of AcceptPrivacyPolicy_Optional and also sets AcceptPrivacyPolicy_IsSet to true.




### `ClearAcceptPrivacyPolicy` <a id="structFRHAPI__LoginRequestV1_1ae6935f79cb6cf3b44b05b88925e457be"></a>

void ClearAcceptPrivacyPolicy()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AcceptPrivacyPolicy_Optional and sets AcceptPrivacyPolicy_IsSet to false.




### `IsAcceptPrivacyPolicyDefaultValue` <a id="structFRHAPI__LoginRequestV1_1ad54685034fe9ad2ab281134c099d2f9e"></a>

bool IsAcceptPrivacyPolicyDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if AcceptPrivacyPolicy_Optional is set and matches the default value.




### `SetAcceptPrivacyPolicyToDefault` <a id="structFRHAPI__LoginRequestV1_1acd55a9f76eddf263489516ccf5bb712d"></a>

void SetAcceptPrivacyPolicyToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of AcceptPrivacyPolicy_Optional to its default and also sets AcceptPrivacyPolicy_IsSet to true.





