cmake_minimum_required(VERSION 3.16)

project(pointers)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(pointers src/main.cpp src/ptrs.cpp)