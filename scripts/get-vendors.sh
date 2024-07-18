#!/usr/bin/env bash
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
CATCH_VERSION=v3.6.0
echo Downloading Catch2 $CATCH_VERSION to "$SCRIPT_DIR/vendor/catch2/include"
(cd "$SCRIPT_DIR/../" && mkdir -p vendor/catch2/include && cd ./vendor/catch2/include && curl -o catch_amalgamated.hpp https://github.com/catchorg/Catch2/releases/download/$CATCH_VERSION/catch_amalgamated.hpp)