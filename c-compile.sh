#!/bin/bash

set -ex

mkdir -p enumfoo/target
rm -rf enumfoo/target/*

gcc -c -fPIC -o enumfoo/target/enumfoo.o enumfoo/src/main/c/enumfoo.c
gcc -shared -fPIC -lcurl -oenumfoo/target/libenumfoo.so enumfoo/target/enumfoo.o -lc

LD_LIBRARY_PATH="`pwd`/enumfoo/target:${LD_LIBRARY_PATH}" gcc -o enumfoo/target/hello-enum enumfoo/src/main/c/hello-enum.c enumfoo/target/libenumfoo.so
