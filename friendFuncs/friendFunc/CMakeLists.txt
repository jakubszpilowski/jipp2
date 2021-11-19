cmake_minimum_required(VERSION 3.16)

project(friendFunc)

include_directories(include ../nodeExample/include)

add_executable(friendFunc src/main.cpp src/Triangle.cpp ../nodeExample/src/Node.cpp)