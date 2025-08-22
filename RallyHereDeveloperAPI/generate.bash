#!/bin/bash

########################################
# We only work with this directory structure
DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
pushd $DIR

OPENAPI_SPEC_LOCATION="$(pwd)/rally-here-developer-api.json"
GENERATOR_DIR="$(pwd)/../openapi-generator-rh-cpp-unreal"
OUTPUT_DIR="$(pwd)/Source/RallyHereDeveloperAPI"
ADDITIONAL_PROPERTIES="unrealModuleName=RallyHereDeveloperAPI,specCppNamespace=RallyHereDeveloperAPI,unrealCategory=RallyHereDeveloper,modelNamePrefix=Dev,unrealEnumPrefix=ERHAPI_Dev,unrealModelPrefix=FRHAPI_Dev,unrealClassPrefix=URHAPI_Dev,apiGenerationMode=DEV,stripBlueprintCompatibility=true"

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

npx openapi-merge-cli --config rally-here-developer-api-merge.yaml

$GENERATOR_DIR/generate.bash --openapi-spec $OPENAPI_SPEC_LOCATION --output $OUTPUT_DIR --properties $ADDITIONAL_PROPERTIES

#Hack to remove files we don't want to keep that are generated improperly and not needed.
find . -path "*/Source" -exec grep -lr 'TVariant&lt' {} \; | xargs rm -f