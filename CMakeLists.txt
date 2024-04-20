cmake_minimum_required(VERSION 3.24)

project(
    lib2Dalgebra
    VERSION 0.1
    DESCRIPTION "Basic library for 2D algebra"
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(CTest)

add_subdirectory(lib)
add_subdirectory(tests)
