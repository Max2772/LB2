
cmake_minimum_required(VERSION 3.5.1)

project(8.6)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_C_FLAGS "-fsanitize=thread ${CMAKE_C_FLAGS}")

add_executable(app 86.cpp)
