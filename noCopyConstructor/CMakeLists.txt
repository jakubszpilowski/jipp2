cmake_minimum_required(VERSION 3.16)

project(noCopyConstructor)
include_directories(include)

add_executable(noCopyConstructor src/main.cpp src/Point.cpp)