cmake_minimum_required(VERSION 3.16)

project(copyExample)

include_directories(include)

add_executable(copyExample src/main.cpp src/Example.cpp)