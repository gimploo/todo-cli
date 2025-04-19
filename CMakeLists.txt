cmake_minimum_required(VERSION 3.16)
project(todo-cli LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(todo-cli 
    src/main.cpp
    src/TodoManager.cpp
)
