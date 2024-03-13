#!/bin/bash
set -ex

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
pushd "$DIR"

doxygen doxygen.cfg

source=$DIR/xml
dest=$DIR/astromd

pushd ~/Dev/doxygentomd
export PATH=~/Dev/doxygentomd/.venv/bin
poetry run python -m doxygentomd $source $dest --style astro --baseurl=/unreal-plugins/ --map-all-kinds-to-subdir all --map-kind-to-subdir group . --map-kind-to-subdir page . --skip-index --map-kind-startswith-to-subdir group RHAPI models