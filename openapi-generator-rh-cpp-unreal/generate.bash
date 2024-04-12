#!/bin/bash

########################################
# We only work with this directory structure
DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
pushd $DIR

OPENAPI_SPEC_LOCATION=""
OUTPUT_DIR=""
ADDITIONAL_PROPERTIES=""

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

########################################
# Download openapi-generator-cli
curl https://repo1.maven.org/maven2/org/openapitools/openapi-generator-cli/7.2.0/openapi-generator-cli-7.2.0.jar --create-dirs -o bin/openapi-generator-cli.jar

########################################
# Build the rh-cpp-ue4 generator
rm -rf target
mvn package

# Install the rh-cpp-ue4 generator
java -cp "target/rh-cpp-ue4-openapi-generator-1.0.0.jar;bin/openapi-generator-cli.jar" org.openapitools.codegen.OpenAPIGenerator


########################################
# Download and convert the OpenAPI spec, or copy from local path
if [[ $OPENAPI_SPEC_LOCATION == http* ]]; then
    curl "$OPENAPI_SPEC_LOCATION" -o openapi.json
else
    cp "$OPENAPI_SPEC_LOCATION" openapi.json
fi
jq '.openapi = "3.0.3"' openapi.json > openapi_converted.json
OPENAPI_SPEC_LOCATION="openapi_converted.json"

# Generate the RH-UE4 Client
rm -rf "$OUTPUT_DIR"
java -cp \
    "target/rh-cpp-ue4-openapi-generator-1.0.0.jar:bin/openapi-generator-cli.jar" \
    org.openapitools.codegen.OpenAPIGenerator \
    generate \
    -i "openapi_converted.json" \
    --generator-name="rh-cpp-ue4" \
    --output="$OUTPUT_DIR" \
    --additional-properties="$ADDITIONAL_PROPERTIES"

# Cleanup
rm -f openapi_converted.json
rm -f openapi.json

popd
