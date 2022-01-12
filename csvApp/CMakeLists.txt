cmake_minimum_required(VERSION 3.16)

project(csvApp)

include_directories(../csvLib/include)

add_executable(csvApp main.cpp)

target_link_libraries(csvApp csvLib)