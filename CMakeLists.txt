cmake_minimum_required(VERSION 3.15)
project(fizzbuzz_lib)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(lib)

add_subdirectory(src)
include_directories(src)

add_subdirectory(test)