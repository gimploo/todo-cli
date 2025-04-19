#!/bin/bash

cmake -B build -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -DCMAKE_CXX_COMPILER=clang++ &&
cmake --build build &&
./build/todo-cli
