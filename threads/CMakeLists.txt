cmake_minimum_required(VERSION 3.16)

project(threads)

set(CMAKE_CXX_STANDARD 17)

add_executable(threads main.cpp)

target_link_libraries(threads pthread)