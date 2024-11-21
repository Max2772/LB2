
cmake_minimum_required(VERSION 3.5.1)

project(8.5)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=leak")

add_executable(app 85.cpp)
