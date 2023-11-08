// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
// Can't be #pragma once because other modules may define PACKAGE_SCOPE

// Intended to be the last include in an exported class definition
// Properly defines some members as "public to the module" vs "private to the consumer/user"

#undef PACKAGE_SCOPE
#ifdef ONLINESUBSYSTEMSTEAMV2_PACKAGE
#define PACKAGE_SCOPE public
#else
#define PACKAGE_SCOPE protected
#endif
