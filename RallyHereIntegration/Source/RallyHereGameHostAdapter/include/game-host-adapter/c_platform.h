/*
Copyright 2023 RallyHere

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#if defined(_WIN32) || defined(WIN32) || defined(__CYGWIN__) || defined(__MINGW32__) || defined(__BORLANDC__)
#define PLATFORM_WINDOWS 1
#define WIN32_LEAN_AND_MEAN 1
#define BOOST_JSON_NO_LIB 1
#else
#define PLATFORM_LINUX 1
#endif

#ifndef RH_EXPORT
#if PLATFORM_LINUX
    #define RH_EXPORT __attribute__((visibility("default")))
    #define RH_CPP_EXPORT __attribute__((visibility("default")))
#else
    #define RH_EXPORT __declspec(dllexport)
    #define RH_CPP_EXPORT __declspec(dllexport)
#endif
#endif