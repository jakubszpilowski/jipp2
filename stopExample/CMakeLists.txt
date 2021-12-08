cmake_minimum_required(VERSION 3.16)

project(stopExample)

include_directories(include)

add_executable(stopExample src/main.cpp src/Line.cpp src/Stop.cpp)