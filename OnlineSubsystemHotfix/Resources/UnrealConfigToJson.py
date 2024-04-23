# Copyright 2022-2023 RallyHere Interactive
# SPDX-License-Identifier: Apache-2.0
import sys
import json
import os.path
import configparser
from glob import glob

def main():
    JsonDict = {}

    i = 1
    while i < len(sys.argv):
        FileNames = glob(sys.argv[i]);
        j = 0
        while j < len(FileNames):
            GivenFileName = FileNames[j]
            if os.path.exists(GivenFileName):
                BaseName = os.path.basename(GivenFileName)
                JsonDict[BaseName] = CfgToJson(GivenFileName)
            j+=1
        i+=1

    print(json.dumps(JsonDict))

def CfgToJson(CfgFile):
    print("Processing " + CfgFile)

    cfgparser = configparser.ConfigParser()
    cfgparser.optionxform = GfgOptXForm
    cfgparser.read(CfgFile)
    JsonDict = {}

    for Section in cfgparser.sections():
        SectionDict = {}
        for (name, value) in cfgparser.items(Section):
            SectionDict[name] = value
        JsonDict[Section] = SectionDict

    return JsonDict;

class ArraySuffix:
    arrayKeySuffix = -1
    def __init__(self):
        ArraySuffix.arrayKeySuffix += 1

def GfgOptXForm(option):
    if option.startswith('+') or option.startswith('-') or option.startswith('.') or option.startswith('!'):
        option = option + '_' + str(ArraySuffix().arrayKeySuffix)
    return option


if __name__ == "__main__":
	main()