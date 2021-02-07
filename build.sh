#!/bin/bash

set -e

BUILD_DIR=build

if [ "$1" = "--clean" ]
then
  echo "Cleaning build artifacts..."
  rm -rf ${BUILD_DIR}
fi

echo "Building cmake from ${BASH_SOURCE%/*}..."
(exec cmake -S "${BASH_SOURCE%/*}" -B ${BUILD_DIR})

echo "Building using make using build/Makefile..."
(exec make -C ${BUILD_DIR})
