cmake_minimum_required(VERSION 3.16)

project(notesApp)

include_directories(include)

add_executable(notesApp src/main.cpp src/Note.cpp src/NoteDirector.cpp)