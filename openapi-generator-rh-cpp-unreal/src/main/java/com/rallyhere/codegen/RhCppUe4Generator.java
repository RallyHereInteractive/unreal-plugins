/*
 * Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
 * Copyright 2023-2024 RallyHere Interactive
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.rallyhere.codegen;

import org.openapitools.codegen.*;
import org.openapitools.codegen.languages.AbstractCppCodegen;
import org.openapitools.codegen.utils.ModelUtils;
import io.swagger.v3.oas.models.OpenAPI;
import io.swagger.v3.oas.models.media.ArraySchema;
import io.swagger.v3.oas.models.media.ComposedSchema;
import io.swagger.v3.oas.models.media.Schema;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import java.util.*;
import java.io.File;

import static org.openapitools.codegen.utils.StringUtils.camelize;

public class RhCppUe4Generator extends AbstractCppCodegen {

    private final Logger LOGGER = LoggerFactory.getLogger(RhCppUe4Generator.class);

    // source folder where to write the files
    protected String sourceFolder = "src";
    protected String apiVersion = "1.0.0";
    protected String unrealModuleName = "OpenAPI";
    protected String cppNamespace = "";
    protected String specCppNamespace = "";
    protected String operationIdPrefix = "";
    protected String unrealCategory = "OpenAPI";
    protected String unrealEnumPrefix = "EUBP_";
    protected String unrealModelPrefix = "FUBP_";
	protected String unrealClassPrefix = "UUBP_";
    protected String outputDir = "";
    protected String apiGenerationMode = "";
    protected String stripBlueprintCompatibility = "";
    protected Set<String> pointerClasses = new HashSet<>();
    protected Map<String, String> namespaces = new HashMap<>();
    protected Set<String> systemIncludes = new HashSet<>();
    protected Set<String> prefixedModels = new HashSet<>();
    private Map<String, String> schemaKeyToModelNameCache = new HashMap<>();

    public RhCppUe4Generator() {
        super();

        // set the output folder here
        outputFolder = "generated-code/rh-cpp-ue4";

        /**
         * Template Location.  This is the location which templates will be read from.  The generator
         * will use the resource stream to attempt to read the templates.
         */
        templateDir = "rh-cpp-ue4";

        /*
         * Models. You can write model files using the modelTemplateFiles map.
         * if you want to create one template for file, you can do so here.
         * for multiple files for model, just put another entry in the
         * `modelTemplateFiles` with
         * a different extension
         */
        modelTemplateFiles.put("model-header.mustache", ".h");
        modelTemplateFiles.put("model-source.mustache", ".cpp");

        /*
         * Api classes.  You can write classes for each Api file with the apiTemplateFiles map.
         * as with models, add multiple entries with different extensions for multiple files per
         * class
         */
        apiTemplateFiles.put(
                "api-header.mustache",   // the template to use
                ".h");       // the extension for each file to write

        apiTemplateFiles.put(
                "api-source.mustache",   // the template to use
                ".cpp");       // the extension for each file to write

        addOption("unrealModuleName", "Name of the generated unreal module (optional)", this.unrealModuleName);
        addOption("cppNamespace", "C++ namespace for base (convention: name::space::for::api) (optional)",
                this.cppNamespace);
        addOption("specCppNamespace", "C++ namespace for this spec (convention: name::space::for::api) (optional)",
                this.specCppNamespace);
        addOption("modelNamePrefix", "Prefix to the model names (optional, defaults to unrealModuleName)",
                this.modelNamePrefix);
        addOption("apiNamePrefix", "Prefix to the API name (optional, defaults to empty string)",
                this.apiNamePrefix);
        addOption("operationIdPrefix", "Prefix to each API operation (optional, defaults to empty string)",
                this.operationIdPrefix);
        addOption("unrealCategory", "Name of the Unreal blueprint category (optional)", this.unrealCategory);
        addOption("unrealEnumPrefix", "Prefix to each Unreal blueprint exposed version of enums (optional, defaults to EUBP_)",
                this.unrealEnumPrefix);
        addOption("unrealModelPrefix", "Prefix to each Unreal blueprint exposed version of models (optional, defaults to FUBP_)",
                this.unrealModelPrefix);
		addOption("unrealClassPrefix", "Prefix to each Unreal blueprint exposed version of unreal classes, mostly used for helpers (optional, defaults to UUBP_)",
                this.unrealClassPrefix);
        addOption("outputDir", "Output directory for files within the unreal Public/Private folders", this.outputDir);
        addOption("apiGenerationMode", "Mode switch for handling some generation different (optional, defaults to empty string)", this.apiGenerationMode);
        addOption("stripBlueprintCompatibility", "Mode switch for disabling Bleuprint tags in code gen (optional, defaults to empty string)", this.stripBlueprintCompatibility);
        /**
         * Additional Properties.  These values can be passed to the templates and
         * are available in models, apis, and supporting files
         */
        additionalProperties.put("apiVersion", apiVersion);
        additionalProperties.put("dllapi", unrealModuleName.toUpperCase(Locale.ROOT) + "_API");
        additionalProperties.put("modelNamePrefix", modelNamePrefix);
        additionalProperties.put("apiNamePrefix", apiNamePrefix);
        additionalProperties.put("operationIdPrefix", operationIdPrefix);
        additionalProperties.put("unrealModuleName", unrealModuleName);
        additionalProperties.put("cppNamespace", cppNamespace);
        additionalProperties.put("specCppNamespace", specCppNamespace);
        additionalProperties.put("unrealCategory", unrealCategory);
        additionalProperties.put("apiGenerationMode", apiGenerationMode);
        additionalProperties.put("stripBlueprintCompatibility", stripBlueprintCompatibility);
        additionalProperties.put("lambdaCommentDescription", new RhDescriptionCommentLambda());
        additionalProperties.put("lambdaSplitString", new RhUnrealCppSplitStringLambda());

        /**
         * Language Specific Primitives.  These types will not trigger imports by
         * the client generator
         */
        languageSpecificPrimitives = new HashSet<>(
                Arrays.asList(
                        "bool",
                        "int32",
                        "uint32",
                        "int64",
                        "uint64",
                        "float",
                        "double",
                        "FString",
                        "FDateTime",
                        "FGuid",
                        "TArray",
                        "TArray<uint8>", // For byte arrays
                        "TMap"));

        // Maps C++ types during call to getSchemaType, see DefaultCodegen.getSchemaType
        // and not the types/formats
        // defined in openapi specification "array" is also used explicitly in the
        // generator for containers
        typeMapping.clear();
        typeMapping.put("integer", "int32");
        typeMapping.put("long", "int64");
        typeMapping.put("float", "float");
        typeMapping.put("number", "float");
        typeMapping.put("double", "double");
        typeMapping.put("string", "FString");
        typeMapping.put("byte", "uint8");
        typeMapping.put("binary", "TArray<uint8>");
        typeMapping.put("ByteArray", "TArray<uint8>");
        typeMapping.put("password", "FString");
        typeMapping.put("boolean", "bool");
        typeMapping.put("date", "FDateTime");
        typeMapping.put("Date", "FDateTime");
        typeMapping.put("date-time", "FDateTime");
        typeMapping.put("DateTime", "FDateTime");
        typeMapping.put("array", "TArray");
        typeMapping.put("list", "TArray");
        typeMapping.put("map", "TMap");
        typeMapping.put("set", "TSet");
        typeMapping.put("file", "HttpFileInput");
        typeMapping.put("UUID", "FGuid");
        typeMapping.put("variant", "TVariant");

        importMapping = new HashMap<>();
        importMapping.put("HttpFileInput", "#include \"" + modelNamePrefix + "Helpers.h\"");
        importMapping.put("TSet", "#include \"Containers/Set.h\"");
        importMapping.put("TVariant", "#include \"Misc/TVariant.h\"");

        namespaces = new HashMap<>();
        prefixedModels = new HashSet<>();
    }

    @Override
    public void processOpts() {
        super.processOpts();

        boolean updateSupportingFiles = false;
        if (additionalProperties.containsKey("cppNamespace")) {
            cppNamespace = (String) additionalProperties.get("cppNamespace");
            updateSupportingFiles = true;
        }

        if (additionalProperties.containsKey("specCppNamespace")) {
            specCppNamespace = (String) additionalProperties.get("specCppNamespace");
            if (specCppNamespace.isEmpty() || cppNamespace.isEmpty()) {
                cppNamespace = specCppNamespace;
            }
            else {
                cppNamespace += "::" + specCppNamespace;
            }
        }

        additionalProperties.put("cppNamespaceDeclarations", cppNamespace.split("\\::"));

        if (additionalProperties.containsKey("unrealModuleName")) {
            unrealModuleName = (String) additionalProperties.get("unrealModuleName");
            additionalProperties().put("dllapi", unrealModuleName.toUpperCase(Locale.ROOT) + "_API");
            modelNamePrefix = unrealModuleName;
            updateSupportingFiles = true;
        }

        if (additionalProperties.containsKey("modelNamePrefix")) {
            modelNamePrefix = (String) additionalProperties.get("modelNamePrefix");
            updateSupportingFiles = true;
        }

        if (additionalProperties.containsKey("outputDir")) {
            outputDir = (String) additionalProperties.get("outputDir");
            updateSupportingFiles = true;
        }

        if (additionalProperties.containsKey("apiNamePrefix")) {
            apiNamePrefix = (String) additionalProperties.get("apiNamePrefix");
            updateSupportingFiles = true;
        }

        if (additionalProperties.containsKey("operationIdPrefix")) {
            operationIdPrefix = (String) additionalProperties.get("operationIdPrefix");
            updateSupportingFiles = true;
        }

        if (additionalProperties.containsKey("unrealCategory")) {
            unrealCategory = (String) additionalProperties.get("unrealCategory");
            updateSupportingFiles = true;
        }

        if (additionalProperties.containsKey("unrealEnumPrefix")) {
            unrealEnumPrefix = (String) additionalProperties.get("unrealEnumPrefix");
            updateSupportingFiles = true;
        }

        if (additionalProperties.containsKey("unrealModelPrefix")) {
            unrealModelPrefix = (String) additionalProperties.get("unrealModelPrefix");
            updateSupportingFiles = true;
        }
		
		if (additionalProperties.containsKey("unrealClassPrefix")) {
            unrealClassPrefix = (String) additionalProperties.get("unrealClassPrefix");
            updateSupportingFiles = true;
        }

        if (additionalProperties.containsKey("apiGenerationMode")) {
            apiGenerationMode = (String) additionalProperties.get("apiGenerationMode");
            updateSupportingFiles = true;
        }

        if (additionalProperties.containsKey("stripBlueprintCompatibility")) {
            stripBlueprintCompatibility = (String) additionalProperties.get("stripBlueprintCompatibility");
            additionalProperties.put("isStripBlueprintCompatibility", stripBlueprintCompatibility.equals(""));
            updateSupportingFiles = true;
        }

        languageSpecificPrimitives.add(unrealModelPrefix + "JsonObject");
        languageSpecificPrimitives.add(unrealModelPrefix + "JsonValue");
        typeMapping.put("object", unrealModelPrefix + "JsonObject");
        typeMapping.put("Object", unrealModelPrefix + "JsonObject");
        typeMapping.put("AnyType", unrealModelPrefix + "JsonValue");
        importMapping.put(unrealModelPrefix + "JsonObject", "#include \"" + modelNamePrefix + "Helpers.h\"");
        importMapping.put(unrealModelPrefix + "JsonValue", "#include \"" + modelNamePrefix + "Helpers.h\"");

        /**
         * Supporting Files. You can write single files for the generator with the
         * entire object tree available. If the input file has a suffix of `.mustache`
         * it will be processed by the template engine. Otherwise, it will be copied
         */
        String outputDirWithSeparator = outputDir.isEmpty() ? "" : (outputDir + File.separator);
        String publicOutDir = "Public" + File.separator + outputDirWithSeparator;
        String privateOutDir = "Private" + File.separator + outputDirWithSeparator;
        supportingFiles.add(new SupportingFile("all-api-header.mustache", publicOutDir + unrealModuleName + "All.h"));
        supportingFiles.add(new SupportingFile("all-api-source.mustache", privateOutDir + unrealModuleName + "All.cpp"));
        System.out.println(apiGenerationMode);
        if (apiGenerationMode.equals("DEV"))
        {
            supportingFiles.add(new SupportingFile("dev-auth-context-header.mustache", publicOutDir + unrealModuleName + "AuthContext.h"));
            supportingFiles.add(new SupportingFile("dev-auth-context-source.mustache", privateOutDir + unrealModuleName + "AuthContext.cpp"));
        }
        else
        {
            supportingFiles.add(new SupportingFile("auth-context-header.mustache", publicOutDir + unrealModuleName + "AuthContext.h"));
            supportingFiles.add(new SupportingFile("auth-context-source.mustache", privateOutDir + unrealModuleName + "AuthContext.cpp"));
        }
        supportingFiles.add(new SupportingFile("Build.cs.mustache", unrealModuleName + ".Build.cs"));
        supportingFiles.add(new SupportingFile("helpers-header.mustache", publicOutDir + unrealModuleName + "Helpers.h"));
        supportingFiles.add(new SupportingFile("helpers-source.mustache", privateOutDir + unrealModuleName + "Helpers.cpp"));
        supportingFiles.add(new SupportingFile("model-base-header.mustache", publicOutDir + unrealModuleName + "BaseModel.h"));
        supportingFiles.add(new SupportingFile("model-base-source.mustache", privateOutDir + unrealModuleName + "BaseModel.cpp"));
        supportingFiles.add(new SupportingFile("module-header.mustache", publicOutDir + unrealModuleName + "Module.h"));
        supportingFiles.add(new SupportingFile("module-source.mustache", privateOutDir + unrealModuleName + "Module.cpp"));
        supportingFiles.add(new SupportingFile("http-requester-header.mustache", publicOutDir + unrealModuleName + "HttpRequester.h"));
        supportingFiles.add(new SupportingFile("http-requester-source.mustache", privateOutDir + unrealModuleName + "HttpRequester.cpp"));
    }

    /**
     * Configures the type of generator.
     *
     * @return the CodegenType for this generator
     * @see org.openapitools.codegen.CodegenType
     */
    @Override
    public CodegenType getTag() {
        return CodegenType.CLIENT;
    }

    /**
     * Configures a friendly name for the generator. This will be used by the
     * generator
     * to select the library with the -g flag.
     *
     * @return the friendly name for the generator
     */
    @Override
    public String getName() {
        return "rh-cpp-ue4";
    }

    /**
     * Returns human-friendly help for the generator. Provide the consumer with help
     * tips, parameters here
     *
     * @return A string value for the help message
     */
    public String getHelp() {
        return "Generates files to include in the RallyHereAPI UE4 library.";
    }

    @Override
    public String toModelImport(String name) {
        if (namespaces.containsKey(name)) {
            return "using " + namespaces.get(name) + ";";
        } else if (systemIncludes.contains(name)) {
            return "#include <" + name + ">";
        } else if (name.contains("TVariant"))
        {
            return "#include \"Misc/TVariant.h\"";
        }


        String folder = outputDir;
        if (!folder.isEmpty())
            folder += File.separator;

        String filename = name.substring(1);
        if (name.startsWith(unrealEnumPrefix)) {
            filename = name.substring(unrealEnumPrefix.length());
        } else if (name.startsWith(unrealModelPrefix)) {
            filename = name.substring(unrealModelPrefix.length());
        }

        return "#include \"" + folder + this.modelNamePrefix + filename + ".h\"";
    }

    @Override
    protected boolean needToImport(String type) {
        boolean shouldImport = super.needToImport(type);
        if (shouldImport)
            return !languageSpecificPrimitives.contains(type);
        else
            return false;
    }

    /**
     * Escapes a reserved word as defined in the `reservedWords` array. Handle
     * escaping
     * those terms here. This logic is only called if a variable matches the
     * reserved words
     *
     * @return the escaped term
     */
    @Override
    public String escapeReservedWord(String name) {
        if (this.reservedWordsMappings().containsKey(name)) {
            return this.reservedWordsMappings().get(name);
        }
        return "_" + name;
    }

    /**
     * Location to write model files.
     * instantiated
     */
    public String modelFileFolder() {
        return outputFolder;
    }

    @Override
    public String modelFilename(String templateName, String modelName) {
        String suffix = modelTemplateFiles().get(templateName);
        String folder = ".h".equals(suffix) ? "Public" : "Private";
        return modelFileFolder() + File.separator + folder + File.separator + (outputDir.isEmpty() ? ""
                : (outputDir + File.separator)) + toModelFilename(modelName) + suffix;
    }

    @Override
    public String toModelFilename(String name) {
        name = sanitizeName(name);
        return this.modelNamePrefix + toUnrealName(camelize(name));
    }

    @Override
    public String toOperationId(String operationId) {
        if (this.operationIdPrefix.isEmpty())
        {
            return operationId;
        }
        return this.operationIdPrefix + camelize(operationId);
    }

    /**
     * Optional - type declaration. This is a String which is used by the templates
     * to instantiate your
     * types. There is typically special handling for different property types
     *
     * @return a string value used as the `dataType` field for model templates,
     *         `returnType` for api templates
     */
    @Override
    public String getTypeDeclaration(Schema p) {
        String openAPIType = getSchemaType(p);

        if (ModelUtils.isArraySchema(p)) {
            ArraySchema ap = (ArraySchema) p;
            return openAPIType + "<" + getTypeDeclaration(ap.getItems()) + ">";
        } else if (ModelUtils.isMapSchema(p)) {
            Schema props = getAdditionalProperties(p);
            return openAPIType + "<FString, " + getTypeDeclaration(props) + ">";
        } else if (ModelUtils.isComposedSchema(p)) {
            ComposedSchema cs = (ComposedSchema)p;
            if (cs.getAllOf() != null && ModelUtils.getInterfaces(cs).size() == 1) {
                return super.getSchemaType(p);
            }
            else if (cs.getAnyOf() != null && apiGenerationMode.equals("DEV"))
            {
                List<Schema> list = cs.getAnyOf();
                String Types = "";
                for (int i = 0; i < list.size(); i++)
                {
                    Types += getTypeDeclaration(list.get(i));
                    if (i + 1 < list.size())
                    {
                        Types += ", ";
                    }
                }
                return openAPIType + "<" + Types + ">";
            }
        }

        if (pointerClasses.contains(openAPIType)) {
            return openAPIType + "*";
        } else if (languageSpecificPrimitives.contains(openAPIType)) {
            return toModelName(openAPIType);
        }

        return openAPIType;
    }

    @Override
    public String getTypeDeclaration(String name) {
        return name;
    }

    @Override
    public String toDefaultValue(Schema p) {
        if (ModelUtils.isUUIDSchema(p)) {
            if (p.getDefault() != null) {
                return "FGuid(TEXT(\"" + p.getDefault().toString() + "\"))";
            } else {
                return null;
            }
        } else if (ModelUtils.isStringSchema(p)) {
            if (p.getDefault() != null) {
                return "TEXT(\"" + p.getDefault().toString() + "\")";
            } else {
                return null;
            }
        } else if (ModelUtils.isBooleanSchema(p)) {
            if (p.getDefault() != null) {
                return p.getDefault().toString();
            } else {
                return "false";
            }
        } else if (ModelUtils.isDateSchema(p)) {
            return "FDateTime(0)";
        } else if (ModelUtils.isDateTimeSchema(p)) {
            return "FDateTime(0)";
        } else if (ModelUtils.isDoubleSchema(p)) {
            if (p.getDefault() != null) {
                return p.getDefault().toString();
            } else {
                return "0.0";
            }
        } else if (ModelUtils.isFloatSchema(p)) {
            if (p.getDefault() != null) {
                return p.getDefault().toString();
            } else {
                return "0.0f";
            }
        } else if (ModelUtils.isIntegerSchema(p)) {
            if (p.getDefault() != null) {
                return p.getDefault().toString();
            } else {
                return "0";
            }
        } else if (ModelUtils.isLongSchema(p)) {
            if (p.getDefault() != null) {
                return p.getDefault().toString();
            } else {
                return "0";
            }
        }

        return null;
    }

    /**
     * Optional - OpenAPI type conversion. This is used to map OpenAPI types in a
     * `Property` into
     * either language specific types via `typeMapping` or into complex models if
     * there is not a mapping.
     *
     * @return a string value of the type or complex model for this property
     * @see io.swagger.v3.oas.models.media.Schema
     */
    @Override
    public String getSchemaType(Schema p) {
        String openAPIType = super.getSchemaType(p);

        if (apiGenerationMode.equals("DEV"))
        {
            if (p instanceof ComposedSchema) {
                ComposedSchema cs = (ComposedSchema)p;

                if (cs.getAnyOf() != null) { // anyOf
                    List<Schema> schemas = ModelUtils.getInterfaces(cs);
                    List<String> names = new ArrayList<>();
                    for (Schema s : schemas) {
                        names.add(getSingleSchemaType(s));
                    }
                     return "TVariant<" + String.join(",", names) + ">";
                }
            }
        }

        Schema referencedSchema = ModelUtils.getReferencedSchema(this.openAPI, p);
        if (referencedSchema.getEnum() != null && !referencedSchema.getEnum().isEmpty()) {
            String modelName = toModelName(openAPIType);
            prefixedModels.add(modelName);
            return modelName;
        }

        if (p instanceof ComposedSchema) {
            ComposedSchema cs = (ComposedSchema)p;
            if (cs.getAllOf() != null) {
                if (ModelUtils.getInterfaces(cs).size() != 1) {
                    openAPIType = "object";
                }
            } else if (cs.getAnyOf() != null) { // anyOf
                openAPIType = "object";
            } else if (cs.getOneOf() != null) { // oneOf
                if (ModelUtils.getInterfaces(cs).size() != 1) {
                    openAPIType = "object";
                }
            } else {
                openAPIType = "object";
            }
        }

        String type = null;
        if (typeMapping.containsKey(openAPIType)) {
            type = typeMapping.get(openAPIType);
            if (languageSpecificPrimitives.contains(type)) {
                return toModelName(type);
            }
            if (pointerClasses.contains(type)) {
                return type;
            }
            return toModelName(type);
        }

        String modelName = toModelName(openAPIType);
        prefixedModels.add(modelName);
        return modelName;
    }

    @Override
    public String toModelName(String type) {
        String camelizedType = camelize(type);
        if (schemaKeyToModelNameCache.containsKey(camelizedType)) {
            return schemaKeyToModelNameCache.get(camelizedType);
        }

        String resultName;
        if (typeMapping.keySet().contains(type) ||
                typeMapping.values().contains(type) ||
                importMapping.values().contains(type) ||
                defaultIncludes.contains(type) ||
                languageSpecificPrimitives.contains(type)) {
            resultName = type;
        }
        else {
            Map<String, Schema> schemas = ModelUtils.getSchemas(this.openAPI);
            Schema schema = null;
            for (Map.Entry<String, Schema> entry : schemas.entrySet()) {
                if (entry.getKey().toLowerCase().equals(type.toLowerCase())) {
                    schema = entry.getValue();
                    break;
                }
            }

            String finalType = camelizedType;
            if (schema != null && schema instanceof ComposedSchema) {
                ComposedSchema cs = (ComposedSchema)schema;
                if (cs.getAllOf() != null && ModelUtils.getInterfaces(cs).size() == 1) {
                    finalType = super.getSchemaType(schema);
                }
                else if (cs.getAnyOf() != null && apiGenerationMode.equals("DEV")) {
                    resultName = "TVariant";
                    List<Schema> list = cs.getAnyOf();
                    String Types = "";
                    for (int i = 0; i < list.size(); i++)
                    {
                        Types += getTypeDeclaration(list.get(i));
                        if (i + 1 < list.size())
                        {
                            Types += ", ";
                        }
                    }
                    resultName += "<" + Types + ">";
                    return resultName;
                }
            }

            String partialName = sanitizeName(camelize(finalType));
            if (schema != null && schema.getEnum() != null && !schema.getEnum().isEmpty()) {
                resultName = unrealEnumPrefix + partialName;
            } else {
                resultName = unrealModelPrefix + partialName;
            }

            prefixedModels.add(resultName);
        }

        schemaKeyToModelNameCache.put(camelizedType, resultName);
        return resultName;
    }

    protected String toUnrealName(String name) {
        if (schemaKeyToModelNameCache.containsKey(name)) {
            name = schemaKeyToModelNameCache.get(name);
        }

        if (prefixedModels.contains(name)) {
            if (name.startsWith(unrealEnumPrefix)) {
                name = name.substring(unrealEnumPrefix.length());
            } else if (name.startsWith(unrealModelPrefix)) {
                name = name.substring(unrealModelPrefix.length());
            } else {
                name = name.substring(1);
            }
        }

        // sanitize name
        name = sanitizeName(name); // FIXME: a parameter should not be assigned. Also declare the methods
                                   // parameters as 'final'.

        // if it's all upper case, convert to lower case
        if (name.matches("^[A-Z_]*$")) {
            name = name.toLowerCase(Locale.ROOT);
        }

        // Unreal variable names are CamelCase
        String camelCaseName = camelize(name);

        // Avoid empty variable name at all costs
        if (!camelCaseName.isEmpty()) {
            name = camelCaseName;
        }

        // for reserved word or word starting with number, append _
        if (isReservedWord(name) || name.matches("^\\d.*")) {
            name = escapeReservedWord(name);
        }

        return name;
    }

    @Override
    public String toVarName(String name) {
        return toUnrealName(name);
    }

    @Override
    public String toEnumVarName(String name, String datatype) {
        return toUnrealName(name);
    }

    @Override
    protected void updateEnumVarsWithExtensions(List<Map<String, Object>> enumVars, Map<String, Object> vendorExtensions, String dataType) {
        super.updateEnumVarsWithExtensions(enumVars, vendorExtensions, dataType);
        enumVars.forEach(enumVar -> enumVar.put("name", toEnumVarName((String) enumVar.get("name"), dataType)));
    }

    @Override
    public String toParamName(String name) {
        return toUnrealName(name);
    }

    @Override
    public String toApiName(String type) {
        return "F" + camelize(type) + "API";
    }

    @Override
    public String toApiFilename(String name) {
        return camelize(name) + "API";
    }

    @Override
    public String apiFilename(String templateName, String tag)
    {
        String suffix = apiTemplateFiles().get(templateName);
        String folder = ".h".equals(suffix) ? "Public" : "Private";
        return outputFolder + File.separator + folder + File.separator + (outputDir.isEmpty() ? ""
                : (outputDir + File.separator)) + toApiFilename(tag) + suffix;
    }

    @Override
    public String toApiImport(String name) {
        return "#include \"" + toApiFilename(name) + ".h\"";
    }

    /**
     * Escape single and/or double quote to avoid code injection
     *
     * @param input String to be cleaned up
     * @return string with quotation mark removed or escaped
     */
    @Override
    public String escapeQuotationMark(String input) {
        // remove " to avoid code injection
        return input.replace("\"", "");
    }

    /**
     * override with any special text escaping logic to handle unsafe
     * characters so as to avoid code injection
     *
     * @param input String to be cleaned up
     * @return string with unsafe characters removed or escaped
     */
    @Override
    public String escapeUnsafeCharacters(String input) {
        return input.replace("*/", "*_/").replace("/*", "/_*");
    }

    @Override
    public String toBooleanGetter(String name) {
        return "Is" + getterAndSetterCapitalize(name);
    }

    @Override
    public String toGetter(String name) {
        return "Get" + getterAndSetterCapitalize(name);
    }

    @Override
    public String toSetter(String name) {
        return "Set" + getterAndSetterCapitalize(name);
    }

    @Override
    public CodegenProperty fromProperty(String name, Schema p, boolean required) {
        CodegenProperty property = super.fromProperty(name, p, required);

        // When property is 'allOf' with only 1 sub schema, default fromProperty uses the sub schema for all the properties. This causes us to lose the descriptions
        // As far as I can tell, it only effects enumRef properties, so could just check for property.isEnumRef, but matching their conditional for consistency
        // For default handling, see https://github.com/OpenAPITools/openapi-generator/blob/ff9b38404eb516d46adf104d8e68e4559d9d90ae/modules/openapi-generator/src/main/java/org/openapitools/codegen/DefaultCodegen.java#LL3799C10-L3799C10
        if (ModelUtils.isAllOf(p) && p.getAllOf().size() == 1)
        {
            property.description = escapeText(p.getDescription());
            property.unescapedDescription = p.getDescription();
        }
        return property;
    }

	@Override
	public void processOpenAPI(OpenAPI openAPI) {
		super.processOpenAPI(openAPI);

		Map<String, Schema> schemas = ModelUtils.getSchemas(openAPI);
		List<String> schemasToRemove = new ArrayList<>();
		for (Map.Entry<String, Schema> entry : schemas.entrySet()) {
			Schema schema = entry.getValue();
			if (schema != null && schema instanceof ComposedSchema) {
				ComposedSchema cs = (ComposedSchema)schema;
				if (cs.getAllOf() != null && ModelUtils.getInterfaces(cs).size() == 1) {
					String unrealName = toUnrealName(toModelName(entry.getKey()));
					if (!unrealName.equals(entry.getKey()) && schemas.containsKey(unrealName)) {
						schemasToRemove.add(entry.getKey());
					}
				}
			}
		}

		for (String schemaToRemove : schemasToRemove) {
			schemas.remove(schemaToRemove);
		}

		openAPI.getComponents().setSchemas(schemas);
	}
}

