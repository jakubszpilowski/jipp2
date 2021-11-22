cmake_minimum_required(VERSION 3.16)

project(polymorphism)

include_directories(../inheritance/include)

add_executable(polymorphism
        src/main.cpp
        ../inheritance/src/Figure.cpp)