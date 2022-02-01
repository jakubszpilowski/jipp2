cmake_minimum_required(VERSION 3.16)

project(trainProject)

add_executable(trainProject src/main.cpp src/Train.cpp src/funkcje.cpp include/Towarowy.h include/Drezyna.h include/Stacja.h src/Drezyna.cpp src/Stacja.cpp src/Towarowy.cpp src/Pasazerski.cpp)

target_include_directories(trainProject PUBLIC include)