#!/bin/bash

########################################
# We only work with this directory structure
DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
pushd $DIR

OPENAPI_SPEC_LOCATION="https://raw.githubusercontent.com/RallyHereInteractive/openapi-spec-environment/main/environment.openapi.json"
GENERATOR_DIR="$(pwd)/../openapi-generator-rh-cpp-unreal"
OUTPUT_DIR="$(pwd)/Source/RallyHereAPI"
LOCAL_SPEC_FILE="$(pwd)/Source/RallyHereAPI/openapi.json"
ADDITIONAL_PROPERTIES="unrealModuleName=RallyHereAPI,specCppNamespace=RallyHereAPI,unrealCategory=RallyHere,unrealEnumPrefix=ERHAPI_,unrealModelPrefix=FRHAPI_,unrealClassPrefix=URHAPI_"

########################################
# Check params
POSITIONAL_ARGS=()
while [[ $# -gt 0 ]]; do
  case $1 in
    -s|--openapi-spec)
      OPENAPI_SPEC_LOCATION="$2"
      shift # past argument
      shift # past value
      ;;
    -r|--reimport-local-spec)
      OPENAPI_SPEC_LOCATION=$LOCAL_SPEC_FILE
      shift # past argument
      ;;
    -g|--generator-dir)
      GENERATOR_DIR="$2"
      shift # past argument
      shift # past value
      ;;
    -o|--output)
      OUTPUT_DIR="$2"
      shift # past argument
      shift # past value
      ;;
    -p|--properties)
      ADDITIONAL_PROPERTIES="$2"
      shift # past argument
      shift # past value
      ;;
    -*|--*)
      echo "Unknown option $1"
      exit 1
      ;;
    *)
      POSITIONAL_ARGS+=("$1") # save positional arg
      shift # past argument
      ;;
  esac
done
set -- "${POSITIONAL_ARGS[@]}" # restore positional parameters

$GENERATOR_DIR/generate.bash --openapi-spec $OPENAPI_SPEC_LOCATION --output $OUTPUT_DIR --properties $ADDITIONAL_PROPERTIES
popd