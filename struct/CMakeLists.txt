cmake_minimum_required(VERSION 3.16)

project(struct)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(struct src/main.cpp src/funcs.cpp)