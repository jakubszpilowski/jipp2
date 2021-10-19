cmake_minimum_required(VERSION 3.16)

project(functionsOverload)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(functionsOverload
        src/main.cpp
        src/funcs.cpp)