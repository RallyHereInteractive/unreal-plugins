#!/bin/bash
set -ex

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
pushd "$DIR"

pushd Source/RallyHereGameHostProvider/lib/Linux/
cp $1 .
objcopy --only-keep-debug libgame-host-adapter.so libgame-host-adapter.sym
objcopy --strip-debug libgame-host-adapter.so
objcopy --add-gnu-debuglink=libgame-host-adapter.sym libgame-host-adapter.so
