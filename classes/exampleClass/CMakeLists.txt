cmake_minimum_required(VERSION 3.16)

project(exampleClass)

set(CMAKE_CXX_STANDARD 17)

add_executable(exampleClass
        src/main.cpp
        src/Prostokat.cpp
        src/Prostokat.h
        src/Kula.h
        src/Kula.cpp src/FunkcjaKwadratowa.cpp src/FunkcjaKwadratowa.h src/Student.cpp src/Student.h)