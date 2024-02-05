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

import org.junit.Test;
import org.openapitools.codegen.ClientOptInput;
import org.openapitools.codegen.DefaultGenerator;
import org.openapitools.codegen.config.CodegenConfigurator;

/***
 * This test allows you to easily launch your code generation software under a debugger.
 * Then run this test under debug mode.  You will be able to step through your java code
 * and then see the results in the out directory.
 *
 * To experiment with debugging your code generator:
 * 1) Set a break point in RhCppUe4Generator.java in the postProcessOperationsWithModels() method.
 * 2) To launch this test in Eclipse: right-click | Debug As | JUnit Test
 *
 */
public class RhCppUe4GeneratorTest {

  // use this test to launch you code generator in the debugger.
  // this allows you to easily set break points in MyclientcodegenGenerator.
   @Test
   public void launchCodeGenerator() {
     // to understand how the 'openapi-generator-cli' module is using 'CodegenConfigurator', have a look at the 'Generate' class:
     // https://github.com/OpenAPITools/openapi-generator/blob/master/modules/openapi-generator-cli/src/main/java/org/openapitools/codegen/cmd/Generate.java
    //  final CodegenConfigurator configurator = new CodegenConfigurator()
    //            .setGeneratorName("rh-cpp-ue4") // use this codegen library
    //            //.setInputSpec("../../../../../../spec/users.yaml") // sample OpenAPI file
    //            .setInputSpec("https://roco-b.api.bawwd.lol/ad/openapi.json") // or from the server
    //            .setOutputDir("out/rh-cpp-ue4"); // output directory

    //  final ClientOptInput clientOptInput = configurator.toClientOptInput();
    //  DefaultGenerator generator = new DefaultGenerator();
    //  generator.opts(clientOptInput).generate();
   }
}