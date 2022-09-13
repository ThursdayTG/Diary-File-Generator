#!/bin/bash

clang++ \
-O3 -std=c++20 \
-Wall -Wextra -Wpedantic -Wshadow -Werror \
-fcolor-diagnostics \
-lfmt \
"./src/main.cpp" \
"./src/fileOperations.cpp" \
"./src/currentDateTime.cpp" \
-o \
"./diaryFileGenerator"


echo -e "\n\n\n ===== COMPILATION ATTEMPT FINISHED ====="
