cmake_minimum_required(VERSION 3.16)

project(array)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(array
        src/main.cpp
        src/arr.cpp)