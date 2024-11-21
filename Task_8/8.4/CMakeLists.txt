
cmake_minimum_required(VERSION 3.5.1)

project(8.4)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=address")

add_executable(app 84.cpp)
