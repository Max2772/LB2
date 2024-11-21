
cmake_minimum_required(VERSION 3.5.1)

project(8.2)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")

add_executable(app 82.cpp)
