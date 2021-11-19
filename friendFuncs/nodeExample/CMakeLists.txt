cmake_minimum_required(VERSION 3.16)

project(nodeExample)

include_directories(include)

add_executable(nodeExample src/main.cpp src/Node.cpp)