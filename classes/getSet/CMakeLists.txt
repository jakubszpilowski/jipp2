cmake_minimum_required(VERSION 3.16)

project(getSet)

set(CMAKE_CXX_STANDARD)

add_executable(getSet src/main.cpp
        src/Prostokat.cpp
        src/Prostokat.h
        src/Kula.cpp
        src/Kula.h
        src/FunkcjaKwadratowa.cpp
        src/FunkcjaKwadratowa.h src/Student.cpp src/Student.h)