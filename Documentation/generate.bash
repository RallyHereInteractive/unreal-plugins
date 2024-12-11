#!/bin/bash

########################################
# We only work with this directory structure
DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
pushd $DIR

doxygen doxygen.cfg

moxygen --groups --html-anchors --templates ./templates --output %s.md xml

rm -rf md/Reference
mkdir md
mkdir md/Reference
mkdir md/Reference/models
mv ./RHAPI_*.md ./md/Reference/models/
mv ./*.md ./md/Reference/

sed -i 's/(RHAPI_/(models\/RHAPI_/' ./md/*.md

popd
