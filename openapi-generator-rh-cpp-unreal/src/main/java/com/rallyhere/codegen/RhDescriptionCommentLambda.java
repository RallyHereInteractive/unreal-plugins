/*
 * Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
 * Copyright 2018 SmartBear Software
 * Copyright 2022-2023 RallyHere Interactive
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.rallyhere.codegen;

import java.io.IOException;
import java.io.Writer;
import java.util.Locale;

import com.samskivert.mustache.Mustache;
import com.samskivert.mustache.Template.Fragment;

/**
 * Splits long fragments into smaller strings and uses a StringBuilder to merge
 * them back.
 *
 * Register:
 *
 * <pre>
 * additionalProperties.put("lambdaCommentDescription", new RhDescriptionCommentLambda());
 * </pre>
 *
 * Use:
 *
 * <pre>
 * {{#lambdaCommentDescription}}{{unescapedNotes}}{{/lambdaCommentDescription}}
 * </pre>
 */
public class RhDescriptionCommentLambda implements Mustache.Lambda {
    public RhDescriptionCommentLambda() {
    }

    @Override
    public void execute(Fragment fragment, Writer writer) throws IOException {
        String input = fragment.execute();
        String[] parts = input.split("\n");
        StringBuilder sb = new StringBuilder();
        for (int x = 0; x < parts.length; ++x)
        {
            sb.append(String.format(" * %s", parts[x]));
            if (x < (parts.length - 1))
                sb.append("\n");
        }
        writer.write(sb.toString());
    }

}
