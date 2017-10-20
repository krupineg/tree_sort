cmake_minimum_required(VERSION 3.8)
project(tree_sort)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")
set(SOURCE_FILES main.cpp node.h tree.h)
add_executable(tree_sort ${SOURCE_FILES})