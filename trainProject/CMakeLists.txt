cmake_minimum_required(VERSION 3.16)

project(trainProject)

add_executable(trainProject src/main.cpp src/Train.cpp src/funkcje.cpp)

target_include_directories(trainProject PUBLIC include)