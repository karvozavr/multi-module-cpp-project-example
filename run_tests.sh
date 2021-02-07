#!/bin/bash

set -e

BUILD_DIR=build

echo "Running tests..."
cd ${BASH_SOURCE%/*}/${BUILD_DIR}/test
(exec ./run_tests)
