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

echo "Using spec file from $OPENAPI_SPEC_LOCATION"

########################################
# Download openapi-generator-cli
curl https://repo1.maven.org/maven2/org/openapitools/openapi-generator-cli/7.10.0/openapi-generator-cli-7.10.0.jar --create-dirs -o bin/openapi-generator-cli.jar

########################################
# Build the rh-cpp-ue4 generator
rm -rf target
mvn package

# Install the rh-cpp-ue4 generator
java -cp "target/rh-cpp-ue4-openapi-generator-1.0.0.jar;bin/openapi-generator-cli.jar" org.openapitools.codegen.OpenAPIGenerator


########################################
# Download and convert the OpenAPI spec, or copy from local path

# make a temporary directory to work in
TEMP_DIR=temp
rm -rf $TEMP_DIR
mkdir $TEMP_DIR

# download or copy the spec to our working directory
if [[ $OPENAPI_SPEC_LOCATION == http* ]]; then
    curl "$OPENAPI_SPEC_LOCATION" -o $TEMP_DIR/openapi.json
else
    cp "$OPENAPI_SPEC_LOCATION" $TEMP_DIR/openapi.json
fi

# remove the `propertyNames` from 3.1 spec, and set version as 3.0.3
jq '
  walk(
    if type == "object" and has("components") then 
      .components.schemas |= with_entries(
        .value |= walk(
          if type == "object" and has("propertyNames") then 
            del(.propertyNames) 
          else . 
          end
        )
      )
    else . 
    end
  ) | 
  .openapi = "3.0.3"
' $TEMP_DIR/openapi.json > $TEMP_DIR/openapi_converted.json

# Clean the output directory
TEMP_OUTPUT_DIR=$TEMP_DIR/output
rm -rf "$TEMP_OUTPUT_DIR"
mkdir "$TEMP_OUTPUT_DIR"

# Generate the RH-UE4 Client
java -cp \
    "target/rh-cpp-ue4-openapi-generator-1.0.0.jar:bin/openapi-generator-cli.jar" \
    org.openapitools.codegen.OpenAPIGenerator \
    generate \
    -i "$TEMP_DIR/openapi_converted.json" \
    --generator-name="rh-cpp-ue4" \
    --output="$TEMP_OUTPUT_DIR" \
    --additional-properties="$ADDITIONAL_PROPERTIES"

# Move the reference spec files to the output directory
mv $TEMP_DIR/openapi.json "$TEMP_OUTPUT_DIR"
mv $TEMP_DIR/openapi_converted.json "$TEMP_OUTPUT_DIR"

# Copy over and sync the final output directory, and delete extraneous files
rsync -ah "$TEMP_OUTPUT_DIR/" "$OUTPUT_DIR/" --delete

#rm -rf $TEMP_DIR

popd
