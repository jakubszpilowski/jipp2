cmake_minimum_required(VERSION 3.16)

project(staticExample)

include_directories(include)

add_executable(staticExample src/main.cpp src/Samochod.cpp)