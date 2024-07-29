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
#ifndef GAME_HOST_ADAPTER_INTERFACE_RH_ALLOCATOR_H
#define GAME_HOST_ADAPTER_INTERFACE_RH_ALLOCATOR_H


namespace rallyhere {
    namespace allocator {
        template<class T, typename... Params>
        T* create(Params&&... params) {
            return ::new T(std::forward<Params>(params)...);
        }

        template<class T>
        void destroy(T* ptr) {
            ::delete ptr;
        }

        template<typename T>
        using allocator = std::allocator<T>;
    }
}

#endif //GAME_HOST_ADAPTER_INTERFACE_RH_ALLOCATOR_H
