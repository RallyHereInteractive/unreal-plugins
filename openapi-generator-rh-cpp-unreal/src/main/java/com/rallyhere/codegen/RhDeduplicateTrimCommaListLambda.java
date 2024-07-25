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
import java.util.Arrays;
import java.util.List;
import java.util.LinkedList;

import com.samskivert.mustache.Mustache;
import com.samskivert.mustache.Template.Fragment;

/**
 * Takes in a string with a list of comma separated values, removes duplicate entries, trims empty entries, and returns the result
 *
 * Register:
 *
 * <pre>
 * additionalProperties.put("lambdaCommentDescription", new RhDeduplicateCommaListLambda());
 * </pre>
 *
 * Use:
 *
 * <pre>
 * {{#lambdaCommentDescription}}{{unescapedNotes}}{{/lambdaCommentDescription}}
 * </pre>
 */
public class RhDeduplicateTrimCommaListLambda implements Mustache.Lambda {
    public RhDeduplicateTrimCommaListLambda() {
    }

    @Override
    public void execute(Fragment fragment, Writer writer) throws IOException {
        String input = fragment.execute();
        String[] partsArr = input.split(",");
        LinkedList<String> parts = new LinkedList<String>(Arrays.asList(partsArr));
        StringBuilder sb = new StringBuilder();

        // remove any entries that are whitespace only
        for (int y = parts.size() - 1; y >= 0; --y)
        {
            if (parts.get(y).trim().length() == 0)
            {
                parts.remove(y);
            }
        }

        // search for any duplicates entries and remove them
        for (int x = 0; x < parts.size(); ++x)
        {
            for (int y = parts.size() - 1; y > x; --y)
            {
                if (parts.get(x).equals(parts.get(y)))
                {
                    parts.remove(y);
                }
            }
        }

        // rebuild the string in the comma separated format
        for (int x = 0; x < parts.size(); ++x)
        {
            sb.append(parts.get(x));
            if (x < (parts.size() - 1))
                sb.append(",");
        }
        writer.write(sb.toString());
    }

}
