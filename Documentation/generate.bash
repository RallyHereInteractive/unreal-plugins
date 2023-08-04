#!/bin/bash

doxygen doxygen.cfg

moxygen --groups --html-anchors --templates ./templates --output %s.md xml

rm -rf md
mkdir md
mkdir md/models
mv ./RHAPI_*.md ./md/models/
mv ./*.md ./md/

sed -i 's/(RHAPI_/(models\/RHAPI_/' ./md/*.md

