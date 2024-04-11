@echo off
ubuntu run dos2unix generate.bash; dos2unix ../openapi-generator-rh-cpp-unreal/*.bash; ./generate.bash %*